#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int data);
Node* insert(Node* root, int data);
void inorder(Node* root);

#endif