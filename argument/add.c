#include<stdio.h>
#include<stdlib.h>
int main(int argc,char const* argv[]){
    printf("Number of arguments: %d\n",argc);
    if(argc<3){
    	printf("Usage : <progname><arg1><arg2>\n");
    	exit(0);
    }
    printf("Arguments \n");
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    int c=a+b;
    printf("sum=%d\n",c);
}
