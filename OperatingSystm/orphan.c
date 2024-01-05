#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main() 
{   
    //orphan process
    int pid = fork(); 
  
    if (pid > 0){

        printf("I am child %ld\n",(long)getpid());
        printf("My parent pid :%d\n",getpid());
    }
    else if (pid == 0) 
    { 
        sleep(5); 
        printf("I am child %ld\n",(long)getpid());
        printf("My child pid :%d\n",pid);
    }
    
  
    return 0; 
} 