#include "Localidad.h"

int buscarLibre(eLocalidad lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

void inicializarLocalidad(eLocalidad lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].id = 0;
        lista[i].estado = LIBRE;
    }
}

void harcodearLocalidad(eLocalidad lista[])

{
    int i;
    int tam = 4;
    int ids[]= {100,101,102,103};
    char descripciones[][50]= {"Martinez","Lanus","Moron","Quilmes"};

    for(i=0; i<tam; i++)
    {
        lista[i].id=ids[i];
        strcpy(lista[i].descripcion,descripciones[i]);
        lista[i].estado=OCUPADO;
    }
}

void mostrarListaLocalidades(eLocalidad lista[],int tam)

{
    int i;
    printf("------------------------------\n");
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarLocalidad(lista[i]);
        }
    }
    printf("------------------------------\n");
}

void mostrarLocalidad(eLocalidad unaLocalidad)
{
    printf(" %d - %s\n",unaLocalidad.id,unaLocalidad.descripcion);

}

/** Codigo para Ordenar e Informes **/

//1 - Ordenar las Localidades x nombre //

void ordenarLocalidadxNombre(eLocalidad lista[],int tam)
{
    int i,j;
    eLocalidad auxiliar;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(lista[i].descripcion,lista[j].descripcion)>1)
            {
                auxiliar=lista[i];
                lista[i]=lista[j];
                auxiliar=lista[j];


            }
        }
    }

    printf("\Ordenamiento de Localidad fue exitoso\n");

}
