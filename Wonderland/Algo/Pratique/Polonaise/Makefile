main: main.o stacks_malloc.o
	gcc -Wall -Wextra main.o stacks_malloc.o -o main -lm -fsanitize=address -pedantic

stacks_malloc.o: stacks_malloc.c stacks_malloc.h
	gcc -Wall -Wextra -c stacks_malloc.c

main.o: main.c
	gcc -Wall -Wextra -c main.c

clean:
	rm -f *.o main