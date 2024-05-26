#include<stdio.h>
int main()
{
int number = 50;
int *p;
p = &number;
printf("Address of p variable is %p \n" ,p);
p = p+1;
printf("Value of variable is %d \n" , *p);
printf("After incrementing: Address of p variable is %p \n",p);
return 0;
}