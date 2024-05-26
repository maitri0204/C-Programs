# include<stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};
    int *p,i;
    for(i=0;i<5;i++)
    {
        p = &a[i];
        printf("%d \n",*p);
        printf("%p \n",p);
    }
    return 0;
}