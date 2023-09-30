#include <stdio.h>
int main(){
	printf("Enter a number:");
	int n,sum;
	scanf("%d",&n);
	sum=0;
	while(n!=0){
		sum+=n%10;
		n=n/10;
	}
	printf("Sum of all the digits is %d ",sum);
	return 0;
}
