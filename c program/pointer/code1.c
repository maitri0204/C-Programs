#include<stdio.h>

int main()
{
    int a[3];
    int *p,i;
    for(i=0;i<3;i++)
    {
        p = &a[i];
        printf("\n %p",p);
        printf("\n %d",*p);
        printf("\n %p",&a[i]);
        printf("\n %d",a[i]);
    }
    return 0;
} 