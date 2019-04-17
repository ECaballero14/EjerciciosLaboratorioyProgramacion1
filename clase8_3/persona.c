#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

void alta( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){

        printf("\nSe agrega a la persona nro: %d\n",i);

        printf("\nApellido:");
        fflush(stdin);
        scanf("%s", pers[i].apellido);

        printf("\nNombre:");
        fflush(stdin);
        scanf("%s", pers[i].nombre);

        printf("\nEdad:");
        scanf("%d", &pers[i].edad);

        printf("\nsexo:");
        fflush(stdin);
        scanf("%c", &pers[i].sexo);

        printf("\ningrese dia de nacimiento:");
        scanf("%d",&pers[i].fechanac.dia);

        printf("\ningrese mes de nacimiento:");
        scanf("%d",&pers[i].fechanac.mes);

        printf("\ningrese anio de nacimiento:");
        scanf("%d",&pers[i].fechanac.anio);

        printf("\nIngrese el codigo de la nacionalidad:");
        scanf("%d",&pers[i].idnacionalidad);

        pers[i].isEmpty = 0;
    }
}

void mostrarTodos( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        mostrarUno(pers[i]);
    }

}

void mostrarUno( ePersona per ){
        printf("\n%s\t%s\t%d\t%c\t%d\t%d\n", per.apellido, per.nombre, per.edad,per.sexo,per.fechanac,per.idnacionalidad,per.isEmpty);
}

void ordenar(ePersona pers[],int cantidad){
   int i,j;
   ePersona aux;
   for(i=0;i<cantidad-1;i++){
      for(j=0;j<cantidad;j++){
          if(strcmp(pers[i].apellido,pers[j].apellido)>0){
             aux=pers[i];
             pers[i]=pers[j];
             pers[j]=aux;
          }

      }

   }
}


