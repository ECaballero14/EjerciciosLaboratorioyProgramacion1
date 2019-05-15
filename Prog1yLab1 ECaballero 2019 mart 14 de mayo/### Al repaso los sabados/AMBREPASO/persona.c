#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

epersona constuirpersona(int cantregistros,eLocalidad listado[])
{
    epersona retornarpersona;

    printf("\nIngrese el id de una persona:");
    scanf("%d",&(retornarpersona.idpersona));


    printf("\nIngrese el nombre de una persona:");
    fflush(stdin);
    gets(retornarpersona.nombre);

    printf("Imprimo el nombre: %s",retornarpersona.nombre);


    printf("\nIngrese el apellido de una persona:");
    fflush(stdin);
    gets(retornarpersona.apellido);

    printf("\nIngrese la edad de una persona:");
    fflush(stdin);
    scanf("%d",&(retornarpersona.edad));

    int i;

    for(i=0;i<cantregistros;i++){

       printf("Imprimo datos de localidades el id del localidad %d y la descripcion %s",
       listado[i].idlocalidad,listado[i].descripcion);
    }

       printf("Eliga e ingrese el id de localidad correspondiente:");
       scanf("%d",&retornarpersona.idlocalidad);

    return retornarpersona;
}

int cargarpersonas(int cantregistros,epersona listado[],eLocalidad listado[])
{
    int i;
    for(i=0; i<cantregistros; i++)
    {
        listado[i]=constuirpersona(listados);

    }
    return 1;
}

void mostrarlistadopersonas(int cantregistros,epersona listado[])
{
    int i;

    for(i=0; i<cantregistros; i++)
    {

        printf("imprimo el valor de i %d\n",i);

        mostrarpersona(listado[i]);
    }
}


void mostrarpersona(epersona persona)
{
    printf("\nIngrese un Codigo:\t %d",persona.idpersona);

    printf("\nIngrese un nombre de una persona:\t %s",persona.nombre);

    printf("\nIngrese el apellido de una persona:\t %s",persona.apellido);

    printf("\nIngrese un una edad:\t %d",persona.edad);

    printf("\n----------------");

}


