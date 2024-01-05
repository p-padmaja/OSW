#include <stdio.h>
#include <stdlib.h>

int main(){
  char *a;
  a=(char*)malloc(100*sizeof(char));
  printf("Enter a line:\n");
  gets(a);
  int wordcount=1;
  int charcount=0;
  for(int i=0;i<a[i]!='\0';i++){
    if(a[i]==' '){
  	  wordcount++;
  	 }
  	 if(a[i]!=' '){
  	  charcount++;
  	 }
  }

  printf("word count=%d\n",wordcount);
  printf("char count=%d\n",charcount);
 }
 
