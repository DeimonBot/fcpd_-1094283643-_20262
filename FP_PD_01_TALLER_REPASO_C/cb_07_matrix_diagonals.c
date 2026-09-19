/**
    * @file cb_07_matrix_diagonals.c
    * @brief Basic exercise to find the sum of the principal and secondary diagonals of a matrix.
    * @author Danna Cabeza
    * @date 2026-09-12
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** fill (int n, int m){
    srand(time(NULL));
    int ** matrix=(int **)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++){
        matrix[i]=(int *)malloc(m*sizeof(int));
        for(int j=0; j<m; j++){
            matrix[i][j]=rand()%100;
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return matrix;
}

void diagonals(int n, int m){
    if(n!=m){
        printf("The matrix is not square, can´t calculate the sum of the diagonals\n");
    }
    else{
        printf("Matrix generated:\n\n");
        int ** matrix=fill(n,m);
        int sumPrincipal=0, sumSecondary=0, aux=n-1;
        for(int i=0; i<n; i++){
            sumPrincipal+=matrix[i][i];
            sumSecondary+=matrix[i][aux];
            aux--;   
        }
        printf("\nSum of principal diagonal: %d\nSum of secondary diagonal: %d\n", sumPrincipal, sumSecondary);

        if(sumPrincipal<sumSecondary){
            printf("The sum of the secondary diagonal is bigger\n");
        }
        else if(sumSecondary<sumPrincipal){
            printf("The sum of the principal diagonal is bigger\n");
        }
        else{
            printf("Both sums of diagonals are equal\n");
        }
    }
}

int main(){
    diagonals(5,5);
    return 0;
}