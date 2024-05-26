#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void Traverse(struct Node *START)
{
    while(START!=NULL){
        printf("%d", START->data);
        START = START->next;
        printf(" ");
    }
}

void Concatenate(struct Node *Start_1,struct Node *Start_2)
{
    struct Node *current = Start_1;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next = Start_2;
}

void Sort(struct Node *Start)
{
    int Arr[100], j, k, temp, i=0;
    struct Node *current = Start;

    while(current!=NULL){
        Arr[i]=current->data;
        current = current->next;
        i++;
    }
    for (int j = 0; j < i; j++) {
        for (int k = j + 1; k < i; k++) {
            if (Arr[k] < Arr[j]) {
                int temp = Arr[j];
                Arr[j] = Arr[k];
                Arr[k] = temp;
            }
        }
    }
    i=0;
    current = Start;
    while(current!=NULL){
        current->data = Arr[i];
        current = current->next;
        i++;
    }
}
void main(){
    int Arr_1[100], i;
    struct Node *One_1,*One_2, *One_3, *One_Start;
    One_1 = (struct Node*)malloc(sizeof(struct Node));
    One_2 = (struct Node*)malloc(sizeof(struct Node));
    One_3 = (struct Node*)malloc(sizeof(struct Node));
    One_1->data = 10;
    One_1->next = One_2;
    One_2->data = 50;
    One_2->next = One_3;
    One_3->data = 45;
    One_3->next = NULL;
    One_Start = One_1;

    struct Node *Two_1,*Two_2, *Two_3, *Two_Start;
    Two_1 = (struct Node*)malloc(sizeof(struct Node));
    Two_2 = (struct Node*)malloc(sizeof(struct Node));
    Two_3 = (struct Node*)malloc(sizeof(struct Node));
    Two_1->data = 25;
    Two_1->next = Two_2;
    Two_2->data = 65;
    Two_2->next = Two_3;
    Two_3->data = 35;
    Two_3->next = NULL;
    Two_Start = Two_1;

    printf("First Linked List: \n");
    Traverse(One_Start);
    printf("\n");
    printf("Second Linked List: \n");
    Traverse(Two_Start);
    printf("\n");
    printf("Concatenated Linked List: \n");
    Concatenate(One_Start, Two_Start);
    Traverse(One_Start);
    printf("\n");
    printf("Sorted Concatenated Linked List: \n");
    Sort(One_Start);
    Traverse(One_Start);
}
