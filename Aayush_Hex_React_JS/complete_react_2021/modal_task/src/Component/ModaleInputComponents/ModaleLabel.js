import React from 'react'
import '../CSS/Modale.css'
class ModaleLabel extends React.Component {
  render() {
    return (
      <label htmlFor={this.props.name} className="form-label" style={{ paddingTop: "7px", fontWeight: "bold" }}>{this.props.label}</label>
    )
  }
}

export default ModaleLabel
