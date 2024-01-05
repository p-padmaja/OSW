#include <stdio.h>

int linearsearch(int a[],int n){
	for(int i=0;i<10;i++){
		if(a[i]==n){
			printf("Element is found at index %d",i);
		}
	}
}
int main(){
	int arr[10];
	int num;
	printf("Enter 10 number:");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to search : ");
	scanf("%d",&num);		
    return linearsearch(arr,num);
}	

	

