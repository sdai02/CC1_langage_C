#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


// Function main

int main () {

    // I'm creating a Makefile

    FILE* fptr;
    fptr = fopen("Makefile","w" );

    // A condition if the Makefile is existe

    if (fptr == NULL){
        printf("not existe \n");
        exit(0);
        
    }else {
        printf("he existe\n");

        // Same as printf, but for FILE*
        fprintf(fptr, "I write something");
        
    }

    // I'm clossing fptr file    
    fclose(fptr);
    return 0;
 

};


