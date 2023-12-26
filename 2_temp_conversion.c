//convert celsius and fahrenheit
#include<stdio.h>

void tempConvert();

void main(){



  tempConvert();


}
//FUNCTION DEFINATION
void tempConvert(){
   float temp,C,F;
   char conversion;

   printf("enter temperature to be converted\n");
   scanf("%f",&temp);

   printf("enter the temp. scale you want to calculate in(For Celsius, type C; For Fahrenheit type F)\n");
   scanf(" %c",&conversion);


   switch(conversion){
      case 'C':
      C=(temp-32)*5/9;
      
      printf("temperature in celsius is:%.2f\n C",C);
      break;

      case 'F':
      F=(temp*9/5)+32;
      
      printf("temperature in fahrenheit is:%.2f\n F",F);

      break;
       default:
         printf("Invalid conversion type.\n");
         break;
   }


   
}