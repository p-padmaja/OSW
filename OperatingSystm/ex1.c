#include<stdio.h>
#include<unistd.h>
int main(){
    int x;
    x=0;
    fork();
    x=1;
    printf("I am a process of id %ld and x is %d\n",(long)getpid(),x);
    return 0;
}