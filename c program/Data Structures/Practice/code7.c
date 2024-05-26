#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack * ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack \n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! \n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val; 
    }
}

int peek(struct stack * sp, int i){
    int arrayInt = sp->top - i + 1;
    if(arrayInt < 0){
        printf("Position is not valid in the stack \n");
        return -1;
    }
    else{
        return sp->arr[arrayInt];
    }
}

int main(){
    struct stack * sp = (struct stack * )malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("Before pushing,Full: %d\n",isFull(sp));
    printf("Before pushing,Empty: %d\n",isEmpty(sp));

    push(sp,546);
    push(sp,66);
    push(sp,16);
    push(sp,43);
    push(sp,31);
    push(sp,53);
    push(sp,52);
    push(sp,62);
    push(sp,5);
    push(sp,6);
    push(sp,26);

    printf("After pushing,Full: %d\n",isFull(sp));
    printf("After pushing,Empty: %d\n",isEmpty(sp));

    printf("Popped %d from the stack",pop(sp));
    printf("Popped %d from the stack",pop(sp));

    for(int j=0;j<=sp->top+1;j++){
        printf("The value at position %d is %d \n",j,peek(sp,j));
    }
    
    return 0;
}
