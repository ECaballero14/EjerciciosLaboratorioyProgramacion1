#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ELEMENTOS 5

int main()
{
/*Ordenamiento de arrays por criterio:Apellido;
    int i,j;
    char nombre[ELEMENTOS][50]={"Pedro","Carlos","Juan","Ernesto","Mario"};
    char apellido[ELEMENTOS][50]= {"Gomez","Fernandez","Paz","Perez","Lopez"};
    char auxiliar[50];
        for(i=0;i< ELEMENTOS-1;i++)
          {
        for(j=i+1;j<ELEMENTOS;j++)
         {
         if(strcmp(apellido[i],apellido[j])>0)
            {
            strcpy(auxiliar,nombre[i]);
            strcpy(nombre[i],nombre[j]);
            strcpy(nombre[j], auxiliar);
            strcpy(auxiliar,apellido[i]);
            strcpy(apellido[i],apellido[j]);
            strcpy(apellido[j], auxiliar);
         }
       }

      }

          printf("\n\nLista ordenada por apellidos");
          for(i=0;i<ELEMENTOS;i++)
            {
           printf("\nNombre: %s - Apellido: %s\n",nombre[i],apellido[i]);
         }

    return 0;*/


  /*Ordenamiento de arrays por criterio:Nombre;
    int i,j;
    char nombre[ELEMENTOS][50]={"PEDRO","CARLOS","JUAN","ERNESTO","MARIO"};
    char apellido[ELEMENTOS][50]= {"Gomez","Fernandez","Paz","Perez","Lopez"};
    char auxiliar[50];
        for(i=0;i< ELEMENTOS-1;i++)
          {
        for(j=i+1;j<ELEMENTOS;j++)
         {
         if(strcmp(nombre[i],nombre[j])>1)
            {
            strcpy(auxiliar,nombre[i]);
            strcpy(nombre[i],nombre[j]);
            strcpy(nombre[j], auxiliar);
            strcpy(auxiliar,apellido[i]);
            strcpy(apellido[i],apellido[j]);
            strcpy(apellido[j], auxiliar);
            }
           }
         }
          printf("\n\nLista ordenada por nombre");
          for(i=0;i<ELEMENTOS;i++)
            {
           printf("\nNombre: %s - Apellido: %s\n",nombre[i],apellido[i]);
         }
    return 0;*/

}
