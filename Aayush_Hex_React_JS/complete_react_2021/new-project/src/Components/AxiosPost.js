import React from 'react'
import axios from 'axios';
export default class Post extends React.Component{
  state ={
    getting:[]
  }
componentDidMount() {

  let url = 'https://jsonplaceholder.typicode.com/posts';
  let obj = {
    method:"POST",
    headers:{},
    url:url,
    data:{
      name:"Rohan",
      age:21,
    }
  }

  let abcd = axios(url,obj)
  .then(resp=> this.setState({getting: resp.data}))
}
render(){
  return <h2>{this.state.getting}</h2>;
}
}