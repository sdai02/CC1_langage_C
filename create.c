#include <stdio.h>
#include <stdlib.h>
#include "create.h"


Node* root(int value){

    // Permet d'allouer de la memoire sur la table Node.

    Node *newValue = (Node*) malloc(sizeof(Node));

    // Je deffinie les valleurs.

    newValue -> root = value;

    newValue -> left = NULL;

    newValue -> right = NULL;

    return newValue;
    
}