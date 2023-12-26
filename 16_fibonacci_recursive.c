
//printing fibonacci sequence using recursions
#include<stdio.h>

int series(int n);

void main(){
   int n=10;
   for(int i=0;i<=n;i++){
   printf("%d\t",series(i));
   }
}

int series(int n){
   if (n<2){
      return n;
   }
   else{
  return series(n-1)+series(n-2);

   }
}