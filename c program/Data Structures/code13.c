#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void Traverse(struct Node *START){
    while(START!=NULL){
        printf("%d", START->data);
        START = START->next;
        printf(" ");
    }

}
void InsertStrt(struct Node** START, int NewData){
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = NewData;
    NewNode->next = *START;
    *START = NewNode;
}
void InsertEnd(struct Node *p, int NewData){
    while(p->next!=NULL){
        p=p->next;
    }
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = NewData;
    NewNode->next = NULL;
    p->next = NewNode;
}

void DeleteStrt(struct Node *START){
    if (START==NULL){
        printf("UNDERFLOW");
    }
    *START=*START->next;
}
void DeleteEnd(struct Node *START){
    while(START->next->next!=NULL){
        START=START->next;
    }
    START->next = NULL;
}
void main()
{
    struct Node *First, *Second,*Third,*START;
    First = (struct Node*)malloc(sizeof(struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));

    First->data = 10;
    First->next = Second;
    Second->data = 20;
    Second->next = Third;
    Third->data = 30;
    Third->next = NULL;
    START = First;
    printf("INITIAL LINKED LIST: \n");
    Traverse(START);
    printf("\n");
    InsertStrt(&START, 40);
    InsertEnd(START, 50);
    printf("LINKED LIST AFTER INSERTING ELEMENT AT START AND END: \n");
    Traverse(START);
    printf("\n");
    DeleteStrt(START);
    DeleteEnd(START);
    printf("LINKED LIST AFTER DELETING ELEMENT AT START AND END: \n");
    Traverse(START);
}
