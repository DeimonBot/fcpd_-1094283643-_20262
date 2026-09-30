/**
    * @file cb_13_print_matrix.c
    * @brief Basic exercise to print a matrix using pointers arithmetic.
    * @author Danna Cabeza
    * @date 2026-09-27
*/

#include <stdio.h>
#include <stdlib.h>

void fillMatrix(int **matrix, int row, int column){
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            *(*(matrix+i)+j)=(i+1)*(j+1);
        }
    }
}

void printMatrix(int **matrix, int row, int column){
    fillMatrix(matrix, row, column);
    printf("\nMatrix = \n[\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d  ", *(*(matrix+i)+j));
        }
        printf("\n");
    }
    printf("]\n");
}

int main(){
    int row=3;
    int column=row;
    int **matrix=(int**) malloc(row*sizeof(int*));
    for(int i=0; i<column; i++){
        *(matrix+i)=(int*) malloc(column*sizeof(int));
    }
    printMatrix(matrix, row, column);

    for(int i=0; i<row; i++){
        free(*(matrix+i));
    }
    free(matrix);

    return 0;
}