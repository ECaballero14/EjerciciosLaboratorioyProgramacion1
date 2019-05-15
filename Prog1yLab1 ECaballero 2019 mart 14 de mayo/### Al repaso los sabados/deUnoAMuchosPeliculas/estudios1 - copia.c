#include <stdio.h>
#include <stdlib.h>
#include "estudios1.h"
#define tam 5

void borrarEstudio(eEstudio lista[],int tam,int id)
{
 int i;
 int loEncontro=0;
 printf("\nIngrese id de estudio a borrar: ");
 scanf("%d",&&id);

 for(i=0;i<tam;i++){

    if(id==lista[i].id){

        lista[i].estado=LIBRE;
        loEncontro=1;
        break;
    }
 }

 if(loEncontro==0){

    print("El dato no existe");

 }
}


