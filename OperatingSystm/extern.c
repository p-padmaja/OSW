#include<stdio.h>
#include<errno.h>
int main(int argc,char const* argv){
    //errno=3;
    for(int i=0;i<200;i++){
        errno=i;
        perror("Error");
    }
    
    return 0;
}