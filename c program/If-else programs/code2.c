#include<stdio.h>

int main()
{
    int a;
    printf("Enter your age:");
    scanf("%d",&a);

    if(a >= 18)
    printf("Eligible for voting");
    else 
    printf("Not Eligible for voting");
    return 0; 
} 