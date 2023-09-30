#include <stdio.h>
float main(){
  float a,b,sum;
  printf("Enter two data:");
  scanf("%f%f", &a,&b);
 
  sum=a+b;
  
  printf("The sum of %.2f and %.2f is %6.2f\n ",a,b,sum);
   return 0;
 }
