#include <stdio.h>
int main(){
  char p[1000];
  scanf("%s",p);//scanf funtion only takes the first word,it takes space,\n as a delimator
  for(int i=0;p[i]!='\0';i++){
	 printf("%c",p[i]);
  }
}
