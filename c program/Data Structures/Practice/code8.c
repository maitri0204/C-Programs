// concanterate the linked list and sort them

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void Tranversal(struct Node * ptr){
    while(ptr->next != NULL){
        printf("%d",ptr->data);
        ptr = ptr->next;
        printf(" ");
    }
}

void Concanterate(struct Node * start_1, struct Node * start_2){
    struct Node * ptr = start_1;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = start_2;
}

void Sort(struct Node * head){
    int i=0,j,k,temp,arr[100];
    struct Node * ptr = head;
    while(ptr->next != NULL){
        arr[i] = ptr->data;
        ptr = ptr->next;
        i++;
    }
    for(j=0;j<i;j++){
        for(k=j+1;k<i;k++){
            if(arr[k]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    i=0;
    ptr = head;
    while(ptr != NULL){
        ptr->data = arr[i];
        ptr = ptr->next;
        i++;
    }
}

int main(){
    int arr[100],i;
    struct Node * head_1, * first_1, * second_1, * third_1;
    first_1 = (struct Node *)malloc(sizeof(struct Node));
    second_1 = (struct Node *)malloc(sizeof(struct Node));
    third_1 = (struct Node *)malloc(sizeof(struct Node));

    first_1->data = 10;
    first_1->next = second_1;
    second_1->data = 50;
    second_1->next = third_1;
    third_1->data = 45;
    third_1->next = NULL;
    head_1 = first_1;

    struct Node * head_2, * first_2, * second_2, * third_2;
    first_2 = (struct Node *)malloc(sizeof(struct Node));
    second_2 = (struct Node *)malloc(sizeof(struct Node));
    third_2 = (struct Node *)malloc(sizeof(struct Node));

    first_2->data = 25;
    first_2->next = second_2;
    second_2->data = 65;
    second_2->next = third_2;
    third_2->data = 35;
    third_2->next = NULL;
    head_2 = first_2;

    printf("First Linked list: \n");
    Tranversal(head_1);
    printf("Second Linked list: \n");
    Tranversal(head_2);
    printf("Concentrate linked list: \n");
    Concanterate(head_1, head_2);
    Tranversal(head_1);
    printf("Sorted linked list: \n");
    Sort(head_1);
    Tranversal(head_1);

    return 0;
}