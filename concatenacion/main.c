#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    /*1)

    char nombre[20];

    char apellido[20];

    fflush(stdin);

    printf("\nIngrese su nombre:");

    gets(nombre);

    printf("\nIngrese su apellido:");

    gets(apellido);

    printf("\nEl nombre suyo es %s y su apellido es %s\n",nombre,apellido);

    return 0;*/


  /*2) char nombre[20];

    char apellido[20];

    fflush(stdin);

    printf("\nIngrese su nombre:");

    gets(nombre);

    printf("\nIngrese su apellido:");

    gets(apellido);

    strcat(nombre,apellido);

    printf("\nSu nombre es %s y su apellido es %s",nombre,apellido);

    return 0;*/

  /*3)char nombre[15]="Ezequiel", apellido[15]=" Caballero";

    strcat(nombre,apellido);

    printf("%s\n",nombre);

    system("pause");

    return 0;*/

   /*4)
    char nombre[15]="ezequiel", apellido[15]=" caballero";

    strupr(nombre);

    strupr(apellido);

    strcat(nombre,apellido);

    printf("%s\n",nombre);

    system("pause");

    return 0;*/

   /*5

    char nombre[15]="EZEQUIEL", apellido[15]=" CABALLERO";

    strlwr(nombre);

    strlwr(apellido);

    strcat(nombre,apellido);

    printf("%s\n",nombre);

    system("pause");

    return 0; */

   /*6

    char nombre[15], apellido[15];

    fflush(stdin);

    printf("\nIngrese su nombre: ");

    gets(nombre);

    strlwr(nombre);

    printf("\nIngrese su apellido: ");

    gets(apellido);

    strlwr(apellido);

    strcat(nombre,apellido);

    printf("%s\n\n",nombre,apellido);

    system("pause");

    return 0;*/

    /*7

    char nombre[15]="ezequiel", apellido[15]=" caballero";

    fflush(stdin);

    nombre[0]=toupper(nombre[0]);

    apellido[0]=toupper(apellido[0]);

    strcat(nombre,apellido);

    printf("%s\n\n",nombre,apellido);

    system("pause");

    return 0;*/

    /*8
    char nombre[15]="EZEQUIEL", apellido[15]=" CABALLERO";

    fflush(stdin);

    nombre[0]=tolower(nombre[0]);

    fflush(stdin);

    apellido[0]=tolower(apellido[0]);

    strcat(nombre,apellido);

    printf("%s\n\n",nombre,apellido);

    system("pause");

    return 0;*/

    char nombre[20]="JUAN";

    char apellido[20]="PEREZ";

    fflush(stdin);

    strlwr(nombre);

    strlwr(apellido);

    nombre[0]=toupper(nombre[0]);

    apellido[0]=toupper(apellido[0]);

    apellidonombre[0]='0';

    strcat(apellidonombre,apellido);

    strcat(apellidonombre,"");

    strat(apellidonombre,nombre);

    printf("%s",apellidoNombre);









}

