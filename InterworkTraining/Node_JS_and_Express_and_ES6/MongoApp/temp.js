const MongoClient = require('mongodb').MongoClient;
const MONGO_URL = "mongodb://localhost:27017";
var _db;
const database = 'Pracitce';

module.exports = {
    connectToServer: function (callback) {
        MongoClient.connect(MONGO_URL, { useNewUrlParser: true, useUnifiedTopology: true }, function (err, client) {
            _db = client.db(database.toString());
            return callback(err, _db);
        });
    }, 
    getDb: function () {
        return _db;
    }
};

