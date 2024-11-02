#include <stdio.h>
#include <stdlib.h>
#include "free_table.h"



// Frees memory in Node* left and Node* right.

void freeTable (Node* table){
    if (table != NULL){
    freeTable(table -> left);
    freeTable(table -> right);
    free(table);
    }
    
}