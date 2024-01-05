#include <stdio.h>
#include <malloc.h>

void display(int **,int,int);

int main(){
	int n,m;
	int **a;
	int *b;
	printf("Enter the row: ");
	scanf("%d",&n);
	printf("Enter the column: ");
	scanf("%d",&m);
	a=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++){
		a[i]=(int*)malloc(m*sizeof(int));
	}
	printf("Enter elements :");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		  scanf("%d",&a[i][j]);	
		 }
	}
	display(a,n,m);
	return 0;
}

void display(int **a,int n,int m){
	for(int i=0;i<n;i++){
	  for(int j=0;j<m;j++){
		printf("%3d",a[i][j]);	
   	}
   	printf("\n");
	}
}
