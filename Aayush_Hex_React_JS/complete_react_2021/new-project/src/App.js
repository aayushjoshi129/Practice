import React from "react"
import './CSS/app.css'
import Form from './Components/Form'
import Navbar from './Components/Navbar'
import Footer from './Components/Footer'
import Axios from "./Components/Axios"
import FetchGet from "./Components/FetchGet"
import FetchPost from "./Components/FetchPost"
import AxiosPost from "./Components/AxiosPost"
import AxiosGet from "./Components/AxiosGet"
import Callback from "./Components/Callback"
import Toggle from "./Components/Toggle"
import Bakery from "./Components/Bakery"
import TestComponent , {TestComponent1,firstName,lastName} from './Components/TestComponent'


const myFun = () => {
  return (
    <div>
      
    </div>
  )
}

// this.myFun = this.myFun.bind(this)

function App() {
  return (
    <>
    {/* <Navbar /> */}
    {/* <Form /> */}
    {/* <Axios /> */}
    {/* <Footer /> */}
    {/* <FetchGet /> */}
    {/* <FetchPost/> */}
    {/* <AxiosPost/> */}
    {/* <AxiosGet/> */}
    {/* <Callback pro={myFun}/> */}
    {/* <Bakery/> */}
    {/* <Toggle /> */}
    <ol>
      <li>{TestComponent}</li>
      <li>{TestComponent1}</li>
      <li>{firstName()}</li>
      <li>{lastName()}</li>
    </ol>
    </>
  );
}

export default App;