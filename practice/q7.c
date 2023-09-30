#include <stdio.h>
#include <math.h>

float main(){
    float n;
    printf("Enter the side of the hexagon : ");
    scanf("%f",&n);
    float area=((3*sqrt(3))/2)*pow(n,2);
    printf("Area of the hexagon is %f ",area);
    return 0;
}
