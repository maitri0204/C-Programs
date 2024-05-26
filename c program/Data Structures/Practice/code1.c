// Tranversal of linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void Tranversal(struct Node * ptr)
{
    while(ptr!= NULL)
    {
        printf("Elements : %d \n",ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    struct Node * head;
    struct Node * first;
    struct Node * second;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = first;

    first->data = 11;
    first->next = second;

    second->data = 16;
    second->next = NULL;

    Tranversal(head);
    return 0;
}