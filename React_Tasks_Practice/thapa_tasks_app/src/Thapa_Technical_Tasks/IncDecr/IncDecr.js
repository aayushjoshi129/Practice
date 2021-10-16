import React , {useState} from 'react'
import RemoveIcon from '@material-ui/icons/Remove';
// import AddIcon from '@mui/icons-material/Add';
import AddIcon from '@material-ui/icons/Add';
// import Button from '@mui/material/Button';

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