#include <stdio.h>
#include <malloc.h>

void display(int *,int);
void delete(int *,int *,int);

int main(){
	int n, dlt;
	int *a;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	
	printf("Enter elements :");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);	
	printf("Before Deletion:");	
	display(a,n);
	
	printf("Enter the number you want to delete:\n");
	scanf("%d",&dlt);
	
    delete(a,&n,dlt);
    printf("After Deletion:\n");	
	display(a,n);
	return 0;
}

void delete(int * a,int * n,int dlt){
	int m;
	for(int i=0;i<*n;i++){
		if(a[i]==dlt){
			m=i;
			*n = *n-1;
			break;
		}
	}
	for(int i=m;i<*n;i++){
		a[i]=a[i+1];
	}
}

void display(int *a,int n){
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);	
	
}	
