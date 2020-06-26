
main: min.o max.o main.o mod.o div.o multi.o
	gcc -o main min.o max.o mod.o div.o multi.o main.o -fprofile-arcs -ftest-coverage

min.o: min.c
	gcc -o min.o -c min.c -W -Wall -ansi -pedantic -fprofile-arcs -ftest-coverage

max.o: max.c
	gcc -o max.o -c max.c -W -Wall -ansi -pedantic -fprofile-arcs -ftest-coverage

mod.o: mod.c
	gcc -o mod.o -c mod.c -W -Wall -ansi -pedantic -fprofile-arcs -ftest-coverage

div.o: div.c
	gcc -o div.o -c div.c -W -Wall -ansi -pedantic -fprofile-arcs -ftest-coverage

multi.o: multi.c
	gcc -o multi.o -c multi.c -W -Wall -ansi -pedantic -fprofile-arcs -ftest-coverage

main.o: main.c min.h max.h div.h mod.h multi.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic -fprofile-arcs -ftest-coverage

clean:
	rm -rf *.o *.gcno *.c.gcvo *.gcda *.xml
	rm main
