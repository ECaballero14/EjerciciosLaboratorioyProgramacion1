#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

int main()
{
   /* 1)
    char saludo[20];
    strcpy(saludo,"Hola");
    printf("%s",saludo);
    return 0;*/
   /*2
    char nombre[20];
    fflush(stdin);
    printf("\nIngrese su nombre:");
    scanf("%s",nombre);
    printf("\nEl nombre es: %s\n",nombre);
    return 0;*/


   /* 3) char nombre[20];
    fflush(stdin);
    printf("\nIngrese su nombre:");
    scanf("%s",&nombre[0]);
    printf("\nEl nombre es: %s\n",nombre);
    return 0;*/

  /* 4)
    char nombre[20];
    fflush(stdin);
    printf("\nIngrese su nombre:");
    gets(nombre);
    printf("\nEl nombre es: %s\n",nombre);
    return 0;*/

  /*5)
    char texto1[20];
    char texto2[20];
    printf("\nIngrese una palabra: ");
    gets(texto1);
    strcpy(texto2,texto1);
    printf("Se ingreso:%s la copia es:%s",texto1,texto2);*/

    {
    char vec[MAX];
    int i,x;
    printf("\ningrese nombre: ");
    gets(vec);
    x=strlen (vec);
    printf("\nla cantidad de letras es %d: ",x);
    }


}
