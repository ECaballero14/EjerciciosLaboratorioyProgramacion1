#include <stdio.h>
#include <stdlib.h>

int esUnNumero(char *cadena);

int main()
{
    char letra;
    char palabra[10];
    int numero;
    int es;

/* -------------------------------------
    scanf("%d", &numero);
    fflush(stdin);

    printf("El numero: %d\n\n", numero);
    scanf("%c", &letra);
    fflush(stdin);

    printf("La letra: %c\n\n", letra);
    scanf("%s", palabra);
    fflush(stdin);

    printf("La palabra: %s\n", palabra);

-----------------------------------------*/

    scanf("%s", palabra);
    fflush(stdin);

    printf("\nPalabra ingresada %s\n", palabra);

    es=esUnNumero(palabra);

    if(es==1)
    {
        printf("Es correcto");
    }
    else
    {
        printf("Es incorrecto");
    }

    /*int indice=0;

    while(indice<20)
    {
        if(palabra[indice]=='\0')
        {
            printf("\nEl barra cero esta en %d", indice);
        }

        printf("\nLetra %c", palabra[indice]);

        indice++;
    }*/

    return 0;
}

int esUnNumero(char *cadena)
{
    int indice=0;
    int retorno=0;

    //printf("\nPalabra por parametros %s", cadena);

    while(cadena[indice]!='\0')
    {
        if(cadena[indice]<'0' || cadena[indice]>'9')
        {
            break;
        }
        else
        {
            indice++;
        }
    }

    if(cadena[indice]=='\0')
    {
        retorno=1;
    }

    return retorno;
}
