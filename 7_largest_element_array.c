#include<stdio.h>
int main(){
 

    int a[9]={10,2,3,4,5,6,7,8,9};
    int temp;
    for (int i = 0; i < 7; i++)
    {
        
    
    
    
    
    for(int i=1;i<=8;i++){
        
     if (a[i]>a[i+1]){
        temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;
       
     }
    }
       
     
     for(int i=0;i<=8;i++){
      printf("%d\n",a[i]);
     
    }
    
     return 0;
}
}    
