#include<stdio.h>
int main(){

    swapn();
    return 0;
}

int swapn(){

    int a,b;
printf("enter a:\n");
scanf("%d",&a);

printf("enter b:\n");
scanf("%d",&b);


a=a+b;
b=a-b;
a=a-b;

printf("after swapping a is: %d\n",a);
printf("after swapping b is: %d\n",b);

return 0;
}
