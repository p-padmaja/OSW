#include <stdio.h>
int main(){
 		int a,b,c,d;
 		printf("Enter four numbers:");
 		scanf("%d%d%d%d", &a,&b,&c,&d);
 		int max;
 		if((a>b) && (a>c)&& (a>d)){
 		    max=a;
 		}
 		else if((b>a) && (b>c)&& (b>d)){
 		    max=b;
 		}
 		else if((c>a) && (c>b)&& (c>d)){
 		    max=c;
 		}
 		else{
 		    max=d;
 		}
 		printf("%d is maximum\n", max);
 	 int max2=-12345;
 	 	if(a!=max && max2<a){
 	   		max2=a;
 		 }
 		 if(b!=max && max2<b){
 	   		max2=b;
 		 }
 		 if(c!=max && max2<c){
 	   		max2=c;
 		 }
 		 if(d!=max && max2<d){
 	   		max2=d;
 		 }
 		 printf("%d is the second maximum." ,max2);
 	
 		return 0;
}
