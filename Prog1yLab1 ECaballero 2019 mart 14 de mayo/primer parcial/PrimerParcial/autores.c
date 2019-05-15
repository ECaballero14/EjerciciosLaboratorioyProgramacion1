#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "autores.h"

void mostrarListaAutores(eAutores lista[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {

            mostrarAutores(lista[i]);
        }
    }
}

void mostrarAutores(eAutores unAutor)

{
 printf("\n%d - %s - %s\n" ,unAutor.CodigodeAutor,unAutor.Nombre,unAutor.Apellido);

}

void harcodearDatosAutores(eAutores lista[],int tam)
{
    int i;
    int CodigoAutores[]={1,8,9,7,2,4,5,6,10,11,14};
    char Apellidos[][50]={"Martinez","Gonzalez","Fernandez","Hernandez","Carballo","Timoteo","Paenza","Canelo","Mulay","Badenas","Schellotto"};
    char Nombres[][50]={"Mariano","Ignacio","Claudio","Martin","Horacio","Grigoul","Adrian","Jose","Ignacio","Gustavo"};

    for(i=0;i<tam;i++)
    {

        lista[i].CodigodeAutor=CodigoAutores[i];
        strcpy(lista[i].Nombre,Nombres[i]);
        strcpy(lista[i].Apellido,Apellidos[i]);
        lista[i].estado=OCUPADO;

   }

        system("cls");
        system("pause");
        system("cls");
}
