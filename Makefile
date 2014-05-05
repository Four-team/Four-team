all: lyl test
lyl : lyl.o
	cc -o lyl lyl.c
lyl.o : lyl.c
	cc -c lyl.c

test:test.o  student_info.h
	cc -o test test.o 
test.o:test.c student_info.h
	cc -c test.c

