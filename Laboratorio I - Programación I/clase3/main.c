#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    /*
-----------------------------------------------
    int edad;
    int retorno;

    do {
        printf("Ingrese una edad: ");
        retorno=scanf("%d", &edad);
        fflush(stdin);

    } while(retorno==0);

    printf("La respuesta es: %d", retorno);
    printf("\nLa edad es: %d", edad);

------------------------------------------------
    int dato;
    dato=dividir(6);

    printf("La respuesta es: %d", dato);

    dato=dividir(0);

    printf("\nLa respuesta es: %d", dato);

------------------------------------------------

    int unFactorial;

    unFactorial=factorial(6);

    printf("La respuesta es: %d", unFactorial);

------------------------------------------------

*/

    //saludar();

    int miDato=333;
    cambiarValor(miDato);

    printf("Mi dato es: %d", miDato);

    cambiarValorReferencia(miDato);

    printf("Mi dato es: %d", miDato);

    return 0;
}
