#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack {
    int size;
    int top;
    char *arr;
};

int stackTop(struct stack *sp) {
    return sp->arr[sp->top];
}

char isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

char isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}

void push(struct stack *ptr, char val) {
    if (isFull(ptr)) {
        printf("Stack Overflow! Cannot push %c to the stack \n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack Underflow! \n");
        return '\0';
    } else {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int precedence(char ch) {
    if (ch == '*' || ch == '/') {
        return 3;
    } else if (ch == '+' || ch == '-') {
        return 2;
    } else {
        return 0;
    }
}

int isOperator(char ch) {
    return (ch == '*' || ch == '/' || ch == '+' || ch == '-');
}

char *infixToPostfix(char *infix) {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0, j = 0;

    while (infix[i] != '\0') {
        if (!isOperator(infix[i])) {
            postfix[j] = infix[i];
            j++;
            i++;
        } else {
            if (precedence(infix[i]) > precedence(stackTop(sp))) {
                push(sp, infix[i]);
                i++;
            } else {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }

    while (!isEmpty(sp)) {
        postfix[j] = pop(sp);
        j++;
    }

    postfix[j] = '\0';
    return postfix;
}

int main() {
    char *infix = "a-b+t/6";
    printf("Postfix is %s\n", infixToPostfix(infix));
    return 0;
}