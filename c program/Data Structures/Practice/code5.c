// Insertion in circular linked list

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

struct Node * insertAtStart(struct Node * head, int data){
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node * insertAtIndex(struct Node * head, int data, int index){
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
    struct Node * p = head;
    int  i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node * insertAtEnd(struct Node * head,int data){
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = head;
    return head;
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

    printf("Circular linked list before insertion :\n");
    Tranvseral(head);
    head = insertAtEnd(head, 27);
    printf("Circular linked list after insertion:\n");
    Tranvseral(head);
    return 0;
}