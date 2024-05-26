# include<stdio.h>

int main()
{
    int a[100],i,b;
    printf("Enter the number of elements: ");
    scanf("%d",&b);

    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        printf("%d \n",a[i]);
    }
return 0;
}