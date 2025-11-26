#include <stdio.h>
#include "stack.h"

void initStack(Stack* s) {
    s->top = -1;
}

void push(Stack* s, int value) {
    if (s->top < MAX - 1) {
        s->data[++s->top] = value;
    }
}

int pop(Stack* s) {
    if (s->top >= 0)
        return s->data[s->top--];

    return -1;
}