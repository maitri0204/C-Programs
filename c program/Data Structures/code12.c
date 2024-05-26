#include <stdio.h>

struct student {
    char name[20];
    int roll_no;
    float cpi;
} ;

int main() {
    int i=0;
    struct student *p[3],s,t,u;
    p[0]=&s;
    p[1]=&t;
    p[2]=&u;
  
    for (i=0; i<3; i++) {
        printf("Enter the name:");
        scanf("%s", p[i]->name);  
        printf("Enter the roll number:");
        scanf("%d", &p[i]->roll_no);
        printf("Enter the cpi:");
        scanf("%f", &p[i]->cpi);
    }

    for (i=0; i<3; i++) {
       
        printf("Address = %d \n",p[i]);
        printf("Name = %s \n", p[i]->name);  
        printf("Roll_no =%d \n", p[i]->roll_no);
        printf("CPI = %f \n", p[i]->cpi);  
    }

    return 0;  
}