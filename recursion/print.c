#include<stdio.h>

void print1(int n){
    if(n==0)
        return 0;
    else
        printf("%d ",n);
        print1(n-1);

}
 void print2(int n){
    if(n==0)
        return 0;
    else
        print2(n-1);
        printf("%d ",n);
        

 }

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);   
    print1(n);
    printf("\n");
    print2(n);
}