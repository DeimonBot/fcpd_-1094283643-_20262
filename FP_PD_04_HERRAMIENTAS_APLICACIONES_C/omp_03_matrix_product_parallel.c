/**
    * @file omp_03_matrix_product_parallel.c
    * @brief Exercise to calculate the product of 2 matrices.
    * @author Danna Cabeza
    * @date 2026-09-30
*/
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define N 1000

void fillMatrix(int **matrix1, int **matrix2, int row, int column){
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            *(*(matrix1+i)+j)=(i+1)+(j+2);
            *(*(matrix2+i)+j)=(i+3)+(j+1);
        }
    }
}

int **multiplication(int **matrix1, int **matrix2, int row, int column){
    double startTime=omp_get_wtime();

    int **result=(int **)malloc(row*sizeof(int *));

    for(int i=0; i<row; i++){
        *(result+i)=(int *)calloc(column, sizeof(int));
    }

    #pragma omp parallel for
    for(int i=0; i<row; i++) {
        for(int j=0; j<column; j++) {
            for(int k=0; k<column; k++) {
                *(*(result+i)+j)+=(*(*(matrix1+i)+k)) * (*(*(matrix2+k)+j));
            }
        }
    }
    double endTime=omp_get_wtime();
    printf("\nParallel time: %f sg\n", (endTime-startTime));

    return result;
}

int main(){
    int row=N;
    int column=N;

    int **matrix1=(int **)malloc(row*sizeof(int *));
    for(int i=0; i<row; i++){
        *(matrix1+i)=(int *)malloc(column*sizeof(int));
    }

    int **matrix2=(int **)malloc(row*sizeof(int *));
    for(int i=0; i<row; i++){
        *(matrix2+i)=(int *)malloc(column*sizeof(int));
    }
    fillMatrix(matrix1, matrix2, row, column);
    int ** result=multiplication(matrix1, matrix2, row, column);

    for(int i=0; i<row; i++){
        free(*(matrix1+i));
    }
    free(matrix1);

    for(int i=0; i<row; i++){
        free(*(matrix2+i));
    }
    free(matrix2);

    for(int i=0; i<row; i++){
        free(*(result+i));
    }
    free(result);

    return 0;
}