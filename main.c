#include <stdio.h>
#include "student.h"

int main() {
    Student students[MAX_STUDENTS];
    int count = 0, choice;

    while (1) {
        printf("\n1. Add Student\n2. List Students\n3. Top Student\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            add_student(students, &count);
        } else if (choice == 2) {
            list_students(students, count);
        } else if (choice == 3) {
            top_student(students, count);
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
