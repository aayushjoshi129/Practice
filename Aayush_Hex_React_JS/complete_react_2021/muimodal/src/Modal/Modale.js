import React from 'react'
// import "./Modale.css"
import ModaleBody from './ModalBody/ModaleBody'
import ModaleHeader from './ModalHeader/ModaleHeader'
import { Modal, Button } from 'react-bootstrap'
import ModaleFooter from './ModalFooter/ModaleFooter'
import axios from 'axios'


class Modale extends React.Component {
  constructor() {
    super();
    this.state = {
      show: false,
      data: []
    }
    this.sendShow = this.sendShow.bind(this)
  }

  componentDidMount() {
    axios.get('http://localhost:8080/Connection.php')
      .then(response => {
        this.setState({ data: response.data })
        console.log(this.state.data)
      }
      )

  }

  handleClick() {
    this.setState({ show: !this.state.show })
  }

  sendShow(e) {
    this.setState({ show: !e })
  }

  render() {
    return (
      <>
        <Button onClick={() => this.handleClick()} id="clci">Click Me</Button>
        <Modal show={this.state.show} onHide={() => this.handleClick()} backdrop="static" keyboard={false} id="myid">
          <Modal.Header closeButton>
            <ModaleHeader />
          </Modal.Header>
          <Modal.Body>
            <ModaleBody fun={this.sendShow} data={this.state.data} nestedShow={this.state.show}/>
            {/* <ModaleTestInput/> */}
          </Modal.Body>
          <Modal.Footer id="modal-footer">
            <div className="row mb-3">
              <div className="col">
                <ModaleFooter title="Previous" />
              </div>
              <div className="col" style={{ textAlign: "right" }}>
                <ModaleFooter title="Next" click={this.callAxios} />
              </div>
            </div>
          </Modal.Footer>
        </Modal>
      </>
    )
  }


}

export default Modale