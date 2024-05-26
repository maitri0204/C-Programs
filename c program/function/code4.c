#include<stdio.h>


int main()
{
    int a=1,numb;
    int fact=1;

    printf("Enter a number: ");
    scanf("%d",&numb);
    for(a=1;a<=numb;a++)
    fact=fact*a;
    printf("Factorial of %d is: %ld",numb,fact);
    return 0;
}