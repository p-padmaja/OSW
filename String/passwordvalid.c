#include <stdio.h>
#include <string.h>

int stringpasswordvalidily(char*);
int stringlen(char*);

int main(){
	char str[100];
	printf("Enter a string:");
	gets(str);
	printf("entered string: %s\n",str);
	
	if(stringpasswordvalidily(str)){
		printf("Password is valid");
	}
	else
		print("Password is Invalid");
	
	return 0;
	
}

int stringpasswordvalidily(char* str){
	int flag=1;
	
	int len=stringlen(str);
	if(!(len>=8) && (len<=16)){
		return 0;
	}
	
	int i,p,q,r=0;
	while(str[i]){
		if(str[i]>=65 && str[i]<=90){
			p++;
			break;
		}
		if(p==0)return 0;
		
	}
	while(str[i]){
		if(str[i]>=33 || str[i]<=64){
			q++;
		}
		if(q<=1)return 0;
		
	}
	while(str[i]){
		if(str[i]>=0 || str[i]<=9){
			r++;
			break;
		}
		if(r<=1)return 0;
		
	}
	
	 return flag;
}
int stringlen(char* str){
	int n=0;
	for(int i=0;i<str[i]!='\0';i++){
		if(str[i]!=' '){
  	 		 n++;
  		 }
  	}
  	return n;
}	



