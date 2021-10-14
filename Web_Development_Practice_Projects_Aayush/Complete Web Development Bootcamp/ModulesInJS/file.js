const fs = require("fs");
let text = fs.readFileSync("file1.txt","utf-8");
text = text.replace("joshi","Aayush")
console.log(text);
console.log("Creating a new file...")
fs.writeFileSync("joshi.txt" , text);