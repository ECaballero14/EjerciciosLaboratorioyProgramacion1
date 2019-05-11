export default class Data {

    static lista = [{id: 1, nombre: "pepe", email: 'ssa@sdasa', sueldo: 15000}]

    static setItem = item => {
        this.lista.push(item);
    }

    static deleteItem = id => {
        for (const i in this.lista) {
            console.log(this.lista[i].id, id)
            if (this.lista[i].id === id) {
                this.lista.splice(i, 1);
            }
        }
        console.log(this.lista)
    }
}