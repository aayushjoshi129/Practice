import React, { useState, useEffect } from "react";
import "./style.css";

// Fetching Data From Local Storage

const getLocalData = () => {
  const lists = localStorage.getItem("mytodolist");
  if (lists) {
    return JSON.parse(lists); // Converting data from String to Array
  } else {
    return [];
  }
};

const Todo = () => {
  const [inputData, setInputData] = useState("");
  const [items, setItems] = useState(getLocalData());
  const [isEditItem, setIsEditItem] = useState("");
  const [toggleButton, setToggleButton] = useState(false);

  // Adding the addItems Function

  const addItem = () => {
    if (!inputData) {
      alert("Please fill the data");
    }
    else if(inputData && toggleButton){
      setItems(
        items.map((curElem) => {
          if (curElem.id === isEditItem){
            return {...curElem,name:inputData}
          }
          return curElem;
        })
      );

      setInputData('');
      setIsEditItem(null);
      setToggleButton(false);
    }
    else {
      const myNewInputData = {
        id: new Date().getTime().toString(),
        name: inputData,
      };
      setItems([...items, myNewInputData]);
      setInputData("");
    }
  };

  // Adding the editItems Function

  const editItem = (index) => {
    const item_todo_edited = items.find((curElem) => {
      return curElem.id === index;
    });

    setInputData(item_todo_edited.name);
    setIsEditItem(index);
    setToggleButton(true);
  };

  // How To Delete Item

  const deleteItem = (index) => {
    const updatedItem = items.filter((curElem) => {
      return curElem.id !== index;
    });
    setItems(updatedItem);
  };

  // How to Remove All the Elements

  const removeAll = () => {
    setItems([]);
  };

  // Adding Local Storage

  useEffect(() => {
    localStorage.setItem("mytodolist", JSON.stringify(items)); // Converting data from Array to String
  }, [items]);

  return (
    <>
      <div className="main-div">
        <div className="child-div">
          <figure>
            <img src="./images/todo.svg" alt="Todo Logo" />
            <figcaption>Add Your List Here 😁 </figcaption>
          </figure>
          <div className="addItems">
            <input
              type="text"
              placeholder="✍ Add Items Here.."
              className="form-control"
              value={inputData}
              onChange={(event) => setInputData(event.target.value)}
            />
            {toggleButton ? 
              <i className="far fa-edit add-btn" onClick={addItem}></i>
             : 
              <i className="fa fa-plus add-btn" onClick={addItem}></i>
            }

          </div>
          {/* show our items */}
          <div className="showItems">
            {items.map((curElem) => {
              return (
                <div className="eachItem" key={curElem.id}>
                  <h3>
                    {curElem.name} {console.log(curElem)}
                  </h3>
                  <div className="todo-btn">
                    <i
                      className="far fa-edit add-btn"
                      onClick={() => {
                        editItem(curElem.id);
                      }}
                    ></i>
                    <i
                      className="far fa-trash-alt add-btn"
                      onClick={() => {
                        deleteItem(curElem.id);
                      }}
                    ></i>
                  </div>
                </div>
              );
            })}
          </div>
          <div className="showItems">
            <button
              className="btn effect04"
              data-sm-link-text="Remove All"
              onClick={removeAll}
            >
              <span>Check List</span>
            </button>
          </div>
        </div>
      </div>
    </>
  );
};

export default Todo;
