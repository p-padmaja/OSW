#include "osw.h"
 int main(){
    pid_t pid=fork();
    if(pid){
        printf("line1\n");
        printf("line2\n");

    }
    else{
        printf("line3\n");
        printf("line4\n");
 
    }
    return 0;
 }