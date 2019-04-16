#include <stdio.h>
#include <stdlib.h>

/*1) Solicitar al usuario 5 números,
   permitir listarlos por pantalla indicando el máximo,
   el mínimo y el promedio.
   Permitir Modificar el valor de
   cualquiera de los números cargados
   indicando el índice del mismo y su nuevo valor.*/

int main()
{
    int num[5];
    int i,j;
    int mayor=0,menor=0;
    int prom,acu=0;
    int aux,modifnum;
    int indice=0;
    char continuar='s';


    for(i=0;i<5;i++){

        printf("\nIngrese un numero:");

        scanf("%d",&num[i]);

        acu=acu+num[i];

    }

    for(i=0;i<5;i++){

        for(j=i+1;j<5;j++)

          if(num[i]>num[j]){

             aux=num[i];

             num[i]=num[j];

             num[j]=aux;

          }

    }
        mayor=num[0];

        menor=num[0];

       for(i=0;i<5;i++){

            if(num[i]>mayor){

               mayor=num[i];

        }


        else if(num[i]<menor){

                menor=num[i];

        }
    }


    printf("\nEl listado de los numeros ordenados son={%d %d %d %d %d}\n",num[0],num[1],num[2],num[3],num[4]);

    printf("\nEl nro mayor es el: %d\n",mayor);

    printf("\nEl nro menor es el: %d\n",menor);

    printf("\nEl promedio es el: %d\n",prom=acu/5);

    //system("cls");

    while(continuar=='s'){

          printf("\nIngrese un indice para modificar el nro:");

          scanf("%d",&indice);

          printf("\nIngrese un numero:");

          scanf("%d",&num[indice]);

          printf("\nSe realizo la modificacion.El nuevo nro es: %d y ocupa la posicion: %d\n\n",num[indice],indice);

          fflush(stdin);

          printf("\nQuiere seguir modificando los elemento del vecto.S/N?:");

          scanf("%c",&continuar);
    }

  printf("\nSe ha actualizado el vector sus numeros ordenados son={%d %d %d %d %d}\n",num[0],num[1],num[2],num[3],num[4]);

    return 0;
}
