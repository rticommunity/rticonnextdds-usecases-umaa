#ifndef UMAASERVICE_HPP
#define UMAASERVICE_HPP

#include <rti/rti.hpp> // Include necessary DDS headers
#include <rti/core/cond/AsyncWaitSet.hpp>
#include <string> // Include string header
#include <unordered_map>
#include <mutex>

#include "dds_participant.hpp"

using namespace rti::all;

// Enum class for service kind
enum class SERVICE_KIND
{
  PROVIDER,
  CONSUMER
};

const std::string PUBLISHER_NAME = "pub";
const std::string SUBSCRIBER_NAME = "sub";
const std::string TOPIC_QOS_FILE = "../resources/qos/umaa_qos_lib.xml";
const std::string TOPIC_QOS_PROFILE = "umaa_qos_lib::topic_qos_assign";

class DDSUMAAService
{

public:
  // Constructor accepting a DomainParticipant and SERVICE_KIND
  explicit DDSUMAAService(std::shared_ptr<DDSParticipant> &dp, SERVICE_KIND kind)
      : _participant(dds::core::null), _async_waitset(AsyncWaitSetProperty()), _kind(kind)
  {
    _participant = dp->get_participant();
  }

  // Virtual function to enable AsyncWaitSet
  virtual void enable_async_waitset() = 0;

  // Getter for SERVICE_KIND
  SERVICE_KIND get_kind()
  {
    return _kind;
  }

protected:
  dds::domain::DomainParticipant _participant;

  // Async Waitset
  rti::core::cond::AsyncWaitSet _async_waitset = dds::core::null;

  SERVICE_KIND _kind; // Consumer or Provider

  std::mutex _m;

  template <typename T>
  void process_keyed_data(
      dds::sub::DataReader<T> reader,
      std::unordered_map<dds::core::InstanceHandle, dds::sub::Sample<T>> &keyed_data_map)
  {
    auto samples = reader.take();

    // Release status condition in case other threads can process outstanding
    // samples
    _async_waitset.unlock_condition(dds::core::cond::StatusCondition(reader));

    const std::lock_guard<std::mutex> lock(_m);

    // For keyed data i.e. commands we will be updating a list of current/past
    // commands to keep track of their state as well as their most recent data.

    // Process sample
    for (const auto &sample : samples)
    {
      // Add Loaned Sample to map
      // Only retaining last sample within application state in this case

      // If meta sample will construct empty <T> object i.e blank sample.data object
      // (Meta sample == unregister/dispose)
      keyed_data_map[sample.info().instance_handle()] =
          dds::sub::Sample<T>(sample);

      if (sample.info().valid())
      {
        std::cout << "Received new data sample for: "
                  << reader.topic_description().type_name() << std::endl;
      }
      else
      {
        std::cout << "Received new meta sample for: "
                  << reader.topic_description().type_name() << std::endl;
      }
    }
  }

  // Additional methods can be added here
};

// Control class extending UMAAServiceDDS
template <typename CommandType, typename CommandStatusType, typename CommandAckType>
class DDSUMAAControlService : public DDSUMAAService
{
public:
  DDSUMAAControlService(std::shared_ptr<DDSParticipant> &dp,
                        SERVICE_KIND kind,
                        const std::string &CommandTopicName,
                        const std::string &CommandStatusTopicName,
                        const std::string &CommandAckTopicName)
      : DDSUMAAService(dp, kind)
  {

    std::cout << "Created Control Service Class" << std::endl;

    // QoS Provider gets QoS from XML
    _qos_provider = dds::core::QosProvider(TOPIC_QOS_FILE);

    // Create Topics
    dds::topic::Topic<CommandType> command_topic = dds::topic::find<dds::topic::Topic<CommandType>>(_participant, CommandTopicName);
    if (command_topic == dds::core::null)
    {
      command_topic = dds::topic::Topic<CommandType>(_participant, CommandTopicName);
    }
    else
    {
      std::cout << "Topic " << CommandTopicName << " already created" << std::endl;
    }

    dds::topic::Topic<CommandStatusType> command_status_topic = dds::topic::find<dds::topic::Topic<CommandStatusType>>(_participant, CommandStatusTopicName);
    if (command_status_topic == dds::core::null)
    {
      command_status_topic = dds::topic::Topic<CommandStatusType>(_participant, CommandStatusTopicName);
    }
    else
    {
      std::cout << "Topic " << CommandStatusTopicName << " already created" << std::endl;
    }

    dds::topic::Topic<CommandAckType> command_ack_topic = dds::topic::find<dds::topic::Topic<CommandAckType>>(_participant, CommandAckTopicName);
    if (command_ack_topic == dds::core::null)
    {
      command_ack_topic = dds::topic::Topic<CommandAckType>(_participant, CommandAckTopicName);
    }
    else
    {
      std::cout << "Topic " << CommandAckTopicName << " already created" << std::endl;
    }

    // Switch statement based on kind
    switch (kind)
    {
    case SERVICE_KIND::PROVIDER:
      // create_provider(dp.get_participant(), CommandTopicName, CommandStatusTopicName, CommandAckTopicName);
      std::cout << "Creating provider..." << std::endl;

      // Create a DataReader for CommandType using named QoS profile
      _command_reader = dds::sub::DataReader<CommandType>(
          dds::sub::Subscriber(_participant),
          command_topic,
          _qos_provider.datareader_qos(TOPIC_QOS_PROFILE));

      std::cout << "DataReader for CommandType created on topic: " << CommandTopicName << " with named QoS profile." << std::endl;

      // Create a DataWriter for CommandStatusType using named QoS profile
      _command_status_writer = dds::pub::DataWriter<CommandStatusType>(
          dds::pub::Publisher(_participant),
          command_status_topic,
          _qos_provider.datawriter_qos(TOPIC_QOS_PROFILE));

      std::cout << "DataWriter for CommandStatusType created on topic: " << CommandStatusTopicName << " with named QoS profile." << std::endl;

      // Create a DataWriter for CommandAckType using named QoS profile
      _command_status_ack_writer = dds::pub::DataWriter<CommandAckType>(
          dds::pub::Publisher(_participant),
          command_ack_topic,
          _qos_provider.datawriter_qos(TOPIC_QOS_PROFILE));

      std::cout << "DataWriter for CommandAckType created on topic: " << CommandAckTopicName << " with named QoS profile." << std::endl;
      break;
    case SERVICE_KIND::CONSUMER:
      // create_consumer(dp.get_participant(), CommandTopicName, CommandStatusTopicName, CommandAckTopicName);
      std::cout << "Creating consumer..." << std::endl;

      // Create a DataWriter for CommandType using named QoS profile
      _command_writer = dds::pub::DataWriter<CommandType>(
          dds::pub::Publisher(_participant),
          command_topic,
          _qos_provider.datawriter_qos(TOPIC_QOS_PROFILE));

      std::cout << "DataWriter for CommandType created on topic: " << CommandTopicName << " with named QoS profile." << std::endl;

      // Create a DataReader for CommandStatusType using named QoS profile
      _command_status_reader = dds::sub::DataReader<CommandStatusType>(
          dds::sub::Subscriber(_participant),
          command_status_topic,
          _qos_provider.datareader_qos(TOPIC_QOS_PROFILE));

      std::cout << "DataReader for CommandStatusType created on topic: " << CommandStatusTopicName << " with named QoS profile." << std::endl;

      // Create a DataReader for CommandAckType using named QoS profile
      _command_status_ack_reader = dds::sub::DataReader<CommandAckType>(
          dds::sub::Subscriber(_participant),
          command_ack_topic,
          _qos_provider.datareader_qos(TOPIC_QOS_PROFILE));

      std::cout << "DataReader for CommandAckType created on topic: " << CommandAckTopicName << " with named QoS profile." << std::endl;
      break;
    default:
      std::cerr << "Invalid SERVICE_KIND provided" << std::endl;
      break;
    }

    // Use the provided topic names (if needed)
    std::cout << "Command Topic: " << CommandTopicName << std::endl;
    std::cout << "Command Status Topic: " << CommandStatusTopicName << std::endl;
    std::cout << "Command Ack Topic: " << CommandAckTopicName << std::endl;
  }

  // template <typename CommandType, typename CommandStatusType, typename CommandAckType>
  void enable_async_waitset()
  {
    std::cout << "Enabling AsyncWaitSet for DDSUMAAControlService..." << std::endl;

    // Setup status conditions
    if (_command_reader != dds::core::null)
    {
      std::cout << "Setting Command Condition\n";
      _command_condition = dds::core::cond::StatusCondition(_command_reader);
    }

    if (_command_status_reader != dds::core::null)
    {
      std::cout << "Setting Command Status Condition\n";
      _command_status_condition = dds::core::cond::StatusCondition(_command_status_reader);
    }

    if (_command_status_ack_reader != dds::core::null)
    {
      std::cout << "Setting Command Status ACK Condition\n";

      _command_status_ack_condition = dds::core::cond::StatusCondition(_command_status_ack_reader);
    }

    switch (_kind)
    {
    case SERVICE_KIND::PROVIDER:
      std::cout << "Configuring AsyncWaitSet for PROVIDER in DDSUMAAControlService." << std::endl;

      _command_condition.enabled_statuses(dds::core::status::StatusMask::data_available());

      // Add a handler to be triggered when new data comes in
      _command_condition->handler([this](dds::core::cond::Condition)
                                 { this->process_keyed_data<CommandType>(_command_reader, _command_sample_map); });

      // Attach conditions. The Async Waitset will be triggered when any of the
      // attached conditions are triggered.
      std::cout << "Setting up Async Waitset\n";
      try
      {
        _async_waitset.attach_condition(_command_condition);
      }
      catch(const std::exception& e)
      {
        std::cerr << e.what() << '\n';
      }
      

      std::cout << "AsyncWaitSet configured with data available condition for PROVIDER." << std::endl;
      break;

    case SERVICE_KIND::CONSUMER:
      // std::cout << "Configuring AsyncWaitSet for CONSUMER in DDSUMAAControlService." << std::endl;

      _command_status_condition.enabled_statuses(dds::core::status::StatusMask::data_available());

      _command_status_condition->handler([this](dds::core::cond::Condition)
                                        { this->process_keyed_data<CommandStatusType>(_command_status_reader, _command_status_sample_map); });

      // Attach condition to trigger waitset
      _async_waitset.attach_condition(_command_status_condition);

      _command_status_ack_condition.enabled_statuses(dds::core::status::StatusMask::data_available());

      _command_status_ack_condition->handler([this](dds::core::cond::Condition)
                                            { this->process_keyed_data<CommandAckType>(_command_status_ack_reader, _command_ack_sample_map); });

      // Attach condition to trigger waitset
      _async_waitset.attach_condition(_command_status_ack_condition);

      std::cout << "AsyncWaitSet configured with data available conditions for CONSUMER." << std::endl;
      break;

    default:
      std::cerr << "Invalid SERVICE_KIND provided in DDSUMAAControlService." << std::endl;
      break;
    }

    // Start
    _async_waitset.start();
  }

  // Getters for writers
  dds::pub::DataWriter<CommandType> get_command_writer() const
  {
    return _command_writer;
  }

  dds::pub::DataWriter<CommandStatusType> get_command_status_writer() const
  {
    return _command_status_writer;
  }

  dds::pub::DataWriter<CommandAckType> get_command_status_ack_writer() const
  {
    return _command_status_ack_writer;
  }

  // Getters for readers
  dds::sub::DataReader<CommandType> get_command_reader() const
  {
    return _command_reader;
  }

  dds::sub::DataReader<CommandStatusType> get_command_status_reader() const
  {
    return _command_status_reader;
  }

  dds::sub::DataReader<CommandAckType> get_command_status_ack_reader() const
  {
    return _command_status_ack_reader;
  }

  // Getters for maps
  std::unordered_map<dds::core::InstanceHandle, dds::sub::Sample<CommandType>> &get_command_sample_map()
  {
    return _command_sample_map;
  }

  std::unordered_map<dds::core::InstanceHandle, dds::sub::Sample<CommandStatusType>> &get_command_status_sample_map()
  {
    return _command_status_sample_map;
  }

  std::unordered_map<dds::core::InstanceHandle, dds::sub::Sample<CommandAckType>> &get_command_ack_sample_map()
  {
    return _command_ack_sample_map;
  }

private:
  // Writers
  dds::pub::DataWriter<CommandType> _command_writer = dds::core::null;
  dds::pub::DataWriter<CommandStatusType> _command_status_writer = dds::core::null;
  dds::pub::DataWriter<CommandAckType> _command_status_ack_writer = dds::core::null;

  // Readers
  dds::sub::DataReader<CommandType> _command_reader = dds::core::null;
  dds::sub::DataReader<CommandStatusType> _command_status_reader = dds::core::null;
  dds::sub::DataReader<CommandAckType> _command_status_ack_reader = dds::core::null;

  // Conditions
  dds::core::cond::StatusCondition _command_condition = dds::core::null;
  dds::core::cond::StatusCondition _command_status_ack_condition = dds::core::null;
  dds::core::cond::StatusCondition _command_status_condition = dds::core::null;

  std::unordered_map<
      dds::core::InstanceHandle,
      dds::sub::Sample<CommandType>>
      _command_sample_map;

  std::unordered_map<
      dds::core::InstanceHandle,
      dds::sub::Sample<CommandStatusType>>
      _command_status_sample_map;

  std::unordered_map<
      dds::core::InstanceHandle,
      dds::sub::Sample<CommandAckType>>
      _command_ack_sample_map;

  // QoS Provider gets QoS from XML
  dds::core::QosProvider _qos_provider = dds::core::null;
};

#endif // UMAASERVICE_HPP
