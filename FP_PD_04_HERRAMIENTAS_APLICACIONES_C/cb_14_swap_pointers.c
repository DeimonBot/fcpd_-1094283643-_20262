/**
    * @file cb_13_swap_pointers.c
    * @brief Basic exercise to swap 2 values using pointers.
    * @author Danna Cabeza
    * @date 2026-09-28
*/

#include <stdio.h>

void swap (int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("\nSWAP\n\na= %d\nb= %d\n", *a,*b);
}

int main (){
    int a=12;
    int b=54;
    printf("ORIGINAL\n\na= %d\nb= %d\n", a, b);
    swap(&a,&b);
    return 0;
}