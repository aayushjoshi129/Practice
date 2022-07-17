// Importing express module
const express = require('express');
const app = express();

// Importing @hapi/joi module
const joi = require('@hapi/joi');

// connecting to mongodb
const { MongoClient } = require('mongodb');
const uri = 'mongodb://localhost:27017';
const client = new MongoClient(uri);

// to read the body from postman
app.use(express.json());
var bodyParser = require('body-parser');
app.use(bodyParser.urlencoded({ extended: true }));


// joiValidations API 
app.post('/joiValidations', async (req, res) => {
    await client.connect();
    console.log(req.body);

    // JOI Validations
    const schema = joi.object({
        name: joi.string().min(3).max(20).required(),
        age: joi.number().integer().min(18).max(60).required(),
        phoneNo: joi.number().integer().min(1000000000).max(9999999999).required(),
        rollNo: joi.number().integer().required(),
    })

    let result = schema.validate(req.body);
    console.log(result);
    if (result.error) {
        res.send(result.error);
    } else {
        studObj = {
            name: req.body.name,
            age: req.body.age,
            phoneNo: req.body.phoneNo,
            rollNo: req.body.rollNo
        }
        const getdetails = await client.db('joi').collection('validations').insertOne(studObj);
        console.log("Inserted Successfully");
        res.send(getdetails);
    }

})

// get all validations document
app.get('/', async (req, res) => {
    await client.connect();
    let data = await client.db('joi').collection('validations').find().toArray();
    if (data.length > 0) {
        console.log(data.length);
        res.send(data);
    } else {
        res.send('No Data Present');
    }
})

app.listen(9000);