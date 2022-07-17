const express = require('express');
const app = express();
const { MongoClient } = require('mongodb');

const uri = "mongodb://localhost:27017";


const client = new MongoClient(uri);

app.get('/',(req,res)=>{
    res.send("Hello World");
})

app.get('/filter',async (req,res)=>{
    console.log("################### In filter route ####################");
    await client.connect();
    const { assemblyType, assemblyName, assemblyServices, createdBy, page = 1, limit = 10 } = req.query;
    // console.log(req.query);
    const filter = {
      // assemblyType: assemblyType ? assemblyType.charAt(0).toUpperCase() + assemblyType.slice(1).toLowerCase() : /[a-z]+/i,
      // assemblyName: assemblyName ? assemblyName.charAt(0).toUpperCase() + assemblyName.slice(1).toLowerCase() : /[a-z]+/i,
      assemblyType: assemblyType ? new RegExp(assemblyType,'i') : /[a-z]+/i,
      assemblyName: assemblyName ? new RegExp(assemblyName,'i') : /[a-z]+/i,
      assemblyServices: assemblyServices ? assemblyServices.split(",") : [/[a-z]+/i],
      createdBy: createdBy ? createdBy : /[a-z]+/i,
    };
  
    console.log(filter);
  
    var allAssembly = await client.db("MIS_OLD").collection("assembly")
      .find({
        assemblyType: filter.assemblyType,
        assemblyName: filter.assemblyName,
        "assemblyServices.serviceName": { $in: filter.assemblyServices },
        createdBy: filter.createdBy,
      })
      .sort({ $natural: -1 })
      .limit(limit * 1)
      .skip((page - 1) * limit)
      .toArray();
  
  
    if (allAssembly.length == 0 || allAssembly.length == null) {
      res.status(404).send({
        success: false,
        message: "No Assembly Found.",
      });
    } else {
        console.log(allAssembly.length);
      res.status(200).send(allAssembly);
    }
})

app.listen(5000)