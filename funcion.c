#include "funcion.h"

void AltaEmpleado(eEmpleado[], int){
int i,j=0;
for(i=0;i<100;i++){

    eEmpleado.Legajo[i]=j++;
    printf("\nIngrese un Apellido:");
    scanf("&s",&eEmpleado.Apellido[i]);
    printf("\nIngrese un Nombre:");
    scanf("&s",&eEmpleado.Nombre[i]);
    printf("\nIngrese un Sexo f o m:");
    scanf("&s",&eEmpleado.sexo);
    printf("\nIngrese un Salario:");
    scanf("&f",&eEmpleado.salario[i]);
}




}
