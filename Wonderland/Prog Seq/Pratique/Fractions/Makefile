main: main.o fractions.o
	gcc -Wall -Wextra main.o fractions.o -o main -lm

fractions.o: fractions.c fractions.h
	gcc -Wall -Wextra -c fractions.c

main.o: main.c
	gcc -Wall -Wextra -c main.c

clean:
	rm -f *.o main