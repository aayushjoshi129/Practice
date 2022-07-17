const express = require('express');
const app = express();
const PORT = 4001;

app.use(express.json())
app.get('/fakeapi',(req,res)=>{
    console.log('You Hitted fakeAPI');
    res.send(`Hello World From Fake API running on port number ${PORT} \n`)
})

app.get('/bogusapi',(req,res)=>{
    console.log('You Hitted bogusAPI');
    res.send(`Hello World From bogus API running on port number ${PORT} and from ${req.url} \n`)
})

app.get('/newsapi',(req,res)=>{
    console.log('You Hitted newsAPI');
    res.send(`Hello World From news API running on port number ${PORT} and from ${req.url} \n`)
})

app.post('/postapi',(req,res)=>{
    console.log('You Hitted postAPI');
    res.send(`Hello World From post API running on port number ${PORT} and from ${req.url} \n`)
})

app.listen(PORT);