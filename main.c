#include <stdio.h>
#include "array/array.h"
#include "linked_list/linked_list.h"
#include "stack/stack.h"
#include "queue/queue.h"
#include "tree/binary_tree.h"

int main() {
    printf("DSA in C Demo Running...\n");

    int arr[] = {1, 2, 3};
    printArray(arr, 3);

    Node* head = NULL;
    head = insertFront(head, 10);
    printList(head);

    Stack s;
    initStack(&s);
    push(&s, 5);
    printf("Popped: %d\n", pop(&s));

    Queue q;
    initQueue(&q);
    enqueue(&q, 7);
    printf("Dequeued: %d\n", dequeue(&q));

    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    inorder(root);

    return 0;
}