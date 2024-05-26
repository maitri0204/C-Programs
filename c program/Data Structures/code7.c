#include<stdio.h>

int main()
{
int a = 15;
int *p;
p = &a;
printf("\n %p",a);
printf("\n %d",&a);
printf("\n %p",p);
printf("\n %d \n",*p);
return 0;
} 