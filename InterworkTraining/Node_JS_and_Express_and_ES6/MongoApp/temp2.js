const mongoUtil = require('./temp');
var db;
exports.client = mongoUtil.connectToServer(function (err, db) {
    if (err) {
        console.log(err);
    } else {
        console.log('connected to mongodb');
        db = mongoUtil.getDb();
    }
});