CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -Itests/Unity/src -g

SRC = src/pixeldb.c
TESTS = tests/test_runner.c tests/core/test_core.c tests/persistence/test_persistence.c tests/edge_cases/test_edge.c
UNITY = tests/Unity/src/unity.c

all: test_pixeldb

test_pixeldb: $(SRC) $(TESTS)
	$(CC) $(CFLAGS) $(SRC) $(TESTS) $(UNITY) -o test_pixeldb

clean:
	rm -f test_pixeldb

