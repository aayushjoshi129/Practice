import React from 'react'

const SpreadOperator = () => {

  const fullName = ['Aayush' , 'Joshi']
  const Bio = ['1', ...fullName ,'21']    // spread operator used to iterate through an iterable. Very useful while appending to an array
  
  console.log(Bio);


  var game1 = ['vice city','gta V' , 'gta San Andreas']
  var game2 = ['WWE 2k18','Call Of Duty' , 'Battleground Mobile India']
  var allGames = [...game1 , ...game2]      // Appending Uisng Spread Operator
  console.log(allGames);


  var dest = ['I am One','I am Two','I am Three','I am Four','I am Five']

  var [first,...remaining] = dest   // Array Destructuring using spread Operator

  console.log(remaining);

  const Name = {
    fname:"Jignesh",
    lname:"Dhanda"
  }

  const Data = {
    id:1,
    ...Name,    // Combining an Object Into Another Using Spread Operator
    area:"India"
  }

  console.log(Data);

  return(
    <>
    <h1>Hello World</h1>
    </>
  )
}

export default SpreadOperator;