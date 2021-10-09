import React from 'react'

export default class FetchPost extends React.Component{
  state = {
    users: [],
  }
  
async  componentDidMount(){

  let obj = {
    method:"POST",
   headers: {
     'Content-type':'application/json'
   },
    body:JSON.stringify({
      name:"Shubham",
      class:"B.Com",
    })
  }

    let url = 'https://jsonplaceholder.typicode.com/users'
    let aayush = await fetch(url,obj)
    let nm = aayush && aayush.ok
    if (nm){
      let data = await aayush.json()
      console.log(data);
    }
    else{
      console.log("Data Not sent successfully")
    }
  }

  render(){
    return (
    <>
    {/* {this.state.users.map((s) => <li>{JSON.stringify(s.name)}</li>)} */}
    </>
    )
  }

}

