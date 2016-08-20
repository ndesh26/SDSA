all: test

test: demos/test.c src/sort.c src/sort.h
	gcc -I ./src/ demos/test.c src/*.c -o demos/test

