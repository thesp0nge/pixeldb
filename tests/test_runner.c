#include "unity.h"

void setUp(void) {}
void tearDown(void) {}

// Dichiarazioni delle funzioni dei vari moduli
void test_pixeldb_create(void);
void test_pixeldb_store(void);
// persistence
void test_pixeldb_save(void);
void test_pixeldb_load_file(void);
// edge cases
void test_store_null_key(void);

int main(void) {
    UNITY_BEGIN();

    // Core tests
    RUN_TEST(test_pixeldb_create);
    RUN_TEST(test_pixeldb_store);

    // Persistence tests
    RUN_TEST(test_pixeldb_save);
    RUN_TEST(test_pixeldb_load_file);

    // Edge case tests
    RUN_TEST(test_store_null_key);

    return UNITY_END();
}

