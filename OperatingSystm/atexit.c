#include"osw.h"
void termination(){
    printf("Process terminated successfully\n");
}
int main(int argc,char const *argv[]){
   if(atexit(termination)==-1){
    perror("Error: ");
    exit(0);
   }
   pid_t pid=fork();
   if(pid){
    printf("Parent:%ld | PPID %d\n ",(long)getpid());
    sleep(5);
   }
   else{
    printf("Child:%ld | PPID %d\n ",(long)getpid());
    sleep(4);
   }
   return 0;
}