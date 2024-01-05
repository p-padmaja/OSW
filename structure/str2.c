#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char* name;
	int roll;
	double marks;
};
struct student s1[4]={
    {"Padmaja",42,79},
    {"Shreya",33,89},
    {"Ayusha",45,99},
    {"Trishna",43,69}
};
void sortByRoll(struct student s1[]){
    int n=4;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(s1[i].roll>s1[j].roll){
                int temp=s1[i].roll;
                s1[i].roll=s1[j].roll;
                s1[j].roll=temp;
            }
        }
    }
}
int main(){
    sortByRoll(s1);
    for(int i=0;i<4;i++){
	    printf(" name=%s\n roll=%d\n marks=%lf\n",s1[i].name,s1[i].roll,s1[i].marks);
    }
	return 0;
}

