#include <stdio.h>
#include <stdlib.h>
#include "insert.h"





Node* insert(Node *table, int value) {
    FILE *makeFile;

    // Une conditon pour que sa affiche que une seule fois root.

    if (table ==  NULL){

        // Fonction qui crée le fichier Makerfile.

        makeFile = fopen("Makefile","w");
      
        fprintf(makeFile,"root = %d\n", value);
        fclose(makeFile);
        return root(value);
    }

    /*Une condition que si Node* left ou bien Node* right sont vide(NULL) 
    alors dans le root recoit en entrer left et right sinon sa fait 
    une interation sur la fonction insert*/ 



    if(value %2 == 0) {
        if (table -> left == NULL) {
            
            makeFile = fopen("Makefile","a");
            
            //printf("left = %d de root %d\n", value, table -> root);

            fprintf(makeFile, "left = %d de root %d\n", value, table -> root);

            table -> left = root(value);
            fclose(makeFile);

        } else if ( table -> right == NULL) {
            
            makeFile = fopen("Makefile","a");

            //printf("right = %d de root %d\n", value, table -> root);

            fprintf(makeFile,"right = %d de root %d\n", value, table -> root);

            table -> right = root(value);
            fclose(makeFile);
        } 
        else {
            insert(table -> left, value); 
        }
        
    } else{

        if (table -> right == NULL){

            makeFile = fopen("Makefile","a");

            //printf("right = %d de root %d\n", value, table -> root);

            fprintf(makeFile,"right = %d de root %d\n", value, table -> root);

            table -> right = root(value);

            fclose(makeFile);

        } else if ( table -> left == NULL) {

            makeFile = fopen("Makefile","a");
            
            //printf("left = %d de root %d\n", value, table -> root);

            fprintf(makeFile, "left = %d de root %d\n", value, table -> root);

            table -> left = root(value);

            fclose(makeFile);

        } 
         else{
            insert(table -> right, value);
        }
        

        
        
    }
    
    return table;
}
