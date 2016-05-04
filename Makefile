all: test

test: test.c sort.c 
	gcc test.c sort.c -o test

