/*
 * Minimal test framework — assert + counters.
 * No external dependencies. Returns 0 on success, 1 on failure.
 */

#ifndef UMAA_SDK_TEST_HPP
#define UMAA_SDK_TEST_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <functional>

namespace test {

struct TestCase {
    std::string name;
    std::function<void()> func;
};

inline std::vector<TestCase>& registry() {
    static std::vector<TestCase> cases;
    return cases;
}

inline int& pass_count() { static int c = 0; return c; }
inline int& fail_count() { static int c = 0; return c; }

#define TEST(name) \
    void test_##name(); \
    static bool registered_##name = (test::registry().push_back({#name, test_##name}), true); \
    void test_##name()

#define ASSERT_TRUE(expr) \
    do { if (!(expr)) { \
        std::cerr << "  FAIL: " << #expr << " (" << __FILE__ << ":" << __LINE__ << ")\n"; \
        throw std::runtime_error("assertion failed"); \
    }} while(0)

#define ASSERT_FALSE(expr) ASSERT_TRUE(!(expr))

#define ASSERT_EQ(a, b) \
    do { if (!((a) == (b))) { \
        std::cerr << "  FAIL: " << #a << " == " << #b \
                  << " (" << __FILE__ << ":" << __LINE__ << ")\n"; \
        throw std::runtime_error("assertion failed"); \
    }} while(0)

#define ASSERT_NE(a, b) \
    do { if ((a) == (b)) { \
        std::cerr << "  FAIL: " << #a << " != " << #b \
                  << " (" << __FILE__ << ":" << __LINE__ << ")\n"; \
        throw std::runtime_error("assertion failed"); \
    }} while(0)

#define ASSERT_THROWS(expr) \
    do { bool threw = false; \
        try { expr; } catch(...) { threw = true; } \
        if (!threw) { \
            std::cerr << "  FAIL: expected exception from " << #expr \
                      << " (" << __FILE__ << ":" << __LINE__ << ")\n"; \
            throw std::runtime_error("assertion failed"); \
        } \
    } while(0)

inline int run_all() {
    std::cerr << "Running " << registry().size() << " tests...\n";
    for (auto& tc : registry()) {
        try {
            tc.func();
            std::cerr << "  PASS: " << tc.name << "\n";
            pass_count()++;
        } catch (const std::exception& e) {
            std::cerr << "  FAIL: " << tc.name << " — " << e.what() << "\n";
            fail_count()++;
        }
    }
    std::cerr << "\nResults: " << pass_count() << " passed, "
              << fail_count() << " failed.\n";
    return fail_count() == 0 ? 0 : 1;
}

}  // namespace test

#endif  // UMAA_SDK_TEST_HPP
