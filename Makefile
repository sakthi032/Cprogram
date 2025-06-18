CC = gcc
CFLAGS = -Wall
OBJS = main.o student.o
TARGET = student_app

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c student.h
student.o: student.c student.h

clean:
	rm -f *.o $(TARGET)
