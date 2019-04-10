#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[64];
    int cantidad;

    printf("\nIngrese Nombre:");

    fgets(buffer,sizeof(buffer)-2,stdin);

    cantidad=strlen(buffer);

    buffer[cantidad-1]='\0';

    printf("\nEl nombre es: %s\n",buffer);

    return 0;
}
