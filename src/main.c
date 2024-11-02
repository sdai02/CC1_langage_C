// version unbuntu 24.04.1 LTS
// To start : gcc main.c create.c insert.c free_table.c view.c -o main && ./main
// To view : gcc main.c create.c insert.c free_table.c view.c -o main && ./main view

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "create.h"
#include "insert.h"
#include "free_table.h"
#include "view.h"




// The main function that initializes the code.

int main(int argc,char *argv[]){


    Node *table = NULL;
    

   
    // A loop from 0 to 7.
    
    for (int i = 0; i <= 7 ; i++){
        table = insert(table, i);
    }
        
    if(argc > 1){

        if (strcmp(argv[1], "view") == 0){
            view();
        }
    
    }
    
    freeTable(table);
    return 0;
    
};
