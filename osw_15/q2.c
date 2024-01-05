#include <stdio.h>


int main(void){
	int n, sum=0, prod=1, i=0;
	float avg;
	printf("enter a number (put -101 to quit): ");
	scanf("%d", &n);
	
	while(n!=-101){
		sum+=n;
		prod*=n;
		i++;		//not a part of updation counter
		printf("enter a number (put -101 to quit): ");
		scanf("%d", &n);
	}
	if(i>0){
		avg=(float)sum/i;
		printf("sum= %d, product= %d, average= %.2f" ,sum ,prod ,avg);
	}
	else{
		printf("no input taken /n");
	}
	return 0;
}
