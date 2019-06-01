#include <stdio.h>
#include <stdlib.h>

// archivo.o codigo objeto (traducido al lenguaje binario = comprendido por la pc).
// bin > debug > .exe (programa ejecutable).
// 2 tipos de errores: en tiempo de compilacion (de sintaxis) y en tiempo de ejecucion (de logica).
// int, float = 4 bytes.
// char = 1 byte.
// no hay string en C (se simula con un vector de char "char = nombre[20]")

int main()
{
    /*
    int numero;
    char letra;
    char palabra[10];

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("Ingrese una letra: ");
    fflush(stdin); // limpia el buffer.
    // setbuf(stdin,NULL); limpia el buffer (en linux).
    scanf("%c", &letra);

    printf("Ingrese una palabra: ");
    fflush(stdin);
    scanf("%s", palabra); // sin & cuando lee string.

    printf("\nEl numero es: %d\nLa letra es: %c\nLa palabra es: %s", numero, letra, palabra);
    printf("\n");
    */

    system("pause");
    return 0;
}
