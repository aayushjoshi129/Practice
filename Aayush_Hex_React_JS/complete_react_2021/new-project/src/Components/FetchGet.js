import React from 'react'

export default class FetchGet extends React.Component{
  state = {
    users: [],
  }

async  componentDidMount(){
    let url = 'https://jsonplaceholder.typicode.com/users'
    let aayush = await fetch(url).then(response => response.json()).then(resp => {
      this.setState({
        users: resp
      })
    })
  }

  render(){
    return (
    <>
    {this.state.users.map((s) => <li>{JSON.stringify(s.name)}</li>)}
    </>
    )
  }

}

