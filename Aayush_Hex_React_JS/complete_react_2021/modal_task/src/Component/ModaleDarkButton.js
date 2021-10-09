import React from 'react'
import './CSS/Modale.css'
class ModaleDarkButton extends React.Component {
  render() {
    return (
      <button type="button" onClick={() => alert("Function Allowed In Add Mode")} className={this.props.class}>...</button>
    )
  }
}

export default ModaleDarkButton
