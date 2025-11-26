#ifndef QUEUE_H
#define QUEUE_H

#define MAX 100

typedef struct {
    int data[MAX];
    int front, rear;
} Queue;

void initQueue(Queue* q);
void enqueue(Queue* q, int value);
int dequeue(Queue* q);

#endif