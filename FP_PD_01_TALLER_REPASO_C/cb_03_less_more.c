/**
    * @file cb_03_less_more.c
    * @brief Basic exercise to find the bigger and smaller numbers among three numbers.
    * @author Danna Cabeza
    * @date 2026-09-11
*/

#include <stdio.h>

void lessMore(int a, int b, int c){
    int less, more;

    if(a<=b && a<=c){
        less=a;
    }
    else if(b<=a && b<=c){
        less=b;
    }
    else{
        less=c;
    }

    if(a>=b && a>=c){
        more=a;
    }
    else if(b>=a && b>=c){
        more=b;
    }
    else{
        more=c;
    }

    printf("Bigger: %d\nSmaller: %d\n", more, less);
}

int main(){
    lessMore(74,3,21);
    return 0;
}