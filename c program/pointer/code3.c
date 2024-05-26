#include<stdio.h>

struct student
{
    int rollno;
    float marks;
    char name[30];
};

int main()
{
    int i;
    struct student s1[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&s1[i].rollno);
        scanf("%f",&s1[i].marks);
        scanf("%s",&s1[i].name);
    }

        for(i=0;i<3;i++)
        {
            printf("\n %d",s1[i].rollno);
            printf("\n %f",s1[i].marks);
            printf("\n %s",s1[i].name);
        }
    
    return 0;
}
