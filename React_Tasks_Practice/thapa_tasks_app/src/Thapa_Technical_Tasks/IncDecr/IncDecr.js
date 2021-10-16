import React , {useState} from 'react'

const IncDecr = () => {
  const [val,setVal] = useState(0)
  const Increment = () =>{
    setVal(val+1)
  }
  const Decrement = () =>{
    val>0 ? setVal(val-1) : alert("Value Cannot be Less Than 0");
  }



  return(
    <>
    <h1>{val}</h1>
    <button onClick={Increment}>Increment</button>
    <button onClick={Decrement}>Decrement</button>
    </>
  )
}

export default IncDecr