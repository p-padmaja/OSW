#include<stdio.h>
#include <malloc.h>
#include <string.h>

char *strconcatenate(const char*,const char*);

int main(){
	char str1[100],str2[100],*str3;
	printf("Enter first string:");
	gets(str1);
	printf("Enter second string:");
	gets(str2);
	
	str3=strcat(str1,str2);
	strcat(str2,str1);
	printf("concatenated string:");
	str3=strconcatenate(str1,str2);
	str3=str1;
	puts(str3);
	
}

char *strconcatenate(const char* str1,const char* str2){
	char *str3;
	int i=0,j=0;
	while(str1[i]!='\0'){
		i++;		
	}
	while(str2[j]!='\0'){
		j++;		
	}
	str3=(char*)malloc((i+j+1)*sizeof(char));
	i=0,j=0;
	while(str1[i] && str2[j]){
		str3[i+j]=str1[i];	
		i++;
		str3[i+j]=str2[j];
		j++;	
	}
	str3[i+j]='\0';
	return str3;
}
