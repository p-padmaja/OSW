#include"osw.h"
#include <bits/types/struct_rusage.h>
int main(int argc,char const *argv[]){
    pid_t chpid[3]={0};
    int st;
    struct rusage r;
    for(int i=0;i<1;i++){
        chpid[i]=fork();
        if(chpid[i]){
            printf("Parent pid=%ld ,chpid=%ld\n",(long)getpid(),chpid[i]);
        }
        else{
            printf("\tChild %d: pid=%ld,chpid=%ld\n",(long)getpid(),chpid[i]);
            if(i==0 || i==1){
                for(int j=0;j<100;j++){
                    printf("\tChild %d : %d\n",i,j);
                    sleep(1);
                }
                exit(0);
            }
        }
    }
    pid_t pid =wait3(&st,WUNTRACED,&r);
    printf("Child process %d is stopped with status %d/n",pid,st);
    printf("Terminating Child");
}