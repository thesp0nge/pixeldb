#include "unity.h"
#include "pixeldb.h"

// Placeholder for storing NULL key/value
void test_store_null_key(void) {
    PixelDB *db = pixeldb_create(5);
    int result = pixeldb_store(db, NULL, "value");
    TEST_ASSERT_EQUAL_INT(0, result); // stub
    pixeldb_free(db);
}

// Placeholder for loading non-existent key
void test_load_nonexistent_key(void) {
    PixelDB *db = pixeldb_create(5);
    char *val = pixeldb_load(db, "nope");
    TEST_ASSERT_NULL(val); // stub
    pixeldb_free(db);
}

