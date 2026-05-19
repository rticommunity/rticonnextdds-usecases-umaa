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

#include "umaa/sdk/command_state_machine.hpp"

namespace umaa { namespace sdk {

bool CommandStateMachine::advance_state() {
    switch (current_state_) {
    case CommandStatusEnumType::ISSUED:
        current_state_ = CommandStatusEnumType::COMMANDED;
        current_reason_ = CommandStatusReasonEnumType::SUCCEEDED;
        return true;
    case CommandStatusEnumType::COMMANDED:
        current_state_ = CommandStatusEnumType::EXECUTING;
        current_reason_ = CommandStatusReasonEnumType::SUCCEEDED;
        return true;
    case CommandStatusEnumType::EXECUTING:
        current_state_ = CommandStatusEnumType::COMPLETED;
        current_reason_ = CommandStatusReasonEnumType::SUCCEEDED;
        return true;
    default:
        return false;  // Already in a final state
    }
}

bool CommandStateMachine::update() {
    if (!is_final()) {
        current_state_ = CommandStatusEnumType::ISSUED;
        current_reason_ = CommandStatusReasonEnumType::UPDATED;
        return true;
    }
    return false;
}

bool CommandStateMachine::cancel() {
    if (!is_final()) {
        current_state_ = CommandStatusEnumType::CANCELED;
        current_reason_ = CommandStatusReasonEnumType::CANCELED;
        return true;
    }
    return false;
}

bool CommandStateMachine::fail(CommandStatusReasonEnumType reason) {
    if (is_final()) {
        return false;
    }

    bool valid = false;
    switch (reason) {
    // Valid from any non-final state
    case CommandStatusReasonEnumType::SERVICE_FAILED:
    case CommandStatusReasonEnumType::INTERRUPTED:
    case CommandStatusReasonEnumType::TIMEOUT:
        valid = true;
        break;
    case CommandStatusReasonEnumType::RESOURCE_FAILED:
        valid = (current_state_ == CommandStatusEnumType::ISSUED
              || current_state_ == CommandStatusEnumType::EXECUTING);
        break;
    case CommandStatusReasonEnumType::VALIDATION_FAILED:
        valid = (current_state_ == CommandStatusEnumType::ISSUED);
        break;
    case CommandStatusReasonEnumType::RESOURCE_REJECTED:
        valid = (current_state_ == CommandStatusEnumType::COMMANDED);
        break;
    case CommandStatusReasonEnumType::OBJECTIVE_FAILED:
        valid = (current_state_ == CommandStatusEnumType::EXECUTING);
        break;
    default:
        break;
    }

    if (valid) {
        current_state_ = CommandStatusEnumType::FAILED;
        current_reason_ = reason;
        return true;
    }
    return false;
}

void CommandStateMachine::reset() {
    current_state_ = CommandStatusEnumType::ISSUED;
    current_reason_ = CommandStatusReasonEnumType::SUCCEEDED;
}

}}  // namespace umaa::sdk
