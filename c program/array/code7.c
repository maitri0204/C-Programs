#include<stdio.h>

int main()
{
    int a[100][100] , b[100][100], i,j,r,c,k,divi[100][100];
    printf("Enter Value of Rows and Columns:");
    scanf("%d %d" , &r , &c);

    printf("\n Enter 1st Array: ");
    for (i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
          scanf("%d", &a[i][j]);
        }
    }
    printf("\n Enter 2nd Array: ");
    for (i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
          scanf("%d", &b[i][j]);
        }
    }
        for (i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
            divi[i][j];
            for(k=0;k<c;k++)
            {
                 divi[i][j] =divi[i][j] + a[i][k] / b[k][j];
            }
        }
    }

        for (i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
          printf("%d ", divi[i][j], " ");
        }
        printf("\n");
    }
return 0;

}