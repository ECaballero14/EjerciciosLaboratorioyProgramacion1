#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*int main()
{
   int i=0;
   int num;
   int maximo=0;
   int minimo=0;
   for(i=0;i<=5;i++){
   printf("\nIngrese numero:");
   scanf("%d",&num);
       if(num>maximo){
          maximo=num;
          printf("\nEl numero maximo actual es: %d\n",maximo);
       }
       else if(num<minimo){
         minimo=num;
         printf("\nEl numero minimo actual e: %d\n",minimo);
      }
   }
   return 0;
   */

   int i=0;
   int num;
   int maximo=0;
   int minimo=0;
   char resp='s';
   while(resp!='n'){
   printf("\nIngrese numero:");
   scanf("%d",&num);
       if(num>maximo){
          maximo=num;
          printf("\nEl numero maximo actual es: %d\n",maximo);
          i++;
       }
       else if(num<minimo){
         minimo=num;
         printf("\nEl numero minimo actual e: %d\n",minimo);
         i++;
      }

     printf("\n¿Quiere ingresar más números?.s/n");
   }
   return 0;

}
