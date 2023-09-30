#include <stdio.h>

int main(){
 	int n;		
	printf("Enter a value: ");
	scanf("%d",&n);
	switch(n){
		case 1: printf("Hello ");break;
		case 2:printf("This ");break;
		case 3: printf("is ");break;
		default:printf("Padmaja ");
	}
	return 0;
}
