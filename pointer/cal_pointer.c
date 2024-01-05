#include <stdio.h>

int calculate(int,int,int*,int*,int*,double*);

int main(){
	int a,b,sum,subtract,multiply;
	double division;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	calculate(a,b,&sum,&subtract,&multiply,&division);
	printf("sum of %d and %d is :%d\n",a,b,sum);
	printf("subtraction of %d and %d is :%d\n",a,b,subtract);
	printf("multiplication of %d and %d is :%d\n",a,b,multiply);
	printf("division of %d and %d is :%lf\n",a,b,division);
	return 0;
}
int calculate(int a,int b,int* sum,int* subtract,int* multiply,double* division){

	 *sum=a+b;
	 *subtract=a-b;
	 *multiply=a*b;
	 *division=(double)(a/b);
	
}
