# include<stdio.h>

int main()
{
    int a = 20;
    int *p;
    int **q;
    q = &p;
    p = &a;
    printf("\n %d",a);
    printf("\n %d",&a);
    printf("\n %d",p);
    printf("\n %d",*p);
    printf("\n %d",*q);
    printf("\n %d \n",**q);
    return 0;
}