#include<stdio.h>

struct Student
{
    char name[30];
    int rollno;
    float CPI;
};

int main()
{
    struct Student s[5],*p;
    p = s;
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the name:");
        scanf("%s",&p->name);
        printf("Enter the roll_no.:");
        scanf("%d",&p->rollno);
        printf("Enter the CPI:");
        scanf("%f",&p->CPI);
        p++;
    }
    p = s;
    for(i=0;i<5;i++)
    {
        printf("Address = %d \n",p);
        printf("Name = %s \n",p->name);
        printf("Roll_no = %d \n",p->rollno);
        printf("CPI = %f \n",p->CPI);
        p++;
    }
    return 0;
}