#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    char *puntero;
    char letra='a';
    //char vec[10]="Hola";
    char vec[5]="Hola";
    puntero=&letra;
    puntero=vec;
    //mostrarCadena1(puntero);
    mostrarCadena(puntero);
    return 0;
}
