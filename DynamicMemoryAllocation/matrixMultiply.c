#include <stdio.h>
#include <malloc.h>

void display(int **,int,int);
int ** multiply(int **,int **,int **,int,int,int);

int main(){
	int n1,n2,m1,m2;
	int **a,**c,**p;
	printf("Enter the row of first array: ");
	scanf("%d",&n1);
	printf("Enter the column of first array: ");
	scanf("%d",&m1);
	printf("Enter the row of second array: ");
	scanf("%d",&n2);
	printf("Enter the column of second array: ");
	scanf("%d",&m2);
	a=(int**)malloc(n1*sizeof(int*));
	for(int i=0;i<n1;i++){
		a[i]=(int*)malloc(m1*sizeof(int));
	}
	c=(int**)malloc(n2*sizeof(int*));
	for(int i=0;i<n2;i++){
		c[i]=(int*)malloc(m2*sizeof(int));
	}	
	p=(int**)malloc(n1*sizeof(int*));
	for(int i=0;i<n1;i++){
		p[i]=(int*)malloc(m2*sizeof(int));
	}
	printf("Enter elements of first array :");
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++){
		  scanf("%d",&a[i][j]);	
		 }
	}
	printf("Enter elements of second array :");
	for(int i=0;i<n2;i++){
		for(int j=0;j<m2;j++){
		  scanf("%d",&c[i][j]);	
		 }
	}
	printf("First Array:\n");
	display(a,n1,m1);
	printf("Second Array:\n");
	display(c,n2,m2);
	if(m1==n2){
	  multiply(a,c,p,n1,m2,m1);
	  printf("Resultant Array:\n");
	  display(p,n1,m2);
	}
	else{
		printf("Multiplication is not possible");
	}
	
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
int ** multiply(int **a,int **c,int **p,int n1,int m2,int m1){
	for(int i=0;i<n1;i++){
	  for(int j=0;j<m2;j++){
	  	  p[i][j]=0;
	  	  for(int k=0;k<m1;k++){
	  	    p[i][j]+=(a[i][k]*c[k][j]);
	  	  }
	  }
	
	}
	return p;
}

