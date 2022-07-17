// Connection Establishment of Mongodb
const { MongoClient } = require('mongodb');

const uri = "mongodb://localhost:27017";


const client = new MongoClient(uri);

// To List All Databases
exports.dbs = async () => {
    await client.connect();
    const databasesList = await client.db().admin().listDatabases();
    return databasesList;

    // console.log("Databases:");
    // databasesList.databases.forEach(db => console.log(` - ${db.name}`));
};

// To List All Collections
exports.col = async () => {
    await client.connect();
    const collectionList = await client.db("Practice").listCollections().toArray();
    return collectionList;

    // console.log("Collections:");
    // collectionList.collections.forEach(col => console.log(` - ${col.name}`));
};

// To Read First Document of a Particular Collection
 async function findOneResult() {
    const findOneResult = await client.db("Practice").collection("Employee").findOne();
    // console.log(findOneResult);
}

// To Find any Document of a Particular Collection
exports.fin = async (query={}) => {
    await client.connect();
    const findd = await client.db("Practice").collection("Employee").find(query).toArray();
    // console.log(findd);
    return findd;

}

// To Update a Single Document
exports.updateSingle = async (query,set) =>{
    await client.connect();
    const updatedDocument = await client.db("Practice").collection("Employee").updateOne(query,{$set:set});
    return updatedDocument;
}

// To Delete a Particular Document
exports.del = async (query) =>{
    await client.connect();
    const deletedDocument = await client.db("Practice").collection("Employee").deleteOne(query);
    return deletedDocument;
}

// To Insert Document in a Collection
exports.insert = async (obj) => {
    await client.connect();
    const inserted = await client.db("Practice").collection("Employee").insertOne(obj)
    return inserted;
}

// To Insert Many Documents in a Collection
exports.insertMany = async (obj) => {
    await client.connect();
    const insertedMany = await client.db("Practice").collection("Employee").insertMany(obj)
    return insertedMany;
}

// Main Function
async function main() {

    try {
        // Connect to the MongoDB cluster
        if (await client.connect()) {
            console.log("Connection Established");
        } else {
            console.log("Connection Not Established");
        }


        // Make the appropriate DB calls
        // await  listDatabases(client);

        // Calling Read Function
        // await findOneResult();

        // await Delete(client);

        // await listCollections(client);

        // Inserting a Document
        // await insert(client, obj = { name: "Radhika", age: 20, contact: 9977886655, Address: { City: "Faridabad", State: "Haryana" }, nickname: "Ishu", Emp_id: 2, friend: "Aayush" });

        // await findd(client);

    } catch (e) {
        console.error(e);
    } finally {
        await client.close();
    }
}

main().catch(console.error);
