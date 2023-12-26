#include<stdio.h>

int main(){

 factorial();
    return 0;
}

int factorial()
{
   int n,f;
   printf("enter the number:\n");
   scanf("%d",&n);

   f=1;
    for(int i=1;i<=n;i++){
     f=f*i;

    
}
printf("factorial is %d",f);
return 0;
}