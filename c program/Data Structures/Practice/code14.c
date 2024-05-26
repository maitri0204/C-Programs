// Queue

#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int * arr;
};

int isFull(struct queue * q){
    if(q->r ==q->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct queue * q){
    if(q->f == q->r){
        return 1;
    }
    return 0;
}

void enquene(struct queue * q, int val){
    if(isFull(q)){
        printf("The queue is full");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue * q){
    int a = -1;
    if(isEmpty(q)){
        printf("The queue is empty");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enquene(&q,56);
    enquene(&q,26);
    printf("Dequeuing element %d",dequeue(&q));
    printf("Dequeuing element %d",dequeue(&q));

    if (isEmpty(&q)){
        printf("Queue is empty");
    }
    if(isFull(&q)){
        printf("Queue is full");
    }

    return 0;
}