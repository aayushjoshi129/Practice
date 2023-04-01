import React from 'react';
import '../css/About.css';

const About = () => {
  const user = {
    id: 123,
    name: "John Doe",
    email: "johndoe@example.com",
    profession: "Web Developer",
    phone: "+1 1234567890",
    rankings: {
      overall: 4.5,
      skills: 4,
      communication: 5,
      reliability: 5
    },
    socialMediaLinks: {
      facebook: "https://www.facebook.com/johndoe",
      twitter: "https://www.twitter.com/johndoe",
      linkedin: "https://www.linkedin.com/in/johndoe"
    },
    displayPicture: "https://c.ndtvimg.com/2021-07/g6i8dukg_ms-dhoni-new-haircut_625x300_30_July_21.jpg"
  };

  return (
    <div className="container_about">
      <h2 className="title_about">About Me</h2>
      <div className="card_about">
        <img src={user.displayPicture} alt="User" className="image_about" />
        <div className="card-content_about">
          <h2 className="card-title_about">{user.name}</h2>
          <p><strong>ID:</strong> {user.id}</p>
          <p><strong>Email:</strong> {user.email}</p>
          <p><strong>Profession:</strong> {user.profession}</p>
          <p><strong>Phone:</strong> {user.phone}</p>
          <div className="rankings_about">
            <h3>Rankings:</h3>
            <ul>
              <li>Overall: {user.rankings.overall}</li>
              <li>Skills: {user.rankings.skills}</li>
              <li>Communication: {user.rankings.communication}</li>
              <li>Reliability: {user.rankings.reliability}</li>
            </ul>
          </div>
          <div className="social-media_about">
            <h3>Social Media:</h3>
            <ul>
              <li><a href={user.socialMediaLinks.facebook}>Facebook</a></li>
              <li><a href={user.socialMediaLinks.twitter}>Twitter</a></li>
              <li><a href={user.socialMediaLinks.linkedin}>LinkedIn</a></li>
            </ul>
          </div>
        </div>
      </div>
    </div>


  );
};

export default About;
