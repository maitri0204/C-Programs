// Circular Queue

#include<stdio.h>
#include<stdlib.h>

struct Circularqueue{
    int size;
    int f;
    int r;
    int * arr;
};

int isFull(struct Circularqueue * q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}

int isEmpty(struct Circularqueue * q){
    if(q->f == q->r){
        return 1;
    }
    return 0;
}

void enquene(struct Circularqueue * q, int val){
    if(isFull(q)){
        printf("The queue is full");
    }
    else{
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
    }
}

int dequeue(struct Circularqueue * q){
    int a = -1;
    if(isEmpty(q)){
        printf("The queue is empty");
    }
    else{
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct Circularqueue q;
    q.size = 100;
    q.f = q.r = 0;
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