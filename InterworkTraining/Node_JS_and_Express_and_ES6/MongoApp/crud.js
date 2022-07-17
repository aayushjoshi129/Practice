var express = require('express');
var bodyParser = require('body-parser');
const { fin, insert, insertMany, updateSingle, del, col, dbs } = require('./connection');
var app = express();
app.use(express.json());
var {transport} = require("./mailerFunction");


// This extracts the body element from the index.html file (body-parser)
app.use(bodyParser.urlencoded({ extended: true }));


// HomePage
app.get('/', async (req, resp) => {
    resp.sendFile(__dirname + '/views/homepage.html');
})

// HomePage Search
app.post('/', async (req, resp) => {
    const query = req.body;
    console.log(query);
    const finalQuery = await fin(query);
    resp.send(finalQuery);
})

// Get All Data
app.get('/getall', async (req, resp) => {
    const finalQuery = await fin();
    resp.send(finalQuery);
})

// Get particular data using particular Query
app.post('/getparticular', async (req, resp) => {
    const query = req.body;
    const finalQuery = await fin(query);
    resp.send(finalQuery);
})

// Insert One Data
app.post('/insertOne', async (req, resp) => {
    const query = req.body;
    transport(req.body.email);
    const finalQuery = await insert(query);
    resp.send(finalQuery);
})

// Insert Many
app.post('/insertMany', async (req, resp) => {
    const query = req.body;
    const finalQuery = await insertMany(query);
    resp.send(finalQuery);
})

// // Updating Using db
// app.put('/updateSingle', async (req, resp) => {
//     const query = req.body[0];
//     const set = req.body[1];
//     const finalQuery = await updateSingle(query, set);
//     console.log(finalQuery);
//     resp.send(finalQuery);
// })


app.get('/updateSingle', (req, resp) => {
    resp.sendFile(__dirname + '/views/updatePage.html');
})

// Update Single Document Using Form
app.post('/updateSingle', async (req, resp) => {
    const query = { name: req.body.name }
    const fields = req.body.name2;
    const val = req.body.name3;
    var set = {};
    set[fields] = val;
    console.log(set);
    const finalQuery = await updateSingle(query, set);
    // console.log(finalQuery);
    if (finalQuery.modifiedCount > 0) {
        // resp.send(finalQuery);
        // resp.sendFile('/getall');
        resp.redirect(301, '/getall');
    } else {
        resp.send("Data Not Updated , Since No Match Found");
    }
})


// Delete Get Page
app.get('/delete', (req, resp) => {
    resp.sendFile(__dirname + '/views/deletePage.html');
})


// Deleted Data Using UserInput Using Post Method
app.post('/delete', async (req, resp, next) => {
    const query = req.body;
    console.log(query);
    const finalQuery = await del(query);
    if (finalQuery.deletedCount > 0) {
        // resp.send(`Deleted the Document with name ${query.name}  --> ${JSON.stringify(finalQuery)}`);
        resp.redirect(301, '/getall');

    } else {
        resp.send("Data Does Not Exists");
    }

})


// Delete a Particular Document
// app.delete('/delete', async (req,resp) =>{
//     const query = req.body;
//     const finalQuery = await del(query);
//     console.log(finalQuery);
//     resp.send(finalQuery);
// })


// Get CollectionLists
app.get('/collections', async (req, resp) => {
    const finalQuery = await col();
    finalQuery.forEach(collection => {
        console.log(collection.name);
    });
    // console.log(finalQuery);
    resp.send(finalQuery);
})

// Get DatabasesLists
app.get('/databases', async (req, resp) => {
    const finalQuery = await dbs();
    // var $arr = [];
    // var $count = 0;
    // finalQuery.databases.forEach(databases => {
    //     // console.log(databases.name);
    //     $arr[$count++] = databases.name;
    // });
    // $arr.forEach(i => console.log(i))

    // console.log(finalQuery);
    // resp.send($arr);
    resp.send(finalQuery.databases.map(i => i.name));
    // resp.send(finalQuery.databases);
});

// Error Handling (When User Requested the URL which is not present in the defined routes(URL))
app.all("*", (req, resp, next) => {
    const err = new Error(`Requested URL ${req.path} not found`);
    // resp.status(404).send(`${err.message} Error Location : Error location is ${err.stack}`);
    err.statusCode = 404;
    next(err);  // this will call the Error Handler written in 152 line number
})

// Error Handling using middleware
app.use((err, req, res, next) => {
    const statusCode = err.statusCode || 500;
    res.status(statusCode).send(`${err.message} Location of Error : ${err.stack}`);
})

app.listen(4000);