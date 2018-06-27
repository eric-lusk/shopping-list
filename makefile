CC=gcc
CFLAGS=--ggdb -lm
FILES = main.c ItemToPurchase.c
OUT=main.o

build: $(FILES)
	$(CC) $(CFLAGS) -o $(OUT) $(FILES)

clean:
	-rm -f *.o main

rebuild: clean build
