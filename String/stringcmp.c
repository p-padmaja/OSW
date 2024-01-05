#include <stdio.h>
#include <string.h>

char *stringcmp(char*,char*);

int main(){
	char str1[100],str2[100];
	printf("Enter two string:");
	gets(str1);
	gets(str2);

	int p=stringcmp(str1,str2);
	if(p==1)printf("Two strings are equal");
	else {printf("Two strings are not equal");}
	return 0;
	
}

char *stringcmp(char* str1,char* str2){
for(int i=0;i<str1[i]!='\0';i++){
    while(str1[i]){
		if(str1[i]-str2[i]!=0)
			return 0;
	}
}
  return 1;
}
