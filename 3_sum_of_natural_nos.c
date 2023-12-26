#include<stdio.h>
int main(){
    int n,sum;
    printf("enter the number:\n");
    scanf("%d",&n);
    
    sum=0;

    for(int i=0;i<=n;i++){
     sum=sum+i;

    }
    printf("the sum of upto n is: %d",sum);
    return 0;

}