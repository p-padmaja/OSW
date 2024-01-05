#include <unistd.h>
int main(){
	pid_t getpid(void);
	pid_t getppid(void);
	printf("Process %ld",(long)getpid());
	printf("Parent %ld",(long)getppid());	
}
