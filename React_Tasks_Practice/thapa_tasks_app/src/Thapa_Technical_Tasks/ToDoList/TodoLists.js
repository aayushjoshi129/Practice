import React , {useState} from 'react'
import DeleteIcon from '@material-ui/icons/Delete'

const TodoLists = (props) => {
const [line,setLine] = useState(false)
const cutit = () => {
  setLine(true)
}

  return (
    <>
      <div className="todo_style">
        {/* <i className='fa fa-times' aria-hidden='true' onClick={() => {
          props.onSelect(props.id)
        }} /> */}
        <span onClick={cutit}>
        <DeleteIcon className="deleteIcon"/>
        </span>
      <li style={{textDecoration:line ? "line-through":"none"}} key={props.key}>{props.text}</li>
      </div>
    </>
  )
}

export default TodoLists
