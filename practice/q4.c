#include <stdio.h>

int main(){
    int n;int m=0;
    printf("Enter a number between 0 to 1000: ");
    scanf("%d",&n);
    while(n>0){
       m+=n%10;
       n=n/10;
    }
    printf("The sum of all the interger is %d",m);
}
