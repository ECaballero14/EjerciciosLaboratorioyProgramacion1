#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5


int main(void){
    int legajo[MAX], legajoAux, i, j;
    float salario[MAX], salarioAux;
    char nombre[MAX][10], nombreAux[10];
    for(i=0; i<MAX; i++)
        {
    system("cls");
    printf("\nIngrese el legajo del empleado: ");
    scanf("%d", &legajo[i]);
    printf("\nIngrese el nombre del empleado: ");
    fflush(stdin);
    gets(nombre[i]);
    printf("\nIngrese el salario del empleado: ");
    scanf("%f", &salario[i]);
    }
        for(i=0; i<MAX-1; i++)
        {
        for(j=i+1; j<MAX; j++)
        {
        if(salario[i] < salario[j])
        {
        strcpy(nombreAux, nombre[i]);
        strcpy(nombre[i], nombre[j]);
        strcpy(nombre[j], nombreAux);
        legajoAux = legajo[i];
        legajo[i] = legajo[j];
        legajo[j] = legajoAux;
        salarioAux = salario[i];
        salario[i] = salario[j];
        salario[j] = salarioAux;
        }
        if(salario[i] == salario[j]){
            if(strcmp(nombre[i],nombre[j])>0){
            strcpy(nombreAux, nombre[i]);
            strcpy(nombre[i], nombre[j]);
            strcpy(nombre[j], nombreAux);
            legajoAux = legajo[i];
            legajo[i] = legajo[j];
            legajo[j] = legajoAux;
            /*salarioAux = salario[i];
            salario[i] = salario[j];
            salario[j] = salarioAux;*/
            }
          }
        }
        }
    system("cls");
    printf("\nLegajo\tNombre\t\t\tSalario ");
    for(i=0; i<MAX; i++)
    {
    printf("\n%d\t%s\t\t\t%.2f", legajo[i], nombre[i], salario[i]);
    }
    return 0;
}
