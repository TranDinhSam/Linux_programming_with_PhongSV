CC = gcc
CFLAGS = -Wall -g

.PHONY: all clean

all: lib_static.a main.o 
	gcc -o main.exe main.o -L. lib_static.a

lib_static.a: lib_add_sub.o lib_print.o
	ar rcs lib_static.a lib_add_sub.o lib_print.o

lib_add_sub.o: lib_add_sub.c lib_add_sub.h
	gcc -c lib_add_sub.c

lib_print.o: lib_print.c lib_print.h
	gcc -c lib_print.c

main.o:
	gcc -c main.c
	

clean:
	rm -rf *.o main.exe lib_static.a



