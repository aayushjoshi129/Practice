import React, { useState,useContext } from 'react'
import { NavLink, useNavigate } from 'react-router-dom';
import '../css/Login.css';
import {userContext} from '../App'
// const Login = () => {
//   return (
//     <>

//       <section style={{ backgroundColor: '#eee' }}>
//         <div className="container h-100">
//           <div className="row d-flex justify-content-center align-items-center h-100">
//             <div className="col-lg-20 col-xl-20">
//               <div className="card text-black" style={{ borderRadius: '25px' }}>
//                 <div className="card-body p-md-5">
//                   <div className="row justify-content-center">
//                     <div className="col-md-10 col-lg-6 col-xl-5 order-2 order-lg-1">

//                       <p className="text-center h2 fw-bold mb-1 mx-1 mx-md-1 mt-0">Login</p>

//                       <form className="mx-1 mx-md-1">

//                         <div className="d-flex flex-row align-items-center mb-2">
//                           <i className="fas fa-envelope fa-lg me-3 fa-fw"></i>
//                           <div className="form-outline flex-fill mb-0">
//                             <label className="form-label" for="form3Example3c">Your Email</label>
//                             <input type="email" id="form3Example3c" className="form-control" required />
//                           </div>
//                         </div>




//                         <div className="d-flex flex-row align-items-center mb-2">
//                           <i className="fas fa-lock fa-lg me-3 fa-fw"></i>
//                           <div className="form-outline flex-fill mb-0">
//                             <label className="form-label" for="form3Example4c">Password</label>
//                             <input type="password" id="form3Example4c" className="form-control" required />
//                           </div>
//                         </div>


//                         <div className="form-check d-flex mb-2">
//                           <input className="form-check-input me-2" type="checkbox" value="" id="form2Example3c" />
//                           <label className="form-check-label" for="form2Example3">
//                             I agree all statements in <a href="#!">Terms of service</a>
//                           </label>
//                         </div>

//                         <NavLink className="nav-link mb-2" to="/register">Create an Account</NavLink>


//                         <div className="d-flex mx-2 mb-2 mb-lg-2">
//                           <button type="button" className="btn btn-primary btn-md">Login</button>
//                         </div>

//                       </form>

//                     </div>
//                     <div className="col-md-10 col-lg-6 col-xl-7 d-flex align-items-center order-1 order-lg-2">

//                       <img src="https://mdbcdn.b-cdn.net/img/Photos/new-templates/bootstrap-registration/draw1.webp"
//                         className="img-fluid" alt="Sample image" />

//                     </div>
//                   </div>
//                 </div>
//               </div>
//             </div>
//           </div>
//         </div>
//       </section>
//     </>
//   )
// }


const Login = () => {

  const {state,dispatch} = useContext(userContext)

  const history = useNavigate();

  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');

  const handleSubmit = async (e) => {
    e.preventDefault();
    const res = await fetch('/login', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify(({
        email, password
      }))
    })
    const data = res.json();
    if (res.status === 401 || res.status === 422 || !data) {
      window.alert('Login Failed');
      console.log('Login Failed');
    } else {
      dispatch({type:"USER",payload:true});
      window.alert('Logged In Successfully');
      console.log('Logged In Successfully');
      history('/', { replace: true });
    }
  };

  return (
    <div className="container_login">
      <h1 className="title_login">Log In</h1>
      <form onSubmit={handleSubmit} method='POST' className="form_login">
        <label htmlFor="email" className="label_login">Email</label>
        <input
          type="email"
          name="email"
          id="email"
          className="input_login"
          placeholder="Enter your email"
          value={email}
          onChange={(e) => setEmail(e.target.value)}
          required
        />
        <label htmlFor="password" className="label_login">Password</label>
        <input
          type="password"
          name="password"
          id="password"
          className="input_login"
          placeholder="Enter your password"
          value={password}
          onChange={(e) => setPassword(e.target.value)}
          required
        />
        <button type="submit" className="button_login" onClick={handleSubmit}>Log In</button>
      </form>
      <p className="text">
        Don't have an account?{' '}
        <NavLink to="/register" className="link_login">Sign up</NavLink>
      </p>
    </div>
  );
}

export default Login