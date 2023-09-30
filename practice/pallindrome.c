#include <stdio.h>
 int main(){
 	printf("Enter a number:");
	int n,sum=0;
	scanf("%d",&n);
	int num=n;
	while(n!=0){
		int d=n%10;
		n=n/10;
		sum=sum*10 +d;
	}
	if(sum==num){
	 printf(" %d is a pallindrome number ",num);
	}
	else{
	 printf(" %d is not a pallindrome number ",num);
	}
 }
