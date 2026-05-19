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

#ifndef UMAA_SDK_COMMAND_STATE_MACHINE_HPP
#define UMAA_SDK_COMMAND_STATE_MACHINE_HPP

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSets.hpp"

namespace umaa { namespace sdk {

using CommandStatusEnumType =
    UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType;
using CommandStatusReasonEnumType =
    UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType;

/// ICD-correct command state machine.
/// Valid transitions:
///   ISSUED    → COMMANDED : SUCCEEDED
///   ISSUED    → ISSUED    : UPDATED
///   ISSUED    → FAILED    : VALIDATION_FAILED, RESOURCE_FAILED, INTERRUPTED, TIMEOUT, SERVICE_FAILED
///   ISSUED    → CANCELED  : CANCELED
///   COMMANDED → EXECUTING : SUCCEEDED
///   COMMANDED → ISSUED    : UPDATED
///   COMMANDED → FAILED    : RESOURCE_REJECTED, INTERRUPTED, TIMEOUT, SERVICE_FAILED
///   COMMANDED → CANCELED  : CANCELED
///   EXECUTING → COMPLETED : SUCCEEDED
///   EXECUTING → ISSUED    : UPDATED
///   EXECUTING → FAILED    : OBJECTIVE_FAILED, RESOURCE_FAILED, INTERRUPTED, TIMEOUT, SERVICE_FAILED
///   EXECUTING → CANCELED  : CANCELED
class CommandStateMachine {
public:
    CommandStateMachine() = default;

    /// Advance: ISSUED→COMMANDED, COMMANDED→EXECUTING, EXECUTING→COMPLETED
    bool advance_state();

    /// Return to ISSUED (command update). Only valid from non-final states.
    bool update();

    /// Transition to CANCELED. Only valid from non-final states.
    bool cancel();

    /// Transition to FAILED with a validated reason (per-state rules apply).
    bool fail(CommandStatusReasonEnumType reason);

    /// Reset to initial state (ISSUED, SUCCEEDED).
    void reset();

    CommandStatusEnumType state() const { return current_state_; }
    CommandStatusReasonEnumType reason() const { return current_reason_; }
    bool is_final() const { return is_state_final(current_state_); }

    static bool is_state_final(CommandStatusEnumType state) {
        return state == CommandStatusEnumType::COMPLETED
            || state == CommandStatusEnumType::FAILED
            || state == CommandStatusEnumType::CANCELED;
    }

private:
    CommandStatusEnumType current_state_ = CommandStatusEnumType::ISSUED;
    CommandStatusReasonEnumType current_reason_ = CommandStatusReasonEnumType::SUCCEEDED;
};

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_COMMAND_STATE_MACHINE_HPP
