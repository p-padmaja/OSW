#include <stdio.h>
#include <math.h>
int isPrime(int);
int isPallindrome(int);

int main (){  
    int i, n;  
    printf ("Enter a number : ");  
    scanf (" %d", &n);
    printf("Primepallindrome numbers in %d is: ",n);
    for(i=2;i<=n;i++){
    	if(isPrime(i) && isPallindrome(i)){
        	 printf ("%d  ",i);  
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
int isPallindrome(int n){
    int sum=0;
	int num=n;
	while(n!=0){
		int d=n%10;
		n=n/10;
		sum=sum*10 +d;
	}
	if(sum==num){
		return 1;
	}
	else{
	  	return 0;
	}
 }

