/**
    * @file cb_10_students_structs.c
    * @brief Basic exercise to create a struct of students with id, name, and array of three notes.
    * @author Danna Cabeza
    * @date 2026-09-12
*/

#include <stdio.h>
#include <stdlib.h>

#define MinAprove 3.0f

typedef struct{
    int id;
    char name[100];
    float notes[3];
    float average;
} student;

void addStudent(student *array, int size){
    for(int i=0; i<size; i++){
        float aver=0;
        printf("Enter the id of the student: \n");
        scanf("%d", &array[i].id);
        printf("Enter the name of the student: \n");
        scanf("%s", array[i].name);
        for(int j=0; j<3; j++){
            printf("Enter the %d note of the student: \n", j+1);
            scanf("%f", &array[i].notes[j]);
            aver+=array[i].notes[j];
        }
        aver=aver/3;
        array[i].average=aver;
    }
}

void printAproved(student * array, int size){
    printf("\nStudents aproved:\n");
    for(int i=0; i<size; i++){
        if(array[i].average>=MinAprove){
            printf("\nThe student %s with id %d has aproved with an average of %f\n", array[i].name, array[i].id, array[i].average);
        }
    }
}

int main(){
    int size;
    printf("Input the number of students: \n");
    scanf("%d", &size);

    student *array=(student *)malloc(size*sizeof(student));
    addStudent(array, size);
    printAproved(array, size);
    free(array);
    return 0;
}
