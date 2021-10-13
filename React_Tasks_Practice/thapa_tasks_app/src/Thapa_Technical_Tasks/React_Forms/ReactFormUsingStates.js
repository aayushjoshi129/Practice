import React, { useState } from "react";

const ReactFormUsingStates = () => {
  const [name, setName] = useState({
    fname: "",
    lname: "",
    email: "",
  });

  const changeName = (e) => {
    // const value = e.target.value;
    // const name = e.target.name;

    const { value, name } = e.target;   // object Destructuring

    setName((prevValue) => {
      return {
        ...prevValue, // Usage of Spread Operator containing objects all elements
        [name]: value, // It is Checking that name of the previous attribute if matches with the input field names then it will set it's value to value which is e.target.value
      };
    });
  };

  const onSubmit = (e) => {
    e.preventDefault(); // This will prevent default nature of form tag submit
  };

  var style = {
    width: "100%",
    height: "100vh",
    alignItems: "center",
    position: "absolute",
    top: "50%",
    left: "50%",
    transform: "translate(-50% , -50%)",
    fontSize: "25px",
    cursor: "pointer",
    textTransform: "uppercase",
    backgroundColor: "purple",
    color: "white",
  };

  const style1 = {
    marginLeft: "43%",
  };

  return (
    <>
      <div style={style}>
        <form onSubmit={onSubmit}>
          <h1 style={{ marginLeft: "44%", marginTop: "20%" }}>
            Hello {name.fname} {name.lname} {name.email}
          </h1>
          <input
            type="text"
            onChange={changeName}
            style={style1}
            value={name.fname}
            name="fname"
          />
          <input
            type="text"
            onChange={changeName}
            style={style1}
            value={name.lname}
            name="lname"
          />
          <input
            type="email"
            onChange={changeName}
            style={style1}
            value={name.email}
            name="email"
          />
          <button type="submit">Submit</button>
        </form>
      </div>
    </>
  );
};

export default ReactFormUsingStates;
