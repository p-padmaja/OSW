#include <stdio.h>
#include <string.h>

char *stringreverse(char*);

int main(){
	char str[100];
	printf("Enter a string:");
	gets(str);
	printf("entered string: %s\n",str);
	stringreverse(str);
	printf("Reversed String: %s\n ",str);
	return 0;
	
}

char *stringreverse(char* str){
	int l=strlen(str);
	for(int i=0;i<l/2;i++){
		char temp=str[i];
		str[i]=str[l-i-1];
		str[l-i-1]=temp;
	}
	return str;
}

