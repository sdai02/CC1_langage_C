
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

void makeAFile () {

    // Je crée une Makerfile avec la comme argumment write

    FILE* fptr;
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

//permet de crée un node

Node* create(int numbers){
    Node* newNode = (Node*) malloc(sizeof(Node));

    newNode -> root = numbers;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
};

//fonction pour ajouter des noeud dans la structure 
Node* insert(Node* number, int root) {
    if(root < number -> root) {
        number->left = insert(number->left, root)
    } else{
        number->right = insert(number->right, root)
    }

    return number;
}

int main(){

    makeAFile();

   

    
    return 0;
    
};
