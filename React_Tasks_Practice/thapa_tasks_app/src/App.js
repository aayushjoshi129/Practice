import React from 'react'

function App(){

  const styleGreeting = {
    color:""
  }
  
  // Date(year,month,day,hours,minutes,seconds,milliseconds)
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
  
return (
  <>
  <h1>Hello Sir , <span style={styleGreeting}>{Greeting}</span> </h1>
  </>
)

}

export default App