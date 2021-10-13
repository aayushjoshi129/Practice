import React , {useState} from 'react'

const Events = () => {

const [m1,setM1] = useState('Click Me');
const [bgCol,setBgCol] = useState('red');

var style = {
  position: 'absolute',
  top: '50%',
  left: '50%',
  transform: 'translate(-50% , -50%)',
  fontSize:'25px',
  cursor:'pointer',
  borderRadius:'5px',
  textTransform:'uppercase',
  backgroundColor:'purple',
  color:'white'
}


const mood1 = () => {
  setM1('Set to Mood 1');
}

const mood2 = () => {
  setM1('Set to Mood 2');
}


  return(
    <>
    <button style={style} onClick={mood1} onDoubleClick={mood2}>{m1}</button>
    </>
  )

}

export default Events