/**
    * @file cb_12_sum_array.c
    * @brief Basic exercise to sum the elements of an array using pointers.
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

void sumArray(int *p, int size){
    printArray(*&p, size);
    int sum=0;
    for(int i=0; i<size; i ++){
        sum+=*(p+i);
    }

    printf("\nSum = %d\n", sum);
}

int main(){
    int size=N;
    int arr[]={7,5,1,6,9,2,3,4,10,8};
    sumArray(arr,size);
    return 0;
}