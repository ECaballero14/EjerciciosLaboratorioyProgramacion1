#include <stdio.h>
#include <stdlib.h>

void saludar(void); // No retorna ni recibe nada.
int dameNumero(void); // Retorna un entero pero no recibe nada.
float sacarPromedio(int suma,int cantidad); // Retorna un float y recibe dos enteros.
void tomarDato(int numero); // No retorna nada pero recibe un entero.

int main()
{
    int edad;
    float altura;
    int contador;
    int numero;
    int suma;
    float promedio;
    int limite;

    //edad=66;
    //altura=82.5;
    contador=0;
    suma=0;

    saludar();
    limite=dameNumero();

    //printf("Ingrese su edad: ");
    //scanf("%i", &edad);

    //printf("Ingrese su altura: ");
    //scanf("%f", &altura);

    //printf("\nSu edad es: %i",edad);
    //printf("\nSu altura es: %.2f", altura);
    //printf("\n\n");

    while(contador<limite)
    {
        printf("Ingrese el numero %i: ", contador+1);
        scanf("%d", &numero);

        suma=suma+numero;
        contador++;
    }

    //promedio=(float)suma/contador;
    promedio=sacarPromedio(suma,contador);
    printf("\nEl promedio es: %.1f", promedio);

    return 0;
}

void saludar(void)
{
    printf("Hola Mundo C\n");
}

int dameNumero(void)
{
    int cantidad;

    printf("Ingrese la cantidad de iteraciones: ");
    scanf("%d",&cantidad);

    return cantidad;
}

float sacarPromedio(int suma,int cantidad)
{
    float promedio;

    promedio=(float)suma/cantidad;

    return promedio;
}
