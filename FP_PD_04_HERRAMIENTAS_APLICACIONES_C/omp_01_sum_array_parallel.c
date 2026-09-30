/**
    * @file omp_01_sum_array_parallel.c
    * @brief Exercise to calculate the sum of an array parallel.
    * @author Danna Cabeza
    * @date 2026-09-29
*/
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define N 100000000

void fillArray(int * arr){
    for(int i=0; i<N; i++){
        *(arr+i)=i+1;
    }
}

void sumArray(int *arr){
    double startTime=omp_get_wtime();
    long long sum=0;

    #pragma omp parallel for reduction(+:sum)
    for(int i=0; i<N; i++){
        sum += *(arr+i);
    }
    double endTime=omp_get_wtime();
    printf("\nThe sum of the array is: %lld\n", sum);
    printf("\nParallel time: %f sg\n", (endTime-startTime));
}

int main(){
    int *arr =(int *)malloc(N*sizeof(int));
    fillArray(arr);
    sumArray(arr);

    free(arr);
    return 0;
}