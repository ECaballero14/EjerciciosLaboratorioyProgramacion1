#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#include "biblioteca.h"

int main()
{
    int opcion;
    eProducto listadoProductos[T];
    eProveedor listadoProveedores[T];

    hardcodearProductos(listadoProductos,T);
    hardcodearProveedores(listadoProveedores, T);

    do
    {
        printf("1. Mostrar productos.\n2. Mostrar proveedores.\n3. Mostrar productos con sus proveedores.\n4. Mostar proveedores con sus productos.\n5. Salir.\nElija opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                mostrarArrayProductos(listadoProductos, 10);
                break;

            case 2:
                mostrarArrayProveedores(listadoProveedores, 3);
                break;

            case 3:
                mostrarArrayProductosConProveedor(listadoProductos, listadoProveedores, 10, 3);
                break;

            case 4:
                mostrarArrayProveedoresConProductos(listadoProductos, listadoProveedores, 10, 3);
                break;

            case 5:
                printf("\nHasta luego.\n");
        }

        printf("\n\n");
        system("pause");
        system("cls");

    } while(opcion!=5);


    /*
    do
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.MOSTRAR\nElija opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
               insertarProducto(listadoProductos, T);
            break;
            case 2:
                borrarProducto(listadoProductos,T);
                break;
            case 3:
                editarProducto(listadoProductos, T);
                break;

            case 4:
                //mostrarArray(listadoProductos,T);
                break;
        }
    }while(opcion!=10);

    */
    return 0;
}
