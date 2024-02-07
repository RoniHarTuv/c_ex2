CC= gcc
FLAGS= -Wall -g

all: my_graph my_Knapsack

my_Knapsack: my_Knapsack.o
	$(CC) -o my_Knapsack my_Knapsack.o

my_Knapsack.o: my_Knapsack.c
	$(CC)  -c $(FLAGS) -fPIC my_Knapsack.c

my_graph: main.o
	$(CC) -o my_graph main.o

my_mat.o: my_mat.h
	$(CC) -c $(FLAGS) -fPIC my_mat.c	

main.o: main.c my_mat.h 
	$(CC)  -c $(FLAGS) -fPIC main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so c my_graph my_Knapsack

