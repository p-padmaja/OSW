#include <stdio.h>
int subarr(int*,int,int,int**);
//int* subarr1(int*,int,int,int*);
int main(){
	int n=10;
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int* b;
	int m,k=35;
	m=subarr(arr,n,k,&b);
	//b=subarr1(arr,n,k,&m);
	
	for(int i=0;i<m;i++){
		printf("%d\n",b[i]);
	}
	return 0;
}
int subarr(int* arr,int n,int k,int** b){
	int m;
	for(int i=0;i<n;i++){
		if(arr[i]>k){
			 *b=&arr[i];
			return (n-i);	
			}
	}
	return 0;
}
/*int* subarr1(int* arr,int n,int k,int* m){
	int* b;
	for(int i=0;i<n;i++){
		if(arr[i]>k){
			*m=n-i;
			return &arr[i];	
			}
	}
	return &arr[n];
}
*/
