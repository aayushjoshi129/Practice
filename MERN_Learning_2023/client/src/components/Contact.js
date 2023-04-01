import React, { useState } from 'react';
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
  const [formData, setFormData] = useState({
    name: '',
    email: '',
    subject: '',
    message: '',
  });

  const handleChange = (e) => {
    const { name, value } = e.target;
    setFormData({ ...formData, [name]: value });
  };

  const handleSubmit = (e) => {
    e.preventDefault();
    // Add code to submit form data here
  };

  return (
    <form className="contact-form" onSubmit={handleSubmit}>
      <h2>Contact Us</h2>
      <div className="form-group_contact">
        <label htmlFor="name">Name</label>
        <input type="text" id="name" name="name" value={formData.name} onChange={handleChange} required />
      </div>
      <div className="form-group_contact">
        <label htmlFor="email">Email</label>
        <input type="email" id="email" name="email" value={formData.email} onChange={handleChange} required />
      </div>
      <div className="form-group_contact">
        <label htmlFor="subject">Subject</label>
        <input type="text" id="subject" name="subject" value={formData.subject} onChange={handleChange} required />
      </div>
      <div className="form-group_contact">
        <label htmlFor="message">Message</label>
        <textarea id="message" name="message" value={formData.message} onChange={handleChange} required></textarea>
      </div>
      <button type="submit">Send</button>
    </form>
  );
};

export default Contact;

