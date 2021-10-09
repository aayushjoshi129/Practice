import logo from './logo.svg';
import './App.css';
import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import Header from "./MyComponents/Header";
import Snapshot from "./MyComponents/Snapshot";
import Unmount from "./MyComponents/Unmount";
import Form from "./MyComponents/Form";
// import NameList from "./MyComponents/Map"
// import Button from '@material-ui/core/Button';
import Button from '@mui/material/Button';
import Samp from './sample2.json'

const abcd = Samp.bkl;

function App() {
  return (
    <>
    <Button variant="contained" color="error" onClick={() => { alert('clicked'); }}>Hello World</Button>
      <div className="App">
        <h1>{myfirstelement}</h1>
        <h2 id="headb">Hello World!</h2>
        <h3>{myelement}</h3>
        <div>{mynewelement}</div>
      </div>
      <Header title="new title using prop passed params" age=" rendered 27 using prop" />
      <Snapshot/>
      <Unmount/>
      <Form/>
      <div className="App">
        <h1>Users list</h1>
        <ul>
         {
            abcd.map((s)=> {
              return(
                <li style={{listStyleType: "none"}}>
                {s.fruit} is {s.size} & its color is {s.color}</li>
              );
            })
         } 
        </ul>
      </div>
      {/* <NameList/> */}
    </>
  );
}


const myelement = <h3 className="myclass">New World!!</h3>;
const myfirstelement = "Hello React Users!"

const x = 5;
const mynewelement = <h4>{(x) < 10 ? "Hello" : "Goodbye"}</h4>;


function NameList(props) {  
  const myLists = props.myLists;  
  const listItems = myLists.map((myList) =>  
    <li>{myList}</li>  
  );  
  return (  
    <div>  
          <h2>React Map Example</h2>  
              <ul>{listItems}</ul>  
    </div>  
  );  
}  
const myLists = ['A', 'B', 'C', 'D', 'D'];   
ReactDOM.render(  
  <NameList myLists={myLists} />,  
  document.getElementById('app')  
);  


class Car {
  constructor(name) {
    this.brand = name;
  }

  present() {
    return 'I have a ' + this.brand;
  }
}

class Model extends Car {
  constructor(name, mod) {
    super(name);                  // The super() method refers to the parent class. By calling the super() method in the constructor method, we call the parent's constructor method and gets access to the parent's properties and methods.
    this.model = mod;
    this.state = {color: "red"};
  }
  show() {
    return this.present() + ', it is a ' + this.model + " " + this.state.color;
  }
}



class Cars extends React.Component {          // React Class Component
  render() {
    return <h3>Hi, I am a Cars from React Component!</h3>;
  }
}


class Farm extends React.Component {              // React State Component used to store property values
  constructor(props) {
    super(props);
    this.state = {
      brand: "Ford",
      model: "Mustang",
      color: "red",
      year: 1964
    };
  }
  changeColor = () => {                       
    this.setState({color: "blue"});               // setState Function allows you to set state or change state
  }
  render() {
    return (
      <div>
        <h1>My {this.state.brand}</h1>
        <p>
          It is a {this.state.color}
          {this.state.model}
          from {this.state.year}.
        </p>
        <button
          type="button"
          onClick={this.changeColor} 
        >Change color</button>
      </div>
    );
  }
}

ReactDOM.render(<Farm />, document.getElementById('root3'));


// ReactDOM.render(<Cars />, document.getElementById('root'));
const mycar = new Car("Ford Figo");
const mycar1 = new Model("Ford", "Mustang");
ReactDOM.render(<Cars />, document.getElementById('root6'));
document.write(mycar.brand);
document.write(mycar.present());
document.write(mycar1.show());


export default App;
