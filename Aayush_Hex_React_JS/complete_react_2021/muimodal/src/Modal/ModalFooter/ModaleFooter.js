import React from 'react'
class ModaleFooter extends React.Component {
  render() {
    return (
      <button type="button" className="btn btn-success" style={{ width: "100px" }} disabled={this.props.access}>{this.props.title}</button>
    )
  }
}

export default ModaleFooter
