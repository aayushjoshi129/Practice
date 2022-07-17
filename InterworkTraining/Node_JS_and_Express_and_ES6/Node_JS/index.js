var express = require('express');
var app = express();
app.use(express.json());


var third = require('./third');

var second = require('./second');
const { json } = require('express');
// const req = require('express/lib/request');

// const path = require('path');

// respond with "hello world" when a GET request is made to the homepage
app.get('/', function (req, res) {
  console.log(req.path);
  res.send(third);
  console.log("Done Successfully  ");
})


app.get('/about', function (req, res) {
  console.log(req.path);
  res.send(second);
  console.log("Done Successfully");
})


app.post('/about3', function (req, res) {
  console.log(req.path);
  console.log(req.body);
    res.send(req.body);
  console.log("Done Successfully ");
})

app.get("/about3", (request, response) => {
  console.log("Path Param", request.params)
  console.log("Query Params", request.query)
  response.send("This is "+ request.body)
})

var server = app.listen(4001);
