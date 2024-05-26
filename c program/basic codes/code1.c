#include<stdio.h> 

int main()
{ 
    int a,b,c;
    printf("Enter value of 1st Number:");
    scanf("%d",&a);
    printf("Enter value of 2nd Number:");
    scanf("%d",&b);
    c=a+b;
    printf("\n Addition is=%d",c);
    c=a-b;
    printf("\n Subtraction is=%d",c);
    c=a*b;
    printf("\n Multiplication is=%d",c);
    c=a/b;
    printf("\n Division is=%d",c); 
    return 0;
}