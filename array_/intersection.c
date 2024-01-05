#include <stdio.h>

int intersection(int a[],int b[],int n,int m){
	int flag=0;
    printf("Intersection of two array :");
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
	int n,m;
	printf("Enter the size of the first array:");
	scanf("%d",&n);
	printf("Enter the size of the second array:");
	scanf("%d",&m);
	int arr1[n],arr2[m];
	printf("Enter %d number in the 1st array:",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter %d number in the 2nd array:",m);
	for(int i=0;i<m;i++){
		scanf("%d",&arr2[i]);
	}
    return intersection(arr1,arr2,n,m);
}	
