#include <stdio.h>

void swap(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping the elements are: %d %d \n",a,b);
}
void swapfn(int arr[]){
 	for(int i=0;i<2;i++){
 	  arr[i]=arr[i]+arr[i+1];
 	  arr[i+1]=arr[i]-arr[i+1];
 	  arr[i]=arr[i]-arr[i+1];
 	}
 	printf("After swapping the elements in the array are:");
 	for(int i=0;i<2;i++){
 	 	printf("%d",arr[i]);
 	}
}
int main(){
    int a,b,arr[2];
 	printf("Enter two elements");
 	scanf("%d%d",&a,&b);
 	swap(a,b);
 	printf("Enter the elements in the array :");
 	for(int i=0;i<2;i++){
		scanf("%d",&arr[i]);
	}
	swapfn(arr);
	return 0;
}
