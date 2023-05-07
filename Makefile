main: main.o funcs.o
	g++ -o main main.o funcs.o -std=c++17

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o



main.o: main.cpp funcs.o

tests.o: tests.cpp funcs.o

funcs.o: funcs.cpp funcs.h

clean:
	rm -f main.o funcs.o tests.o