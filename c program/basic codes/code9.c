#include<stdio.h>
#include<math.h>

int main()
{
    float a,p,r,i,c,t;
    printf("Enter principal:");
    scanf("%f",&p);
    printf("Enter rate:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
    i = p*r*t;
    printf("Simple Interest is %f",i);

    a = p*pow((1+r/100),t);
    c=a-p;
    printf("\n Compound Interest is %f",c);
    return 0;
}