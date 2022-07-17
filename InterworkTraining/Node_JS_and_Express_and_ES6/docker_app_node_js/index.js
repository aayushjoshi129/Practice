const express = require('express');
const app = express();
const bodyParser = require("body-parser");
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.text());


app.get('/', async(req,res)=>{
    console.log("running from docker");
    res.send("Hello World Docker");
})

app.listen(8001);


// sudo docker build -t my-nodejs-app .                         ========>> Building APP
// sudo docker run -it --rm --name my-running-app my-nodejs-app  ========>> Running docker app
