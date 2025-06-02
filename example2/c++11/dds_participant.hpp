#ifndef DDS_PARTICIPANT_HPP
#define DDS_PARTICIPANT_HPP

#include <iostream>
#include <csignal>
#include <string>
#include <mutex>
#include <unordered_map>

#include <rti/rti.hpp> // include all base plus extensions

// For example legibility.
using namespace rti::all;

// const std::string PUBLISHER_NAME = "pub";
// const std::string SUBSCRIBER_NAME = "sub";

// This is a listener that will be used to receive events from the DomainParticipant i.e. the DDS "Bus"
class MyParticipantListener
    : public dds::domain::NoOpDomainParticipantListener
{
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

class DDSParticipant {

private:

  const std::string _qos_file;
  const std::string _qos_profile;
  const std::string _guid;

  // Domain Participant
  DomainParticipant _participant;

public:
  // New constructor: accepts QoS XML file and profile
  DDSParticipant(const std::string& qos_file, const std::string& qos_profile, const std::string& guid = "default_guid")
      : _qos_file(qos_file), _qos_profile(qos_profile), _guid(guid),
        _participant(dds::core::null)
  {
    try {
      if (!_qos_file.empty() && !_qos_profile.empty()) {
        // Create QosProvider and DomainParticipant with profile
        dds::core::QosProvider qos_provider(_qos_file);
        _participant = dds::domain::DomainParticipant(
            1, qos_provider.participant_qos(_qos_profile));
        std::cout << "DDSParticipant created with QoS profile: " << _qos_profile
                  << " from file: " << _qos_file << std::endl;
      } else {
        // Fallback to default
        _participant = dds::domain::DomainParticipant(1);
        std::cout << "DDSParticipant created with default QoS" << std::endl;
      }
    } catch (const std::exception& e) {
      std::cerr << "Failed to create DomainParticipant with QoS profile: " << e.what() << std::endl;
      // Fallback to default
      _participant = dds::domain::DomainParticipant(1);
    }

    // Create a shared pointer for the Participant Listener and attach it to the participant
    // This is a listener that will be used to receive events from the DomainParticipant i.e. the DDS "Bus"
    auto participant_listener = std::make_shared<MyParticipantListener>();

    // Pick the Statuses we want to be triggered by the listeners
    // Data Available is being handled by the Async Waitset
    dds::core::status::StatusMask mask =
        dds::core::status::StatusMask::requested_deadline_missed() |
        dds::core::status::StatusMask::offered_incompatible_qos() |
        dds::core::status::StatusMask::sample_rejected() |
        dds::core::status::StatusMask::liveliness_changed() |
        dds::core::status::StatusMask::sample_lost() |
        dds::core::status::StatusMask::subscription_matched() |
        dds::core::status::StatusMask::inconsistent_topic();

    // Attach the listener to the participant
    _participant.set_listener(participant_listener, mask);
    
  }

  ~DDSParticipant() {
      std::cout << "DDSParticipant destroyed" << std::endl;
  }

    // Getter for QoS file
    const std::string& get_qos_file() const {
        return _qos_file;
    }

    // Getter for QoS profile
    const std::string& get_qos_profile() const {
        return _qos_profile;
    }

    // Getter for GUID
    const std::string& get_guid() const {
        return _guid;
    }

    // Getter for Domain Participant
    const DomainParticipant& get_participant() const {
        return _participant;
    }

    // Additional public methods can be added here
};

#endif // DDS_PARTICIPANT_HPP
