# Build the executable
simple: simple.o libsimple.a
	gcc simple.o -L. -lsimple -o simple.exe

# Compile main source
simple.o: simple.c simple.h
	gcc -Wall -c simple.c

# Create static library
libsimple.a: util.o
	ar rcs libsimple.a util.o

# Compile utility source
util.o: util.c simple.h
	gcc -Wall -c util.c

# Clean generated files
clean:
	rm -f *.o libsimple.a simple.exe
