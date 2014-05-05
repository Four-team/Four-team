<<<<<<< HEAD
all:lyl test
lyl:lyl.o
	gcc -o lyl lyl.o
lyl.0:lyl.c
	gcc -c lyl.c
test:test.o
	gcc -o test test.o
test.0:test.c
	gcc -c test.c
=======
all: lyl test
lyl : lyl.o
	cc -o lyl lyl.c
lyl.o : lyl.c
	cc -c lyl.c




test:test.o  student_info.h
	cc -o test test.o 
test.o:test.c student_info.h
	cc -c test.c

