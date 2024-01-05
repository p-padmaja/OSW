#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
    for(int i=0;i<3;i++){
        if(fork()||fork());
    }
    printf("hello\n");
}