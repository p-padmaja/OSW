#include <stdio.h>

int insert(int a[],int n){
    printf("After insertion the array is :");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			 if(b[i]==a[j]){
			 	flag=1;
			}		
		}
		if(flag==1){
				printf(" %d ",b[i]);
		}
		flag=0;		
				
	}
	return 0;
	
}
int main(){
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers in the array:",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to insert : ");
	scanf("%d",&num);
    return insertion(arr,num);
}	
