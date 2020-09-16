#Makefile

all : add_nbo

add_nbo : get.o main.o
	gcc -g -o add_nbo get.o main.o

get.o : get.h get.c
	gcc -c get.c

main.o : main.c get.h
	gcc -c main.c

clean : 
	rm -f add_nbo *.o