import React, { Component } from "react";
import Listado from "./Listado";
import Data from "../../data/data";

class LisatdoC extends Component {
    state = { lista: Data.lista}
    borrar = id => {
        
        Data.deleteItem(id);
        this.setState({ lista: Data.lista})
    }

    render() {
        
        let { lista } = this.state;

        return (
            <Listado
            onBorrar={this.borrar}
            rows={lista} />
        )
    }
}

export default LisatdoC;