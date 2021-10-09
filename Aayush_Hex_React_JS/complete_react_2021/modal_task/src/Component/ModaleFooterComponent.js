import React from 'react'
import './CSS/Modale.css'
import ModaleFooterButton from './ModaleFooterButton'
import axios from 'axios'
class ModaleFooterComponent extends React.Component {
  callAxios(){
    axios.get('https://jsonplaceholder.typicode.com/posts').then(resp => {console.log(resp.data)});
  }
  render() {
    return (
      <div className="row mb-3">
          <div className="col">
            <ModaleFooterButton title="Previous" />
          </div>
          <div className="col" style={{textAlign:"right"}}>
            <ModaleFooterButton title="Next" click={this.callAxios}/>
          </div>
      </div>
    )
  }
}

export default ModaleFooterComponent


