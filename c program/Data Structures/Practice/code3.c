// Deletion in linked list

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

struct Node * deleteAtStart(struct Node * head){
    struct Node * ptr = head;
    ptr = ptr->next;
    head = head->next;
    free(ptr);
    return head;
}

struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node * p = head;
    struct Node * q = head->next;
    for(int i=0;i<index-1;i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node * deleteAtEnd(struct Node * head){
    struct Node * p = head;
    struct Node *q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node * DeleteAtIndex(struct Node * head, int value){
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->data != value && q->next = NULL)
    {
        p = p->next;
        q = q->next;
    }

    if(q->data == value){
        p->next = q->next;
        free(q);
    }
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

    printf("Linked list before deletion\n");
    Tranversal(head);

    head = deleteAtEnd(head);
    printf("Linked list after deletion\n");
    Tranversal(head);
    return 0;
}