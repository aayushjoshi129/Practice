import React, { useState, useEffect } from 'react';
import '../css/Contact.css';

// const Contact = () => {
//   return (
//     <>
//       <section class="mb-4">

//         <h2 class="h1-responsive font-weight-bold text-center my-4">Contact us</h2>
//         <p class="text-center w-responsive mx-auto mb-5">Do you have any questions? Please do not hesitate to contact us directly. Our team will come back to you within
//           a matter of hours to help you.</p>

//         <div class="row">

//           <div class="col-md-9 mb-md-0 mb-5">
//             <form id="contact-form" name="contact-form" action="mail.php" method="POST">

//               <div class="row">

//                 <div class="col-md-6">
//                   <div class="md-form mb-0">
//                     <input type="text" id="name" name="name" class="form-control" />
//                     <label for="name" class="">Your name</label>
//                   </div>
//                 </div>

//                 <div class="col-md-6">
//                   <div class="md-form mb-0">
//                     <input type="text" id="email" name="email" class="form-control" />
//                     <label for="email" class="">Your email</label>
//                   </div>
//                 </div>

//               </div>

//               <div class="row">
//                 <div class="col-md-12">
//                   <div class="md-form mb-0">
//                     <input type="text" id="subject" name="subject" class="form-control" />
//                     <label for="subject" class="">Subject</label>
//                   </div>
//                 </div>
//               </div>

//               <div class="row">

//                 <div class="col-md-12">

//                   <div class="md-form">
//                     <textarea type="text" id="message" name="message" rows="2" class="form-control md-textarea"></textarea>
//                     <label for="message">Your message</label>
//                   </div>

//                 </div>
//               </div>

//             </form>

//             <div class="text-center text-md-left">
//               <a class="btn btn-primary" onclick="document.getElementById('contact-form').submit();">Send</a>
//             </div>
//             <div class="status"></div>
//           </div>

//           <div class="col-md-3 text-center">
//             <ul class="list-unstyled mb-0">
//               <li><i class="fas fa-map-marker-alt fa-2x"></i>
//                 <p>Faridabad, Haryana , 121002 , INDIA</p>
//               </li>

//               <li><i class="fas fa-phone mt-4 fa-2x"></i>
//                 <p>+91-9876543210</p>
//               </li>

//               <li><i class="fas fa-envelope mt-4 fa-2x"></i>
//                 <a href='https://joshiunplugged.dorik.io/' target="_blank">joshiunplugged@dorik.io</a>
//               </li>
//             </ul>
//           </div>

//         </div>

//       </section>

//     </>
//   )
// }


const Contact = () => {

  const [users, setUsers] = useState([])

  const fetchUserData = async () => {
    const res = await fetch('/getData', {
      method: 'GET',
      headers: {
        "Content-Type": "application/json"
      },
    });

    const data = await res.json();
    setUsers({ ...users, name: data.name, email: data.email, phone: data.phone });

  }

  useEffect(() => {
    fetchUserData()
  }, [])

  // const [formData, setFormData] = useState({
  //   name: '',
  //   email: '',
  //   phone: '',
  //   subject: '',
  //   message: '',
  // });

  const handleChange = (e) => {
    const { name, value } = e.target;
    setUsers({ ...users, [name]: value });
  };

  //sending data to DB
  const handleSend = async (e) => {
    e.preventDefault();
    const { name, phone, email, subject, message } = users;
    const res = await fetch('/contact', {
      method: 'POST',
      headers:
      {
        "Content-Type": "application/json"
      },
      body: JSON.stringify(({
        name, email, phone, message, subject
      }))
    }
    )
    const data = await res.json();
    if (!data) {
      console.log("Not Send");
    } else {
      alert('Send Successfully');
      setUsers({ ...users, message: "" })
    }
  };



  return (
    <form className="contact-form" method='POST'>
      <h2>Contact Us</h2>
      <div className="form-group_contact">
        <label htmlFor="name">Name</label>
        <input type="text" id="name" name="name" value={users.name} onChange={handleChange} required />
      </div>
      <div className="form-group_contact">
        <label htmlFor="email">Email</label>
        <input type="email" id="email" name="email" value={users.email} onChange={handleChange} required />
      </div>
      <div className="form-group_contact">
        <label htmlFor="phone">Phone</label>
        <input type="tel" id="phone" name="phone" value={users.phone} onChange={handleChange} required />
      </div>
      <div className="form-group_contact">
        <label htmlFor="subject">Subject</label>
        <input type="text" id="subject" name="subject" value={users.subject} onChange={handleChange} required />
      </div>
      <div className="form-group_contact">
        <label htmlFor="message">Message</label>
        <input type="text" id="message" name="message" value={users.message} onChange={handleChange} required />
      </div>
      <button type="submit" className="button_register" onClick={handleSend}>Send</button>
    </form>
  );
};

export default Contact;

