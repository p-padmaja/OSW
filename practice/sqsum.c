#include <stdio.h>
int main(){
  	int n,result=0;
  	printf("Enter a number:" );
  	scanf("%d", &n);
  	for(int i=1;i<=n;i++){
  	 		result=result+(n^2);
  	 		
  	}
  	printf("Squre sum of %d is %d :", n,result);
}
