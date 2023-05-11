import React, { useEffect,useContext } from 'react'
import { useNavigate } from 'react-router-dom';
import {userContext} from '../App'

const Logout = () => {
  const {state,dispatch} = useContext(userContext)

  const history = useNavigate();

  useEffect(() => {
    fetch('/logout', {
      method: 'GET',
      headers: {
        // Accept: "application/json",
        "Content-Type": "application/json"
      },
      // credentials: "include"
    }).then((res) => {
      dispatch({type:"USER",payload:false});
      history('/login', { replace: true });
              if (!res.status === 200 || !res.status === 304) {
          const error = new Error(res.error);
          throw error;
        }
    }).catch((err)=>{
      console.log(err);
    })
  })

  return (
    <>
      <h1>Logged Out Successfully</h1>
    </>
  )
}

export default Logout;