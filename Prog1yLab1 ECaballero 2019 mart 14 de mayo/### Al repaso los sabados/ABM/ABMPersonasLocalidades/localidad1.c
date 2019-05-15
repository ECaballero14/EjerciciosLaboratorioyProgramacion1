#include <stdio.h>>
#include <stdlib.h>
#include <string.h>
#include "localidad1.h"

void cargarmenu()

{

   do{

     int opcionmenu;

     printf("\nEliga del menu: 1-Alta,2-Baja,3-Modificar,4-Listar,5-Salir:");

     scanf("%d",&opcionmenu);

     switch(opcionmenu)

     {

       case 1:
               printf("\nEligiste la opcion dar de alta");


               eLocalidad construirLocalidad();


               break;

       case 2:

               printf("\nEligiste la opcion dar de baja");


               break;

       case 3:

               printf("\nEligiste la opcion modificar");


               break;

       case 4:

               printf("\Eligiste la opcion listar");

               mostrarListadoLocalidades();

               break;

       default:

                printf("\neEligiste Salio del programa");


                break;
     }

        printf("\nEliga del menu: 1-Alta,2-Baja,3-Modificar,4-Listar,5-Salir:");

        scanf("%d",&opcionmenu);

    }while(opcionmenu!=5);

}

eLocalidad construirLocalidad()
{
    eLocalidad retornarLocalidad;
    printf("\nIngrese el id:");
    scanf("%d",&retornarLocalidad.idLocalidad);
    printf("\nIngrese la descripcion de la localidad:");
    fflush(stdin);
    gets(retornarLocalidad.descripcion);
return retornarLocalidad;

}
int cargarLocalidades(eLocalidad Listado[])
{
    int i;

    for(i=0;i<2;i++){

        Listado[i]=construirLocalidad();
    }

    return 1;
}

void mostrarListadoLocalidades(eLocalidad Listado[]){

   int i;

   for(i=0;i<20;i++);

   {
       mostrarListadoLocalidad(Listado[i]);
   }

}

void mostrarListadoLocalidad(eLocalidad localidad)
{

  printf("\nCodigo :\t %d",localidad.idLocalidad);
  printf("\nDescripcion :\t %d",localidad.descripcion);
  printf("-------------------------------------------");
}



