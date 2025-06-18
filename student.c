// student.c
#include <stdio.h>
#include "student.h"

void add_student(Student* list, int* count) {
    printf("Enter ID: ");
    scanf("%d", &list[*count].id);
    printf("Enter Name: ");
    scanf("%s", list[*count].name);
    (*count)++;
}

void view_students(Student* list, int count) {
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s\n", list[i].id, list[i].name);
    }
}
