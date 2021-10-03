import React from 'react'
import ReactDOM from 'react-dom'


const styleGreeting = {
  color:""
}

const time = new Date(2021,10,3,22).getHours();
let Greeting = ""
if (time>=0 && time<12){
  Greeting = "Good Morning"
  styleGreeting.color = "Green"
}
else if (time>=12 && time<18){
  Greeting = "Good Afternoon"
  styleGreeting.color = "Orange"
}
else if (time>=18 && time<21){
  Greeting = "Good Evening"
  styleGreeting.color = "Blue"
}
else
{
  Greeting = "Good Night"
  styleGreeting.color = "Red"
}


ReactDOM.render(
  <h1>Hello Sir , <span style={styleGreeting}>{Greeting}</span> </h1>,
  document.getElementById("root")
)