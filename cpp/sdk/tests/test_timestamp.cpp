/*
 * Tests for timestamp utilities — no DDS dependency required.
 */
#include "test.hpp"
#include "umaa/sdk/timestamp.hpp"

#include <chrono>
#include <thread>

using namespace umaa::sdk;

TEST(timestamp_get_returns_nonzero) {
    auto [secs, nanos] = get_timestamp();
    ASSERT_TRUE(secs > 0);
    ASSERT_TRUE(nanos < 1000000000u);
}

TEST(timestamp_monotonic) {
    auto [s1, n1] = get_timestamp();
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    auto [s2, n2] = get_timestamp();
    // Seconds should be >= and if equal, nanos should be >=
    ASSERT_TRUE(s2 > s1 || (s2 == s1 && n2 >= n1));
}

// Test set_timestamp with a mock struct
struct MockDateTime {
    int64_t sec = 0;
    uint32_t nsec = 0;
    void seconds(int64_t s) { sec = s; }
    void nanoseconds(uint32_t n) { nsec = n; }
};

TEST(set_timestamp_populates_fields) {
    MockDateTime dt;
    set_timestamp(dt);
    ASSERT_TRUE(dt.sec > 0);
    ASSERT_TRUE(dt.nsec < 1000000000u);
}
