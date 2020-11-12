CC = gcc
FLAG = -Wall

.PHONY: all mymaths mymathd clean

all: mymaths mymathd mains maind

mains: libmyMath.a main.o
	$(CC) $(FLAG) libmyMath.a main.o -o mains
	
maind: main.o libmyMath.so
	$(CC) $(FLAG) -o maind main.o ./libmyMath.so
	
mymaths: libmyMath.a

libmyMath.a: power.o basicMath.o
	ar -rcs libmyMath.a power.o basicMath.o

mymathd: libmyMath.so

libmyMath.so: power.o basicMath.o
	$(CC) -shared power.o basicMath.o -o libmyMath.so

main.o: main.c myMath.h
	$(CC) $(FLAG) -c main.c

power.o: power.c myMath.h
	$(CC) $(FLAG) -c power.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAG) -c basicMath.c
	
clean:
	rm -f *.so *.a *.o mains maind
