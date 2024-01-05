#include <stdio.h>
int add(int[],int[],int[],int);

int main(){
	int sum[5];
	int arr1[5]={2,1,8,0,7};
	int arr2[5]={7,2,6,3,4};
	
	add(arr1,arr2,sum,5);
	printf("sum of arrays: \n");
	for(int i=0;i<5;i++){
		printf("%d\n",sum[i]);
	}
}
int add(int arr1[],int arr2[],int sum[],int n){
	for(int i=0;i<n;i++){
	sum[i]=arr1[i]+arr2[i];
	}
	
}
