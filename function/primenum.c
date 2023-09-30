#include <stdio.h>
int checkprime(int n){
 	if(n<2){
 		 return 0;
 	}
 	else{
		int x=n/2;
		for(int i=2;i<=x;i++){
			if(n%i==0){
		 		return 0;
			}
 		}
 	}
 	return 1;
 }
 int main(){
		 for(int i=1;i<=10000;i++){
		 	if(checkprime(i)){
		 		printf("%d\n",i);
		 	}
		 }
	 	
 }

 
