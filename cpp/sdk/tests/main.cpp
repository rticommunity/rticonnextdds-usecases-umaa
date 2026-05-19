/*
 * Test runner — discovers and runs all TEST() functions from linked .cpp files.
 */
#include "test.hpp"

int main() {
    return test::run_all();
}
