import React from 'react';
import { NavLink } from 'react-router-dom';
import '../css/Not_Found.css'

const NotFound = () => {
  return (
    <div className='not_found'>
      <h1>404 Not Found</h1>
      <p>Oops! The page you are looking for does not exist.</p>
      <NavLink to="/">
        <button type="button" className="button_login">Back to Homepage</button>
      </NavLink>

    </div>
  );
};

export default NotFound
