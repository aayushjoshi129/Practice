import React from 'react'
import axios from 'axios';
export default class Post extends React.Component{
  state ={
    getting:[]
  }
  componentDidMount() {
    axios.get('https://jsonplaceholder.typicode.com/posts').then(res => {
      this.setState({getting: res.data});
      // console.log(this.state)
    })
  }
render(){

  return(
    <>
   <ul>{this.state.getting.map(g => <li key={g.id}>{g.title}</li>)}</ul>
    </>
    )
}
}