#include <stdio.h>
#include <stdlib.h>
#include "free_table.h"



// Permet de vider la memoire dans les Node* left et Node* right. 

void freeTable (Node* table){
    if (table != NULL){
    freeTable(table -> left);
    freeTable(table -> right);
    free(table);
    }
    
}