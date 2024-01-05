#include<stdio.h>

typedef union student{
    char name[10];
    double mark;
    int roll;
}STUDENT;

int main(){
    STUDENT st;
    st.mark=15.3;
    printf("marks=%.2lf\n",st.mark);
}