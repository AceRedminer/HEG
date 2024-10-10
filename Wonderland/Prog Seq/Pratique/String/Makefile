main: main.o mystring.o
	gcc -Wall -Wextra main.o mystring.o -o main

mystring.o: mystring.c mystring.h
	gcc -Wall -Wextra -c mystring.c

main.o: main.c
	gcc -Wall -Wextra -c main.c

clean:
	rm -f *.o main