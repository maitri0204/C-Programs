#include<stdio.h>

int main()
{
    char a[30],b[30];
    int i,j,l;
    printf("\n Enter the 1st string:");
    gets(a);
    printf("\n Enter the 2nd string:");
    gets(b);

    for(i=0;a[i];i++)
    

        {
           
            if(a[i]==b[i])
            {
               l=1;
            }

            else
            {
                l=0;
                break;
            }
        }
         
         if(l==1)
            {
            printf("same");
            }
         else
            {
                printf("diff");
            }
         
         
     return 0;
}