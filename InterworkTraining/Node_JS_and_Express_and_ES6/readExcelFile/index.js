const xlsx = require('xlsx');

var filename = 'Untitled.xlsx';

const wb = xlsx.readFile(filename,{cellDates:true});
var ws = wb.Sheets['Sheet1'];
var data = xlsx.utils.sheet_to_json(ws);

    console.log(data);
    data.forEach(element=>{
        console.log(`${element.Age} =>  ${element.Country}`);
    })

