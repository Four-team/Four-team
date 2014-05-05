test:test.o  student_info.h
	cc -o test test.o 
test.o:test.c student_info.h
	cc -c test.c
clean:
	rm test.o
