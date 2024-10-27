
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

// Fonction qui crée le fichier

FILE* fptr;
void makeAFile () {

    // Je crée une Makerfile avec la comme argumment write

    fptr = fopen("Makefile","w");

    // Un condition si Makefile existe

    if (fptr == NULL){
        printf("not existe \n");
        exit(1);
    }

    // Permet de fermer le fichier et le sauvegarder
    fclose(fptr);
 

};

// Je crée une fonction root pour définir la racine 

Node* root(int value){

    printf("root = %d\n", value);

    Node* newValue = (Node*) malloc(sizeof(Node));

    newValue -> root = value;

    newValue -> left = NULL;

    newValue -> right = NULL;

    return newValue;
    
}

void shuffle (Node* table, int number) {
    int *newAttribut = &number; 
    root(*newAttribut);

    if(number %2 == 0) {
        printf("left = %d\n", number);
        table -> left;
        
        
    } else{
        printf("right = %d\n", number);
        table -> right;
    }

}   

//fonction pour ajouter des noeud dans la structure 
Node* insert(Node* table, int value) {

    if (table ==  NULL && value >= 0){
        return root(value);
    }

    if(value %2 == 0) {
        printf("left = %d\n", value);
        table -> left;
        
        shuffle(table,value);
        
    } else{
        printf("right = %d\n", value);
        table -> right;

        shuffle(table, value);
        
    }

    return table;
}




int main(){

    makeAFile();
    Node* table = NULL;
    table = insert(table, 2);
    table = insert(table, 3);
    table = insert(table, 5);
    table = insert(table, 6);
    table = insert(table, 7);

    free(table);
    return 0;
    
};
