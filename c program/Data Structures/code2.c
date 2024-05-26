#include<stdio.h>

int main()
{
    int a[100],i,b,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original Array: \n");
    for(i=0;i<b;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n Reverse Array: \n");
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    printf("%d \t",a[i]);
    }
return 0;
}