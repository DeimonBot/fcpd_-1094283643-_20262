/**
    * @file cb_11_pointers_array.c
    * @brief Basic exercise to print an array using pointers arithmetics.
    * @author Danna Cabeza
    * @date 2026-09-27
*/
#include <stdio.h>
#define N 10

void printArray(int *p, int size){
    printf("\narray=[");
    for(int i=0; i<size; i ++){
        if(i==(size-1)){
            printf("%d", *(p+i));
            break;
        }
        printf("%d, ", *(p+i));
    }
    printf("]\n");
}

int main(){
    int size=N;
    int arr[]={7,5,1,6,9,2,3,4,10,8};
    printArray(arr,size);
    return 0;
}