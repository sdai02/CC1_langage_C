#ifndef CREATE_H
#define CREATE_H

// Je déffinie la structure

typedef struct Node{
    int root;
    struct Node *left;
    struct Node *right;
}Node;

Node *root(int value);

#endif