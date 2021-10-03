import React from 'react'
import ReactDOM from 'react-dom'

const name = "Aayush Joshi"
const CurrDate = new Date().toLocaleDateString();
const CurrTime = new Date().toLocaleTimeString();

ReactDOM.render(
<React.Fragment>  
  <h1>My Name is {name}</h1>
  <p>Current Date is {CurrDate}</p>
  <p>Current Time is {CurrTime}</p>
</React.Fragment>,
document.getElementById("root")
)