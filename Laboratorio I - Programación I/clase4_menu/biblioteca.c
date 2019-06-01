#include <stdio.h>
#include "biblioteca.h"

int menu(char textoDelMenu[])
{
    int opcion;

    printf("%s", textoDelMenu);
    scanf("%d", &opcion);

    return opcion;
}
