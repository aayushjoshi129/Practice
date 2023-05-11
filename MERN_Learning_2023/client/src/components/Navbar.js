import { React, useContext } from 'react'
// import 'bootstrap/dist/css/bootstrap.min.css';
import { NavLink } from 'react-router-dom';
import logo_1 from './images/logo_homepage_1.png';
// import  logo  from './images/logo_homepage.png';
import '../css/Navbar.css';
import { userContext } from '../App'


// const Navbar = () => {
//     return (
//         <>
//             <nav className="navbar navbar-expand-lg bg-body-tertiary bg" >
//                 <div className="container-fluid">
//                     <a className="navbar-brand" to="#">
//                         <img src={logo} alt='Logo' id='nav-logo'></img>
//                     </a>
//                     <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
//                         <span className="navbar-toggler-icon"></span>
//                     </button>
//                     <div className="collapse navbar-collapse " id="navbarSupportedContent">
//                         {/* ms - margin start instead of margin left */}
//                         <ul className="navbar-nav ms-auto"> 
//                             <li className="nav-item active">
//                                 <NavLink className="nav-link" to="/">Home</NavLink>
//                             </li>
//                             <li className="nav-item">
//                                 <NavLink className="nav-link" to="/about">About</NavLink>
//                             </li>
//                             <li className="nav-item">
//                                 <NavLink className="nav-link" to="/contact">Contact</NavLink>
//                             </li>
//                             <li className="nav-item">
//                                 <NavLink className="nav-link" to="/login">Login</NavLink>
//                             </li>
//                             <li className="nav-item">
//                                 <NavLink className="nav-link" to="/register">Register</NavLink>
//                             </li>
//                         </ul>
//                     </div>
//                 </div>
//             </nav>
//         </>
//     )
// }



const Navbar = () => {
  const { state, dispatch } = useContext(userContext);

  const RenderMenu = () => {
    if (state) {
      return (
        <>
          <li>
            <NavLink to="/">Home</NavLink>
          </li>
          <li>
            <NavLink to="/about">About</NavLink>
          </li>
          <li>
            <NavLink to="/contact">Contact</NavLink>
          </li>
          <li>
            <NavLink to="/logout">Logout</NavLink>
          </li>
        </>
      )
    } else {
      return (
        <>
          <li>
            <NavLink to="/">Home</NavLink>
          </li>
          <li>
            <NavLink to="/about">About</NavLink>
          </li>
          <li>
            <NavLink to="/contact">Contact</NavLink>
          </li>
          <li>
            <NavLink to="/login">Login</NavLink>
          </li>
          <li>
            <NavLink to="/register">Register</NavLink>
          </li>
          <li>
          </li>
        </>
      )
    }
  }


  return (
    <>
    <nav className="navbar">
      <div className="navbar-left">
        <NavLink to="/">
          <img src={logo_1} alt="Logo" id='nav-logo' />
        </NavLink>
      </div>
      <div className="navbar-right">
        <ul>
          {/* <li>
            <NavLink to="/">Home</NavLink>
          </li>
          <li>
            <NavLink to="/about">About</NavLink>
          </li>
          <li>
            <NavLink to="/contact">Contact</NavLink>
          </li>
          <li>
            <NavLink to="/login">Login</NavLink>
          </li>
          <li>
            <NavLink to="/register">Register</NavLink>
          </li>
          <li>
            <NavLink to="/logout">Logout</NavLink>
          </li> */}

          <RenderMenu />
        </ul>
      </div>
    </nav>
    </>
  );
};

export default Navbar;

