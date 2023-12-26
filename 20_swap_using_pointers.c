#include <stdio.h>


void swap(int *i, int *j);


int main() {
    int a ,b;
    printf("the first number is:\n");
    scanf("%d",&a);
    printf("the second number is:\n");
    scanf("%d",&b);
   

 
    swap(&a,&b);
    printf("after swapping values of a and b\n");
    printf("a is %d\n", a);
    printf("b is %d\n", b);

    return 0;
}


void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}
 