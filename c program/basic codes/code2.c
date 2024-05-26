#include<stdio.h>

int main()
{
    float min,hr;
    printf("Enter Time In Hours:");
    scanf("%f",&hr);
    min = 60*hr;
    printf("Time in Minutes=%f",min);
    return 0;
}