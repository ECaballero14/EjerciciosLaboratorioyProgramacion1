import React, { Component } from "react";
import Menu from "../components/Menu/MenuContainer";
import Listado from "../components/Listado/ListadoContainer";
import Form from "../components/Formulario/FormContainer";

import { Route } from "react-router-dom";

class ContainerC extends Component {



    render() {

        return (
            <div>
                <Menu {...this.props} />
                <div className="Container">
                    <Route path="/listado" component={Listado} />
                    <Route path="/cargar" component={Form} />
                    <Route path="/modificar" component={Menu} />
                </div>
            </div>
        )
    }
}

export default ContainerC;