/*
 * Tests for GUIDUtil — no DDS dependency required.
 */
#include "test.hpp"
#include "umaa/sdk/guid_util.hpp"

using namespace umaa::sdk;

TEST(guid_generate_not_nil) {
    auto guid = GUIDUtil::generate();
    ASSERT_NE(guid, NIL_GUID);
}

TEST(guid_generate_unique) {
    auto g1 = GUIDUtil::generate();
    auto g2 = GUIDUtil::generate();
    ASSERT_NE(g1, g2);
}

TEST(guid_to_string_roundtrip) {
    auto guid = GUIDUtil::generate();
    auto str = GUIDUtil::to_string(guid);
    auto parsed = GUIDUtil::from_string(str);
    ASSERT_EQ(guid, parsed);
}

TEST(guid_to_hex_format) {
    NumericGuid guid = {};
    guid[0] = 0xAB;
    guid[15] = 0xCD;
    auto hex = GUIDUtil::to_hex(guid);
    ASSERT_TRUE(hex.find("ab") != std::string::npos);
    ASSERT_TRUE(hex.find("cd") != std::string::npos);
    // Should be space-separated
    ASSERT_TRUE(hex.find(' ') != std::string::npos);
}

TEST(guid_from_string_invalid) {
    auto result = GUIDUtil::from_string("not-a-guid");
    ASSERT_EQ(result, NIL_GUID);
}

TEST(guid_uuid_version_4) {
    auto guid = GUIDUtil::generate();
    // Version 4: byte[6] upper nibble should be 0x4
    ASSERT_EQ((guid[6] >> 4) & 0x0F, 4);
    // Variant bits: byte[8] upper 2 bits should be 10
    ASSERT_EQ((guid[8] >> 6) & 0x03, 2);
}
