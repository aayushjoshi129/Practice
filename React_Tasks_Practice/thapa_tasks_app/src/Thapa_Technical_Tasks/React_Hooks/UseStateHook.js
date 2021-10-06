import React, { useState } from 'react'

const UseStateHook = () => {

  const [num, setNum] = useState(0)

  const UseStateHook1 = () => {
    setNum(num + 1);
  };

  return (
    <>
      <h1 style={{ textAlign: "center" }}>{num}</h1>
      <div style={{display: 'flex' , justifyContent: 'center'}}>
        <button onClick={UseStateHook1}>Click Me</button>
      </div>
    </>
  )

}

export default UseStateHook