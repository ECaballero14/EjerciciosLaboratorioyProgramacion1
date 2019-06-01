#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int opcion;
    char continuar='s';
    float primerOperando;
    float segundoOperando;

    do
    {
        opcion=menu("Menu de opciones.\n\n1. Ingresar 1er operando: (A=)\n2. Ingresar 2do operando: (B=)\n3. Calcular todas las operaciones.\na) Calcular la suma (A+B).\nb) Calcular la resta (A-B).\nc) Calcular la division (A/B).\nd) Calcular la multiplicacion (A*B).\ne) Calcular el factorial (A!).\n4. Informar resultados\na) El resultado de A+B es: r\nb) El resultado de A-B es: r\nc) El resultado de A/B es: r o No es posible dividir por cero\nd) El resultado de A*B es: r\ne) El factorial de A es: r1 y El factorial de B es: r2\n5. Salir\n\nElegir opcion: ");

        switch(opcion)
        {
            case 1:
                printf("\nIngrese el 1er operando: ");
                scanf("%f", &primerOperando);
                break;

            case 2:
                printf("\nIngrese el 2do operando: ");
                scanf("%f", &segundoOperando);
                break;

            case 3:
                printf("Calculando todas las operaciones.\n");
                break;

            case 4:
                printf("Informando resultados.\n");
                break;

            case 5:
                printf("Saliendo\n");
                continuar='n';
                break;

            default:
                printf("Opcion incorrecta\n");
                break;
        }

        system("pause");
        system("cls"); // refresh pantalla en windows.

    } while(continuar=='s');

    return 0;
}
