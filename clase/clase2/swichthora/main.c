#include <stdio.h>
#include <stdlib.h>

int main()
{

/*Al ingresar una hora, informar:
si está entre las 0 y las 5 : "Es de madrugada.".
si está entre las 6 y las 9 : "Es de manana.". *
si está entre las 12 y las 19 : "Es de tarde.".
si está entre las 20 y las 24 o entre las 0 y las 6 : "Es de noche.".
si NO está entre las 0 y las 24 : "la hora no existe.".

/

    1)

    int hora;

    printf("\nIngrese una hora entre 0 y 24:");

    scanf("%d",&hora);

    switch(hora){

    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
            printf("\nEs de madrugada\n");

            break;

    case 6:
    case 7:
    case 8:
    case 9:
            printf("\nEs de manana\n");

    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
            printf("\nEs de manana\n");

            break;


    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:

            printf("\nEs de noche\n");

            break;


     default:

             printf("\nla hora no existe\n");

    }

    return 0;*/


    //2)

    char hora;

    printf("\nIngrese una hora entre 0 y 9:");

    scanf("%c",&hora);

    switch(hora){

    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
            printf("\nEs de madrugada\n");

            break;

    case '6':
    case '7':
    case '8':
    case '9':
            printf("\nEs de manana\n");

            break;

     default:

             printf("\nla hora no existe\n");

    }

    return 0;
}
