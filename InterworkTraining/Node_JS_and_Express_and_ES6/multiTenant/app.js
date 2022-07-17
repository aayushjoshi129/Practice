const express = require('express');
const app = express();
var bcrypt = require("bcryptjs");
const { MongoClient } = require('mongodb');
const bodyParser = require("body-parser");

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.text());

const uri = "mongodb://localhost:27017";


const client = new MongoClient(uri);

app.get('/', (req, res) => {
    res.send("Hello World");
})


app.get("/find", (req, res) => {
    var domain = "aayush@gmail.com".split(/[@,.]/);
    // var finalDomain = domain[1].split(".");
    // console.log(finalDomain[0]);
    console.log(domain);
    res.send(domain[1])
})

app.post('/signupSuperAdmin', async (req, res) => {
    await client.connect();
    console.log("################### In signupSuperAdmin route ####################");
    // logger.info(
    //     "################### In signupSuperAdmin route ####################"
    // );
    console.log(req.body);
    var signUpForm = req.body;
    // logger.info(JSON.stringify(signUpForm));
    console.log(signUpForm);
    var userID = getUserID();
    // var token = jwt.sign({ email: signUpForm.email }, process.env.SECRET, {
    //     expiresIn: 86400, // expires in 24 hrs
    // });
    // logger.info(JSON.stringify(userID));


    // var domain = signUpForm.email.substring(signUpForm.email.lastIndexOf("@") +1);
    // console.log(domain);
    var domain = signUpForm.email.split(/[@,.]/);

    // var domain = signUpForm.email.split("@");
    // var finalDomain = domain[1].split(".");
    // console.log(finalDomain[0]);
    let tenantObj = {
        "tenantId": domain[1] + "-001",
        "tenantName": domain[1],
    }

    var tenantCreated = await client.db("MIS_OLD").collection("tenant").insertOne(tenantObj);
    
    // .then((status)=>{

    // })

    // tenantCreated.then((status)=>{

    // })


    if (tenantCreated.insertedId) {
        var tenantId = await client.db("MIS_OLD").collection("tenant").findOne({ _id:tenantCreated.insertedId });
        console.log(tenantId);
    }

    var userObj = {
        businessName: signUpForm.businessName,
        email: signUpForm.email,
        address1: signUpForm.address1,
        address2: signUpForm.address2,
        country: signUpForm.country,
        state: signUpForm.state,
        city: signUpForm.city,
        zipcode: signUpForm.zipcode,
        gstin: signUpForm.gstin,
        gstinPath: "",
        pan: signUpForm.pan,
        busiessContactNo: signUpForm.businessContactNo,
        fName: signUpForm.fName,
        lName: signUpForm.lName,
        fullName: signUpForm.fName + " " + signUpForm.lName,
        mobileNo: signUpForm.mobileNo ? signUpForm.mobileNo : "N/A",
        password: bcrypt.hashSync(signUpForm.password, 10),
        disable: signUpForm.disable,
        status: "Active",
        role: signUpForm.role,
        userID: userID,
        adminID: signUpForm.adminID,
        verified: false,
        tenantId: tenantId.tenantId
    };

    console.log(userID);

    // Checking database if the user already exists else insert
    client.db("MIS_OLD").collection("user").findOne(
        { email: signUpForm.email },
        (err, user) => {
            if (user) {
                res.status(200).send({
                    success: false,
                    message: `Already Signed Up ${user.role}.`,
                });
            } else {
                client.db("MIS_OLD").collection("user").insertOne(
                    userObj,
                    (err, result) => {
                        // logger.info(result.insertedId.toString());
                        console.log(result.insertedId);
                        if (err) {
                            // return logger.error(err);
                            return console.log(err);
                        }
                        res.status(200).send({
                            success: true,
                            message: `Succesfuly Signed Up ${signUpForm.businessName} for ${signUpForm.role} Role`,
                        });
                    }
                );
            }
        }
    );
});


getUserID = (req, res) => {
    let now = Date.now().toString(); // '1492341545873'
    now += now + Math.floor(Math.random() * 10);
    var length = now.length;
    return [now.slice(0, 13), now.slice(length - 2, length)].join("");
};


app.listen(5000)