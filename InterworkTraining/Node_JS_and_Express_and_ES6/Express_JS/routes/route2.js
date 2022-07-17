const { Router } = require("express");
const controller = require('../Controller')

const router2 = Router();

router2.get('/name',controller.getHelloWorld);

module.exports = router2;