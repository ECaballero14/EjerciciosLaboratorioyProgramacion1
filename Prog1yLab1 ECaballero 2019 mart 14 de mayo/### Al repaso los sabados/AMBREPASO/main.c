#include <stdio.h>
#include <stdlib.h>
#include "localidad.h"
#include "persona.h"

int main()
{
    eLocalidad localidades[3];

    cargarlocalidades(3,localidades);

    mostrarlistadolocalidades(3,localidades);

    epersona personas[2];

    cargarpersonas(2,personas,localidades);


    mostrarlistadopersonas(2,personas);

    return 0;
}
