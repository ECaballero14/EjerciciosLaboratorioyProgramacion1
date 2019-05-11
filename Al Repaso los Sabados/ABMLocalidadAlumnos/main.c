#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Localidad.h"
#include "alumnos.h"
#define T 7
int main()
{

   eLocalidad listaLocalidad[T];
   inicializarLocalidad(listaLocalidad,T);

   int opcion;

   printf("\nElija una Opcion: 1.Mostrar y 2.Ordenar LocalidadxNombre:");
   scanf("%d",&opcion);

   while(opcion!=3)
   {
     switch(opcion){
     case 1:
          printf("\nEligio Mostrar listado de Localidades\n");
          harcodearLocalidad(listaLocalidad);
          mostrarListaLocalidades(listaLocalidad,T);
          break;
    case 2:
          printf("\nEligio Ordenar localidadxnombre\n");
          ordenarLocalidadxNombre(listaLocalidad,T);
          break;
    }
     printf("\nElija una Opcion: 1.Mostrar y 2.Ordenar LocalidadxNombre:");
     scanf("%d",&opcion);
   }

/*
   eAlumno listaAlumno[T];
   inicializarAlumno(listaAlumno,T);
   harcodearAlumno(listaAlumno);
   mostrarListaAlumnos(listaAlumno,T);*/

    return 0;
}
