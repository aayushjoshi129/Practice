import React from 'react'
function Hello() {
  alert( "Hello World ")
  // e.preventDefault();
}
function Duniya(){
  alert( "I am Hindi Translation of Hello World : Hello Duniya")
}

class Callback extends React.Component{
  constructor(props){
    super(props);
    // this.props.pro = this.props.pro.bind(this)
    // const m = this.pro
    console.log(props.pro.bind(this).state)
  }
  render(){
    return (
      <>
        <button onClick={Duniya}> Click Me</button> 
        
      </>
    )
}

}
export default Callback
