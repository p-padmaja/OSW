#include <stdio.h>

int sumOfTwoNumbers(int,int);

int main(){
   int result=sumOfTwoNumbers(10,20);
   printf("Result : %d\n",result);
   if(1){
    int a=50;
    printf("inside if a is %d :",a);
   }
   return 0;
}
int sumOfTwoNumbers(int a,int b){
	int c=a+b;
	return c;
}
