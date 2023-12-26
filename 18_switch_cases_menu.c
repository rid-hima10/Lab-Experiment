
#include<stdio.h>
#include<math.h>
int main(){
    char op;
    printf("enter operation: ");
    scanf("%c",&op);
    int a,b;
    printf("enter the numbers: ");
    scanf("%d,%d", &a,&b);

    switch (op)
    {
        case '+':
        printf("sum is: %d\n",a+b);
        break;
        case'-':
        printf("difference is: %d\n",a-b);
        break;
        case'/':
        printf("quotient is: %f\n",a/b);
        break;
        case'*':
        printf("product is: %f\n",a*b);
        break;
        case'p':
        printf("power is: %f\n",pow(a,b));
        break;
        default:
        printf("enter valid operation\n");
    }
    return 0;
}
