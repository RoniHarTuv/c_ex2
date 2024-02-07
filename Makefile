CC= gcc

all: my_graph my_Knapsack

my_Knapsack: my_Knapsack.o
	$(CC) -o my_Knapsack my_Knapsack.o

my_Knapsack.o: my_Knapsack.c
	$(CC)  -c my_Knapsack.c

my_graph: main.o
	$(CC) -o my_graph main.o

my_mat.o: my_mat.h
	$(CC) -c my_mat.c	

main.o: main.c my_mat.h 
	$(CC)  -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so c my_graph my_Knapsack

