import React, { createContext, useReducer } from 'react'
import { Route, Routes } from 'react-router-dom';
// import 'bootstrap/dist/css/bootstrap.css'
import Navbar from './components/Navbar';
import Home from './components/Home'
import About from './components/About'
import Contact from './components/Contact'
import Login from './components/Login'
import Register from './components/Register'
import Logout from './components/Logout'
import css from './App.css'
import NotFound from './components/Not_Found';
import {reducer,initialState} from './reducer/useReducer';

// 1. ContextAPI
export const userContext = createContext();
const Routing = () => {
  return (
    <>
    <Navbar />
    <Routes>
      <Route exact path='/' element={<Home />} />
      <Route exact path='/about' element={<About />} />
      <Route exact path='contact' element={<Contact />} />
      <Route exact path='/login' element={<Login />} />
      <Route exact path='/register' element={<Register />} />
      <Route exact path='/logout' element={<Logout />} />
      <Route path='*' element={<NotFound />} />
    </Routes>
    </>
  )
}

const App = () => {
  const [state, dispatch] = useReducer(reducer,initialState)
  
  return (
    <>
      <userContext.Provider value={{state,dispatch}}>
      <Routing/>
      </userContext.Provider>
    </>
  )
}

export default App