#include"osw.h"
int main(int argc,char const *argv[]){
    pid_t chpid[3]={0};
    int st;
    for(int i=0;i<1;i++){
        chpid[i]=fork();
        if(chpid[i]){
            printf("Parent pid=%ld ,chpid=%ld\n",(long)getpid());
        }
        else{
            printf("\tChild %d: pid=%ld,chpid=%ld\n",(long)getpid());
        }
    }
    printf("Child process is terminating with status %d",st);
    printf("Terminating Child");
}