#include <stdlib.h>
#include "pixeldb.h"

PixelDB* pixeldb_create(size_t initial_capacity) {
    PixelDB *db = malloc(sizeof(PixelDB));
    if (!db) return NULL;
    db->count = 0;
    db->capacity = initial_capacity;
    return db;
}

void pixeldb_free(PixelDB *db) {
    if (db) free(db);
}

// Stub functions for first project iteration
//
int pixeldb_store(PixelDB *db, const char *key, const char *value) {
    (void)db; (void)key; (void)value;
    return 0;
}

char* pixeldb_load(PixelDB *db, const char *key) {
    (void)db; (void)key;
    return NULL;
}
