#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a linked list of 5 numbers
struct Node* createList() {
    struct Node* head = NULL;
    struct Node* temp = NULL;

    for (int i = 0; i < 5; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = i;
        temp->next = head;
        head = temp;
    }

    return head;
}

// Function to print the linked list
void printfList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to swap the nth number with (n+1)th number in the list
void swapNumber(struct Node* head, int n) {
    struct Node* temp = head;
    
    // Traverse to the (n-1)th node
    for (int i = 0; i < n - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // If n is valid and next node is not NULL
    if (temp != NULL && temp->next != NULL) {
        int tempData = temp->data;
        temp->data = temp->next->data;
        temp->next->data = tempData;
    }
}

// Main function to test the program
int main() {
    struct Node* head = createList();
    printf("Original List: ");
    printfList(head);

    int n; // Replace 'n' with the desired position to swap
    printf("Enter the position to swap (1 to 4): ");
    scanf("%d", &n);

    swapNumber(head, n);
    
    printf("Modified List: ");
    printfList(head);

    return 0;
}