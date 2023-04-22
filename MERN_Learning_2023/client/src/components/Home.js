import React from 'react'
import { useState, useEffect } from 'react';

const Home = () => {

  const [users, setUsers] = useState('');
  const [show, setShow] = useState(false);

  const fetchUserData = async () => {
    const res = await fetch('/getData', {
      method: 'GET',
      headers: {
        "Content-Type": "application/json"
      },
    });

    const data = await res.json();
    setUsers(data);
    setShow(true);

  }

  useEffect(() => {
    fetchUserData()
  }, [])

  return (
    <>
      <div className='center home-bg'>
        <h2 className='pt-5 fw-bold'>WELCOME</h2>
        <h1 className='pt-5 fw-bold forName'>{users.name}</h1>
          <h1 className='pt-5 fw-bold h1back'> {show ? 'Happy to see you Back' : 'We Are the MERN Developer'}</h1>
      </div>

    </>
  )
}

export default Home