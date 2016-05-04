all: test

test: test.c sort.c sort.h
	gcc test.c sort.c -o test

