#include <stdio.h>
float main(){
  float c;
  double f;
  printf("Enter the temp in celsius:");
  scanf("%f",&c);
  f=((9*c)/5)+32;
  printf("The temp. of %f in fahrenheit is %lf\n",c,f);
  return 0;
}
