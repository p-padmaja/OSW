#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
    char *name;
    int roll;
    double marks;
}STUDENT;
void bubbleSort(STUDENT*[4],int,int);

void display(STUDENT *sNew[4],int n){
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\t",i);
        printf("Name: %s | Roll: %d | Marks: %.2lf\n",sNew[i]->name,(*sNew[i]).roll,sNew[i]->marks);
    }
}

int main(int argc, char const *argv[])
{
    STUDENT s[4]={
        {"Sourav",32,25.9},
        {"Ajay",26,23.6},
        {"Rahul",98,17.3},
        {"Anup",36,36.35}
    };
    int n=4;
    STUDENT *sNew[4];
    for (int i = 0; i < n; i++)
    {
        sNew[i]=&s[i];
    }
    printf("Before Sort...\n");
    display(sNew,n);
    bubbleSort(sNew,n,1);
    printf("After Sort...\n");
    display(sNew,n);
    return 0;
}

void bubbleSort(STUDENT* sNew[4],int n,int t){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(t==1){
                if(strcmp(sNew[j]->name, sNew[j+1]->name)>0){
                    STUDENT *temp;
                    temp = sNew[j];
                    sNew[j]=sNew[j+1];
                    sNew[j+1]=temp;
                }
            }
            else if(t==2){
                if(sNew[j]->roll > sNew[j+1]->roll){
                    STUDENT *temp;
                    temp = sNew[j];
                    sNew[j]=sNew[j+1];
                    sNew[j+1]=temp;
                }

            }else if (t==3){
                if(sNew[j]->marks > (*sNew[j+1]).marks){
                    STUDENT *temp;
                    temp = sNew[j];
                    sNew[j]=sNew[j+1];
                    sNew[j+1]=temp;
                }
            }
        }
        
    }
    
}