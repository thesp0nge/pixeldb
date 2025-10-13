#include "unity.h"
#include "pixeldb.h"

#define TEST_ASSERT_EQUAL_SIZE_T(expected, actual) TEST_ASSERT_EQUAL_UINT64((unsigned long)expected, (unsigned long)actual)


void setUp(void) {}
void tearDown(void) {}

// Test creation of PixelDB and initial values
void test_pixeldb_create(void) {
    PixelDB *db = pixeldb_create(10);
    TEST_ASSERT_NOT_NULL(db);
    TEST_ASSERT_EQUAL_SIZE_T(0, db->count);
    TEST_ASSERT_EQUAL_SIZE_T(10, db->capacity);
    pixeldb_free(db);
}

// Test store returns 0 (stub)
void test_pixeldb_store(void) {
    PixelDB *db = pixeldb_create(5);
    int result = pixeldb_store(db, "key1", "value1");
    TEST_ASSERT_EQUAL_INT(0, result);

    // count should not change yet (stub)
    TEST_ASSERT_EQUAL_SIZE_T(0, db->count);
    pixeldb_free(db);
}

// Test load returns NULL (stub)
void test_pixeldb_load(void) {
    PixelDB *db = pixeldb_create(5);
    char *val = pixeldb_load(db, "key1");
    TEST_ASSERT_NULL(val);

    // count should still be 0
    TEST_ASSERT_EQUAL_SIZE_T(0, db->count);
    pixeldb_free(db);
}

// Optional: test multiple stores (still stub behavior)
void test_multiple_stores(void) {
    PixelDB *db = pixeldb_create(3);
    TEST_ASSERT_EQUAL_INT(0, pixeldb_store(db, "a", "1"));
    TEST_ASSERT_EQUAL_INT(0, pixeldb_store(db, "b", "2"));
    TEST_ASSERT_EQUAL_INT(0, pixeldb_store(db, "c", "3"));

    // count remains 0 in stub
    TEST_ASSERT_EQUAL_SIZE_T(0, db->count);
    pixeldb_free(db);
}

// Main entry point
int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_pixeldb_create);
    RUN_TEST(test_pixeldb_store);
    RUN_TEST(test_pixeldb_load);
    RUN_TEST(test_multiple_stores);

    return UNITY_END();
}
