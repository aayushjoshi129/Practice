import React from 'react'
import axios from 'axios'

class ApiData extends React.Component {
  state = {
      data:[],
    }

  componentDidMount(){
    axios.get('http://localhost:8080/Connection.Php')
    .then(resp =>{ this.setState({data:resp.data});
    console.log(this.state.data);
  })
  }

  render() {
    
    return (
      <>
      
      <ul>
        {/* {this.state.data.map((p,index) => <li key={index}>{p}</li>)} */}
        {this.state.data.map((p,index) => <li key={index}>{p.part_name}</li>)}
      </ul>
      </>
    )
  }

}

export default ApiData;