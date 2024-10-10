sort: sort.o utils.o bubble_sort.o insert_sort.o
	gcc -Wall -Wextra -O3 sort.o utils.o bubble_sort.o insert_sort.o -o sort

bubble_sort.o: bubble_sort.c bubble_sort.h
	gcc -Wall -Wextra -c bubble_sort.c

insert_sort.o: insert_sort.c insert_sort.h
	gcc -Wall -Wextra -c insert_sort.c

utils.o: utils.c utils.h
	gcc -Wall -Wextra -c utils.c

sort.o: sort.c
	gcc -Wall -Wextra -c sort.c

clean:
	rm -f *.o sort