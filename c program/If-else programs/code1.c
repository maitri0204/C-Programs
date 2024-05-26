#include<stdio.h>

int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);

    if(a % 2 == 0)
    printf("Even Number");
    else
    printf("Odd Number");
    return 0;
}