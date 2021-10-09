import React from 'react'       // After React 17.0 Version there is no need to write this.

const Basic = () => {             // This is React Arrow Function Component with Export (rafce) (fat Arrow)
  return (
    <div>
      <h1>Hello World</h1>
    </div>
  );
};

// How React Actually Look a Normal Function

// const App = () => {
//   return React.createElement('h1','any_props','data like Hello World')
// }

export default Basic;
