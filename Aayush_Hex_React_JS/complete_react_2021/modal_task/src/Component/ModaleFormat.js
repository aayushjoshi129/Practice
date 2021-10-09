import React from 'react'
import "./CSS/Modale.css"
import ModaleSelectBody from './ModaleInputComponents/ModaleSelectBody'
import ModaleTextBody from './ModaleInputComponents/ModaleTextBody'
import ModaleLabel from './ModaleInputComponents/ModaleLabel'
import ModaleButton from './ModaleButton'
import ModaleCheckBox from './ModaleInputComponents/ModaleCheckBox'
import ModaleDarkButton from './ModaleDarkButton'


class ModaleFormat extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      value: true,      // initialized a value to be accessed and passed to ModaleTextBody
    }
    this.getValueFromChild = this.getValueFromChild.bind(this)
    this.handleChange = this.handleChange.bind(this);

  }

  handleChange(event) {
    this.setState({ inputValue: event.target.value });
    alert("Hello")
  }

  getValueFromChild(e) {         // Declared a function to get value from child
    this.setState({ value: e })    // Setting state value to e 
  }

  render() {
    return (
      <>
        <form action="">
          {/* Material Type Field */}

          <div className="row mb-3">
            <div className="col-md-2">
              <ModaleLabel name="Label1" label="Material Type:" />
            </div>
            <div className="col-md-9">
              <ModaleSelectBody access={this.state.value} id="Label1" materialType="Select Material Type" />
            </div>
            <div className="col-md-1">
              <ModaleDarkButton class="btn btn-dark" />
            </div>
          </div>

          {/* Part Name Field */}

          <div className="row mb-3">
            <div className="col-md-2">
              <ModaleLabel name="Label2" label="Part Name:" />
            </div>
            <div className="col-md-10">
              <ModaleTextBody id="Label2" access={this.state.value} />

            </div>
          </div>

          {/* Part No. Field */}

          <div className="row mb-3">
            <div className="col-md-2">
              <ModaleLabel name="Label3" label="Part No:" />
            </div>
            <div className="col-md-8">
              <ModaleTextBody id="Label3" access={this.state.value} />
            </div>
            <div className="col-md-2">
              <ModaleCheckBox id="Label4" />&nbsp;
              <ModaleLabel name="Label4" label="Allow Bom" />
            </div>
          </div>

          {/* PPC Name Field */}

          <div className="row mb-3">
            <div className="col-md-2">
              <ModaleLabel name="Label5" label="PPC Name:" />
            </div>
            <div className="col-md-10">
              <ModaleTextBody id="Label5" access={this.state.value} />
            </div>
          </div>

          {/* Description Field */}

          <div className="row mb-3">
            <div className="col-md-2">
              <ModaleLabel name="Label6" label="Description:" />
            </div>
            <div className="col-md-6">
              <ModaleTextBody id="Label6" access={this.state.value} />
            </div>
            <div className="col-md-4">
              <div className="row">
                <div className="col-md-3">
                  <ModaleLabel name="Label7" label="Unit:" />
                </div>
                <div className="col-md-9">
                  <ModaleSelectBody access={this.state.value} id="Label7" materialType="Select Unit" />
                </div>
              </div>
            </div>
          </div>

          {/* Stock Location Field */}

          <div className="row mb-3">
            <div className="col-md-2">
              <ModaleLabel name="Label8" label="Stock Location:" />
            </div>
            <div className="col-md-4">
              <ModaleTextBody id="Label8" label="Stock Location:" access={this.state.value} />
            </div>
            <div className="col-md-2" id="label09">
              <ModaleLabel name="Label9" label="Cons Unit:" />
            </div>
            <div className="col-md-4">
              <ModaleSelectBody access={this.state.value} id="Label9" materialType="Select ConsUnit:" />
            </div>
          </div>

          {/* HSN Code Field */}

          <div className="row mb-3">
            <div className="col-md-2">
              <ModaleLabel name="Label10" label="HSN Code:" />
            </div>
            <div className="col-md-4">
              <ModaleTextBody id="Label10" access={this.state.value} />
            </div>
            <div className="col-md-2" id="label011">
              <ModaleLabel name="Label11" label="Tax %:" />
            </div>
            <div className="col-md-4">
              <ModaleTextBody id="Label11" access={this.state.value} />
            </div>
          </div>

          {/* Footer Buttons */}

          <div className="row mb-3">
            <div className="col-md-2">
              <ModaleButton title={this.state.value ? "Add" : "Remove"} access={false} fun={this.getValueFromChild} class="btn btn-primary" />   {/* Passed an function as a props and toggling text of button */}
            </div>
            <div className="col-md-2">
              <ModaleButton title="Edit" access={false} class="btn btn-success" />
            </div>
            <div className="col-md-2">
              <ModaleButton title="Save" access={true} class="btn btn-success" />
            </div>
            <div className="col-md-2">
              <ModaleButton title="Find" access={false} class="btn btn-info" />
            </div>
            <div className="col-md-2">
              <ModaleButton title="Delete" access={false} class="btn btn-danger" />
            </div>
            <div className="col-md-2">
              <ModaleButton title="Exit" access={false} class="btn btn-warning" />
            </div>
          </div>
        </form>
      </>
    )
  }
}

export default ModaleFormat