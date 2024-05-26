#include<stdio.h>

int main()
{
    float m,k;
    printf("Enter kilobytes:");
    scanf("%f",&k); 
    m = k/0.001;
    printf("Megabytes=%f",m);
    return 0;
} 