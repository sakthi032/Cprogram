#include <stdio.h>
#include "student.h"

void add_student(Student* s, int* count) {
    printf("Enter ID: ");
    scanf("%d", &s[*count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]", s[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &s[*count].marks);
    (*count)++;
}

void list_students(Student* s, int count) {
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Marks: %.2f\n", s[i].id, s[i].name, s[i].marks);
    }
}

void top_student(Student* s, int count) {
    if (count == 0) {
        printf("No students added yet.\n");
        return;
    }

    int top = 0;
    for (int i = 1; i < count; i++) {
        if (s[i].marks > s[top].marks)
            top = i;
    }

    printf("\nTop Student:\nID: %d | Name: %s | Marks: %.2f\n", s[top].id, s[top].name, s[top].marks);
}
