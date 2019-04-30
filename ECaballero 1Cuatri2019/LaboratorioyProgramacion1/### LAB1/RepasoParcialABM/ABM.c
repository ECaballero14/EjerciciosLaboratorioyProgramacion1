#include <stdio.h>
#include <stdlib.h>
#include "ABM.h"
#define CANT 3

void alta(eEmpleados listaEmp[],eSector listaSector[], int cantidad){

    int i;

    for(i=0;i<cantidad;i++){

        printf("\nSe agrega a la persona nro %d\n",i);
        listaEmp[i].Legajo=i;
        listaEmp[i].idSector=i;
        printf("\nIngrese un Apellido:");
        fflush(stdin);
        gets(listaEmp[i].Apellido);
        printf("\nIngrese un Nombre:");
        fflush(stdin);
        gets(listaEmp[i].Nombre);
        printf("\nIngrese un sexo M-Masculino y F-Femenino:");
        fflush(stdin);
        scanf("%c",&listaEmp[i].sexo);
        printf("\nIngrese un salario mayor a 0:");
        scanf("%f",&listaEmp[i].salario);
        printf("\ningrese dia de nacimiento:");
        scanf("%d",&listaEmp[i].nacimiento.dia);
        printf("\ningrese mes de nacimiento:");
        scanf("%d",&listaEmp[i].nacimiento.mes);
        printf("\ningrese anio de nacimiento:");
        scanf("%d",&listaEmp[i].nacimiento.anio);

        listaEmp[i].isEmpty = 0;
    }

}

void mostrarTodos( eEmpleados listaEmp[],eSector listaSector[],int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        mostrartodos(listaEmp[i]);
    }

}
