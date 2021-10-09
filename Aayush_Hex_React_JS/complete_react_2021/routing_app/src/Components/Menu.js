import React from 'react'
import { Link } from "react-router-dom"


const Menu = () => {
  return (
    <>
      <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
        <div class="container-fluid">
          <Link to="/" className="navbar-brand">Car a Life</Link>
          <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
          </button>
          <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav me-auto mb-2 mb-lg-0">
              <li class="nav-item">
                <Link exact to="/home" className="nav-link active">Home</Link>
              </li>
              <li class="nav-item">
                <Link to="/about" className="nav-link">About</Link>
              </li>
              <li class="nav-item">
                <Link to="/contact" className="nav-link">Contact</Link>
              </li>
              <li class="nav-item">
                <Link to="/error" className="nav-link">Error</Link>
              </li>
            </ul>
            <form class="d-flex">
              <input class="form-control me-2" type="search" placeholder="Search" aria-label="Search" />
              <button class="btn btn-outline-success" type="submit">Search</button>
            </form>
          </div>
        </div>
      </nav>
    </>
  )
}

export default Menu
