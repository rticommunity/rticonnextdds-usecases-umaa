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

#ifndef UMAASERVICE_HPP
#define UMAASERVICE_HPP

#include <rti/rti.hpp>  // Include necessary DDS headers
#include <rti/core/cond/AsyncWaitSet.hpp>
#include <string>  // Include string header
#include <functional>  // For std::function

#include "dds_umaa_participant.hpp"

using namespace rti::all;

const std::string PUBLISHER_NAME = "pub";
const std::string SUBSCRIBER_NAME = "sub";
const std::string TOPIC_QOS_FILE = "../../qos/umaa_qos_lib.xml";
const std::string TOPIC_QOS_PROFILE = "umaa_qos_lib::topic_qos_assign";

/**
 * @brief UMAA Control Provider Service class.
 *
 * This template class manages a Control Service Provider which:
 * - Receives commands (subscribes)
 * - Publishes command status, acks, and execution status
 *
 * @tparam CommandType The type for the command topic.
 * @tparam CommandStatusType The type for the command status topic.
 * @tparam CommandAckType The type for the command ack topic.
 * @tparam ExecutionStatusType The type for the execution status topic.
 */
template <
        typename CommandType,
        typename CommandStatusType,
        typename CommandAckType,
        typename ExecutionStatusType>
class DDSUMAAControlProvider {
public:
    // Callback type definition
    using CommandCallback = std::function<void(const rti::sub::LoanedSample<CommandType>&)>;

    DDSUMAAControlProvider(
            std::shared_ptr<DDSUMAAParticipant> &dp,
            const std::string &CommandTopicName,
            const std::string &CommandStatusTopicName,
            const std::string &CommandAckTopicName,
            const std::string &ExecutionStatusTopicName,
            CommandCallback on_command)
            : _async_waitset(AsyncWaitSetProperty()),
              _on_command_callback(on_command)
    {
        _participant = dp->get_participant();
        std::cout << "Created Control Provider Service" << std::endl;

        _qos_provider = dds::core::QosProvider(TOPIC_QOS_FILE);

        // Create Topics
        dds::topic::Topic<CommandType> command_topic =
                dds::topic::find<dds::topic::Topic<CommandType>>(
                        _participant,
                        CommandTopicName);
        if (command_topic == dds::core::null) {
            command_topic = dds::topic::Topic<CommandType>(
                    _participant,
                    CommandTopicName);
        }

        dds::topic::Topic<CommandStatusType> command_status_topic =
                dds::topic::find<dds::topic::Topic<CommandStatusType>>(
                        _participant,
                        CommandStatusTopicName);
        if (command_status_topic == dds::core::null) {
            command_status_topic = dds::topic::Topic<CommandStatusType>(
                    _participant,
                    CommandStatusTopicName);
        }

        dds::topic::Topic<CommandAckType> command_ack_topic =
                dds::topic::find<dds::topic::Topic<CommandAckType>>(
                        _participant,
                        CommandAckTopicName);
        if (command_ack_topic == dds::core::null) {
            command_ack_topic = dds::topic::Topic<CommandAckType>(
                    _participant,
                    CommandAckTopicName);
        }

        dds::topic::Topic<ExecutionStatusType> execution_status_topic =
                dds::topic::find<dds::topic::Topic<ExecutionStatusType>>(
                        _participant,
                        ExecutionStatusTopicName);
        if (execution_status_topic == dds::core::null) {
            execution_status_topic = dds::topic::Topic<ExecutionStatusType>(
                    _participant,
                    ExecutionStatusTopicName);
        }

        // Create reader for commands
        _command_reader = dds::sub::DataReader<CommandType>(
                command_topic,
                _qos_provider.extensions().datareader_qos_w_topic_name(
                        TOPIC_QOS_PROFILE,
                        CommandTopicName));

        // Create writers for status/ack/execution
        _command_status_writer = dds::pub::DataWriter<CommandStatusType>(
                command_status_topic,
                _qos_provider.extensions().datawriter_qos_w_topic_name(
                        TOPIC_QOS_PROFILE,
                        CommandStatusTopicName));

        _command_ack_writer = dds::pub::DataWriter<CommandAckType>(
                command_ack_topic,
                _qos_provider.extensions().datawriter_qos_w_topic_name(
                        TOPIC_QOS_PROFILE,
                        CommandAckTopicName));

        _execution_status_writer = dds::pub::DataWriter<ExecutionStatusType>(
                execution_status_topic,
                _qos_provider.extensions().datawriter_qos_w_topic_name(
                        TOPIC_QOS_PROFILE,
                        ExecutionStatusTopicName));

        enable_async_waitset();
    }

    // Getters for writers
    dds::pub::DataWriter<CommandStatusType> get_command_status_writer()
    {
        return _command_status_writer;
    }

    dds::pub::DataWriter<CommandAckType> get_command_ack_writer()
    {
        return _command_ack_writer;
    }

    dds::pub::DataWriter<ExecutionStatusType> get_execution_status_writer()
    {
        return _execution_status_writer;
    }

    dds::sub::DataReader<CommandType> get_command_reader()
    {
        return _command_reader;
    }

private:
    void enable_async_waitset()
    {
        _command_condition = dds::core::cond::StatusCondition(_command_reader);
        _command_condition.enabled_statuses(
                dds::core::status::StatusMask::data_available());

        _command_condition->handler([this](dds::core::cond::Condition) {
            auto samples = _command_reader.take();
            _async_waitset.unlock_condition(_command_condition);
            
            for (const auto &sample : samples) {
                if (sample.info().valid()) {
                    std::cout << "Received new data sample for: "
                              << _command_reader.topic_description().type_name()
                              << std::endl;
                    if (_on_command_callback) {
                        _on_command_callback(sample);
                    }
                }
            }
        });

        _async_waitset.attach_condition(_command_condition);
        _async_waitset.start();
    }

    dds::domain::DomainParticipant _participant = dds::core::null;
    rti::core::cond::AsyncWaitSet _async_waitset = dds::core::null;
    CommandCallback _on_command_callback;

    dds::pub::DataWriter<CommandStatusType> _command_status_writer = dds::core::null;
    dds::pub::DataWriter<CommandAckType> _command_ack_writer = dds::core::null;
    dds::pub::DataWriter<ExecutionStatusType> _execution_status_writer = dds::core::null;
    dds::sub::DataReader<CommandType> _command_reader = dds::core::null;

    dds::core::cond::StatusCondition _command_condition = dds::core::null;
    dds::core::QosProvider _qos_provider = dds::core::null;
};

/**
 * @brief UMAA Control Consumer Service class.
 *
 * This template class manages a Control Service Consumer which:
 * - Publishes commands
 * - Receives command status, acks, and execution status (subscribes)
 *
 * @tparam CommandType The type for the command topic.
 * @tparam CommandStatusType The type for the command status topic.
 * @tparam CommandAckType The type for the command ack topic.
 * @tparam ExecutionStatusType The type for the execution status topic.
 */
template <
        typename CommandType,
        typename CommandStatusType,
        typename CommandAckType,
        typename ExecutionStatusType>
class DDSUMAAControlConsumer {
public:
    // Callback type definitions
    using CommandStatusCallback = std::function<void(const rti::sub::LoanedSample<CommandStatusType>&)>;
    using CommandAckCallback = std::function<void(const rti::sub::LoanedSample<CommandAckType>&)>;
    using ExecutionStatusCallback = std::function<void(const rti::sub::LoanedSample<ExecutionStatusType>&)>;

    DDSUMAAControlConsumer(
            std::shared_ptr<DDSUMAAParticipant> &dp,
            const std::string &CommandTopicName,
            const std::string &CommandStatusTopicName,
            const std::string &CommandAckTopicName,
            const std::string &ExecutionStatusTopicName,
            CommandStatusCallback on_command_status,
            CommandAckCallback on_command_ack,
            ExecutionStatusCallback on_execution_status)
            : _async_waitset(AsyncWaitSetProperty()),
              _on_command_status_callback(on_command_status),
              _on_command_ack_callback(on_command_ack),
              _on_execution_status_callback(on_execution_status)
    {
        _participant = dp->get_participant();
        std::cout << "Created Control Consumer Service" << std::endl;

        _qos_provider = dds::core::QosProvider(TOPIC_QOS_FILE);

        // Create Topics
        dds::topic::Topic<CommandType> command_topic =
                dds::topic::find<dds::topic::Topic<CommandType>>(
                        _participant,
                        CommandTopicName);
        if (command_topic == dds::core::null) {
            command_topic = dds::topic::Topic<CommandType>(
                    _participant,
                    CommandTopicName);
        }

        dds::topic::Topic<CommandStatusType> command_status_topic =
                dds::topic::find<dds::topic::Topic<CommandStatusType>>(
                        _participant,
                        CommandStatusTopicName);
        if (command_status_topic == dds::core::null) {
            command_status_topic = dds::topic::Topic<CommandStatusType>(
                    _participant,
                    CommandStatusTopicName);
        }

        dds::topic::Topic<CommandAckType> command_ack_topic =
                dds::topic::find<dds::topic::Topic<CommandAckType>>(
                        _participant,
                        CommandAckTopicName);
        if (command_ack_topic == dds::core::null) {
            command_ack_topic = dds::topic::Topic<CommandAckType>(
                    _participant,
                    CommandAckTopicName);
        }

        dds::topic::Topic<ExecutionStatusType> execution_status_topic =
                dds::topic::find<dds::topic::Topic<ExecutionStatusType>>(
                        _participant,
                        ExecutionStatusTopicName);
        if (execution_status_topic == dds::core::null) {
            execution_status_topic = dds::topic::Topic<ExecutionStatusType>(
                    _participant,
                    ExecutionStatusTopicName);
        }

        // Create writer for commands
        _command_writer = dds::pub::DataWriter<CommandType>(
                command_topic,
                _qos_provider.extensions().datawriter_qos_w_topic_name(
                        TOPIC_QOS_PROFILE,
                        CommandTopicName));

        // Create readers for status/ack/execution
        _command_status_reader = dds::sub::DataReader<CommandStatusType>(
                command_status_topic,
                _qos_provider.extensions().datareader_qos_w_topic_name(
                        TOPIC_QOS_PROFILE,
                        CommandStatusTopicName));

        _command_ack_reader = dds::sub::DataReader<CommandAckType>(
                command_ack_topic,
                _qos_provider.extensions().datareader_qos_w_topic_name(
                        TOPIC_QOS_PROFILE,
                        CommandAckTopicName));

        _execution_status_reader = dds::sub::DataReader<ExecutionStatusType>(
                execution_status_topic,
                _qos_provider.extensions().datareader_qos_w_topic_name(
                        TOPIC_QOS_PROFILE,
                        ExecutionStatusTopicName));

        enable_async_waitset();
    }

    // Getter for writer
    dds::pub::DataWriter<CommandType> get_command_writer()
    {
        return _command_writer;
    }

    dds::sub::DataReader<CommandStatusType> get_command_status_reader()
    {
        return _command_status_reader;
    }

    dds::sub::DataReader<CommandAckType> get_command_ack_reader()
    {
        return _command_ack_reader;
    }

    dds::sub::DataReader<ExecutionStatusType> get_execution_status_reader()
    {
        return _execution_status_reader;
    }

private:
    void enable_async_waitset()
    {
        _command_status_condition = dds::core::cond::StatusCondition(_command_status_reader);
        _command_status_condition.enabled_statuses(
                dds::core::status::StatusMask::data_available());
        _command_status_condition->handler([this](dds::core::cond::Condition) {
            auto samples = _command_status_reader.take();
            _async_waitset.unlock_condition(_command_status_condition);
            for (const auto &sample : samples) {
                if (sample.info().valid() && _on_command_status_callback) {
                    _on_command_status_callback(sample);
                }
            }
        });

        _command_ack_condition = dds::core::cond::StatusCondition(_command_ack_reader);
        _command_ack_condition.enabled_statuses(
                dds::core::status::StatusMask::data_available());
        _command_ack_condition->handler([this](dds::core::cond::Condition) {
            auto samples = _command_ack_reader.take();
            _async_waitset.unlock_condition(_command_ack_condition);
            for (const auto &sample : samples) {
                if (sample.info().valid() && _on_command_ack_callback) {
                    _on_command_ack_callback(sample);
                }
            }
        });

        _execution_status_condition = dds::core::cond::StatusCondition(_execution_status_reader);
        _execution_status_condition.enabled_statuses(
                dds::core::status::StatusMask::data_available());
        _execution_status_condition->handler([this](dds::core::cond::Condition) {
            auto samples = _execution_status_reader.take();
            _async_waitset.unlock_condition(_execution_status_condition);
            for (const auto &sample : samples) {
                if (sample.info().valid() && _on_execution_status_callback) {
                    _on_execution_status_callback(sample);
                }
            }
        });

        _async_waitset.attach_condition(_command_status_condition);
        _async_waitset.attach_condition(_command_ack_condition);
        _async_waitset.attach_condition(_execution_status_condition);
        _async_waitset.start();
    }

    dds::domain::DomainParticipant _participant = dds::core::null;
    rti::core::cond::AsyncWaitSet _async_waitset = dds::core::null;
    CommandStatusCallback _on_command_status_callback;
    CommandAckCallback _on_command_ack_callback;
    ExecutionStatusCallback _on_execution_status_callback;

    dds::pub::DataWriter<CommandType> _command_writer = dds::core::null;
    dds::sub::DataReader<CommandStatusType> _command_status_reader = dds::core::null;
    dds::sub::DataReader<CommandAckType> _command_ack_reader = dds::core::null;
    dds::sub::DataReader<ExecutionStatusType> _execution_status_reader = dds::core::null;

    dds::core::cond::StatusCondition _command_status_condition = dds::core::null;
    dds::core::cond::StatusCondition _command_ack_condition = dds::core::null;
    dds::core::cond::StatusCondition _execution_status_condition = dds::core::null;
    dds::core::QosProvider _qos_provider = dds::core::null;
};

/**
 * @brief Status/Report Provider Service class.
 *
 * This template class manages a Status Service Provider which publishes status/reports.
 *
 * @tparam StatusType The type for the status topic.
 */
template <typename StatusType>
class DDSUMAAStatusProvider {
public:
    DDSUMAAStatusProvider(
            std::shared_ptr<DDSUMAAParticipant> &dp,
            const std::string &StatusTopicName)
    {
        _participant = dp->get_participant();
        std::cout << "Created Status Provider Service" << std::endl;

        _qos_provider = dds::core::QosProvider(TOPIC_QOS_FILE);

        // Create Topic
        dds::topic::Topic<StatusType> status_topic =
                dds::topic::find<dds::topic::Topic<StatusType>>(
                        _participant,
                        StatusTopicName);
        if (status_topic == dds::core::null) {
            status_topic = dds::topic::Topic<StatusType>(
                    _participant,
                    StatusTopicName);
        }

        // Create writer
        _status_writer = dds::pub::DataWriter<StatusType>(
                status_topic,
                _qos_provider.extensions().datawriter_qos_w_topic_name(
                        TOPIC_QOS_PROFILE,
                        StatusTopicName));
    }

    dds::pub::DataWriter<StatusType> get_status_writer()
    {
        return _status_writer;
    }

private:
    dds::domain::DomainParticipant _participant = dds::core::null;
    dds::pub::DataWriter<StatusType> _status_writer = dds::core::null;
    dds::core::QosProvider _qos_provider = dds::core::null;
};

/**
 * @brief Status/Report Consumer Service class.
 *
 * This template class manages a Status Service Consumer which subscribes to status/reports.
 *
 * @tparam StatusType The type for the status topic.
 */
template <typename StatusType>
class DDSUMAAStatusConsumer {
public:
    // Callback type definition
    using StatusCallback = std::function<void(const rti::sub::LoanedSample<StatusType>&)>;

    DDSUMAAStatusConsumer(
            std::shared_ptr<DDSUMAAParticipant> &dp,
            const std::string &StatusTopicName,
            StatusCallback on_status_callback)
            : _async_waitset(AsyncWaitSetProperty()),
              _on_status_callback(on_status_callback)
    {
        _participant = dp->get_participant();
        std::cout << "Created Status Consumer Service" << std::endl;

        _qos_provider = dds::core::QosProvider(TOPIC_QOS_FILE);

        // Create Topic
        dds::topic::Topic<StatusType> status_topic =
                dds::topic::find<dds::topic::Topic<StatusType>>(
                        _participant,
                        StatusTopicName);
        if (status_topic == dds::core::null) {
            status_topic = dds::topic::Topic<StatusType>(
                    _participant,
                    StatusTopicName);
        }

        // Create reader
        _status_reader = dds::sub::DataReader<StatusType>(
                status_topic,
                _qos_provider.extensions().datareader_qos_w_topic_name(
                        TOPIC_QOS_PROFILE,
                        StatusTopicName));

        enable_async_waitset();
    }

    dds::sub::DataReader<StatusType> get_status_reader()
    {
        return _status_reader;
    }

private:
    void enable_async_waitset()
    {
        _status_condition = dds::core::cond::StatusCondition(_status_reader);
        _status_condition.enabled_statuses(
                dds::core::status::StatusMask::data_available());

        _status_condition->handler([this](dds::core::cond::Condition) {
            auto samples = _status_reader.take();
            _async_waitset.unlock_condition(_status_condition);
            
            for (const auto &sample : samples) {
                if (sample.info().valid() && _on_status_callback) {
                    _on_status_callback(sample);
                }
            }
        });

        _async_waitset.attach_condition(_status_condition);
        _async_waitset.start();
    }

    dds::domain::DomainParticipant _participant = dds::core::null;
    rti::core::cond::AsyncWaitSet _async_waitset = dds::core::null;
    StatusCallback _on_status_callback;
    dds::sub::DataReader<StatusType> _status_reader = dds::core::null;
    dds::core::cond::StatusCondition _status_condition = dds::core::null;
    dds::core::QosProvider _qos_provider = dds::core::null;
};

#endif  // UMAASERVICE_HPP
