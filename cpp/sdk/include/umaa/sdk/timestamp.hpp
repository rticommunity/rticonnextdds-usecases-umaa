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

#ifndef UMAA_SDK_TIMESTAMP_HPP
#define UMAA_SDK_TIMESTAMP_HPP

#include <chrono>
#include <cstdint>

namespace umaa { namespace sdk {

/// Set timestamp fields on any UMAA type that has `seconds` and `nanoseconds` members.
/// Matches UMAA DateTimeType: seconds (int64), nanoseconds (uint32).
template<typename DateTimeType>
void set_timestamp(DateTimeType& dt) {
    auto now = std::chrono::system_clock::now();
    auto epoch = now.time_since_epoch();
    auto secs = std::chrono::duration_cast<std::chrono::seconds>(epoch);
    auto nanos = std::chrono::duration_cast<std::chrono::nanoseconds>(epoch - secs);

    dt.seconds(static_cast<int64_t>(secs.count()));
    dt.nanoseconds(static_cast<uint32_t>(nanos.count()));
}

/// Get current time as seconds + nanoseconds pair
inline std::pair<int64_t, uint32_t> get_timestamp() {
    auto now = std::chrono::system_clock::now();
    auto epoch = now.time_since_epoch();
    auto secs = std::chrono::duration_cast<std::chrono::seconds>(epoch);
    auto nanos = std::chrono::duration_cast<std::chrono::nanoseconds>(epoch - secs);
    return {static_cast<int64_t>(secs.count()), static_cast<uint32_t>(nanos.count())};
}

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_TIMESTAMP_HPP
