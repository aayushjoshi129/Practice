import React , {useState , useEffect} from 'react'
import '../Hooks/style.css'

const UseEffect = () => {
  const inintialData = 10;
  const [myNum , setMyNum] = useState(inintialData)
  
  useEffect(() => {
    document.title = `Chats(${myNum})`
  });
  return (
    <>
      <div className="center_div">
        <p>{myNum}</p>
        <div className="button2" onClick={() => setMyNum(myNum + 1)}>
          <span></span>
          <span></span>
          <span></span>
          <span></span>
          Increment
        </div>
        
      </div>
    </>
  )
}

export default UseEffect
