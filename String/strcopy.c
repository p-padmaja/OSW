#include <stdio.h>
#include <malloc.h>
#include <string.h>

char *stringcpy(const char*);


int main(){
	char str[100],*str2,*str3;
	printf("Enter a string:");
	gets(str);
	printf("entered string: %s\n",str);
	str2=stringcpy(str);
	//str2=strcpy(str,str2);
	//strcpy(str2,str);
	str3=str;
	puts(str3);
	
	/*printf("duplicated string: ");
	puts(str2);
	printf("\n");
	*/
	str[4]='P';
	printf("str: ");
	puts(str);
	printf("\n");
	printf("str3: ");
	puts(str3);
	printf("\n");
	
	return 0;
}

char *stringcpy(const char* str){
	char *str2;
	int i=0;
	while(str[i]!='\0'){
		i++;		
	}
	str2=(char*)malloc((i+1)*sizeof(char));
	i=0;
	while(str[i]){
		str2[i]=str[i];	
		i++;
	}
	str2[i]='\0';
	return str2;
	
}
