#include <stdio.h>

void display(int [][4]);
void add(int [][4],int [][4],int [][4]);

int main(){
    int c[3][4];
	int a[3][4]={{1,2,3,4},{2,3,4,5},{5,6,7,8}};
	int b[3][4]={{9,5,3,2},{0,1,4,7},{8,1,2,4}};
	add(a,b,c);
	display(a);
	return 0;
}
void display(int c[][2]){
	for(int i=0;i<3;i++){
	  for(int j=0;j<4;j++){
		 printf("%3d",c[i][j]);
	  }
	  printf("\n");
	}
}
void add(int a[][4],int b[][4],int c[][4]){
	for(int i=0;i<3;i++){
	  for(int j=0;j<4;j++){
	  	  c[i][j]=a[i][j]+b[i][j];
	  }
	}
}
