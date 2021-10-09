import React from 'react'
import '../CSS/Modale.css'
class ModaleCheckBox extends React.Component {
  render() {
    return (
        <input type="checkbox" id={this.props.id} />
    )
  }
}

export default ModaleCheckBox
