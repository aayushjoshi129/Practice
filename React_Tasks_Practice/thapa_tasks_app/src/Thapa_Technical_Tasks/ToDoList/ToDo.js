import React, { useState } from 'react'
import './todo.css'
import ToDoList from './ToDoList'
import Button from '@material-ui/core/Button'
import AddIcon from '@material-ui/icons/Add'

const Todo = () => {
  const [inputList, setInputList] = useState("")
  const [items, setItems] = useState([])

  const itemEvent = (e) => {
    setInputList(e.target.value)
  }

  const listOfItems = () => {
    setItems([...items, inputList])    // Storing States in an Array using Spread Operator
    setInputList("")
  }


  // Same Function Can be done by this way Also

  // const listOfItems = () => {
  //   setItems((oldItems) => {
  //     return [...oldItems,inputList]
  //   })
  // }


  const deleteItems = (id) => {
    setItems((oldItems) => {
      return oldItems.filter((arrayElem, index) => {
        return index !== id
      })
    })
  }

  return (
    <>
      <div className="main_div">
        <div className="center_div">
          <br />
          <h1>To Do List</h1>
          <br />
          <input type="text" placeholder="Add Items" value={inputList} onChange={itemEvent} />
          {/* <button onClick={listOfItems}>+</button> */}
          <Button className="newBtn" onClick={listOfItems}>
            <AddIcon />
          </Button>
          <ol>
            {items.map((itemVal, index) => {
              return <ToDoList text={itemVal} key={index} id={index} onSelect={deleteItems} />

            })}
            {/* <li>{items}</li> */}
          </ol>
        </div>
      </div>
    </>
  )
}

export default Todo
