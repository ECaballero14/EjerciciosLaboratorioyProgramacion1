#include <stdio.h>
#include <stdlib.h>
#include "localidad.h"

eLocalidad construirLocalidad()
{
 eLocalidad retornarLocalidad;
 printf("Ingrese el id:");
 scanf("%d",&retornarLocalidad.idlocalidad);

 printf("Ingrese la descripcion:");
 fflush(stdin);
 gets(retornarLocalidad.descripcion);

 return retornarLocalidad;

}

int cargarlocalidades(int cantregistros,eLocalidad listado[])
{
    int i;
    for(i=0;i<cantregistros;i++){
        listado[i]=construirLocalidad();
    }
    return 1;
}

void mostrarlistadolocalidades(int cantregistros,eLocalidad listado[])
{
    int i;

    for(i=0;i<cantregistros;i++){

        mostrarlistadolocalidad(listado[i]);
    }
}


void mostrarlistadolocalidad(eLocalidad Localidad)
{
    printf("\nIngrese un Codigo:\t %d",Localidad.idlocalidad);

    printf("\nIngrese un nombre de una persona:\t %s",Localidad.descripcion);

    printf("\n----------------");

}

