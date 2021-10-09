import React from 'react'
import {Add,Subtract,Multiply,Divide} from './Operations'

function Calculator(){

  return (
    <>
      <input type="text" placeholder="enter value of a"/>
      <input type="text" placeholder="enter value of b"/>
    <ul>
      <li>The Sum of 2 Numbers is {Add(24,5)}</li>
      <li>The Subtraction of 2 Numbers is {Subtract(24,5)}</li>
      <li>The Multiplication of 2 Numbers is {Multiply(24,5)}</li>
      <li>The Division of 2 Numbers is {Divide(10,3)}</li>
    </ul>
  </>
  )
}

export default Calculator