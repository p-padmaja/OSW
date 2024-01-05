#include<stdio.h>
#include<unistd.h>
#include<errno.h>

int main(int argc,char const* argv){
    int fd=3;//file descripter,0-input,1-out,3-error
    if(close(fd)==-1){ //close()-return 0 on success,-1 on error
        perror("Error");
    }
    return 0;
}