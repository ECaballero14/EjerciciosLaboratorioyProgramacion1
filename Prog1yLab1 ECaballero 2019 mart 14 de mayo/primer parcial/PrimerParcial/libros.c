#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libros.h"

void mostrarListaLibros(eLibros lista[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {

            //mostrarAutores(lista[i]);

            mostrarLibros(lista[i]);
        }
    }
}


void mostrarLibros(eLibros unLibro)

{
 printf("\n%d - %d - %s\n",unLibro.CodigodeAutor,unLibro.CodigodeLibro,unLibro.Titulo);
}

void harcodearDatosLibros(eLibros lista[],int tam)
{
    int i;
    int CodigoAutores[]={1,8,9,7,2,4,5,6,10,11,14};
    int CodigoLibros[]={1,8,9,7,2,4,5,6,10,11,14};
    char Titulos[][50]={"Steve Jobs","La Cenicienta","Educacion Sexual Integral","Club Atletico Independiente","Como ser un buen Programador","El Lobo","Algebra","Primeros Pasos para Boxear","Turismo Turquia","Deportes de Contacto","Futbol Soccer Ofensivo"};

    for(i=0;i<tam;i++)
    {
       lista[i].CodigodeAutor=CodigoAutores[i];
       lista[i].CodigodeLibro=CodigoAutores[i];
       strcpy(lista[i].Titulo,Titulos[i]);
       lista[i].estado=OCUPADO;
   }

        system("cls");
        system("pause");
        system("cls");
}

