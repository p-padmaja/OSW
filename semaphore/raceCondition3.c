#include "osw.h"
int main(){
    int a=100,b=100;
    pid_t pid=fork();
    if(pid){
        b=a-30;
        printf("parent: %d \n",b);
    }
    else{
        a=a+b;
        printf("child: %d \n",a);
    }
    return 0;
}