#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	char* name;
	int roll;
	double marks;
}STUDENT;
void display(STUDENT s[3],int n){
    STUDENT *p;
    for(int i=0;i<n;i++){
        p=&s[i];
        printf("Student %d:\t",i);
        printf("Name:%s |Roll:%d |marks:%.2lf",p->name,p->roll,p->marks);
        //printf("Name %s\n",p->name);
        //printf("Rollno %d\n",p->roll);
        //printf("Marks %.2lf\n",(*p).marks);
    }
}
int main(int argc,char const* argv){
    STUDENT s[3];
    int n=3;
    for(int i=0;i<n;i++){
        s[i].name=(char*)malloc(20*sizeof(char));
        scanf(" %s",s[i].name);
        scanf("%d",&s[i].roll);
        scanf("%lf",&s[i].marks);
    }
    display(s,3);
}
