#ifndef PIXELDB_H
#define PIXELDB_H

#include <stddef.h>

typedef struct {
    size_t count;
    size_t capacity;
} PixelDB;

PixelDB* pixeldb_create(size_t initial_capacity);
void pixeldb_free(PixelDB *db);

int pixeldb_store(PixelDB *db, const char *key, const char *value);
char* pixeldb_load(PixelDB *db, const char *key);

#endif

