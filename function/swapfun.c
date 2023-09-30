#include <stdio.h>

void swap(int,int);

int main(){
	printf("Enter two number:");
	int a,b;
	scanf("%d%d",&a,&b);
	swap(a,b);
	
	
}
void swap(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping the numbers are: %d %d ",a,b);
}
