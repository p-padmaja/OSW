#include "osw.h"
 int main(){
    char str1[]="Hello Parent";
    char str2[]="Bye Child";
    pid_t pid=fork;
    if(pid){
        for(int i=0;str1[i]!=NULL;i++){
            fprintf(stderr,"%c",str1[i]);
        }
    }
    else{
        for(int i=0;str2[i]!=NULL;i++){
            fprintf(stderr,"%c",str2[i]);
        }
    }
    return 0;
 }