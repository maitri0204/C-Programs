#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
// A Structure to represent a stack
struct Stack{
    int top;
    int capacity;
    int* array;
};
//Function to create a stack of given capacity which initializes with size 0
struct Stack* createStack(int capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
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
    //printf("%d pushed to stack \n", Item);
}
// Function to remove an Item from stack. Decreases top by 1.
// INT_MIN is a macro that specifies that an integer variable cannot store any value below this limit
char pop(struct Stack* stack)
{
    // return null character to indicate empty stack
    if(isEmpty(stack))
        return '\0';
    return stack->array[stack->top--];
}
char peek(struct Stack* stack)
{
    // return null character to indicate empty stack
    if(isEmpty(stack))
        return '\0';
    return stack->array[stack->top];
}
//Code to check for balanced parenthesis
void main()
{
    char Exp[100];
    int i;
    struct Stack* stack = createStack(100);

    printf("Enter an expression:");
    scanf("%s", &Exp);

    for(i=0; Exp[i]!='\0';i++)
    {
        if (Exp[i]=='{' || Exp[i]=='(' || Exp[i]=='[')
            push(stack,Exp[i]);
        else if (Exp[i]=='}' || Exp[i]==')' || Exp[i]==']')
            {
                char popped = pop(stack);
                if (popped =='\0' || (Exp[i] == '}' && popped != '{') || (Exp[i] == ')' && popped != '(') || (Exp[i] == ']' && popped != '['))
                    {
                        printf("The brackets are not balanced");
                        return;
                    }
            }
    }
    if(isEmpty(stack))
    {
        printf("The Brackets are balanced");
    }
    else
    {
        printf("The brackets are not balanced");
    }
}
