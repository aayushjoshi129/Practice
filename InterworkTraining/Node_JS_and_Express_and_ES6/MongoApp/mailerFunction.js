var { transporter } = require("./mailerConfig");

// Send out Mails
function mailDetails(mail) {
    // console.log(mail);
    mailOptions = {
    from: "aayushjoshi129@gmail.com",
    to: `${mail}`,
    subject: `Test Mail from aayushjoshi129@gmail.com to ${mail}`,
    text: `Hii !Welcome to the Joshi Project of mongoDB and Express`
    }
    return mailOptions;
}
function transport(emailto) { transporter.sendMail(mailDetails(emailto), (err, info) => {
    if (err) {
        console.log(err);
    }
    else {
        console.log("Email Successfully Sent " + info.response);
    }
})
}

module.exports = {
    transport
}