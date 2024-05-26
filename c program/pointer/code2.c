#include<stdio.h>

int main()
{
    int i;
    char *s1[3]={"ABC","XYZ","PQR"};
    for(i=0;i<3;i++)
    {
        printf("\n %s",s1[i]);
        printf("\n %p",s1[i]);
    }
    return 0;
}