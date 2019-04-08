#include <stdio.h>
#include <stdlib.h>

int main()
{
   char rta;
   int num,max,min,flag=0;
   do{
     printf("\nIngrese numero:");
     scanf("%d",&num);
     if(flag==0||num>max){
        max=num;
     }
     if(flag==0||num<min){
        min=num;
        flag=1;
     }
     do{
     printf("\nContinuar?[S/N]");
     fflush(stdin);
     scanf("%c",&rta);
     rta=toupper(rta);
     }while(rta!='S' && rta!='N');
    }while(rta=='S');
     //system("Cls");
     printf("\nEl numero maximo es %d y el numero minimo es %d",min,max);
     return 0;
}
