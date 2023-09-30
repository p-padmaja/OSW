#include <stdio.h>
#include <math.h>

int ncr(int,int);
int fact(int);


int ncr(int n,int r){
    int res;
	res=fact(n)/(fact(r)*fact(n-r));
	return res;
}
int fact(int n){
	int fact=1;
 	for(int i=1;i<=n;i++){
 		 fact=fact*i;
 	}
 	return fact;
}
int main(){
	for(int i=1;i<6;i++){
		for(int j=1;j<6-i;j++){
		  printf("  ");
		  }
		for(int j=1;j<i+1;j++){
			printf("%2d  ",ncr(i,j-1));
		}
		printf("\n");
	}
	return 0;
}
