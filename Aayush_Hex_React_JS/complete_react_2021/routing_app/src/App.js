import React from "react";
import { BrowserRouter, Route, Switch } from "react-router-dom"
import Contact from "./Components/Contact";
import About from "./Components/About";
import Error from "./Components/Error";
import Menu from "./Components/Menu";
import Home from "./Components/Home";

function App() {
  return (
    <>
      <BrowserRouter>
        <Menu />
        <Switch>
          <Route path="/home" component={Home} />
          <Route path="/contact" component={Contact} />
          <Route path="/about" component={About} />
          <Route path="/error" component={Error} />
        </Switch>
      </BrowserRouter>

    </>
  );
}

export default App;
