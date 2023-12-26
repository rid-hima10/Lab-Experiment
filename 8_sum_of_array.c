#include<stdio.h>
int main(){
    int i;
    
    int a[]={1,2,3,4,5,6,7,8,9};
    int  sum=0;
    for(int i=0;i<=8;i++){
    sum=sum+a[i];

    }
    printf("the sum of all elements of array is: %d",sum);
    return 0;
}

