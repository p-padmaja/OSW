#include <stdio.h>

void primeFactor(int n){
	int c=2;
	while(n>2){
		 if(n%c==0){
		 	 printf("%d\n",c);
		 	 n /=c;
		 	 
		 }
		 else{
		 	c++;
		 }
	}
}
int main(){
	printf("Enter a number");
	int n;
	scanf("%d",&n);
	printf("Prime factor of %d is: \n",n);
	primeFactor(n);
	
	
}
