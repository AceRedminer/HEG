main: main.o matrices.o
	gcc -Wall -Wextra main.o matrices.o -o main -lm

matrices.o: matrices.c matrices.h
	gcc -Wall -Wextra -c matrices.c

main.o: main.c
	gcc -Wall -Wextra -c main.c

clean:
	rm -f *.o main