#include <stdio.h>
#include <math.h>
int isPrime(int);

int main (){  
    int i, n, count = 0;  
    printf ("Enter a number: ");  
    scanf (" %d", &n);
      
    for(i = 2;i<=sqrt(n);i++) {  
        if(n%i==0){ 
        	if(isPrime(i) && isPrime(n/i)){
            	printf ("\nThe twin prime number is: (%d, %d) ", i,n/i);  
            }
        }  
    }

    return 0;  
}  
int isPrime(int n){
 	if(n<2){
 		 return 0;
 	}
 	else{
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
		 		return 0;
			}
 		}
 	}
 	return 1;
 }

