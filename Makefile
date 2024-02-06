CC= gcc

all: connections

connections: main.o
	$(CC) -o connections main.o

my_mat.o: my_mat.h
	$(CC) -c my_mat.c	

main.o: main.c my_mat.h 
	$(CC)  -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so main

