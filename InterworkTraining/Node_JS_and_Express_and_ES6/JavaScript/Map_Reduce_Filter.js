console.log("Hello World\n");


// MAP Function Basically maps each value to a new value likr here "NY" is mapped to "ny"
// Map Function in Javascript
console.log("Map Function\n");

var arr1 = ["NY","LA","TX"];
var low = arr1.map((city) => city.toLowerCase());
console.log(arr1);
console.log(low);

// FILTER Function Basically filters each value and whichever value is satisfying the condition get stored in that value
// Filter Function in Javascript
console.log("\nFilter Function\n");
var Num = [10,20,30,40,50];
var filtNum = Num.filter((val) => val>30);
console.log(Num);
console.log(filtNum);


// REDUCE Function Basically maps each value to a new value likr here "NY" is mapped to "ny"
// Reduce Function in Javascript
console.log("\nReduce Function\n");
var Num1 = [10,20,30,40,50,60,70,80];
var RedNum1 = Num1.reduce((sum,val) => sum+val,0);
console.log(Num1);
console.log(`Sum of All the Numbers ${Num1} is ${RedNum1}\n`);