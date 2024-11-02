#ifndef CREATE_H
#define CREATE_H

// I define the structure

typedef struct Node{
    int root;
    struct Node *left;
    struct Node *right;
}Node;

Node *root(int value);

#endif