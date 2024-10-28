
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

//Je déclare la structure qui contient root et dans root il a comme structure left et right.

typedef struct Node{
    int root;
    struct Node* left;
    struct Node* right;
}Node;

// Fonction qui crée le fichier Makerfile.

FILE* makeFile;
void makeAFile () {

    // Je crée une Makerfile avec la comme argumment read.

    makeFile = fopen("Makefile","w");

    // Une condition si Makefile n'existe pas.

    if (makeFile == NULL){
        printf("not existe \n");
        exit(1);
    }

    // Permet de fermer le fichier et le sauvegarder.
    fclose(makeFile);
 

};

// Je crée une fonction root pour définir la racine 

Node* root(int value){

    // Permet d'allouer de la memoire sur la table Node.

    Node* newValue = (Node*) malloc(sizeof(Node));

    // Je deffinie les valleurs.

    newValue -> root = value;

    newValue -> left = NULL;

    newValue -> right = NULL;

    return newValue;
    
}


//fonction pour ajouter des noeud dans la structure 
Node* insert(Node* table, int value) {


    // Une conditon pour que sa affiche que une seule fois root.

    if (table ==  NULL){
     
        printf("root = %d\n", value);
        return root(value);
    }

    /*Une condition que si Node* left ou bien Node* right sont vide(NULL) 
    alors dans le root recoit en entrer left et right sinon sa fait 
    une interation sur la fonction insert*/ 

    if(value %2 == 0) {
        if (table -> left == NULL) {
            printf("left = %d de root %d\n", value, table -> root);
            table -> left = root(value);
        } else if ( table -> right == NULL) {
            printf("right = %d de root %d\n", value, table -> root);
            table -> right = root(value);
        } 
        else {
            insert(table -> left, value); 
        }
        
    } else{
        if (table -> right == NULL){
            printf("right = %d de root %d\n", value, table -> root);
            table -> right = root(value);
        } else if ( table -> left == NULL) {
            printf("left = %d de root %d\n", value, table -> root);
            table -> left = root(value);
        } else{
            insert(table -> right, value);
        }
        

        
        
    }

    return table;
}

// Permet de vider la memoire dans les Node* left et Node* right. 

void freeTable (Node* table){
    if (table != NULL){
    freeTable(table -> left);
    freeTable(table -> right);
    free(table);
    }
    
}

// la fonction main qui va initialiser le code

int main(){

    makeAFile();
    Node* table = NULL;
    
    // Une boucle entre 0 a 7.

    for (int i = 0; i <= 7; i++){
        table = insert(table, i);
    }
    
  

    freeTable(table);
    return 0;
    
};
