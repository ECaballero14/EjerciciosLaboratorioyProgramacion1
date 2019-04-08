#include <stdio.h>
#include <stdlib.h>

int main()

 {    /*1)Realizar un algoritmo el cual ingrese dos numeros enteros permita ordenarlos de menor a mayor;
        mostrar los resultados por pantalla.

        alternativa A:

        int numero1,numero2;

        printf("\nIngrese primer numero entero:");

        scanf("%d",&numero1);

        printf("\nIngrese segundo numero entero:");

        scanf("%d",&numero2);

        if(numero1<numero2){

           printf("\nEl primer numero es el menor y el segundo numero es el mayor\n");
        }

        else if(numero1>numero2){

           printf("\nEl segundo numero es el menor y el primer numero es el mayor\n");
        }

        else

        {
           printf("\nDebe ingresar numeros distintos!!.Reingrese\n");

        }

        return 0;*/

        /*alternativa B:

        int numero1,numero2;

        printf("\nIngrese primer numero entero:");

        scanf("%d",&numero1);

        printf("\nIngrese segundo numero entero:");

        scanf("%d",&numero2);

        if(numero1<numero2){

           printf("\nEl primer numero es el %d y es el menor, el segundo numero es el %d y es el mayor\n",numero1,numero2);
        }

        else if(numero1>numero2){

           printf("\nEl segundo numero es el %d y es el menor, el primer numero es el %d y es el mayor\n",numero2,numero1);
        }

        else

        {
           printf("\nDebe ingresar numeros distintos!!.Reingrese\n");

        }

        return 0*/

       /* Alternativa C

        int A,B,Temp;

        printf("\nIngrese primer numero entero:");

        scanf("%d",&A);

        printf("\nIngrese segundo numero entero:");

        scanf("%d",&B);

        if(A<B){

          printf("\nEl primer numero es el menor y es el segundo es el mayor\n");

        }
           Temp=B;

           B=A;

           A=Temp;

           return 0;*/



        /*2)Realizar un programa que permita ingresar tres valores y almacenarlo en las variables primer numero,segundo numero y tercer numero;

          respectivamente.

          El algoritmo debe imprimir cual es el mayor y cual/es el menor.

          Constatar que los valores ingresados por el teclado son distintos.

          Prsente un mensaje de alerta en caso que se dectece la introduccion de valores iguales.


        int numero1,numero2,numero3;

            printf("\nIngrese primer numero entero:");

            scanf("%d",&numero1);

            printf("\nIngrese segundo numero entero:");

            scanf("%d",&numero2);

            printf("\nIngrese tercer numero entero:");

            scanf("%d",&numero3);

            if(numero1==numero2 && numero2==numero3){

               printf("\nDebe ingresar numeros distintos!!.Reingrese\n");
            }

            else if(numero1<numero2 && numero1<numero3){

               printf("\nEl primer numero es el menor con respecto al segundo y tercer numero \n");
            }

            else if(numero2<numero1 && numero2<numero3){

               printf("\nEl segundo numero es el menor con respecto a primer y tercer numero\n");

            }

            else{

               printf("\nEl tercer numero es el menor con respecto al  primer y segundo numero\n");

            }

             return 0;*/



}

