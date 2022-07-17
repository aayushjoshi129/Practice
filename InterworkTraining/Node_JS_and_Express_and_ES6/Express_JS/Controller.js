const express = require('express');
var app = express();


exports.getHelloWorld = (req,res)=>{
    res.send("Hello World From route 2");
}