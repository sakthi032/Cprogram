// main.c
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

#define MAX 100

int main() {
    Student list[MAX];
    int count = 0, choice;

    while (1) {
        printf("\n1. Add Student\n2. View Students\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            add_student(list, &count);
        } else if (choice == 2) {
            view_students(list, count);
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
