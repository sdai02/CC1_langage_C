#include <stdio.h>
#include <stdlib.h>
#include "create.h"


Node* root(int value){

    // Allocates memory for the Node table.

    Node *newValue = (Node*) malloc(sizeof(Node));

    // I set the values.

    newValue -> root = value;

    newValue -> left = NULL;

    newValue -> right = NULL;

    return newValue;
    
}