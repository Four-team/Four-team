lyl:lyl.o
	cc -o lyl lyl.c
lyl.0:lyl.c
	cc -c lyl.c
clean:
	rm lyl.o
