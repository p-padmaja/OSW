#include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>
 #include<sys/types.h>
 #include<sys/wait.h>
 
 int main(){
 	pid_t pid = fork();
 	
 	if(pid == -1){
		perror("Fork failed");
		exit(EXIT_FAILURE);
	}
	if(pid == 0){
		execl("/usr/bin/cal","cal","2024",(char *)NULL);
		perror("execl failed");
		exit(EXIT_FAILURE);
	}
	else{
		wait(NULL);
		printf("Calendar printed successfully");
	}
	return 0;
}
