
//creating a 3*3 matrix
#include <stdio.h>
//this is a 3*3 matrix

int main() {
  int i,j;
  int matrix_1[3][3];//first matrix
   printf("for first matrix\n");
  for(int i =0; i<3 ; i++){
    for(int j = 0; j<3 ; j++){
      printf("enter the element at %d%d position:-", i+1,j+1);
      scanf("%d",&matrix_1[i][j]);
      
    }
   
  }
  printf("the matrix is :\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d\t",matrix_1[i][j]);
    }
   printf("\n");
  }
   int matrix_2[3][3];//second matrix
     printf("for second matrix\n");

  for(int i =0; i<3 ; i++){
    for(int j = 0; j<3 ; j++){
      printf("enter the element at %d%d position:-", i+1,j+1);
      scanf("%d",&matrix_2[i][j]);
      
    }
   
  }
  printf("the matrix is :\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d\t",matrix_2[i][j]);
    }
   printf("\n");
  }
  int sum[3][3];//sum of the two matrix
  printf("sum of two matrix is\n");

  for(i=0;i<3;i++){
    for(j=0;j<3;j++){

      sum[i][j]=matrix_1[i][j]+matrix_2[i][j];
     
            printf("%d\t",sum[i][j]);

    }
    printf("\n");
  }


 return 0;
}