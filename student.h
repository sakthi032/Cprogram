#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 100

typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

void add_student(Student*, int*);
void list_students(Student*, int);
void top_student(Student*, int);

#endif
