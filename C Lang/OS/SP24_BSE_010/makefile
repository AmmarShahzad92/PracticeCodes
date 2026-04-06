##To create simple.exe file
simple: simple.o libsimple.a
	gcc -o simple.exe simple.o -L. -lsimple

## To create the simple object file
simple.o: simple.c simple.h
	gcc -c simple.c

## To create thelibrary from util object file
libsimple.a: util.o
	ar cr libsimple.a util.o

## To create the util object file
util.o: util.c simple.h
	gcc -c util.c

clean:
	rm *.o libsimple.a simple