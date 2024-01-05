#include <stdio.h>

int sort(int [],int);

int main(){
	int arr[5]={2,1,8,0,7};
	sort(arr,5);
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
		//printf("%d",i[arr]);
	}
	
}
int sort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
	}
	return 0;
}
