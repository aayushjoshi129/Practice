
// NodeMailer used to send Emails 
var nodemailer = require('nodemailer');
var transport = nodemailer.createTransport({
    service:"gmail",
    auth:{
        user:"aayushjoshi129@gmail.com",
        pass:"yourPassword"
    }
})


// Send out Mails
var mailOptions = {
    from:"aayushjoshi129@gmail.com",
    to:"aayushj331@gmail.com",
    subject:"Test Mail from mongoDB Express Project",
    text:"Welcome to the Joshi Project of mongoDB and Express"
}

transport.sendMail(mailOptions,(err,info)=>{
    if(err) {
        console.log(err);
    }
    else{
        console.log("Email Successfully Sent "+info.response);
    }
}) 