#include <stdio.h>

int main(){
        int n,result=1;
 		printf("Enter the number whose factorial to be calculated: \n");
 		scanf("%d", &n);
 		for(int i=1;i<=n;i++){
 		     result*=i;
 		}
 		printf("factorial of %d is %d :",n,result);
 		return 0;
}
