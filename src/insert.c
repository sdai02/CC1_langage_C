#include <stdio.h>
#include <stdlib.h>
#include "insert.h"





Node* insert(Node *table, int value) {
    FILE *makeFile;

    // A condition to display "root" only once.

    if (table ==  NULL){

        // Function that creates the Makefile.

        makeFile = fopen("Makefile","w");
      
        fprintf(makeFile,"root = %d\n", value);
        fclose(makeFile);
        return root(value);
    }

    /* A condition that checks if either Node* left or Node* right is empty (NULL). 
        If so, root receives left and right as input; 
        otherwise, it performs an iteration on the insert function. */



    
    if(value %2 == 0 ) {
        if (table -> left == NULL) {
            
            makeFile = fopen("Makefile","a");
            
            //printf("left = %d de root %d\n", value, table -> root);

            fprintf(makeFile, "left = %d on level %d\n", value, table -> root);

            table -> left = root(value);
            fclose(makeFile);

        } else if ( table -> right == NULL) {
            
            makeFile = fopen("Makefile","a");

            //printf("right = %d de root %d\n", value, table -> root);

            fprintf(makeFile,"right = %d on level %d\n", value, table -> root);

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

            fprintf(makeFile,"right = %d on level %d\n", value, table -> root);

            table -> right = root(value);

            fclose(makeFile);

        } else if ( table -> left == NULL) {

            makeFile = fopen("Makefile","a");
            
            //printf("left = %d de root %d\n", value, table -> root);

            fprintf(makeFile, "left = %d on level %d\n", value, table -> root);

            table -> left = root(value);

            fclose(makeFile);

        } 
        else{
            insert(table -> right, value);
        }
        
        
        
        
    }


   
    
    return table;
}
