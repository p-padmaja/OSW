#include <stdio.h>
#include <math.h>
int main(){
	int sum,n,count;
  for(int i=0;i<10000;i++){
	n=i,count=0;
	while(n){
		n/=10;
		count++;
	}
	  sum=0;
	  n=i;
	  while(n){
	   	   int d=n%10;
	       n=n/10;
		   sum+=pow(d,count);
	  }
	  if(sum==i){
	 	printf("%d \n",i);
	  }
  }
	
	return 0;
}
