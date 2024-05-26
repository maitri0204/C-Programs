#include<stdio.h>

int main()
{
int a[10][10],b[10][10],c[10][10],i,j,r,k;
printf("\n Enter the rows & columns");
scanf("%d %d",&r,&k);
printf("\n Enter the first array");

for(i=0;i<r;i++)

    {
        for(j=0;j<k;j++)

        {
            scanf("%d",&a[i][j]);
        }
    }

printf("\n Enter the second array");

for(i=0;i<r;i++)

    {
        for(j=0;j<k;j++)

        {
            scanf("%d",&b[i][j]);
        }
    }

// adding of the array 

for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)

        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

// displaying the results

for(i=0;i<r;i++)

    {
        for(j=0;j<k;j++)

        {
            printf("%d",c[i][j], " ");
        }
    printf("\n");
    }
return 0;
}
