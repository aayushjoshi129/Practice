import './App.css';
import { Button, Row, Col, Modal } from 'react-bootstrap'
import React from 'react';
import ModalBody from './Components/ModalBody';

class App extends React.Component {

  constructor() {
    super();
    this.state = {
      show: false
    }
  }
  handleModal() {
    this.setState({show: !this.state.show})
  }

  render() {
    return (
      <>
        {/* <Row className="mx-0">
          <Button as={Col} variant="primary" onClick={this.handleModal}>Click Me</Button>
          <Button as={Col} variant="secondary" className="mx-2">Button #2</Button>
          <Button as={Col} variant="success">Button #3</Button>
        </Row> */}

        <Button onClick={() => this.handleModal()}>Click Me</Button>
        <Modal show={this.state.show} onHide={() => this.handleModal()}>
          <Modal.Header closeButton>Modal Heading</Modal.Header>
          <Modal.Body>
            
            {/* Modal Body Goes Here */}
            <ModalBody/>

          </Modal.Body>
          <Modal.Footer>
            <Button onClick={() => this.handleModal()}>Close</Button>
            <Button onClick={() => this.handleModal()}>Save</Button>
          </Modal.Footer>

        </Modal>

      </>
    );
  }
}
export default App;
