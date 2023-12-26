//performing operations on strings
#include<stdio.h>
int main(){
    int i;

    int a[9]={1,2,3,4,5,6,7,8,9};
    int sum=0;
    int largest=a[0];
    int smallest=a[9];

    for(int i=0;i<=8;i++){
    sum=sum+a[i];
     if(a[i]>largest){
     largest=a[i];
    
    }
  if(a[i]<smallest){
    smallest=a[i];

  }
    }
     printf("sum is %d\n",sum);
     printf("average is %d\n",sum/8);
     printf("the maximum is %d\n",largest);
     printf("the smallest is %d\n",smallest);
    return 0;
}


