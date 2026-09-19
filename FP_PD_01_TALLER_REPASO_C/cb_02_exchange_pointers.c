/**
    * @file cb_02_exchange_pointers.c
    * @brief Basic exercise to exchange values using pointers.
    * @author Danna Cabeza
    * @date 2026-09-11
*/

#include <stdio.h>

void exchange(int *ptra, int *ptrb){
    int temp=*ptra;

    *ptra=*ptrb;
    *ptrb=temp;

    printf("a= %d\n", *ptra);
    printf("b= %d\n", *ptrb);
}

int main(){
    int a=28, b=18;

    printf("Initial values\na= %d\n", a);
    printf("b= %d\n\n", b);
    printf("RESULT\n");
    exchange(&a, &b);

    return 0;
}