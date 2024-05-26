#include <stdio.h>
#include <stdlib.h>

// Stack structure
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

// Function to create a stack
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}

// Function to delete the middle element of the stack
void deleteMiddle(struct Stack* stack) {
    int mid = (stack->top + 1) / 2;
    
    for (int i = mid; i < stack->top; ++i)
        stack->array[i] = stack->array[i + 1];
    
    stack->top--;
}

// Function to print the stack
void print(struct Stack* stack) {
    for (int i = 0; i <= stack->top; ++i)
        printf("%d ", stack->array[i]);
    printf("\n");
}

// Main function for testing
int main() {
    struct Stack* stack = createStack(100);

    // Test Case 1
    int input1[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i)
        push(stack, input1[i]);

    printf("Original Stack: ");
    print(stack);

    deleteMiddle(stack);

    printf("Modified Stack: ");
    print(stack);

    // Test Case 2
    struct Stack* stack2 = createStack(100);

    int input2[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; ++i)
        push(stack2, input2[i]);

    printf("Original Stack: ");
    print(stack2);

    deleteMiddle(stack2);

    printf("Modified Stack: ");
    print(stack2);

    return 0;
}
