#include <stdio.h>

int main(){
	for(int i=1;i<6;i++){
		for(int j=1;j<i+1;j++){
		  printf("%c",64+j);
		}
		printf("\n");
	}
	return 0;
}
