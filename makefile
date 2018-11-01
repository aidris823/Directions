all: directions.o
	gcc -o test directions.o
directions.o: directions.c
	gcc -c directions.c
run: all
	./test
