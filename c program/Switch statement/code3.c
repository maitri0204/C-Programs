#include<stdio.h>

int main()
{
    int a,b,ch;
    printf("Add value of A \n");
    scanf("%d",&a);
    printf("Add value of B \n");
    scanf("%d",&b);
    printf("\n 1.For Addition");
    printf("\n 2.For Subtraction");
    printf("\n 3.For Multiplication");
    printf("\n 4.For Division");
    printf("\n Enter Choice");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
    printf("A+B = %d",a+b);
    break;
    case 2:
    printf("A-B = %d",a-b);
    break;
    case 3:
    printf("A*B = %d",a*b);
    break;
    case 4:
    printf("A/B = %d",a/b);
    break;

    default:
    printf("You need to exit");
    }
    return 0; 
} 