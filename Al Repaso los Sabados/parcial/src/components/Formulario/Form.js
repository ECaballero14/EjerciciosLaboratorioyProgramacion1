import React, { Component } from "react";
import { withStyles } from '@material-ui/core/styles';
import TextField from '@material-ui/core/TextField';
import Button from '@material-ui/core/Button';

const styles = theme => ({
    container: {
        // display: 'flex',
        flexWrap: 'wrap',
    },
    textField: {
        marginLeft: theme.spacing.unit,
        marginRight: theme.spacing.unit,
        width: 400,
    },
    dense: {
        marginTop: 19,
    },
    menu: {
        width: 400,
    },
});
class Form extends Component {

    state = {
        id: '',
        nombre: '',
        email: '',
        sueldo: 0
    }

    handleSubmit = e => {
        e.preventDefault();
        console.log("Enviado")
    }


    handleChange = (name, event) => {
        
        this.setState({ [name]: event.target.value });
    };

    cargar = () => {
        this.props.onCargar(this.state);

    }
    render () {
        const { classes } = this.props;
        return (
            <div className={classes.container}>

                <form onSubmit={this.handleSubmit} className={classes.container} >
                    <TextField
                        id="standard-number"
                        label="ID"
                        value={this.state.id}
                        onChange={e => this.handleChange('id', e)}
                        type="number"
                        className={classes.textField}
                        InputLabelProps={{
                            shrink: true,
                        }}
                        margin="normal"
                    />
                    <div>
                        <TextField
                            required
                            id="standard-required"
                            label="Nombre"
                            value={this.state.nombre}
                            onChange={e => this.handleChange('nombre', e)}
                            className={classes.textField}
                            margin="normal"
                        />
                    </div>
                    
                    <div>
                        <TextField
                            required
                            id="standard-required"
                            label="Email"
                            type="email"
                            value={this.state.email}
                            onChange={e => this.handleChange('email', e)}
                            className={classes.textField}
                            margin="normal"
                        />
                    </div>
                    <TextField
                        id="standard-number"
                        label="Suledo"
                        value={this.state.sueldo}
                        onChange={e => this.handleChange('sueldo', e)}
                        type="number"
                        className={classes.textField}
                        // InputLabelProps={{
                        //     shrink: true,
                        // }}
                        margin="normal"
                    />
                    <div>
                        <Button onClick={this.cargar} variant="contained" color="primary" className={styles.button}>
                            Cargar
                        </Button>
                    </div>
                </form>
            </div>
        )
    }
}

export default withStyles(styles)(Form);