// NodeMailer used to send Emails 
var express = require("express")
var app = express();
var { engine } = require('express-handlebars');
var { transporter } = require("./mailerConfig")
const config = require('./config.json');

// Send out Mails
var mailOptions = {
    from: "aayushjoshi129@gmail.com",
    to: "enrique@mailinator.com",
    subject: "Test Mail from mongoDB Express Project",
    // text:"Welcome to the Joshi Project of mongoDB and Express",
    html: ({ path: `./views/` })
}

const resetMailOptionsHtmlPath = () => {
    mailOptions.html.path = './views/';
}

// app.set("view engine","hbs");


app.engine('handlebars', engine());
app.set('view engine', 'handlebars');

app.use(express.static('assets'))

app.get('/', (req, res) => {
    console.log("Rendered...");
    // console.log(req.path);
    res.render('index3');
});

// app.get("/",(req,res)=>{
//     // res.send("Hello ")
//     res.render("index.handlebars",{
//         userName:"Aayush"
//     })
// });

app.get("/sendindex1", (req, res) => {
    res.send("You are Sending Email Index1 While Loading this Page \nSending......")
    mailOptions.html.path = (config.path + "index.handlebars");
    transporter.sendMail(mailOptions, (err, info) => {
        if (err) {
            console.log(err);
        }
        else {
            console.log("Email Successfully Sent " + info.response);
        }
    })
    resetMailOptionsHtmlPath();
})


app.get("/sendindex2", (req, res) => {
    res.send("You are Sending Email Index2 While Loading this Page \nSending......")
    mailOptions.html.path = (mailOptions.html.path + "index2.handlebars");
    transporter.sendMail(mailOptions, (err, info) => {
        if (err) {
            console.log(err);
        }
        else {
            console.log("Email Successfully Sent " + info.response);
        }
    })
    resetMailOptionsHtmlPath();

})

app.get("/sendindex3", (req, res) => {
    res.send("You are Sending Email Index3 While Loading this Page \nSending......")
    mailOptions.html.path = (mailOptions.html.path + "index3.handlebars");
    transporter.sendMail(mailOptions, (err, info) => {
        if (err) {
            console.log(err);
        }
        else {
            console.log("Email Successfully Sent " + info.response);
        }
    })
    resetMailOptionsHtmlPath();
})

app.get("/sendindex4", (req, res) => {
    res.send("You are Sending Email Index4 While Loading this Page \nSending......")
    mailOptions.html.path = (mailOptions.html.path + "index4.handlebars");
    transporter.sendMail(mailOptions, (err, info) => {
        if (err) {
            console.log(err);
        }
        else {
            console.log("Email Successfully Sent " + info.response);
        }
    })
    resetMailOptionsHtmlPath();
})



app.listen(4000);