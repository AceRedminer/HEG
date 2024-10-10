CC = gcc
CFLAGS = -Wall -Wextra -pedantic -G -fsanitize=address -fsanitize=leak
LDFLAGS = -lm -lSDL2

FOLDER = .
SOURCES = $(wildcard $(FOLDER)/*.c)
OBJECTS = $(SOURCES:.c=.o)

TARGET = main

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: clean

clean:
	rm -f $(TARGET) $(OBJECTS)

rebuild: clean main
