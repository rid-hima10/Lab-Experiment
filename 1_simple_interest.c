#include<stdio.h>
int SI();

int main(){
SI();
}

int SI(){
    float p,r,t,si;
    printf("enter principal amount:\n");
    scanf("%f",&p);
     printf("enter rate of interest:\n");
    scanf("%f",&r);
     printf("enter time period:\n");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("the simple interest is:%.2f",si);
    return 0;
}