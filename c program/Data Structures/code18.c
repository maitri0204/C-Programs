#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Stack
{
    int top;
    int capacity;
    int* array;
};

// Function to create a stack of given capacity which initializes with the size 0
struct Stack* createStack(int capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
};

//Stack is full when top is equal to the last index
bool isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}

//Stack is empty when top is equal to -1
bool isEmpty(struct Stack* stack)
{
    return stack->top==-1;
}

//Function to add an Item to Stack, increases top by 1
void push(struct Stack* stack, char Item)
{
    if(isFull(stack))
        return;
    stack->array[++stack->top]=Item;
}

// Function to remove an Item from stack. Decreases top by 1.
char pop(struct Stack* stack)
{
    // return null character to indicate empty stack
    if(isEmpty(stack))
        return '\0';
    return stack->array[stack->top--];
}

// Function to check what the next element in the stack is
char peek(struct Stack* stack)
{
    // return null character to indicate empty stack
    if(isEmpty(stack))
        return '\0';
    return stack->array[stack->top];
}

// Code to reverse user defined string
void main()
{
    char Exp[100], Rev[100];
    int i;
    struct Stack* stack = createStack(100);

    // Inputing user defined string
    printf("Enter any String:");
    scanf("%s", &Exp);

    for (i=0; Exp[i]!='\0' ; i++)
    {
        push(stack, Exp[i]);
    }
    // using the !isEmpty as a termination point. It returns true if the stack is not empty and vice versa
    // For loop evaluates the condition till it becomes false.
    for (i=0; !isEmpty(stack) ; i++)
    {
        Rev[i]=pop(stack);
    }
    // Closing the string properly
    Rev[i] = '\0';
    printf("The reversed String is: %s", Rev);
}
