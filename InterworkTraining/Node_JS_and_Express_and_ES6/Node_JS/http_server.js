const http = require('http');

const port = process.env.PORT || 4000;

const server  = http.createServer((req,resp)=>{
    console.log(req.url);
    resp.statusCode=200;
    resp.setHeader('Content-Type','text/html');
    resp.end('<h1>This is response <h1/>');
})

server.listen(port , ()=>{
console.log(`server is running on port number ${port}`)
});