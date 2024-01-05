#include <stdio.h>
int subarr(int[],int,int);

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	//int k=5;
	//int n=9;
	return subarr(arr,5,9);

}

int subarr(int arr[],int k,int n){
	for(int i=0;i<n;i++){
		if(k<arr[i]){
				printf("%d\n",arr[i]);	
			}
		
	}
}
