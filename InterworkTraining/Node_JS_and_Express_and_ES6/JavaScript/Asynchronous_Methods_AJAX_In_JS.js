// AJAX - Asynchronous Javascript and XML. (It is set of Existing Technologies)  (It does not refresh/load the page to fetch data)  (AJAX uses XMLHttpRequest object also known as xhr)

// Pure Javascript is also known as Vanilla Javascript

// console.log("Hello World");
// let fetchBtn = document.getElementById('fetchBtn');
// fetchBtn.addEventListener('click',buttonClickHandler);

// function buttonClickHandler(){

//     console.log("You Have Clicked FetchBTN");

// // instantiate an xhr object

// const xhr = new XMLHttpRequest();

// // open the object 
// //GET Request
// // xhr.open('GET','joshi.txt',true);
// // xhr.open('GET','https://jsonplaceholder.typicode.com/todos/1',true);

// //POST Request
// xhr.open('POST','http://dummy.restapiexample.com/api/v1/create',true);
// xhr.getResponseHeader('Conent-type','application/json');


// // what to do on progress
// xhr.onprogress = function()
// {
//     console.log("On Progress...");
// }

// // what to do when response is ready
// xhr.onload = function()
// {
//     if(this.status === 200){
//     console.log(this.responseText);
//     }else{
//         console.error("Some Error Occured");
//     }
// }

// // Send the Request
// // xhr.send();

// // Send the Post Request
// const params = `{"name":"tes1234t","salary":"123","age":"23"}`;
// xhr.send(params)

// console.log("Done With Code");  // if async is true in xhr.open request then whole page will execute first then xhr.open function will run and if it is false then code will run synchronously

// }





let popBtn = document.getElementById('popHandler');
popBtn.addEventListener('click',buttonPolulated);

function buttonPolulated(){

    console.log("You Have Clicked popBtn");

// instantiate an xhr object

const xhr = new XMLHttpRequest();

// open the object 
// GET Request
xhr.open('GET','https://jsonplaceholder.typicode.com/users',true);


// what to do when response is ready
xhr.onload = function()
{
    if(this.status === 200){
    let obj = JSON.parse(this.responseText);
    console.log(obj);
    let list = document.getElementById('list');
    str="";
    for(key in obj){
        str+=`<li>${obj[key].name}</li>`
    }
    list.innerHTML = str;
    }else{
        console.error("Some Error Occured");
    }
}

// Send the Request
xhr.send();


console.log("Done With Code");  // if async is true in xhr.open request then whole page will execute first then xhr.open function will run and if it is false then code will run synchronously

}