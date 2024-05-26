#include<stdio.h>

struct Student
{
    int Rollno;
    char name[100];
    float Physics;
    float Chem;
    float Math;
};

int main()
{
    struct Student E1[100];
    int i, num;
    printf("Enter the total number of entries in Array:");
    scanf("%d", &num);
    for(i=0;i<num;i++)
    {
        printf("Enter Roll No.:");
        scanf("%d", &E1[i].Rollno);
        printf("Enter Name:");
        scanf("%s", &E1[i].name);
        printf("Enter Physics Marks:");
        scanf("%f", &E1[i].Physics);
        printf("Enter Chemistry Marks:");
        scanf("%f", &E1[i].Chem);
        printf("Enter Mathematics Marks:");
        scanf("%f", &E1[i].Math);
    }
    for (i=0;i<num;i++)
    {
        printf("The Roll No. is %d\n", E1[i].Rollno);
        printf("The Name is: %s\n", E1[i].name);
        printf("The Physics Marks are: %f\n", E1[i].Physics);
        printf("The Chemistry Marks are: %f\n", E1[i].Chem);
        printf("The Mathematics Marks are: %f\n", E1[i].Math);
    }
    return 0;
}