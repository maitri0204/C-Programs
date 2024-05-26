#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct Queue {
    int front, rear;
    int capacity;
    int* array;
};

struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = MAX_SIZE;
    queue->front = queue->rear = -1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

int isFull(struct Queue* queue) {
    return (queue->rear == queue->capacity - 1);
}

int isEmpty(struct Queue* queue) {
    return (queue->front == -1);
}

void enqueue(struct Queue* queue, int item) {
    if (isFull(queue))
        return;
    if (isEmpty(queue))
        queue->front = 0;
    queue->array[++queue->rear] = item;
}

int dequeue(struct Queue* queue) {
    if (isEmpty(queue))
        return -1;
    int item = queue->array[queue->front];
    if (queue->front == queue->rear)
        queue->front = queue->rear = -1;
    else
        queue->front++;
    return item;
}

void printQueue(struct Queue* queue) {
    if (isEmpty(queue))
        return;
    for (int i = queue->front; i <= queue->rear; ++i)
        printf("%d ", queue->array[i]);
    printf("\n");
}

void reverseQueue(struct Queue* queue) {
    if (isEmpty(queue))
        return;

    int stack[MAX_SIZE];
    int top = -1;

    // Push elements from queue to stack
    while (!isEmpty(queue))
        stack[++top] = dequeue(queue);

    // Pop elements from stack and enqueue them back to queue
    while (top >= 0)
        enqueue(queue, stack[top--]);
}

int main() {
    struct Queue* queue = createQueue();

    // Enqueue numbers
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);

    printf("Original Queue: ");
    printQueue(queue);

    // Reverse the queue
    reverseQueue(queue);

    printf("Reversed Queue: ");
    printQueue(queue);

    return 0;
}
