#include <stdio.h>
#include <math.h>
 int main(){
 	printf("Enter a number:");
	int n,count=0,sum=0;
	scanf("%d",&n);
	int num=n;
	while(n){
		int d=n%2;
		n=n/2;
		sum=sum+d*pow(10,count);
		count++;
	}
	printf("%d decimal to binary is %d ",num,sum);
 }
