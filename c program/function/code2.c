#include<stdio.h>

void swap(int*a,int*b);
int main()
{
    int a,b;
    a=10;
    b=20;
    printf("\n Before swap %d %d",a,b);
    swap(&a,&b);
    printf("\n After swap %d %d",a,b);
    return 0;
}

void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n After swap %d %d",*a,*b);

}