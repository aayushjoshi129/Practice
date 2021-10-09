import React from 'react';
import ReactDOM from 'react-dom';

class Container extends React.Component {
  constructor(props) {
    super(props);
    this.state = {show: true};
  }
  delHeader = () => {
    this.setState({show: false});
  }
  render() {
    let myheader;
    if (this.state.show) {
      myheader = <Child />;
    };
    return (
      <div>
      {myheader}
      <button type="button" onClick={this.delHeader}>Delete Hello World </button>       {/* onClick Event in React */}
      </div>
    );
  }
}

class Child extends React.Component {
  componentWillUnmount() {                                                  // Unmounting the Content 
    alert("The component named Header is about to be unmounted.");
  }
  render() {
    return (
      <h1>Hello World!</h1>
    );
  }
}


ReactDOM.render(<Container />, document.getElementById('root'));

export default Container;