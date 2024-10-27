
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

//Je déclare la structure pour la creation des noeud

typedef struct Node{
    int root;
    struct Node* left;
    struct Node* right;
}Node;

//fonction qui crée le fichier
FILE* fptr;
void makeAFile () {

    // Je crée une Makerfile avec la comme argumment write

    
    fptr = fopen("Makefile","w");
    Node save;
    // Un condition si Makefile existe

    if (fptr == NULL){
        printf("not existe \n");
        exit(1);
    }

    // Permet de fermer le fichier et le sauvegarder
    fclose(fptr);
 

};

Node* root(int value){
    
    Node* newValue = (Node*) malloc(sizeof(Node));
    newValue -> root = value;
    newValue -> left = NULL;
    newValue -> right = NULL;
    return newValue;
    
}

//fonction pour ajouter des noeud dans la structure 
Node* insert(Node* table, int value) {

    if (table == NULL){
        return root(value);
    }

    if(value < table -> root) {
        table->left = insert(table->left, value);
    } else{
        table->right = insert(table->right, value);
    }

    return table;
}




int main(){

    makeAFile();
    Node* table = root(1);
    insert(table,5);
    
   

    
    return 0;
    
};
