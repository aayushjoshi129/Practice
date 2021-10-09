import React from "react"
import New from "./New"

class Bakery extends React.Component {
  constructor(props) {
    super(props);
    this.bake = this.bake.bind(this);
  }

  bake(e) {
    return(
      <>
      {document.getElementById("root").innerHTML = document.getElementById("root").innerHTML + "Shubham"}
      </>
    )  // it will execute when child component will invoke it
  }

  render() {
    let e = "Baked!";
    return (
      <div>
        <h1>Bakery!!!</h1> 
        <New value={e} functionBake={this.bake} /> {/* child component is called with a prop passing the function and a prop passing the value */}
      </div>
    );
  }
}

export default Bakery