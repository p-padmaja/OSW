#include <stdio.h>
void swap1(int,int);
void swap2(int*,int*);
//void swap3(int*);
void swap3(int[]);

int main(){
	int a=5,b=10;
	int arr[2]={a,b};
	printf("Main: before swap1 a= %d,b=%d\n",a,b);
	swap1(a,b);//call by value
	printf("Main: after swap1 a= %d,b=%d\n",a,b);
	swap2(&a,&b);//call by address
	printf("Main: after swap2 a= %d,b=%d\n",a,b);
	
	swap3(arr);//call by address
    //swap3(&(arr[0]));line 16 and 17 are same.
	printf("Main: after swap3 a= %d,b=%d\n",arr[0],arr[1]);
}
void swap1(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	printf("Swap1:after swap a=%d,b=%d\n",a,b);
}

void swap2(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("Swap2:after swap a=%d,b=%d\n",*a,*b);
}
//void swap3(int* arr)
void swap3(int arr[]){
	int temp=arr[0];
	arr[0]=arr[1];
	arr[1]=temp;
	printf("Swap3:after swap a=%d,b=%d\n",arr[0],arr[1]);
}
