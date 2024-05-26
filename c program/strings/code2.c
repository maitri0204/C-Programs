#include<stdio.h>

int main()
{
    char s[30];
    int i;
    gets(s);
    for(i=0;s[i];++i);
    
     printf("%d",i);

    return 0;

}