#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3

void pedirCadena(char[],char[],int);
void validarTamCadena(char[], char[], int);

void cargarEmpleados(int[], float[], char[], char[][20], float[], int);


int main()
{

    /*char nombre[20];
    char apellido[20];
    char apellidoNombre[41]="";
    int i=0;*/


    int legajos[T];
    float sueldoBruto[T];
    char sexos[T];
    float sueldoNeto[T];
    char nombres[T][20];



    int i, j;
    int auxEntero;
    float auxFlotante;
    char auxCaracter;
    char auxCadena[100];

    cargarEmpleados(legajos, sueldoBruto, sexos, nombres, sueldoNeto, T);


   for(i=0; i<T-1; i++)
   {
       for(j=i+1; j<T; j++)
       {
           if(legajos[i]>legajos[j])
           {
               auxEntero = legajos[i];
               legajos[i] = legajos[j];
               legajos[j] = auxEntero;

               auxFlotante = sueldoBruto[i];
               sueldoBruto[i] = sueldoBruto[j];
               sueldoBruto[j] = auxFlotante;

               auxFlotante = sueldoNeto[i];
               sueldoNeto[i] = sueldoNeto[j];
               sueldoNeto[j] = auxFlotante;

               auxCaracter = sexos[i];
               sexos[i] = sexos[j];
               sexos[j] = auxCaracter;

               strcpy(auxCadena,nombres[i]);
               strcpy(nombres[i], nombres[j]);
               strcpy(nombres[j], auxCadena);
           }
       }
   }


    for(i=0; i<T; i++)
    {
        printf("%d-%s-%f-%c-%f\n", legajos[i], nombres[i], sueldoBruto[i], sexos[i], sueldoNeto[i]);
    }







    return 0;
}
void pedirCadena(char mensaje[], char cadena[],int tam)
{
    printf("Ingrese %s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadena);
    validarTamCadena(mensaje,cadena,tam);
}

void validarTamCadena(char mensajeError[], char cadena[], int tam)
{
    while(strlen(cadena)>tam)
    {
        printf("Reingrese %s", mensajeError);
        fflush(stdin);
        scanf("%[^\n]", cadena);
    }
}


void cargarEmpleados(int legajos[], float sueldoBruto[], char sexos[], char nombres[][20], float sueldoNeto[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &sueldoBruto[i]);
        printf("Ingrese sexo (m o f): ");
        fflush(stdin);
        scanf("%c", &sexos[i]);
        pedirCadena("Nombre: ", nombres[i], 20);

        sueldoNeto[i] = sueldoBruto[i]*0.85;
    }
}


/*pedirCadena("nombre: ", nombre, 20);
    pedirCadena("apellido: ", apellido, 20);

    strcat(apellidoNombre, apellido);
    strcat(apellidoNombre, ", ");
    strcat(apellidoNombre, nombre);

    strlwr(apellidoNombre);

    apellidoNombre[0]=toupper(apellidoNombre[0]);




    while(apellidoNombre[i]!='\0')
    {
        if(isspace(apellidoNombre[i]))
        {
            apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
        }

        i++;
    }

    puts(apellidoNombre);*/
