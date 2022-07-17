const { Router } = require("express");
const route2 = require('./route2');

const router = Router();

// router.get("/",(req,res)=>{
//     res.send("Hello World From route 1");
// })

router.use('/newR',route2);

module.exports = router;