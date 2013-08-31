C := gcc
C_FLAGS := -Wall -std=c99

all: staff.o student.o
	$(C) staff.o student.o -o executable

staff.o: staff.c
	$(C) $(C_FLAGS) -c staff.c

student.o: student.c
	$(C) $(C_FLAGS) -c student.c

clean:
	rm -f *.o executable
