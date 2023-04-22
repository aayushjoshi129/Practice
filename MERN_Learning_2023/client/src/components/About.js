import React, { useState, useEffect } from 'react';
// import { useNavigate } from 'react-router-dom';
import '../css/About.css';

const About = () => {



  // const history = useNavigate();
  const [users, setUsers] = useState([])

  const fetchUserData = async () => {
    const res = await fetch('/about', {
      method: 'GET',
      headers: {
        Accept: "application/json",
        "Content-Type": "application/json"
      },
      credentials: "include"
    });

    const data = await res.json();
    setUsers(data);

  }

  useEffect(() => {
    fetchUserData()
  }, [])


  // useEffect(() => {
  // const callAboutPage = async () => {
  //     try {
  //       const res = await fetch('/about', {
  //         method: 'GET',
  //         headers: {
  //           Accept: "application/json",
  //           "Content-Type": "application/json"
  //         },
  //         credentials: "include"
  //       });

  //       const data = await res.json();
  //       console.log(data);
  //       setUserData(data);

  //       if (!res.status === 200 || !res.status === 304) {
  //         const error = new Error(res.error);
  //         throw error;
  //       }
  //       return userData;

  //     } catch (err) {
  //       console.log(err);
  //       history('/login', { replace: true });
  //     }
  //   }
  //   callAboutPage();
  //   // eslint-disable-next-line
  // }, []);

  console.log(users);

  const user = {
    rankings: {
      overall: 4.5,
      skills: 4,
      communication: 5,
      reliability: 5
    },
    socialMediaLinks: {
      facebook: `https://www.facebook.com/{userData.name.replaceAll(/\s/g,'')}`,
      twitter: `https://www.twitter.com/{userData.name.replaceAll(/\s/g,'')}`,
      linkedin: `https://www.linkedin.com/in/{userData.name.replaceAll(/\s/g,'')}`
    },
    displayPicture: "https://c.ndtvimg.com/2021-07/g6i8dukg_ms-dhoni-new-haircut_625x300_30_July_21.jpg"
  };

  return (
    <div className="container_about" >
      <h2 className="title_about">About Me</h2>
      <form method='GET'>
        <div className="card_about">
          <img src={user.displayPicture} alt="User" className="image_about" />
          <div className="card-content_about">
            <h2 className="card-title_about">{users.name}</h2>
            <p><strong>ID:</strong> {users._id}</p>
            <p><strong>Email:</strong> {users.email}</p>
            <p><strong>Profession:</strong> {users.work}</p>
            <p><strong>Phone:</strong> {users.phone}</p>
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
      </form>
    </div>


  );
};

export default About;
