import React , {useState} from 'react'
import RemoveIcon from '@mui/icons-material/Remove';
import AddIcon from '@mui/icons-material/Add';

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
    <button onClick={Increment}><AddIcon/></button>
    <button onClick={Decrement}><RemoveIcon/></button>
    </>
  )
}

export default IncDecr