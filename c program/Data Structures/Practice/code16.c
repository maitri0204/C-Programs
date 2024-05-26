// Reverse the string using stack

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int size;
    int top;
    char * arr;
};

struct stack * createstack(int n){
    struct stack * ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->size = 100;
    ptr->top = -1;
    ptr->arr = (char *)malloc(ptr->size * sizeof(char));
    return ptr;
}

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;
}

void push(struct stack * s, char val){
    if(isFull(s)){
        printf("Overflow");
    }
    else{
        s->top++;
        s->arr[s->top] = val;
    }
}

char pop(struct stack * s){
    if(isEmpty(s)){
        printf("Underflow");
    }
    char val = s->arr[s->top];
    s->top--;
    return val;
}

void reverse(char ch[]){
    int n = strlen(ch);
    struct stack * ptr = createstack(n);
    int i;
    for(i=0;i<n;i++){
        push(ptr,ch[i]);
    }
    for(i=0;i<n;i++){
        ch[i] = pop(ptr);
    }
}

int main(){
    char ch[] = "maitri";
    reverse(ch);
    printf("Reversed : %s",ch);
    return 0;
}