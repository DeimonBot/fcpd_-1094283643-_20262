/**
    * @file cb_05_recursion.c
    * @brief Basic exercise to sum the digits of a number using recursion.
    * @author Danna Cabeza
    * @date 2026-09-12
*/

#include <stdio.h>

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10) + sum(n/10);
    }
}

int main(){
    int n=1234;
    printf("The sum of the digits of the number %d is: %d\n", n, sum(n));
    return 0;
}