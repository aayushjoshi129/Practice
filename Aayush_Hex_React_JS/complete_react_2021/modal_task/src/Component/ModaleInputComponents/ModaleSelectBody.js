import React from 'react'
import '../CSS/Modale.css'
class ModaleSelectBody extends React.Component {
  render() {
    return (
      <select id={this.props.id} className="form-select" defaultValue={this.props.materialType} disabled={this.props.access}>
        <option disabled>{this.props.materialType}</option>
        <option >"Hello"</option>
      </select>
    )
  }
}

export default ModaleSelectBody
