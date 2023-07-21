#include "student.h"



void student_print(std_t s)
{
    printf("name:%s\nage:%d\ngrade:%c\n",s.name,s.age,s.grade);
    printf("=======\n");
}

void student_printB(std_t* ps)
{
    printf("name:%s\nage:%d\ngrade:%c\n",ps->name,ps->age,ps->grade);
    printf("=======\n");
}

void student_scanByRef(std_t* s)
{
    printf("Enter name :");
    string_scan(s->name,20);
    printf("Enter age :");
    scanf("%d",&s->age);
    printf("enter your grade :");
    scanf(" %c",&s->grade);
}
std_t student_scan(void)
{
    std_t s;
    printf("Enter name :");
    string_scan(s.name,20);
    printf("Enter age :");
    scanf("%d",&s.age);
    printf("enter your grade :");
    scanf(" %c",&s.grade);
    return s;
}

void student_printAll(std_t* arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        student_printB(arr+i);
    }
}

void student_swap(std_t *ps1,std_t* ps2)
{
    std_t temp=*ps1;
    *ps1=*ps2;
    *ps2=temp;
}

int sutdent_Oldest(std_t* arr,int size)
{
    int i,max=0,max_index=0;
    for(i=0;i<size;i++)
    {
        if(arr[i].age>max)
        {
            max=arr[i].age;
            max_index=i;
        }
    }
    return max_index;
}
