const express = require('express');
const app = express();
const logger = require('./logger')

app.get('/', async (req,res)=>{
    logger.log('info',"I am coming from logger console");
    logger.error("I am coming from mongodb logger console");
    res.send("Hello World For Winster Logger")
})

app.listen(9000);