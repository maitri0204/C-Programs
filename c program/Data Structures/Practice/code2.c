// Insertion in linked list

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

struct Node * insertAtBeg(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    while(p->next != NULL){
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node * insertAfterNode(struct Node *head,struct Node * prevNode, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
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

    printf("Linked list before insertion: \n ");
    Tranversal(head);
    head = insertAfterNode(head,first, 56);
    printf("\n Linked list after insertion: \n ");
    Tranversal(head);
    return 0;
}