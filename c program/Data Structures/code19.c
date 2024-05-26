# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// Structure to represent a stack
struct Stack
{
    int top;
    unsigned capacity;
    char *array;
};

// Function to create a stack of given capacity. It initializes size of stack as 0
struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (!stack)
        return NULL;
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char *)malloc(stack->capacity * sizeof(char));
    return stack;
}

// Returns true when stack is full (i.e. when top is equal to last index)
int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}

// Returns true when stack is empty (i.e. when top is equal to -1)
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

// Function to add an item to stack. It increases top by 1
void push(struct Stack *stack, char op)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = op;
}

// Function to remove an item from stack. It decreases top by 1
char pop(struct Stack *stack)
{
    if(!isEmpty(stack))
        return stack->array[stack->top--];
    return '$';
}

// Function to return the top from stack without removing it
char peek(struct Stack *stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top];
}

// Returns true if a ch is character
int isOperand(char ch)
{
    return (ch>='a' && ch<='z') || (ch>='A' && ch<='Z');
}

// Sets the precedence of the operators
int Prec(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;
    else
        return -1;
    /*switch (ch){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;*/
}

int infixToPostfix(char *exp)
{
    int i, k;
    struct Stack* stack = createStack(strlen(exp));
    if(!stack)      // See if stack was created successfully
        return -1;
    
    for (i=0,k=-1; exp[i]; ++i)
    {
        // If character is operand then add it to output
        if (isOperand(exp[i]))
            exp[++k] = exp[i];
        // If character is left paranthesis then push it to the stack
        else if (exp[i] == '(')
            push(stack, exp[i]);
        // If character is right parenthesis then corresponding left parenthesis is popped from the stack
        // Also the operators are append to the output list
        else if (exp[i] == ')')
        {
            while (!isEmpty(stack) && peek(stack) != '(')
                exp[++k] = pop(stack);
            if (!isEmpty(stack) && peek(stack) != '(')
                return -1;
            else
                pop(stack);
        }
        // If an operator is encountered then push it to stack
        // And also pop the same or greater precedence operator
        else      
        {
            while (!isEmpty(stack) && Prec(exp[i]) <= Prec(peek(stack)))
                exp[++k] = pop(stack);
            push(stack, exp[i]);
        }
    } 

    // Pop all operators from the stack
    while (!isEmpty(stack))
        exp[++k] = pop(stack);
    exp[++k] = '\0';
    printf("%s", exp);
}

int main()
{
    char exp[] = "a*(b+c)/d-e";
    infixToPostfix(exp);
    return 0;
}