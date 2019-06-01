#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarVector(int datos[], int tamanio);
void mostrarPalabras(char datos[][10], int tamanio);

int main()
{
    char usuario[][10]={"jose","maria","jesus","melchor","gaspar"};
    // usuario [10 letras para cada usuario][10 usuarios]
    int nota[10]={8,5,2,10,3};
    int i, j;

    mostrarVector(nota,5);
    mostrarPalabras(usuario,5);

    /*

    for(i=0;i<5;i++)
    {
        printf("Alumno: %s // Nota: %d\n",usuario[i],nota[i]);
    }

    */

    for(i=0;i<5;i++) // TAMAÑO
    {
        for(j=0;j<4;j++) // TAMAÑO -1
        {
            /*

            printf("%d => %d\n",nota[i],nota[j]);
            // MAL: if(usuario[i]<usuario[j])
            int resultado;

            resultado=strcmp("hola","hola"); // return 0.
            printf("\niguales: %d", resultado);

            resultado=strcmp("Hola","hola"); // return -1. "Hola"<"hola"-> en ASCII primero mayusc, despues minusc.
            printf("\nprimera: %d", resultado);

            resultado=strcmp("hola","Hola");
            printf("\nsegunda: %d", resultado); // return 1. "hola">"Hola".

            resultado=strcmp("A","a"); // return -1. "A"<"a".
            printf("\nla A: %d", resultado);

            resultado=strcmp("a","b"); // return -1. "a"<"b".
            printf("\nla a-b: %d", resultado);

            resultado=strcmp("b","a"); // return 1. "b">"a".
            printf("\nla b-a: %d", resultado);

            // strcmp: compara 2 strings y transforma el resultado a binario.

            */

            int resultado=strcmp(usuario[i],usuario[j]);

            if(resultado==-1)
            {
                int aux=nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString, usuario[i]);
                strcpy(usuario[i], usuario[j]);
                strcpy(usuario[j], auxString);
            }
        }
    }

    /*

    for(i=0;i<5;i++) // TAMAÑO
    {
        for(j=0;j<4;j++) // TAMAÑO -1
        {
            printf("%d => %d\n",nota[i],nota[j]);
            if(nota[i]<nota[j])
            {
                int aux=nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString, usuario[i]);
                strcpy(usuario[i], usuario[j]);
                strcpy(usuario[j], auxString);
            }
        }
    }

    */

    printf("\n");

    /*

    INGRESAR Y MOSTRAR USUARIOS.

    for(i=0;i<5;i++)
    {
        printf("ingrese usuario %d: ",i+1);
        gets(usuario[i]);
    }

    for(i=0;i<5;i++)
    {
        //printf("\nAlumno: %s // Nota: %d\n",usuario[i],nota[i]);
        printf("Alumno: %s.\n", usuario[i]);
    }

    */





    /*
    for(i=0;i<5;i++) // INICIALIZACION EN PARALELO.
    {
        strcpy(usuario[i], "");
        //nota[i]=0;
    }


    for(i=0;i<5;i++) // CARGA
    {
       printf("Ingrese usuario # %d: ", i+1);
       //gets(usuario[i]);
       scanf("%s", usuario[i]);
       fflush(stdin);
       printf("ingrese nota # %d: ", i+1);
       scanf("%d", &nota[i]);
       fflush(stdin);
       printf("\n");
    }

    for(i=0;i<5;i++) // MUESTRA
    {
        printf("\nHello %s.\nNota %d.", usuario[i],nota[i]);
    }


    printf("Ingrese usuario: ");
    scanf("%s", usuario[0]);

    printf("Ingrese usuario: ");
    scanf("%s", usuario[1]);

    int tamanio=strlen(usuario[0]);
    printf("Tamanio: %d\n", tamanio);

    for(i=0;i<10;i++)
    {
        printf("Hello %s \n", usuario[i]);
    }
    */

    return 0;
}

void mostrarVector(int datos[], int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("nota: %d\n",datos[i]);
    }
}

void mostrarPalabras(char datos[][10], int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("usuario: %s\n",datos[i]);
    }
}


