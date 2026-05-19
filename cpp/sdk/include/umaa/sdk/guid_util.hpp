/*
 * (c) Copyright, Real-Time Innovations, 2025.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 */

#ifndef UMAA_SDK_GUID_UTIL_HPP
#define UMAA_SDK_GUID_UTIL_HPP

#include <array>
#include <cstdint>
#include <random>
#include <sstream>
#include <iomanip>
#include <string>

namespace umaa { namespace sdk {

/// Raw 16-byte GUID (matches UMAA NumericGUID typedef octet[16])
using NumericGuid = std::array<uint8_t, 16>;

/// All-zeros sentinel GUID
inline constexpr NumericGuid NIL_GUID = {};

class GUIDUtil {
public:
    /// Generate a random 128-bit GUID
    static NumericGuid generate() {
        NumericGuid guid;
        std::random_device rd;
        std::mt19937_64 gen(rd());
        std::uniform_int_distribution<uint64_t> dist;

        uint64_t hi = dist(gen);
        uint64_t lo = dist(gen);

        for (int i = 0; i < 8; ++i) {
            guid[i] = static_cast<uint8_t>((hi >> (56 - i * 8)) & 0xFF);
        }
        for (int i = 0; i < 8; ++i) {
            guid[8 + i] = static_cast<uint8_t>((lo >> (56 - i * 8)) & 0xFF);
        }

        // Set UUID version 4 bits
        guid[6] = (guid[6] & 0x0F) | 0x40;
        guid[8] = (guid[8] & 0x3F) | 0x80;

        return guid;
    }

    /// Convert GUID to hex string (space-separated for CFT filter expressions)
    static std::string to_hex(const NumericGuid& guid) {
        std::ostringstream oss;
        for (size_t i = 0; i < guid.size(); ++i) {
            if (i > 0) oss << ' ';
            oss << std::hex << std::setfill('0') << std::setw(2)
                << static_cast<int>(guid[i]);
        }
        return oss.str();
    }

    /// Convert GUID to UUID string (8-4-4-4-12 format)
    static std::string to_string(const NumericGuid& guid) {
        std::ostringstream oss;
        oss << std::hex << std::setfill('0');
        for (size_t i = 0; i < 16; ++i) {
            if (i == 4 || i == 6 || i == 8 || i == 10) oss << '-';
            oss << std::setw(2) << static_cast<int>(guid[i]);
        }
        return oss.str();
    }

    /// Parse a hex string (with or without dashes/spaces) into a GUID
    static NumericGuid from_string(const std::string& str) {
        NumericGuid guid = {};
        std::string hex_only;
        hex_only.reserve(32);
        for (char c : str) {
            if (std::isxdigit(static_cast<unsigned char>(c))) {
                hex_only += c;
            }
        }
        if (hex_only.size() != 32) {
            return NIL_GUID;
        }
        for (size_t i = 0; i < 16; ++i) {
            guid[i] = static_cast<uint8_t>(
                std::stoul(hex_only.substr(i * 2, 2), nullptr, 16));
        }
        return guid;
    }
};

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_GUID_UTIL_HPP
