import React from 'react'

const SlotGame = (props) =>{
  return (
    <>
      <h2 style={props.style}>{props.x===props.y && props.y===props.z ? `Matched ${props.x} ${props.y} ${props.z} ` : `Not Matched ${props.x} ${props.y} ${props.z} `}</h2>
    </>
  )
}

export default SlotGame