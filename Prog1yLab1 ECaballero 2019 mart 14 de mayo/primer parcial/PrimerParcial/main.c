#include <stdio.h>
#include <stdlib.h>
#include "autores.h"
#include "libros.h"
#define T 10

int menuDeOpciones(char[]);

int main()
{
  /*
    int indice;
    int opcion;

    eAutores lista[T];
    harcodearDatosAutores(lista,10);

    eLibros lista1[T];
    harcodearDatosLibros(lista,10);

    do
    {
        printf("\n\nEligir una opcion del menu principal\n");
        opcion = menuDeOpciones("\n1.Alta -2.Baja - 3.Modificar -4.Mostrar -5.Ordenar -6.Salir: ");
        switch(opcion)
        {
        case 1:
            printf("\nElijiste dar de alta \n");
           // cargarProductos(lista,T);
            break;
        case 2:
            printf("\nElijiste dar de alta un producto\n");
            //borrarProductos(lista, T, 3);
            break;
        case 3:
            printf("\nElijiste modificar un producto\n");
          // modificar(lista, T, 3);
            break;

        case 4:

            printf("\nEligiste mostrar la lista Completa de Autores y Libros\n");
            printf("\n-------------------------------------------------------------------\n");
           // mostrarListaAutores(lista,T);
            mostrarListaLibros(lista,T);
            printf("\n------------------------------------------------------------------\n");
            break;

        case 5:

             printf("\nEligiste ordenar la lista por nombre de productos\n");
             printf("\n-------------------------------------------------------------------\n");
            // ordenarxnombredeproductos(lista,T);
             printf("\n------------------------------------------------------------------\n");
             break;

        case 6:

             printf("\nEligiste Salir del programa\n");
             opcion=10;
             printf("\n-----------------------------------------------------------------\n");
             break;

        default:

             printf("\nNo existe opción del menu elegida\n");
             opcion=10;
             printf("\n-----------------------------------------------------------------\n");
             break;
        }

   } while(opcion!=10);*/


    //inicializarEmpleados(lista, T);*/


    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d",&opcion);
    return opcion;
}
