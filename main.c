// version unbuntu 24.04.1 LTS
// To start : gcc main.c create.c insert.c free_table.c view.c -o main && ./main
// To view : gcc main.c create.c insert.c free_table.c view.c -o main && ./main view

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "src/create.h"
#include "src/insert.h"
#include "src/free_table.h"
#include "src/view.h"




// The main function that initializes the code.

int main(int argc,char *argv[]){


    Node *table = NULL;
        
    if(argc > 1){

        if (strcmp(argv[1], "-v") == 0){
            // can view the file
            view();
        } 
        else if (strcmp(argv[1], "-n")== 0 && argc > 2){

                // can convert a pointer in to integer
                int value = atoi(argv[2]);
                
                // A loop from 0 to n.
                for (int i = 0; i <= value ; i++){
                    table = insert(table, i);
                }
                
        }
    
    }
    
    freeTable(table);
    return 0;
    
};
