import React, { useState } from 'react'

const GetTime = () => {

  let newTime =new Date().toLocaleTimeString()
  const [time, setTime] = useState(newTime)

  const timeset = () => {
    newTime = new Date().toLocaleTimeString();
    setTime(newTime);
  }
  return (
    <>
      <h1 style={{ textAlign: "center" }}>Current Time is {time}</h1>
      <div style={{display: 'flex' , justifyContent: 'center'}}>
      <button onClick={timeset}>Get Latest Time</button>
      </div>
    </>
  )
}

export default GetTime