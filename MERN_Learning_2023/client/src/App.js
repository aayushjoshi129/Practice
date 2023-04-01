import React from 'react'
import {Route,Routes} from 'react-router-dom';
// import 'bootstrap/dist/css/bootstrap.css'
import Navbar from './components/Navbar';
import Home from './components/Home'
import About from './components/About'
import Contact from './components/Contact'
import Login from './components/Login'
import Register from './components/Register'
import css from './App.css'
import NotFound from './components/Not_Found';


const App = () => {
  return (
    <>
    <Navbar/>
    <Routes>
    <Route exact path='/' element={<Home/>}/>
    <Route exact path='/about' element={<About/>}/>
    <Route exact path='contact' element={<Contact/>}/>
    <Route exact path='/login' element={<Login/>}/>
    <Route exact path='/register' element={<Register/>}/>
    <Route path='*' element={<NotFound/>} />
    </Routes>
    
    </>
  )
}

export default App