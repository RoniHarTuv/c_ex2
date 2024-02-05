CC= gcc

all: main

main: main.o
	$(CC) -o main main.o

my_mat.o: my_mat.h
	$(CC) -c my_mat.c	

main.o: main.c my_mat.h 
	$(CC)  -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so main

