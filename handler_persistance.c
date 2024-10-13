#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


// make the makefile

int file (){
    FILE * fptr;
    fptr = fopen("Makefile","r" );
    if (fptr == NULL){
        printf("is empty !\n");
        exit(0);
    }else {
        printf("he existe !\n");
    }   

 return 0;

}
typedef struct {
    int * data[];
    int a;
    int b;
}binaryTree;



void main (){

}