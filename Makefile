main: main.o funcs.o

tests: tests.o funcs.o

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main.o funcs.o tests.o
