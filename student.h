// student.h
#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int id;
    char name[50];
} Student;

void add_student(Student*, int*);
void view_students(Student*, int);

#endif
