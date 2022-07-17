var express = require('express');
var bodyParser = require('body-parser');
var app = express();
// var app1 = express();
app.use(express.json());
const multer = require('multer');
const path = require('path');
























// 2 Level Routing 



const router = require('./routes/newRoute');

app.use('/api/v1/test/',router);


// 2 Level Routing































const fileupload = require('express-fileupload');

var storage = multer.diskStorage({
    destination : function(request,file,callback){
        callback(null,'./uploads')
    },
    filename : function(req,file,callback){
        // console.log(file);
        callback(null,file.fieldname + "-" + Date.now()+" "+path.extname(file.originalname))
    }
})

const upload = multer({storage : storage});

// This extracts the body element from the index.html file (body-parser)
app.use(bodyParser.urlencoded({extended:true}));

// get always take 2 params , one is the location and second one is the function

// fat arrow function ()=>{} , takes 2 params , one is request and other is response and we use response to send data ta output

// homepage
app.get('/', (req, resp) => {
    resp.sendFile(__dirname+'/homepage.html');
    console.log('Running on Port 4000');
})

// app1.get('/', (req, resp) => {
//     resp.send(`you are at <b>(${req.path})</b> path`);
//     console.log('Running on Port 4001');
// })

// This means optional url (?)
// app1.get('/?:userName', (req, resp) => {
//     resp.send(req.params);
//     console.log('Running on Port 4001');
// })


// app1.get('/:userID', (req, resp) => {
//     resp.send(req.params);
//     console.log('Running on Port 4001');
// })

// about page
app.get('/about', (req, resp) => {
    resp.send("<h1>Hello World about</h1>");
    console.log('Running on Port 4000');
})

// blogs page
app.get('/blogs', (req, resp) => {
    resp.send("<h1>Hello World blogs</h1>");
    console.log('Running on Port 4000');
})

// contact page
app.get('/contact', (req, resp) => {
    resp.send("<h1>Hello World contact</h1>");
    console.log('Running on Port 4000');
})

// calculator page
// sendFile takes 2 arguments , one is path and other is options
app.get('/calculator', (req, resp) => {
    resp.sendFile(__dirname+'/index.html');
    console.log('Running on Port 4000');
})

app.post('/calculator', (req, resp) => {
    console.log(req.body);
    let n1 = Number(req.body.num1);
    let n2 = Number(req.body.num2);
    let sum = n1+n2;
    resp.send(`The Sum of ${n1} and ${n2} is ${sum}`);
    console.log('Running on Port 4000');
})

app.post('/multer',upload.single('file'),(req,res)=>{
    console.log(req.file);
    res.send("Hello World 111 File Uploaded Successfully");
})

app.use(fileupload());

app.post('/fileUpload',(req,res)=>{
    // console.log(req.files);
    var file = req.files.file;
    var filename = file.name;
    var element = req.body.FormData;
    let datum =[];
    element.forEach((data)=>{
        let dat = JSON.parse(data);
        dat.file = filename;
        datum.push(dat)
    })
    console.log(datum);
    file.mv('./uploads/'+filename,(err)=>{
        if(err){
            res.send("Error Occured");
        }else{
            console.log(`\n\n`);
            // console.log(element);
            console.log(`\n\n`);
            res.send("File Uploaded Successfully");
        }
    })
})


var link = 'https://jsonplaceholder.typicode.com/posts';


app.post('/reg',(req,res)=>{
    const obj = JSON.parse(req.body.userObj);
    console.log(req.body.userObj);
    console.log(obj.name);
    res.send("Hello");
})

app.get('/link',(req,resp)=>{
    console.log(link);
    resp.send(link);
})

app.listen(4000);
// app1.listen(4001);