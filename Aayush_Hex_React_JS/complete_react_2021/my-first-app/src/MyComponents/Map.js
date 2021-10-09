import React from 'react';   
import ReactDOM from 'react-dom';   
  
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
// export default App;  
export default NameList;