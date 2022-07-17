const  Pool  = require('pg').Pool

const pool = new Pool({
    host : "localhost",
    port : 5432,
    user : "postgres",
    password : 'pgconnect',
    database : "training"
})

pool.on("connect",()=>{
    console.log("Connection Established");
})

pool.on("end",()=>{
    console.log("Connection Ended");
})

module.exports=pool;