#include "unity.h"
#include "pixeldb.h"

void test_pixeldb_create(void) {
    PixelDB *db = pixeldb_create(10);
    TEST_ASSERT_NOT_NULL(db);
    TEST_ASSERT_EQUAL_UINT64((unsigned long)0, (unsigned long)db->count);
    TEST_ASSERT_EQUAL_UINT64((unsigned long)10, (unsigned long)db->capacity);
    pixeldb_free(db);
}

void test_pixeldb_store(void) {
    PixelDB *db = pixeldb_create(5);
    TEST_ASSERT_EQUAL_INT(0, pixeldb_store(db, "key1", "value1"));
    pixeldb_free(db);
}

