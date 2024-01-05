#include <stdio.h>


int main(){
	int a[10];
	int sum=0;
	float avg;
	
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}	
	for(int i=0;i<10;i++){
		sum+=a[i];
		
	}
	avg=(float)sum/10;
	printf("\nsum=%d",sum);
	printf("\navg=%f",avg);
}
