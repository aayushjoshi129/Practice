import React from 'react'
import Restaurant from './components/basics/Restaurant'
import UseState  from './components/Hooks/useState'
import UseEffect from './components/Hooks/useEffect'
import UseReducer from './components/Hooks/useReducer'
import Todo from './components/todoReact/todo'
import Temp from './components/weather/Temp'

const App = () => {                 // This is React Arrow Function Component with Export (rafce) (fat Arrow)
  return (
    <>
    {/* <Restaurant/> */}
    {/* <UseState /> */}
    {/* <UseEffect /> */}
    {/* <UseReducer /> */}
    {/* <Todo /> */}
    <Temp/>
    </>
  )
}

export default App
