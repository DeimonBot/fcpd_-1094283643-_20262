/**
    * @file omp_02_scalar_product_vector_sequential.c
    * @brief Exercise to calculate the scalar product of 2 vectors.
    * @author Danna Cabeza
    * @date 2026-09-29
*/
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define N 100000000

void fillVectors(int * vect1, int *vect2){
    for(int i=0; i<N; i++){
        *(vect1+i)=i+1;
        *(vect2+i)=i+i;
    }
}

void scalarProduct(int * vect1, int *vect2){
    double startTime=omp_get_wtime();
    long long product=0;
    for(int i=0; i<N; i++){
        product+=((long long)(*(vect1+i)) * (*(vect2+i)));
    }
    double endTime=omp_get_wtime();
    printf("\nScalar product: %lld\n", product);
    printf("\nSequential time: %f sg\n", (endTime-startTime));
}


int main(){
    int *vect1 =(int *)malloc(N*sizeof(int));
    int *vect2 =(int *)malloc(N*sizeof(int));
    fillVectors(vect1, vect2);
    scalarProduct(vect1, vect2);

    free(vect1);
    free(vect2);
    return 0;
}