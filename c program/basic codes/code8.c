#include<stdio.h>

int main()
{
    float c,f;
    printf("Enter the temperature");
    scanf("%f",&f);
    c = 0.56 * (f-32);
    printf("Temperature in celsius=%f",c);
    return 0;
}