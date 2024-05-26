#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void Traverse(struct Node *START){
    struct Node *current = START;
    while(current->next!=START){
        printf("%d ", current->data);
        current=current->next;
    }
    printf("%d", current->data);
};
void InsertStrt(struct Node **START, int NewData){
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = NewData;
    struct Node *current = *START;
    while(current->next!=*START){
        current=current->next;
    }
    current->next=NewNode;
    NewNode->next=*START;
    *START = NewNode;
}
void InsertEnd(struct Node **START, int NewData){
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = NewData;
    struct Node *current = *START;
    while(current->next!=*START){
        current=current->next;
    }
    current->next=NewNode;
    NewNode->next=*START;
}
void DeleteStrt(struct Node **START){
    if (*START==NULL){
        printf("UNDERFLOW");
    }
    struct Node *current = *START;
    while(current->next!=*START){
        current=current->next;
    }
    current->next = (*START)->next;
    *START = (*START)->next;
}
void DeleteEnd(struct Node *START){
    if (START==NULL){
        printf("UNDERFLOW");
    }
    struct Node *current = START->next;
    struct Node *SAVE = START;
    while(current->next!=START){
        SAVE = current;
        current=current->next;
    }
    SAVE->next=START;
}
void main(){
    struct Node *First, *Second, *Third, *START;
    First = (struct Node*)malloc(sizeof(struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));

    First->data=10;
    First->next=Second;
    Second->data=20;
    Second->next=Third;
    Third->data=30;
    Third->next=First;
    START = First;
    printf("ORIGNAL CIRCULAR LINKED LIST: \n");
    Traverse(START);
    printf("\n");
    printf("CIRCULAR LINKED LIST AFTER ADDING ELEMENTS AT BEGINNIG AND END: \n");
    InsertStrt(&START, 50);
    InsertEnd(&START, 40);
    Traverse(START);
    printf("\n");
    printf("CIRCULAR LINKED LIST AFTER DELETING ELEMENTS AT BEGINNIG AND END: \n");
    DeleteStrt(&START);
    DeleteEnd(START);
    Traverse(START);
}
