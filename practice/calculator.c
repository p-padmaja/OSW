#include <stdio.h>
#include <math.h>
#define PI 3.14
double main(){
        int op;
		double a,b,result;
		printf("Enter two number: ");
		scanf("%lf%lf",&a,&b);
		printf("Enter the operation to be performed: \n");
		printf("1 for Addition \n 2 for subtraction \n 3 for multiplication \n 4  for division \n 5 for modulus \n 6 for power calculation \n 7 for sqrt \n 8 for sin \n 9 for cos ");
		scanf("%d",&op);
		switch(op){
		    case 1:
		     	printf("Addition of %lf and %If is %lf ",a,b,a+b);break;
		   case 2:
		     	printf("Subtraction of %lf and %lf is %lf ",a,b,a-b);break;
		  case 3:
		     	printf("Multiplication of %lf and %lf is %lf",a,b,a*b);break;
		  case 4:
		     	printf(" %lf divided by %lf  is %lf ",a,b,a/b);break;
		 // case 5:
		     //   result= a % b;
		   //    printf("%lf modulo %lf  is %lf ",a,b,result);break;
		  case 6:
		        result=pow(a,b);
		     	printf(" %lf  power %lf  is %lf ",a,b, result );break;
		  case 7:
		  		result=pow(a,0.5);
		        printf(" Square root of %lf is %lf ",a , result);break;
		// case 8:
		  		//result=a*PI/180;
		     	//printf(" sin %lf  is %lf ",a,b,result);break;
		 // case 9:
		  	//	result=a*PI/180;
		     //	printf(" cos %lf  is %lf ",a,b,result);break;
	}
	return 0;	
}
