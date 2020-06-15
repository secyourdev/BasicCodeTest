
main: min.o max.o main.o mod.o div.o multi.o
	gcc -o main min.o max.o mod.o div.o multi.o main.o -pg

min.o: min.c
	gcc -o min.o -c min.c -W -Wall -ansi -pedantic -pg

max.o: max.c
	gcc -o max.o -c max.c -W -Wall -ansi -pedantic -pg

mod.o: mod.c
	gcc -o mod.o -c mod.c -W -Wall -ansi -pedantic -pg

div.o: div.c
	gcc -o div.o -c div.c -W -Wall -ansi -pedantic -pg

multi.o: multi.c
	gcc -o multi.o -c multi.c -W -Wall -ansi -pedantic -pg

main.o: main.c min.h max.h div.h mod.h multi.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic -pg

clean:
	rm -rf *.o *.txt gmon.out
