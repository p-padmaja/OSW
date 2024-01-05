#include <stdio.h>
#include <math.h>

int main(void){
	float x,y;
	int n;
	printf("enter a number: ");
	scanf("%f",&x);
	
	for(int i=1; i<=n; i++){
	if(i%2==0){
		y=y+(pow(x,i)/i);
		return y;
		}
	else{
		y=y-(pow(x,i)/i);
		return y;
	}
		
		printf("%f" ,&y);
	} 
	return 0;
}
