CC = gcc

CFLAGS = -Wall -g -pedantic -ansi

all: sequence

sequence: sequence.c
	$(CC) $(CFLAGS) -o sequence sequence.c $(SOURCES) 

clean:
	rm sequence
