import React from 'react'
import { NavLink } from 'react-router-dom'

const Login = () => {
  return (
    <>

      <section style={{ backgroundColor: '#eee' }}>
        <div className="container h-100">
          <div className="row d-flex justify-content-center align-items-center h-100">
            <div className="col-lg-20 col-xl-20">
              <div className="card text-black" style={{ borderRadius: '25px' }}>
                <div className="card-body p-md-5">
                  <div className="row justify-content-center">
                    <div className="col-md-10 col-lg-6 col-xl-5 order-2 order-lg-1">

                      <p className="text-center h2 fw-bold mb-1 mx-1 mx-md-1 mt-0">Login</p>

                      <form className="mx-1 mx-md-1">

                        <div className="d-flex flex-row align-items-center mb-2">
                          <i className="fas fa-envelope fa-lg me-3 fa-fw"></i>
                          <div className="form-outline flex-fill mb-0">
                            <label className="form-label" for="form3Example3c">Your Email</label>
                            <input type="email" id="form3Example3c" className="form-control" required />
                          </div>
                        </div>




                        <div className="d-flex flex-row align-items-center mb-2">
                          <i className="fas fa-lock fa-lg me-3 fa-fw"></i>
                          <div className="form-outline flex-fill mb-0">
                            <label className="form-label" for="form3Example4c">Password</label>
                            <input type="password" id="form3Example4c" className="form-control" required />
                          </div>
                        </div>


                        <div className="form-check d-flex mb-2">
                          <input className="form-check-input me-2" type="checkbox" value="" id="form2Example3c" />
                          <label className="form-check-label" for="form2Example3">
                            I agree all statements in <a href="#!">Terms of service</a>
                          </label>
                        </div>

                        <NavLink className="nav-link mb-2" to="/register">Create an Account</NavLink>


                        <div className="d-flex mx-2 mb-2 mb-lg-2">
                          <button type="button" className="btn btn-primary btn-md">Login</button>
                        </div>

                      </form>

                    </div>
                    <div className="col-md-10 col-lg-6 col-xl-7 d-flex align-items-center order-1 order-lg-2">

                      <img src="https://mdbcdn.b-cdn.net/img/Photos/new-templates/bootstrap-registration/draw1.webp"
                        className="img-fluid" alt="Sample image" />

                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </section>
    </>
  )
}

export default Login