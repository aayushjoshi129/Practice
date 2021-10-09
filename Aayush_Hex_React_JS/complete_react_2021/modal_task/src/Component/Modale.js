import React from 'react'
import "./CSS/Modale.css"
import ModaleFormat from './ModaleFormat'
import ModaleHeader from './ModaleHeader'
import { Modal, Button } from 'react-bootstrap'
import ModaleFooterComponent from './ModaleFooterComponent'
// import ModaleTestInput from './ModaleTestInput'

class Modale extends React.Component {
  constructor() {
    super();
    this.state = {
      show: false
    }
  }

  handleClick() {
    this.setState({ show: !this.state.show })
  }
  render() {
    return (
      <>
        <Button onClick={() => this.handleClick()} id="clci">Click Me</Button>
        <Modal show={this.state.show} onHide={() => this.handleClick()} id="myid">
          
          <Modal.Header closeButton><ModaleHeader/></Modal.Header>
          <Modal.Body>
           <ModaleFormat/>
           {/* <ModaleTestInput/> */}
          </Modal.Body>
          <Modal.Footer id="modal-footer">
            <ModaleFooterComponent/>
          </Modal.Footer>
        </Modal>
      </>
    )
  }


}

export default Modale