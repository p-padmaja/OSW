#include "osw.h"
#include<semaphore.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(void){
    pid_t pid=fork();
    sem_t *sem1,*sem2;
    sem1=sem_open("/sem",O_CREAT,S_IRUSR|S_IWUSR,1);
    sem1=sem_open("/sem",O_CREAT,S_IRUSR|S_IWUSR,0);
    if(pid){
        int i=0;
        while(i<5){
            sem_wait(sem1);
            printf("00\n");
            i++;
        }
    }
    else{
        int i=0;
         while(i<5){
            sem_wait(sem2);
            printf("11\n");
            i++;
        }
    }
}