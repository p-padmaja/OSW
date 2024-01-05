
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char* name;
	int roll;
	double marks;
};
typedef struct student STUDENT;
void display(STUDENT);
void initialize(STUDENT);
int main(){
	//struct student s1;

	STUDENT s1;
	printf("%lf\n",sizeof(s1));
	initialize(s1);

	//s1.name="Padmaja";//might get segmentation fault
	
	display(s1);
	return 0;
}
void initialize(STUDENT s1){
	char temp[100];
	printf("Enter your name:");
	gets(temp);
	s1.name=(char*)malloc(strlen(temp+1)*sizeof(char));
	strcpy(s1.name,temp);
	printf("Enter your roll:");
	scanf("%d",&s1.roll);
	printf("Enter your marks:");
	scanf("%lf",&s1.marks);
};
void display(struct student s){
	printf(" name=%s\n roll=%d\n marks=%lf\n",s.name,s.roll,s.marks);
};