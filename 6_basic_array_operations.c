#include<stdio.h>
int main(){
    int i;

    int a[]={1,2,3,4,5,6,7,8,9};
    for(int i=1;i<=8;i=i+2){
    printf("a[%d]=%d\n",i,a[i]);

    }
    return 0;
}