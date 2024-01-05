#include<stdio.h>
#include"myHeader.h"

int main(){
	extern int num;
	printf("%d",num);
	return 0;
}
