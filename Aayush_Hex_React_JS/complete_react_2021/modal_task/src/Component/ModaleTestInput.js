import React from 'react'

function ModaleTestInput(){

  return(
    <>
    <input id="inp1" type="text" placeholder="Enter Username" />
    <input type="text" placeholder="Enter Password" />
    <button>Clear</button>
    {console.log(document.getElementById("inp1").innerHTML)}

    </>
  )

}
export default ModaleTestInput;