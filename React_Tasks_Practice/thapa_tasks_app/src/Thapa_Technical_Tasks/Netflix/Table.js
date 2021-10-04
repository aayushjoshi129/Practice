import React from 'react'
import Users from './Users'

const style = {
  textAlign: "center"
}

function Table() {
  let i = ""
  return (

    <>
      <h1 style={style}>Welcome To Fetched Data Using Array Collection In React JS</h1>
      <table style={{ width: "100%" }}>
        <tr>
          <th>Name</th>
          <th>Rating</th>
          <th>Alternative Name</th>
          <th>Object ID</th>
        </tr>
        {Users.map(data => <>
          <tr>
            <td style={style}>{data.name}</td>
            <td style={style}>{data.rating}</td>
            <td style={style}>{data.alternative_name}</td>
            <td style={style}>{data.objectID}</td>
          </tr>
        </>)}
      </table>
    </>
  )

}

export default Table