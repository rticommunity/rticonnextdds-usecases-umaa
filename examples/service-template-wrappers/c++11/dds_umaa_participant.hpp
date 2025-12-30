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

#ifndef DDS_UMAA_PARTICIPANT
#define DDS_UMAA_PARTICIPANT

#include <iostream>
#include <csignal>
#include <string>
#include <mutex>
#include <unordered_map>

#include <rti/rti.hpp>  // include all base plus extensions

// For example legibility.
using namespace rti::all;

const std::string PARTICIPANT_QOS_FILE = "../../qos/umaa_qos_lib.xml";
const std::string PARTICIPANT_QOS_PROFILE = "umaa_qos_lib::default_participant";

// This is a listener that will be used to receive events from the
// DomainParticipant i.e. the DDS "Bus"
class MyParticipantListener
        : public dds::domain::NoOpDomainParticipantListener {
public:
    virtual void on_requested_deadline_missed(
            dds::pub::AnyDataWriter &writer,
            const dds::core::status::OfferedDeadlineMissedStatus &status)
    {
        std::cout << "ParticipantListener: on_requested_deadline_missed()"
                  << std::endl;
    }

    virtual void on_offered_incompatible_qos(
            dds::pub::AnyDataWriter &writer,
            const ::dds::core::status::OfferedIncompatibleQosStatus &status)
    {
        std::cout << "ParticipantListener: on_offered_incompatible_qos()"
                  << std::endl;
    }

    virtual void on_sample_rejected(
            dds::sub::AnyDataReader &the_reader,
            const dds::core::status::SampleRejectedStatus &status)
    {
        std::cout << "ParticipantListener: on_sample_rejected()" << std::endl;
    }

    virtual void on_liveliness_changed(
            dds::sub::AnyDataReader &the_reader,
            const dds::core::status::LivelinessChangedStatus &status)
    {
        std::cout << "ParticipantListener: on_liveliness_changed()"
                  << std::endl;
    }

    virtual void on_sample_lost(
            dds::sub::AnyDataReader &the_reader,
            const dds::core::status::SampleLostStatus &status)
    {
        std::cout << "ParticipantListener: on_sample_lost()" << std::endl;
    }

    virtual void on_subscription_matched(
            dds::sub::AnyDataReader &the_reader,
            const dds::core::status::SubscriptionMatchedStatus &status)
    {
        std::cout << "ParticipantListener: on_subscription_matched()"
                  << std::endl;
    }

    virtual void on_inconsistent_topic(
            dds::topic::AnyTopic &topic,
            const dds::core::status::InconsistentTopicStatus &status)
    {
        std::cout << "ParticipantListener: on_inconsistent_topic()"
                  << std::endl;
    }
};

class DDSUMAAParticipant {
private:
    const std::string _guid;
    const int _domain_id;

    // Domain Participant
    DomainParticipant _participant;

public:
    // New constructor: accepts QoS XML file and profile
    DDSUMAAParticipant(const int domain_id)
            : _guid("test"),
              _participant(dds::core::null),
              _domain_id(domain_id)
    {
        try {
            if (!PARTICIPANT_QOS_FILE.empty()
                && !PARTICIPANT_QOS_PROFILE.empty()) {
                // Create QosProvider and DomainParticipant with profile
                dds::core::QosProvider qos_provider(PARTICIPANT_QOS_FILE);

                _participant = dds::domain::DomainParticipant(
                        _domain_id,
                        qos_provider.participant_qos(PARTICIPANT_QOS_PROFILE));

                std::cout << "DDSUMAAParticipant created with QoS profile: "
                          << PARTICIPANT_QOS_PROFILE
                          << " from file: " << PARTICIPANT_QOS_FILE
                          << std::endl;
            } else {
                // Fallback to default
                _participant = dds::domain::DomainParticipant(1);
                std::cout << "DDSUMAAParticipant created with default QoS"
                          << std::endl;
            }
        } catch (const std::exception &e) {
            std::cerr << "Failed to create DomainParticipant with QoS profile: "
                      << e.what() << std::endl;
            // Fallback to default
            _participant = dds::domain::DomainParticipant(1);
        }

        // Create a shared pointer for the Participant Listener and attach it to
        // the participant This is a listener that will be used to receive
        // events from the DomainParticipant i.e. the DDS "Bus"
        auto participant_listener = std::make_shared<MyParticipantListener>();

        // Pick the Statuses we want to be triggered by the listeners
        // Data Available is being handled by the Async Waitset
        dds::core::status::StatusMask mask =
                dds::core::status::StatusMask::requested_deadline_missed()
                | dds::core::status::StatusMask::offered_incompatible_qos()
                | dds::core::status::StatusMask::sample_rejected()
                | dds::core::status::StatusMask::liveliness_changed()
                | dds::core::status::StatusMask::sample_lost()
                | dds::core::status::StatusMask::subscription_matched()
                | dds::core::status::StatusMask::inconsistent_topic();

        // Attach the listener to the participant
        _participant.set_listener(participant_listener, mask);
    }

    ~DDSUMAAParticipant()
    {
        std::cout << "DDSUMAAParticipant destroyed" << std::endl;
    }

    // Getter for GUID
    const std::string &get_guid() const
    {
        return _guid;
    }

    // Getter for Domain Participant
    const DomainParticipant &get_participant() const
    {
        return _participant;
    }

    // Additional public methods can be added here
};

#endif  // DDS_UMAA_PARTICIPANT
