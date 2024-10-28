//handler_persisance.c
//version unbuntu 24.04.1 LTS
//To start : chmod +x start.sh && ./start.sh 

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "create.h"
#include "insert.h"
#include "free_table.h"




// la fonction main qui va initialiser le code

int main(){


    Node *table = NULL;
    
    // Une boucle entre 0 a 7.

    for (int i = 0; i <= 7; i++){
        table = insert(table, i);
    }
    
    freeTable(table);
    return 0;
    
};
