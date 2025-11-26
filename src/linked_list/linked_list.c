#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node* insertFront(Node* head, int value) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}