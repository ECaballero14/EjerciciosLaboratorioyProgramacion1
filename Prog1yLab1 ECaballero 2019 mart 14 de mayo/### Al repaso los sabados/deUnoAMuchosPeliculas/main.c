#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudios1.h"
int main()
{
    eEstudio listadeEstudios[50];

    altaEstudio(listadeEstudios,0);

    borrarEstudio(listadeEstudios,50,0);

    return 0;
}
