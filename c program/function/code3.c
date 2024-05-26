#include<stdio.h>

int fact(int n);
int main()
{
    int n,f;
    printf("\n Enter the number");
    scanf("%d",&n);
    f=fact(n);
    printf("\n Factorial is %d",f);
    return 0;
}

int fact(int n)
{
    if(n == 0||n==1)

    {
        return 1;
    }

    else
    {
        return n*fact(n-1);
    }
}