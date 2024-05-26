#include<stdio.h>
#include<string.h>

int main()
{
    char s1 []= {'a','b','c','d','\0'};
    strrev(s1);
    printf("%s" ,s1);
    return 0;

}