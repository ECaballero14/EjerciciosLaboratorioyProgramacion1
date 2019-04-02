#include <stdio.h>
#include <stdlib.h>
#define cant 1

/*primer ejemplo

int main()
{
    int datos[5];
    int acum=0;
    int i;
    for(i=0;i<cant;i++){
       printf("Ingrese una Edad:\n");
       scanf("%d",&datos[i]);
       acum=acum+datos[i];
    }
    i=0;
    for(i=0;i<cant;i++){
       printf("\nLa edad es %d",datos[i]);
    }
    printf("\nEl promedio de las edad es: %d",acum/cant);
    return 0;
}*/

/*int main()
{
  int legajo[cant];
  int nota1[cant];
  int nota2[cant];
  int nota3[cant];
  //float not3[3];
  int i;
  int acum=0;
  for(i=0;i<cant;i++){
      printf("\nIngrese numero de legajo:");
      scanf("%d",&legajo[i]);
      printf("\nIngrese nota 1:");
      acum=acum+nota1[cant];
      scanf("%d",&nota1[i]);
      printf("\nIngrese nota 2:");
      scanf("%d",&nota2[i]);
      acum=acum+nota2[cant];
      printf("\nIngrese nota 3:");
      scanf("%d",&nota3[i]);
      acum=acum+nota3[cant];
    }

  for(i=0;i<cant;i++){

     printf("\nEl numero de legajo es %d",legajo[i]);

     printf("\nLa nota1 cargada es %d ",nota1[i]);

     printf("\nLa nota2 cargada es %d ",nota2[i]);

     printf("\nLa nota3 cargada es %d ",nota3[i]);
  }

     //printf("\nEl numero de legajo es %d y el promedio de las notas es %d",acum/i);

    // printf("\nEl numero de legajo es %d y el promedio de las notas es %d",legajo[i],nota3[i]=(float)(nota1[i]+nota2[i])/2);
*/

    /*#include <stdio.h>
    #define MAX 100
    void main(void)
    {
    int edad[MAX],i,leg;
    float sueldo[MAX],suma=0,prom,aux;
    char seguir;
    for(i=0;i<MAX;i++)
    {
    edad[i]=0;
    sueldo[i]=0;
    }
    do
    {
    printf("Ingrese Legajo:");
    scanf("%d",&leg);
    printf("Ingrese Edad:");
    scanf("%d",&edad[leg-1]);
    fflush(stdin);
    printf("Ingrese el sueldo:");
    scanf("%f",&aux);
    sueldo[i]=aux;
    printf("\nDesea ingresar otro dato S/N?");
    scanf("%c",&seguir);
    cant++;
    }while(seguir=='s');

    suma=suma+sueldo[i];
    prom=suma/MAX;
    printf("\nEl sueldo promedio es %.2f",prom);
    return 0;*/
/*int main(){

    int i=0;

    int max=0,min=0;

    int datos[cant];

    for(i=0;i<cant;i++){
      if(i==0 || datos[i]>max){
         max=datos[i];
         printf("El maximo es %d",max);
      }
      if(i==0 || datos[i]<min){
         min=datos[i];
         printf("El minimo es %d",min);
      }
   }*/

int main(){

    int vect[cant],i,j,aux;
    for(i=0;i<cant-1;i++){
      for(j=i+1;j<cant;j++)
        if(vect[i]>vect[j]){
           aux=vect[i]>vect[i]
          }
      if(i==0 || datos[i]>max){
         max=datos[i];
         printf("El maximo es %d",max);
      }
      if(i==0 || datos[i]<min){
         min=datos[i];
         printf("El minimo es %d",min);
      }
   }
}

}
