#include<stdio.h>

int fibonacci(int);
int main()
{
    int n,f;
    printf("\n Enter value of n:");
    scanf("%d",&n);
    f=fibonacci(n);
    printf("%d",f);
    return 0;
}

int fibonacci(int n)
{
    if(n==0 )
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
} 