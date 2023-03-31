import React from 'react'
import { NavLink } from 'react-router-dom'

const Register = () => {
  return (
    <>
      <section style={{ backgroundColor: '#eee' }}>
        <div class="container h-100">
          <div class="row d-flex justify-content-center align-items-center h-100">
            <div class="col-lg-20 col-xl-20">
              <div class="card text-black" style={{ borderRadius: '25px' }}>
                <div class="card-body p-md-5">
                  <div class="row justify-content-center">
                    <div class="col-md-10 col-lg-6 col-xl-5 order-2 order-lg-1">

                      <p class="text-center h2 fw-bold mb-1 mx-1 mx-md-1 mt-0">Sign up</p>

                      <form class="mx-1 mx-md-1">

                        <div class="d-flex flex-row align-items-center mb-2">
                          <i class="fas fa-user fa-lg me-3 fa-fw"></i>
                          <div class="form-outline flex-fill mb-0">
                            <label class="form-label" for="form3Example1c">Your Name</label>
                            <input type="text" id="form3Example1c" class="form-control" required />
                          </div>
                        </div>

                        <div class="d-flex flex-row align-items-center mb-2">
                          <i class="fas fa-envelope fa-lg me-3 fa-fw"></i>
                          <div class="form-outline flex-fill mb-0">
                            <label class="form-label" for="form3Example3c">Your Email</label>
                            <input type="email" id="form3Example3c" class="form-control" required />
                          </div>
                        </div>

                        <div class="d-flex flex-row align-items-center mb-2">
                          <i class="fas fa-envelope fa-lg me-3 fa-fw"></i>
                          <div class="form-outline flex-fill mb-0">
                            <label class="form-label" for="form3Example4c">Phone</label>
                            <input type="tel" id="form3Example4c" class="form-control" placeholder="9988776655" pattern="[0-9]{10}" maxLength={10} required />
                          </div>
                        </div>

                        <div class="d-flex flex-row align-items-center mb-2">
                          <i class="fas fa-envelope fa-lg me-3 fa-fw"></i>
                          <div class="form-outline flex-fill mb-0">
                            <label class="form-label" for="form3Example4c">Work</label>
                            <input type="text" id="form3Example4c" class="form-control" required />
                          </div>
                        </div>

                        <div class="d-flex flex-row align-items-center mb-2">
                          <i class="fas fa-lock fa-lg me-3 fa-fw"></i>
                          <div class="form-outline flex-fill mb-0">
                            <label class="form-label" for="form3Example4c">Password</label>
                            <input type="password" id="form3Example4c" class="form-control" required />
                          </div>
                        </div>

                        <div class="d-flex flex-row align-items-center mb-2">
                          <i class="fas fa-key fa-lg me-3 fa-fw"></i>
                          <div class="form-outline flex-fill mb-0">
                            <label class="form-label" for="form3Example4cd">Confirm password</label>
                            <input type="password" id="form3Example4cd" class="form-control" required />
                          </div>
                        </div>

                        <div class="form-check d-flex mb-2">
                          <input class="form-check-input me-2" type="checkbox" value="" id="form2Example3c" />
                          <label class="form-check-label" for="form2Example3">
                            I agree all statements in <a href="#!">Terms of service</a>
                          </label>
                        </div>

                        <NavLink className="nav-link mb-2" to="/login">Already a Member, Login</NavLink>

                        <div class="d-flex justify-content-center mx-2 mb-2 mb-lg-2">
                          <button type="button" class="btn btn-primary btn-lg">Register</button>
                        </div>

                      </form>

                    </div>
                    <div class="col-md-10 col-lg-6 col-xl-7 d-flex align-items-center order-1 order-lg-2">

                      <img src="https://mdbcdn.b-cdn.net/img/Photos/new-templates/bootstrap-registration/draw1.webp"
                        class="img-fluid" alt="Sample image" />

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

export default Register