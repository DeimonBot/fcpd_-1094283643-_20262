/**
    * @file cb_06_pointers_inverted_array.c
    * @brief Basic exercise to invert an array using pointers.
    * @author Danna Cabeza
    * @date 2026-09-12
*/

#include <stdio.h>

void printArray(int arr[], int size){
    printf("{%d ",arr[0]);
    for(int i=1; i<size; i++){
        printf(", %d", arr[i]);
    }
    printf("}\n\n");
}

void invert(int arr[], int size){
    printf("Original array:\n");
    printArray(arr,size);
    int * ptrStart=arr;
    int * ptrEnd;
    ptrEnd=arr+(size-1);
    int temp;

    while(ptrStart<ptrEnd){
        temp=*ptrStart;
        *ptrStart=*ptrEnd;
        *ptrEnd=temp;
        ptrStart++;
        ptrEnd--;
    }
    printf("Inverted array:\n");
    printArray(arr,size);
}

int main(){
    int arr[5]={21,40,16,7,49};
    int size=sizeof(arr)/sizeof(arr[0]);
    invert(arr, size);
    return 0;
}