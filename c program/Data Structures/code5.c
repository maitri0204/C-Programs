#include<stdio.h>

struct Employee
{
    char name[20];
    int EID;
    float salary;
};

int main()
{
    struct Employee e;
    printf("Enter the name: ");
    scanf("%s",e.name);
    printf("Enter roll no:");
    scanf("%d",& e.EID);
    printf("Enter salary:");
    scanf("%f",&e.salary);
    printf("Name = %s \n",e.name);
    printf("Roll no. = %d \n",e.EID);
    printf("Marks = %f \n",e.salary);
    return 0;
}