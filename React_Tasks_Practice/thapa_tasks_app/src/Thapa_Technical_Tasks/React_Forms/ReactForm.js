import React , {useState} from 'react'

const ReactForm = () => {
  const [name,setName] = useState();
  const [fullName,setFullName] = useState();

const changeName = (e) => {
  setName(e.target.value)
}

const onSubmit = (e) => {
  e.preventDefault();   // This will prevent default nature of form tag submit 
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
  <form onSubmit={onSubmit}>
  <h1 style={{marginLeft:'44%',marginTop:'20%'}}>Hello {fullName}</h1>
<input type="text" onChange={changeName} style={style1} />
<button type='submit'>Submit</button>
  </form>
</div>  
  </>
)
}

export default ReactForm;