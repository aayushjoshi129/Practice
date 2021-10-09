import React from 'react'
import './CSS/Modale.css'
class ModaleFooterButton extends React.Component {
  render() {
    return (
      <button type="button" onClick={this.props.click} className="btn btn-success" style={{ width: "100px" }} disabled={this.props.access}>{this.props.title}</button>
    )
  }
}

export default ModaleFooterButton
