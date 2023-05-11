const express = require('express');
const router = express.Router();
var bcrypt = require('bcryptjs');
const jwt = require('jsonwebtoken');
const authenticate = require('../middleware/authenticate')

require("../db/conn")

const User = require("../model/userSchema")

router.get('/', (req, res) => {
    res.send('Hello World From Route.js');
}
);

// router.post('/register', (req, res) => {
//     console.log(req.body);
//     const obj = {
//         "name":req.body.name,
//         "email":req.body.email,
//         "phone":req.body.phone,
//         "work":req.body.work,
//         "password":req.body.password,
//         "cpassword":req.body.cpassword,
//         "date":Date.now()
//     }
//     res.json({message: obj});
// }
// );


// router.post('/register', (req, res) => {
//     const {name,email,phone,work,password,cpassword} = req.body;
//     // console.log(name,email);
//     if (!name || !email || !phone || !work || !password || !cpassword) {
//         var jsonData = req.body;
//             var objs = []
//             for(var i in jsonData){
//                 if (jsonData[i]=='' || jsonData[i]==null){
//                  objs.push(i)   
//                 }
//         }
//         console.log(objs);

//         return res.status(422).json({error: `fill ${objs} properly`})

//         // if(!name){
//         //     return res.json({error: `fill Name properly`})
//         // }
//         // if(!email){
//         //     return res.json({error: `fill email properly`})
//         //     }
//         // if(!phone){
//         //     return res.json({error: `fill phone properly`})
//         //     }
//         // if(!work){
//         //     return res.json({error: `fill work properly`})
//         //     }
//         // if(!password){
//         //     return res.json({error: `fill password properly`})
//         //     }
//         // if(!cpassword){
//         //     return res.json({error: `fill cpassword properly`})
//         //     }
//     }
//     else{
//         res.json({message: req.body});
//     }

// }
// );




// REGISTER USING PROMISES

// router.post('/registers', (req, res) => {
//     const { name, email, phone, work, password, cpassword } = req.body;
//     if (!name || !email || !phone || !work || !password || !cpassword) {
//         var jsonData = req.body;
//         var objs = []
//         for (var i in jsonData) {
//             if (jsonData[i] == '' || jsonData[i] == null) {
//                 objs.push(i)
//             }
//         }
//         console.log(objs);

//         return res.status(422).json({ error: `fill ${objs} properly` })
//     }

//     User.findOne({ email: email }).then((userExist) => {
//         if (userExist) {
//             return res.status(422).json({ error: `Email Already Registered` })
//         }

//         const obj = {
//             "name": req.body.name,
//             "email": req.body.email,
//             "phone": req.body.phone,
//             "work": req.body.work,
//             "password": req.body.password,
//             "cpassword": req.body.cpassword,
//         }
//         const newUser = new User(obj);

//         newUser.save().then(() => {
//             res.status(201).json({ message: "You've Registered Successfully" });
//         }).catch((err => {
//             res.status(500).json({ message: "Failed to Register" });
//         }))
//         }).catch(err => {
//             console.log(err);
//             });
//     });



// REGISTER USING ASYNC AWAIT
router.post('/register', async (req, res) => {
    const { name, email, phone, work, password, cpassword } = req.body;
    console.log(req.body);
    if (!name || !email || !phone || !work || !password || !cpassword) {
        var jsonData = req.body;
        var objs = []
        for (var i in jsonData) {
            if (jsonData[i] == '' || jsonData[i] == null) {
                objs.push(i)
            }
        }
        console.log(`${objs} not present`);

        return res.status(422).json({ error: `fill ${objs} properly` })
    }

    try {
        const userExist = await User.findOne({ email: email });

        if (userExist) {
            return res.status(422).json({ error: `Email Already Registered` });
        }
        else if (password != cpassword) {
            return res.status(422).json({ error: `Password and Confirm Password field is not matching` });
        }
        else {
            const obj = {
                "name": req.body.name,
                "email": req.body.email,
                "phone": req.body.phone,
                "work": req.body.work,
                "password": req.body.password,
                "cpassword": req.body.cpassword,
            }

            const newUser = new User(obj);

            await newUser.save();

            res.status(201).json({ message: `Hey ${obj.name}, You've registered Successfully` });
        }

    }

    catch (err) {
        console.log(err);
    }

});



// LOGIN USING ASYNC AWAIT

router.post('/login', async (req, res) => {
    const { email, password } = req.body;
    if (!email || !password) {
        var jsonData = req.body;
        var objs = []
        for (var i in jsonData) {
            if (jsonData[i] == '' || jsonData[i] == null) {
                objs.push(i)
            }
        }
        console.log(objs);

        return res.status(422).json({ error: `fill ${objs} properly` })
    }

    try {
        const userExist = await User.findOne({ email: email });

        if (userExist) {
            const isVerified = await bcrypt.compare(password, userExist.password);
            const token = await userExist.generateAuthToken();
            // console.log(isVerified);
            // console.log(token);

            res.cookie("jwtoken", token, {
                expires: new Date(Date.now() + 25892000000),
                httpOnly: true,
                secure: false
            });


            if (!isVerified) {
                res.status(401).json({ error: `Hey ${userExist.name}, You've Entered Wrong Password` });
            }
            else {
                res.status(201).json({ message: `Hey ${userExist.name}, You've Logged In Successfully` });
            }
        }
        else {
            return res.status(422).json({ error: `user not registered! Kindly register yourself` });
        }
        // console.log(userExist);
    }

    catch (err) {
        console.log(err);
    }

});

// About Us Page
router.get('/about', authenticate, (req, res) => {
    console.log("Hello from About Us Page");
    res.send(req.rootUser);
});

// GetData Page
router.get('/getData', authenticate, (req, res) => {
    console.log("Hello from getData Page");
    res.send(req.rootUser);
});


// ContactUs Page
router.post('/contact', authenticate, async (req, res) => {
    const { name, email, phone, subject, message } = req.body;
    console.log(req.body);
    if (!name || !email || !phone || !subject || !message) {
        var jsonData = req.body;
        var objs = []
        for (var i in jsonData) {
            if (jsonData[i] == '' || jsonData[i] == null) {
                objs.push(i)
            }
        }
        console.log(`${objs} not present`);

        return res.status(422).json({ error: `fill ${objs} properly` })
    }
    try {
        const userContact = await User.findOne({ _id: req.userID });

        const obj = {
            "name": req.body.name,
            "email": req.body.email,
            "phone": req.body.phone,
            "subject": req.body.subject,
            "message": req.body.message,
        }

        if (userContact) {
            // return res.status(422).json({ error: `Email Already Registered` });
            const userMessage = await userContact.addMessages(obj);
            await userContact.save();
            res.status(201).json({ message: `Hey ${name}, You've shared your message` });
        }
        else {
            res.status(201).json({ message: `Hey,${userContact} User does not exists` });
        }
    }
    catch (err) {
        console.log(err);
    }
});


// Logout Page
router.get('/logout', authenticate, (req, res) => {
    console.log("Hello from Logout Us Page");
    res.clearCookie('jwtoken',path='/')
    res.status.apply(200).send("You've Logged Out Successfully");
});

module.exports = router;
