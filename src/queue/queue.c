#include <stdio.h>
#include "queue.h"

void initQueue(Queue* q) {
    q->front = 0;
    q->rear = -1;
}

void enqueue(Queue* q, int value) {
    if (q->rear < MAX - 1)
        q->data[++q->rear] = value;
}

int dequeue(Queue* q) {
    if (q->front <= q->rear)
        return q->data[q->front++];

    return -1;
}