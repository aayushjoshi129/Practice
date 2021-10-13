import React , {useState} from 'react'

const ReactForm = () => {
  const [name,setName] = useState();
  const [fullName,setFullName] = useState();

const changeName = (e) => {
  setName(e.target.value)
}

const onSubmit = () => {
  setFullName(name)
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

<h1 style={{marginLeft:'44%',marginTop:'20%'}}>Hello {fullName}</h1>
<input type="text" onChange={changeName} style={style1} />
<button type='button' onClick={onSubmit}>Submit</button>
</div>  
  </>
)
}

export default ReactForm;