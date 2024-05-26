#include<stdio.h>

int main()
{
    float min,hr;
    printf("Enter the time in minutes:");
    scanf("%f",&min);
    hr = min/60;
    printf("Time in hours=%f",hr);
    return 0;
}