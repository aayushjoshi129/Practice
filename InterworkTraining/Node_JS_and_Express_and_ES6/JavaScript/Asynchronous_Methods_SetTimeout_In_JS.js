// setTimeout - It takes 2 params i.e, first one is your callback function and other is time after which you want to execute that function

console.log("Hello World");

// it will let you program to execute other things and this will exexute after 100 milliseconds (1s = 1000ms)
setTimeout(()=>{
    for (let index = 0; index < 200; index++) {
        console.log(`This is ${index} value of for loop`);    
    }
},100)


console.log("End of Program");