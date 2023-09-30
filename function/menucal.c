#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int subtract(int,int);
int multiplication(int,int);

int main(){
	int op1,op2,res;
	char choice;
 // while(1){
 do{
	printf("Enter two number: ");
	scanf("%d%d",&op1,&op2);	
	printf("+:Addition\n-:subtraction\n*:Multiplication\nq:Quit\n");
	printf("Please choice any one: ");
	scanf(" %c",&choice);
	//scanf("%c",&choice);
	
	switch(choice){
	
		case '+':res=sum(op1,op2);
			printf("result=:%d\n",res);
			break;
		case '-':res=subtract(op1,op2);
			printf("result=:%d\n",res);
			break;
		case '*':res=multiplication(op1,op2);
			printf("result=:%d\n",res);
			break;
		case 'q':printf("thank You!");
			break;
		//case 'q':exit(0);
		default:
			printf("Invalid choice!Try Again..");
	}
}
	while(choice!='q');
	
	return 0;
 
}
int sum(int op1,int op2){
	return op1+op2;
}
int subtract(int op1,int op2){
	return op1-op2;
}
int multiplication(int op1,int op2){
	return op1*op2;
}
