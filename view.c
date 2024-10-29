#include <stdio.h>
#include <stdlib.h>
#include "view.h"

int view() {
    FILE *makefile;
    makefile = fopen("Makefile", "r");
    char line[255];
    
    while (fgets(line, sizeof(line), makefile)!= NULL){
        printf("%s",line);
    }
  
    fclose(makefile);
    return 0;
}