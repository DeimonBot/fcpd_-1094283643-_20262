/**
    * @file cb_08_notes.c
    * @brief Basic exercise to assign a letter grade to a numeric note.
    * @author Danna Cabeza
    * @date 2026-09-12
*/

#include <stdio.h>

void assignGrade(int note){
    printf("\nNote: %d\n", note);
    if(note<0){
        printf("Note invalid, it must be between 0 and 100\n");
    }
    else if(note>=0 && note<=20){
        printf("Your grade is F\n");
    }
    else if(note>20 && note<=40){
        printf("Your grade is D\n");
    }
    else if(note>40 && note<=60){
        printf("Your grade is C\n");
    }
    else if(note>60 && note<=80){
        printf("Your grade is B\n");
    }
    else if(note>80 && note<=100){
        printf("Your grade is A\n");
    }
    
}

int main(){
    assignGrade(45);
    assignGrade(89);
    assignGrade(5);
    return 0;
}