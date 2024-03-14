CC = gcc
CFLAGS = -Wall -g

.PHONY: all clean

all: lib_dynamic.so main.o 
	gcc -o main.exe main.o -L. lib_dynamic.so

lib_dynamic.so: lib_add_sub.o lib_print.o
	gcc -shared lib_add_sub.o lib_print.o -o lib_dynamic.so

lib_add_sub.o: lib_add_sub.c lib_add_sub.h
	gcc -c lib_add_sub.c

lib_print.o: lib_print.c lib_print.h
	gcc -c lib_print.c

main.o:
	gcc -c main.c

clean:
	rm -rf *.o main.exe lib_static.a

#lưu ý là set up biến môi trường
#export LD_LIBRARY_PATH=/đường dẫn thư mục hiện tại/

