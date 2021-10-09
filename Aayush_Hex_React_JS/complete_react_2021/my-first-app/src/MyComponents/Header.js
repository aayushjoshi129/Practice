import React from 'react'
import ReactDOM from 'react-dom';
import PropTypes from 'prop-types'
import AppBar from '@material-ui/core/AppBar'
import Toolbar from '@material-ui/core/Toolbar'
import Typography from '@material-ui/core/Typography'

export default function Header(props) {
    return (
        <>
    
        <AppBar position="static">
            <Toolbar>
                <Typography variant="title" color="inherit">
                React & Material-UI Sample Application
                </Typography>
            </Toolbar>
        </AppBar>

        <form />
            <label for="fname">First name:</label>
            <input type="text" id="fname" name="fname"  /><br/><br/>
            <label for="lname">Last name:</label>
            <input type="text" id="lname" name="lname" /><br/><br/>
            <input type="submit" value="Submit" />
            <form />
        <div>
            This is Header File <b>{props.title}</b><br/>
            This is Header File <b>{props.age}</b>
        </div>

        

        </>
    )
}

Header.defaultProps = {                             // This creates a default title props
    title: "your title here"
}

Header.propTypes = {
    title: PropTypes.string                         // This is used to define PropTypes to avoid some warnings
}

class Head extends React.Component {                // Use of getDerivedStatesFromProps Method
    constructor(props) {
      super(props);
      this.state = {favoritecolor: "red"};
    }
    static getDerivedStateFromProps(props, state) {
      return {favoritecolor: props.favcol };
    }
    render() {                                      // Use of Render Method
      return (
        <h1>My Favorite Color is {this.state.favoritecolor}</h1>
      );
    }
  }
  
ReactDOM.render(<Head favcol="yellow"/>, document.getElementById('root4'));


class Headern extends React.Component {
    constructor(props) {
      super(props);
      this.state = {favoritecolor: "red"};
    }
    componentDidMount() {                           // Use of componentDidMount() Method
      setTimeout(() => {
        this.setState({favoritecolor: "blue"})
      }, 1000)
    }
    render() {
      return (
        <h1>My Favorite Color is {this.state.favoritecolor}</h1>
      );
    }
  }
  
  ReactDOM.render(<Headern />, document.getElementById('root5'));
  