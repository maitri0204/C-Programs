#include<stdio.h>
int main()
{
int number = 22;
int *p;
p = &number;
printf("Address of p variable is %p \n" ,p);
p = p+3;
printf("Value of variable is %d \n" , *p);
printf("After addition: Address of p variable is %p \n",p);
return 0;
}