#include<stdio.h>
#include<stdlib.h>

int function1();
int function2();

int main(){
	int p;
	p=function1();
	printf("Function1 in main: %d\n",p);
	p=function1();
	printf("Function1 in main: %d\n",p);
	p=function2();
	printf("Function2 in main: %d\n",p);
	p=function2();
	printf("Function2 in main: %d\n",p);
	return 0;
}
int function1(){
	int count=0;
	count++;
	printf("Inside fun1: %d\n",count);
	return count;
}
int function2(){
	static int count=0;
	count++;
	printf("Inside fun2:%d\n",count);
	return count;
}
