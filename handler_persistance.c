#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>




void handlerMakerFile () {

    // Je crée une Makerfile avec la comme argumment write

    FILE* fptr;
    fptr = fopen("Makefile","w");

    // Un condition si Makefile existe

    if (fptr == NULL){
        printf("not existe \n");
        exit(1);
        
    }else {
        printf("he existe\n");

        //ça écrit "I write something" dans le fichier
        fprintf(fptr, "I write something");
        
    };

    // Permet de fermer le fichier et le sauvegarder
    fclose(fptr);
 

};


//Je déclare la structure pour la creation des noeud

typedef struct Node{
    int root;
    struct Node* left;
    struct Node* right;
}Node;

//

Node* handlerNewNode(int numbers){
    Node* newNode = (Node*) malloc(sizeof(Node));

    newNode -> root = numbers;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
};



int main(){

    handlerMakerFile();

    Node* firstnode = handlerNewNode(2);
    Node* secondnode = handlerNewNode(3);
    Node* thirdnode = handlerNewNode(4);
    Node* fourthnode = handlerNewNode(5);

    firstnode -> left = secondnode;
    firstnode -> right = thirdnode;
    secondnode -> left = fourthnode;

    

    free(firstnode);
    free(secondnode);
    free(thirdnode);
    free(fourthnode);

    return 0;
    
};
