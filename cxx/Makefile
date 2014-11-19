test: a.out
	./a.out

a.out: test.o
	$(CC) -g -O3 test.c 

test.o: test.c
	$(CC) -c test.c -o $@



