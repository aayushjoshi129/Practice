import React from 'react';
import ReactDOM from 'react-dom';
import App from './App';
// import Basic from './Practice/basic'

ReactDOM.render(
  <React.StrictMode>
    <App />
    {/* <Basic />               using nested basic component from Practice folder */}
  </React.StrictMode>,
  document.getElementById('root')
);
