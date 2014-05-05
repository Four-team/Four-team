all:lyl test
lyl:lyl.o
	gcc -o lyl lyl.o
lyl.0:lyl.c
	gcc -c lyl.c
test:test.o
	gcc -o test test.o
test.0:test.c
	gcc -c test.c
