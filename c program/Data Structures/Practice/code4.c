// Transversal of circular linked list

# include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void Tranvseral(struct Node *head){
    struct Node * ptr = head;
    do{
        printf("Element : %d \n",ptr->data);
        ptr = ptr->next;
    }
    while(ptr != head);
}

int main(){
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = first;

    first->data = 3;
    first->next = second;

    second->data = 6;
    second->next = third;

    third->data = 1;
    third->next = head;

    Tranvseral(head);
    return 0;
}