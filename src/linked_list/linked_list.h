#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* insertFront(Node* head, int value);
void printList(Node* head);

#endif