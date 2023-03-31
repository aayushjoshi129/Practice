import React from 'react'
import {Route,Routes} from 'react-router-dom';
import Navbar from './components/Navbar';
import Home from './components/Home'
import About from './components/About'
import Contact from './components/Contact'
import Login from './components/Login'
import Register from './components/Register'
import css from './App.css'


const App = () => {
  return (
    <>
    <Navbar/>
    <Routes>
    <Route exact path='/' element={<Home/>}/>
    <Route path='/about' element={<About/>}/>
    <Route path='contact' element={<Contact/>}/>
    <Route path='/login' element={<Login/>}/>
    <Route path='/register' element={<Register/>}/>
    </Routes>
    
    </>
  )
}

export default App