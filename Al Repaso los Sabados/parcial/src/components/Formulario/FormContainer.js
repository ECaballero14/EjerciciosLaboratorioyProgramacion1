import React, { Component } from "react";
import Form from "./Form";
import Data from '../../data/data';

export default class FormC extends Component {

    state = { cargado: false}

    componentDidMount() {
        this.setState({ cargado: !true });
    }
    cargar = datos => {

        Data.setItem(datos);
        console.log(datos);
        this.setState({cargado: true});
    }

    render () {

        return (
            <div>
                <Form
                onCargar={this.cargar}
                />
                {
                    this.state.cargado &&
                <div>
                        <h1>Cargado!</h1>
                </div>}
            </div>
        )
    }
}