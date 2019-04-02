int suma(int a, int b){
int totalsum;
totalsum=a+b;

return totalsum;
}
int resta(int a, int b){
int totalresta;
totalresta=a-b;
return totalresta;
}
int division(int a, int b){
int totaldiv;
int flag;
    if(b!=0){
      totaldiv=a/b;
      flag=0;
      }
    else if(a!=0){
      totaldiv=a/b;
      flag=0;
    }
    else if(a==0 && b==0){
      flag=1;
    }
return totaldiv;
}
int multiplicar(int a, int b){
int totalmult;
totalmult=a*b;
return totalmult;
}
int factorial(int a,int b){
   int totalA=1,totalB=1;
   int i=0,j=0;
   for(i=a;i>0;i--){
       totalA=totalA*i;
    }
   for(j=b;j>0;j--){
       totalB=totalB*j;
    }
  return totalA,totalB;
}



