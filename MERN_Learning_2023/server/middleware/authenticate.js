const jwt = require('jsonwebtoken')
var express = require('express');
const router = express.Router();
// var app = express();
var cookies = require("cookie-parser");

// app.use(cookies());
router.use(cookies());
const User = require("../model/userSchema")

const Authenticate = async (req,res,next) => {
    try {
        console.log(req.headers.cookie.substring(8,));
        const token = req.headers.cookie.substring(8,);
        // const token = req.cookies.jwtoken;
        const verifyToken = jwt.verify(token,process.env.SECRET_KEY);

        const rootUser = await User.findOne({_id:verifyToken._id,"tokens.token":token});

        if(!rootUser){
            throw new Error('User Not Found');
        }
        else{
            req.token = token;
            req.rootUser = rootUser;
            req.userID = rootUser._id;

            next();
        }

    } catch (err) {
        res.status(401).send("Unauthorized: No Token Provided")
        console.log(err);
    }
}

module.exports = Authenticate;