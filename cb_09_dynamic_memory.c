/**
    * @file cb_09_dynamic_memory.c
    * @brief Basic exercise to create a dynamic array, fill it and sum the values.
    * @author Danna Cabeza
    * @date 2026-09-12
*/

#include <stdio.h>
#include <stdlib.h>

void array(int size){
    int sum=0;
    int *arr=(int *)malloc(size*sizeof(int));
    for(int i=0; i<size; i++){
        printf("\nEnter a value for position %d: \n", i);
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("\nThe sum of the values is: %d\n", sum);
    free(arr);
}

int main(){
    int size;

    printf("Please enter the size of the array: \n");
    scanf("%d", &size);
    array(size); 
    return 0;
}