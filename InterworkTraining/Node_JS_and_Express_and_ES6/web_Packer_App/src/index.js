const express = require('express');
const app = express();
var bodyParser = require('body-parser');
require('body-parser-zlib')(bodyParser);
app.use(bodyParser.zlib());



app.get('/',async (req,res)=>{
    res.send("Hello World WebPacker File");
})

app.listen(8002);