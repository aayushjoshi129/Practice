import React from "react";

class New extends React.Component{
  constructor(props) {
    super(props);
    this.handleBake = this.handleBake.bind(this);
  }

  handleBake(evt) {
    this.props.functionBake(this.props.value); // calling function from parent class and giving argument as a prop
  }

  render() {
    return (
      <div>
        <h1>New</h1>
        <button onClick={this.handleBake}>Bake!!!</button> {/* event handler calling handleBake function */}
      </div>
    );
  }
}

export default New;