CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -Itests/Unity/src -g

all: test_pixeldb

src/pixeldb.o: src/pixeldb.c include/pixeldb.h
	$(CC) $(CFLAGS) -c src/pixeldb.c -o src/pixeldb.o

test_pixeldb: src/pixeldb.o tests/test_pixeldb.c
	$(CC) $(CFLAGS) src/pixeldb.o tests/test_pixeldb.c tests/Unity/src/unity.c -o test_pixeldb

clean:
	rm -f src/*.o test_pixeldb

