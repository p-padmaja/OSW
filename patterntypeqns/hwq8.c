#include <stdio.h>

int main(){
	for(int i=1;i<11;i++){
		for(int j=1;j<11;j++){
			if((j%i==0)||(i%j==0)){
		 		 printf("*");
			}
			else{
			     printf(" ");
			}
		}
		printf("%d\n",i);
	}
	return 0;
}
