//handler_persisance.c
//version unbuntu 24.04.1 LTS
//To start : chmod +x start.sh && ./start.sh 

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "create.h"
#include "insert.h"
#include "free_table.h"
#include "view.h"




// la fonction main qui va initialiser le code

int main(int argc,char *argv[]){


    Node *table = NULL;
    
    // Une boucle entre 0 a 7.
        

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
