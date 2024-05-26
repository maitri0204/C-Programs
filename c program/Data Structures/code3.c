# include <stdio.h>
int main()
{
    int a[100];
    int len;
    int num;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    for (int i=0; i<len; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Array is: \n");
    for (int j=0; j<len; j++)
    {
        printf("%d \n", a[j]);
    }
    printf("Enter the number which you want to check: ");
    scanf("%d", &num);
    int flag = 0;
    for (int k=0; k<len; k++)
    {
        if (a[k]==num)
        {
            printf("Position of %d is %d \n",num , k+1);
            flag = flag + 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Number not found \n");
    }
return 0;
}
