#include<stdio.h>

int main()
{
    int a[100],i,b,j,temp;
    printf("Enter the number of element: ");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[j]>a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The Second largest number is: %d \n",a[1]);
    
return 0;
}