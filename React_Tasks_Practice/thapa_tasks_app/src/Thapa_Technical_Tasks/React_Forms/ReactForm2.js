import React , {useState} from 'react'

const ReactForm2 = () => {
  const [fname,setFname] = useState();
  const [lname,setLname] = useState();
  const [fullFirstName,setFullFirstName] = useState();
  const [fullLastName,setFullLastName] = useState();

const changeFname = (e) => {
  setFname(e.target.value)
}

const changeLname = (e) => {
  setLname(e.target.value)
}

const onSubmit = (e) => {
  e.preventDefault();   // This will prevent default nature of form tag submit 
  setFullFirstName(fname)
  setFullLastName(lname)
}

var style = {
  width:'100%',
  height:'100vh',
  alignItems:'center',
  position: 'absolute',
  top: '50%',
  left: '50%',
  transform: 'translate(-50% , -50%)',
  fontSize:'25px',
  cursor:'pointer',
  textTransform:'uppercase',
  backgroundColor:'purple',
  color:'white'
}

const style1 = {
  marginLeft:'43%',
}

return(
  <>
<div style={style}>
  <form onSubmit={onSubmit}>
  <h1 style={{marginLeft:'44%',marginTop:'20%'}}>Hello {fullFirstName} {fullLastName}</h1>
<input type="text" onChange={changeFname} style={style1} value={fname} />
<input type="text" onChange={changeLname} style={style1} value={lname} />
<button type='submit'>Submit</button>
  </form>
</div>  
  </>
)
}

export default ReactForm2;