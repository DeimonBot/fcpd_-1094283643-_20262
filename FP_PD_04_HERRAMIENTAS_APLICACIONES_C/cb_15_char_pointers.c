/**
    * @file cb_15_char_pointers.c
    * @brief Basic exercise to iterate an array of characteres string using pointers.
    * @author Danna Cabeza
    * @date 2026-09-28
*/

#include <stdio.h>

void printChar(char* chain, int size){
    for(int i=0; i<size; i++){
        printf("\nDirección: %p  |  Valor: %c\n", (void *)(chain+i), *(chain+i));
    }
}

int main (){
    char chain[9]={'h','o','l','a','m','u','n','d','o'};
    int size=9;
    printChar(chain, size);
    return 0;
}