#include <stdlib.h>
#include "matematicas1.h"
#include "funciones1.h"

int main()
{
    int flag=0;

    int A,B,X,Y;

    char ope;

    int menu;

    int resultsuma=0;

    int resulresta=0;

    int resultdiv=0;

    int resultmult=0;

    int resultfacta=1;

    int resultfactb=1;

    int rta='S';

    printf("\n\\\\BIENVENIDO A Programa CALCULADORA----////\n");

    do{
        //menu de opciones

        printf("\n1-Ingresar primer operando (A=X):");
               scanf("%d",&X);
               A=X;
        printf("\n2-Ingresar segundo operando (B=Y):");
               scanf("%d",&Y);
               B=Y;
        printf("\n3-Calcular todas las operaciones:");
        printf(" \n...a Calcular la suma(A+B):");
        printf(" \n...b Calcular la resta(A-B):");
        printf(" \n...c)Calcular la multiplicacion(A*B):");
        printf(" \n...d)Calcular el factorial(A!):");
        printf("\n4-Informar resultados:");
        printf("...a)El resultado de A+B es \n:");
        printf("...b)El resultado de A-B es \n:");
        printf("...c)El resultado de A/B es \n:");
        printf("...d)El resultado de A*B es \n:");
        printf("...e)El resultado del factorial de A es % y de B es \n:");
        printf("5- Salir\n");

       /* switch(menu){

        //ingreso 1er operando

        /*case 3:
              resultsuma=suma(A,B);
              break;
       case 4:
              resulresta=resta(A,B);

              break;
       case 5:
               resultdiv=division(A,B);

                break;
       case 6:
               resultmult=multiplicar(A,B);

               break;
        case 7:
               resultfacta=factorial(A,B);

               resultfactb=factorial(A,B);

               break;

        case 5:

               printf("\nQuiere continuar en la calculadora[S/N]:");

               scanf("%c",&rta);

               break;

       //default:

          */


      //}

      //printf("Quiere seguir usando la calculadora[S/N]");

      //scanf("%c",&rta);

      }while(menu!='N');

     return 0;
 }

