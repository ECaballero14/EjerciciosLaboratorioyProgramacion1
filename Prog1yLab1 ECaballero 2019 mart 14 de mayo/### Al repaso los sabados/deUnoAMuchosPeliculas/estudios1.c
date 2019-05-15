#include <stdio.h>
#include <stdlib.h>
#include "estudios1.h"
#define tam 5

int cargarmenu();



int altaEstudio(eEstudio lista[],int id)
{

    int i=0;

    for(i=0;i<3;i++){
    lista[i].id=i;
    printf("\nIngrese el nombre:");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("\nIngrese nombre del pais:");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("\nIngrese anio de creacion:");
    fflush(stdin);
    gets(lista[i].anioDeCreacion);
    }

    return altaEstudio;
}

int borrarEstudio(eEstudio lista[],int tam,int id)
{
 int i;
 int loEncontro=0;
 printf("\nIngrese id de estudio a borrar: ");
 scanf("%d",&id);

 for(i=0;i<tam;i++){

    if(id==lista[i].id){

        lista[i].estado=LIBRE;
        loEncontro=1;
        break;
    }
 }

  return loEncontro;
}*/




