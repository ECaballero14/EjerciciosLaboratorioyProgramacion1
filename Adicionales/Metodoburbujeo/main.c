#include <stdio.h>
#include <stdlib.h>
int main()

{
    int vec[5]={1,3,4,2,0};

    int i,j,mayor=0,menor=0;

    int aux;

    for(i=0;i<5;i++){

        for(j=i+1;j<5;j++){

            if(vec[i]>vec[j]){
               aux=vec[i];
               vec[i]=vec[j];
               vec[j]=aux;

            }

         }

      }

   printf("\nLos valores ordenados del vector son {%d; %d; %d; %d; %d}\n",vec[0],vec[1],vec[2],vec[3],vec[4]);

   for(i=0;i<5;i++){

          if(vec[i]>mayor){

             mayor=vec[i];

          }

          else if(vec[i]<menor){

              menor=vec[j];

         }
      }

    printf("\nEl nro mayor es el %d\n",mayor);

    printf("\nEl nro menor es el %d\n",menor);

  return 0;

}

