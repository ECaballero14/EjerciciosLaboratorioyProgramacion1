#include <stdio.h>
#include <stdlib.h>
#include "ABM.h"
#define CANT 3
int main()
{
    eEmpleados listaEmp[CANT];
    eSector listaSector[CANT];
    alta(listaEmp,listaSector, CANT);
    mostrarTodos(listaEmp,listaSector,CANT);
    return 0;
}
