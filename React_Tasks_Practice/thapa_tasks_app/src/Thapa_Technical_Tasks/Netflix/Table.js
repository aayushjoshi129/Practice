import React from 'react'
import Users from './Users'
import './table.css'

function Table() {
  return (

    <>
      <h1 className="heading1">Welcome To Fetched Data Using Array Collection In React JS</h1>
      <table>
        <tr>
          <th>Name</th>
          <th>Rating</th>
          <th>Alternative Name</th>
          <th>Object ID</th>
        </tr>
        {Users.map(data => <>
          <tr>
            <td>{data.name}</td>
            <td>{data.rating}</td>
            <td>{data.alternative_name}</td>
            <td>{data.objectID}</td>
          </tr>
        </>)}
      </table>
    </>
  )

}

export default Table