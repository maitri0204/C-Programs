#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter value of 1st Number:\n");
    scanf("%d",&a);
    printf("Enter value of 2nd Number:\n");
    scanf("%d",&b);
    printf("Enter value of 3rd Number:\n");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("1st Number is largest");
    }
    else if(b>a && b>c)
    {
        printf("2nd Number is largest");
    }
    else
    {
        printf("3rd Number is largest");
    }
    return 0;
}