import React from 'react'
import SlotGame from './SlotGame'

const style = {
  textAlign: "center",
}

const SlotFormat = () =>{
  return(
    <>
  <h1 style={style}>Welcome To Slot Machine Game</h1>
  <SlotGame x="A" y="A" z="A" style={style}/>
  <SlotGame x="A" y="B" z="A" style={style}/>
  <SlotGame x="A" y="A" z="C" style={style}/>
    </>
  )
}

export default SlotFormat
