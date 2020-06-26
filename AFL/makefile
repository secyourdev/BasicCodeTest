CC=afl-gcc
CFLAGS=-W -Wall -ansi -pedantic


main: min.o max.o main.o mod.o div.o multi.o
	$(CC) -o main min.o max.o mod.o div.o multi.o main.o

min.o: min.c
	$(CC) -o min.o -c min.c $(CFLAGS)

max.o: max.c
	$(CC) -o max.o -c max.c $(CFLAGS)

mod.o: mod.c
	$(CC) -o mod.o -c mod.c $(CFLAGS)

div.o: div.c
	$(CC) -o div.o -c div.c $(CFLAGS)

multi.o: multi.c
	$(CC) -o multi.o -c multi.c $(CFLAGS)

main.o: main.c min.h max.h div.h mod.h multi.h
	$(CC) -o main.o -c main.c $(CFLAGS)

clean:
	rm -rf *.o
	rm main