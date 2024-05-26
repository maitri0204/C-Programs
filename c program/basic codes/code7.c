#include<stdio.h>

int main()
{
    float c,f;
    printf("Enter temperature in celsius:");
    scanf("%f",&c);
    f = (1.8*c)+32;
    printf("Tempertaure in fahrenheit=%f",f);
    return 0;
}
