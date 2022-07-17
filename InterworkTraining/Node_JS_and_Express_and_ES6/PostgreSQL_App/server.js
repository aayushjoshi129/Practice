var express = require('express');

var bodyParser = require('body-parser');


const studentRoutes = require('./router')

var app = express();

app.use(express.json());


// This extracts the body element from the index.html file (body-parser)
app.use(bodyParser.urlencoded({ extended: true }));

app.get("/", (req, resp) => {
    resp.send("Hello");

})


app.use("/api/v1/students", studentRoutes);


app.listen(4000);