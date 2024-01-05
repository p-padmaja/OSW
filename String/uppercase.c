#include <stdio.h>
#include <string.h>

void *stringlower(char*);

int main(){
	char str[100];
	printf("Enter a string:");
	gets(str);
	printf("entered string: %s\n",str);
	stringlower(str);
	printf("Uppercase String: %s\n ",str);
	return 0;
	
}

void *stringlower(char* str){
	int i=0;
	while(str[i]){
		if(str[i]>='a' && str[i]<='z'){
			str[i]=str[i]-32;
		}
		i++;
	}
	return str;
}

