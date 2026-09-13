/**
    * @file cb_01_prime_numbers.c
    * @brief Basic exercise to check for prime numbers in an array.
    * @author Danna Cabeza
    * @date 2026-09-11
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i]=rand() %1001;
    }
}

bool prime(int n){
    if(n<=1){
        return false;
    }

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void cuantify(int n){
    int arr[n];
    generate(arr, n);
    int primos=0;

    printf("Array generated: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
        if(prime(arr[i])==true){
            primos++;
        }
    }
    printf("\nPrime numbers found: %d", primos);
}

int main(){
    srand(time(NULL));
    cuantify(10);

    return 0;
}