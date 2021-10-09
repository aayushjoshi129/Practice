import React from 'react'
import axios from 'axios'
const params = {name:"aayush" , age:21}

// AXIOS GET AND POST METHODS

// axios.get('https://jsonplaceholder.typicode.com/posts').then(resp => console.log(resp));
// axios.get('https://jsonplaceholder.typicode.com/posts',{params:{id:67}}).then(resp => console.log(resp));
// axios.post('https://jsonplaceholder.typicode.com/posts', {params}).then(resp => console.log(resp));


  // Performing multiple concurrent requests

  // function getUserAccount() {            
  //   return axios.get('https://jsonplaceholder.typicode.com/posts');
  // }
  
  // function getUserPermissions() {
  //   return axios.get('https://jsonplaceholder.typicode.com/users');
  // }
  
  // Promise.all([getUserAccount(), getUserPermissions()])
  //   .then(function (results) {
  //     const acct = results[0];
  //     const perm = results[1];
  //     console.log(acct,perm)
  //   });


  // GET METHOD USING COMPONENTDIDMOUNT IN CLASS

export default class Post extends React.Component{
  state = {
    posts: [],
  };

  componentDidMount() {
    axios.get('https://jsonplaceholder.typicode.com/posts').then(res => {
      this.setState({posts: res.data});
      // console.log(this.state)
    })
  }

    // POST USING AXIOS 



  
//   componentDidMount() {
//     // Simple POST request with a JSON body using axios
//     const article = { title: 'React POST Request Example' };
//     axios.post('https://reqres.in/api/articles', article)
//         .then(response => console.log(response) this.setState({ articleId: response.data.id }));
        
// }

  render() {

    return (
  <>
    <h1 style={{textAlign:'center'}}>Fetched Using Axios</h1>
    <ul>{this.state.posts.map(post => <li key={post.id}>{post.title}</li>)}</ul>
    <h2>{this.state.posts.length}</h2>
    
  </>
    )
  }

}

