/**
    * @file cb_04_factorial_odd_even.c
    * @brief Basic exercise to find factorial of a number and identify if it's odd or even.
    * @author Danna Cabeza
    * @date 2026-09-11
*/

#include <stdio.h>

void factorialOddEven(int n){
    int factorial=1;

    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    printf("%d factorial is: %d\n", n, factorial);

    if(n%2==0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
}

int main(){
    factorialOddEven(5);
    return 0;
}