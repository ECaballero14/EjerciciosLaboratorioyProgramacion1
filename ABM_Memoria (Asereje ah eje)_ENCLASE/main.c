#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#define QTY_ARRAYPER 1000

int main()
{
    Persona* arrayPersona[QTY_ARRAYPER];
    persona_initArray(arrayPersona,QTY_ARRAYPER);
    //persona_addPersona(arrayPersona,QTY_ARRAYPER,"\nDATO NO VALIDO\n",3);

    int cant = parserPersonas("data.csv",arrayPersona,QTY_ARRAYPER);

    int i;
    for(i=0; i<QTY_ARRAYPER;i++)
    {
        if(arrayPersona[i]!=NULL)
        {
            printf("%d %s\n",arrayPersona[i]->id,arrayPersona[i]->nombre);
        }
    }



    return 0;
}
