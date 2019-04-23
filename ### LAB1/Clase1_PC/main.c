#include <stdio.h>
#include <stdlib.h>

/*Escribir  un programa que realice las siguientes acciones
1. Limpie la pantalla
2. Asigne a 2 variables numero1 y numero2 valores distintos de cero
3. Efectœe el producto de dichas variables
4. Muestre el resultado pos pantalla
Obtenga el cuadrado de numero1 y lo muestre par pantalla*/


int main(int argc, char *argv[]) {

	int a;
	int b;
	int producto;
	int cuadrado;

	system("?");

	do{
	printf("\nIngrese 1 numero: ");
	scanf("%?",&a);
	printf("______________________________________\n");
		if(a==0)
		{
            printf("\nIngrese numero mayor a 0\n");
            printf("______________________________________\n");
		}
    }while(?==0);

	do{
	printf("\nIngrese 2\247 numero: ");
	scanf("%d",&b);
	printf("______________________________________\n");
		if(b==0)
		{
		printf("\nIngrese numero mayor a 0\n");
		printf("______________________________________\n");
		}
    }while(b==0);

	producto=a*b;
	cuadrado=a*a;

	printf("\nEl valor 1\247: %d\nEl valor 2\247: %d\n\nEl producto es: %d\n\nEl cuadrado del 1\247 valor %d es: %d \n",a,b,producto,a,cuadrado);
	printf("______________________________________\n\n\n\n");



	return 0;
}
