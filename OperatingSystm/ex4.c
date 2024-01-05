#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(int argc,char const* argv[]){
    pid_t childpid=0;
    int i,n;
    if(argc!=2){
        fprintf(stderr,"Usage:%s processes \n ",argv[0]);
        return 1;
    }
    n =atoi(argv[1]);
    for(i=1;i<n;i++){
        if(childpid=fork()){
            break;
        }
        fprintf(stderr,"i: %d process ID : %ld parentID %lf child ID : %ld\n",i,(long)getpid(),(long)getpid,(long)childpid);
        for(int i=0;i<3;i++){
            fork();
        }
        printf("Hello\n");
        return 0;
    }
}