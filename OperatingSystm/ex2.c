#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
    pid_t childpid;
    pid_t mypid;
    mypid=getpid();
    childpid=fork();
    if(childpid==-1){
        perror("Failed to fork");
        return 1;
    }
    if(childpid==0){
        printf("I am child %ld,id=%ld\n",(long)getpid(),(long)mypid);
    }
    else{
        printf("I am parent %ld,id=%ld\n",(long)getpid(),(long)mypid);
    }
}