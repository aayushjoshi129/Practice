const dotenv = require("dotenv");
const mongoose = require('mongoose');
const express = require('express');
const app = express();

dotenv.config({path:'./config.env'});
require('./db/conn');

app.use(express.json());

// const User = require('./model/userSchema');

// linking auth router file to main
app.use(require('./router/auth'));

const PORT = process.env.PORT;

// Middleware  -  interacts as intermediate  

const middleware = (req,res,next)=> {
   console.log('Hello Middleware');
   next()
}

// middleware();

app.get('/', (req,res)=>{
   res.send(`Hello World from MERN_Learning_2023 Course`);
});

app.get('/about', middleware, (req,res)=>{
   res.send("Hello World from About");
});

app.get('/contact', (req,res)=>{
   res.send("Hello World from contact");
});

app.get('/login', (req,res)=>{
   res.send("Hello World from login");
});

app.get('/register', (req,res)=>{
   res.send("Hello World from register");
});


app.listen(PORT, ()=>{
   console.log(`Server is running at port number ${PORT}`);
})