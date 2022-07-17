const express = require('express');
const app = express();
const router = express.Router();

const registry = require('./registry.json')

// to read the body from postman
app.use(express.json());
var bodyParser = require('body-parser');
app.use(bodyParser.urlencoded({ extended: true }));
const axios = require('axios');

// connecting to mongodb
const { MongoClient } = require('mongodb');
const uri = 'mongodb://localhost:27017';
const client = new MongoClient(uri);


router.get('/', async (req, res) => {
    await client.connect();
    const getdetails = await client.db('joi').collection('validations').find().toArray();
    console.log(getdetails);
    res.send(getdetails);
})

const url = 'http://localhost:4001/';

router.get('/:apiName/:path', (req, res) => {
    console.log(req.params.apiName);

    // http://localhost:4000/newsapi
    // axios.get(url+req.params.apiName).then((response)=>{
    // res.send(response.data)
    // })

    // http://localhost:4000/testapi/fakeapi
    // if (registry.services[req.params.apiName]) {
    //     axios.get(registry.services[req.params.apiName].url + req.params.path).then((response) => {
    //         res.send(response.data)
    //     })
    // }

    if (registry.services[req.params.apiName]) {
        axios({
            method: req.method,
            url: registry.services[req.params.apiName].url + req.params.path,
            headers: req.headers,
            data: req.body,
        }).then((response) => {
			res.status(200).json(response.data);
		})
		.catch((err) => {
			res.status(500).json({ message: err.message });
		});
    }
    else {
        res.send(`APIName ${req.params.apiName} not found`)
    }
})

module.exports = router;