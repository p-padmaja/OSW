#include <stdio.h>
#include <stdlib.h>

int main(){
  char *a;
  a=(char*)malloc(100*sizeof(char));
  printf("Enter a line:\n");
 /* gets(a);
  printf("%s",a);
  
  printf("Press any key to quit");
  char ch=getchar();
  pintf("\n%c",ch);*/
  char ch;
  for(int i=0; (ch=getchar())!='\n';i++){
  	 a[i]=ch;
  }
  printf("%s\n",a);
  return 0;
}
