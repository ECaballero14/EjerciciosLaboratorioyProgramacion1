import React, { Component } from "react";
import Menu from "./Menu";
import Button from '@material-ui/core/Button';
import { Link } from 'react-router-dom';

const styles = theme => ({
    button: {
        margin: theme.spacing.unit,
        'text- decoration': 'none'
    },
    input: {
      display: 'none',
    },
  });
class MenuC extends Component {

    ir = to => {
        this.props.history.push(to);
    }

    render() {
        
        return (
            <div>

                <Menu>
                    <Link to="/listado">
                        <Button variant="contained" color="primary" className={styles.button}>
                            Listado
                        </Button>
                    </Link>
                    <Link to="/cargar">
                        <Button variant="contained" color="primary" className={styles.button}>
                        Cargar                       
                        </Button>
                    </Link> 
                </Menu>
            </div>
        )
    }
}

export default MenuC;