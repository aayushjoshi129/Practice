import React , {useState} from 'react'

const DigitalClock = () => {

  let time = new Date().toLocaleTimeString();

  const [ctime,setCtime] = useState(time);

  const NewTime = () =>{
    time = new Date().toLocaleTimeString();
    setCtime(time)
  }

  setInterval(NewTime,1000);   // sets value after every partiular interval (takes callback function and interval as parameters)

  return (
    <>
  <h1 style={{textAlign:'center'}}>{time}</h1>
    </>
  )
}

export default DigitalClock