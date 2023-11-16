

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "TaskPlanTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "TaskPlanType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- TaskPlanType: 

            TaskPlanType::TaskPlanType() :
                m_name_ ("")  {

            }   

            TaskPlanType::TaskPlanType (const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& dependentTaskIDs_,const ::UMAA::Common::Measurement::DateTime& endTime_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance_,const std::string& name_,const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ObjectiveType, 100L >& objectives_,const ::UMAA::Common::Measurement::DateTime& startTime_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance_,const ::UMAA::Common::Measurement::NumericGUID& taskID_):
                m_dependentTaskIDs_(dependentTaskIDs_), 
                m_endTime_(endTime_), 
                m_endTimeTolerance_(endTimeTolerance_), 
                m_name_(name_), 
                m_objectives_(objectives_), 
                m_startTime_(startTime_), 
                m_startTimeTolerance_(startTimeTolerance_), 
                m_taskID_(taskID_) {
            }

            void TaskPlanType::swap(TaskPlanType& other_)  noexcept 
            {
                using std::swap;
                swap(m_dependentTaskIDs_, other_.m_dependentTaskIDs_);
                swap(m_endTime_, other_.m_endTime_);
                swap(m_endTimeTolerance_, other_.m_endTimeTolerance_);
                swap(m_name_, other_.m_name_);
                swap(m_objectives_, other_.m_objectives_);
                swap(m_startTime_, other_.m_startTime_);
                swap(m_startTimeTolerance_, other_.m_startTimeTolerance_);
                swap(m_taskID_, other_.m_taskID_);
            }  

            bool TaskPlanType::operator == (const TaskPlanType& other_) const {
                if (m_dependentTaskIDs_ != other_.m_dependentTaskIDs_) {
                    return false;
                }
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                if (m_endTimeTolerance_ != other_.m_endTimeTolerance_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_objectives_ != other_.m_objectives_) {
                    return false;
                }
                if (m_startTime_ != other_.m_startTime_) {
                    return false;
                }
                if (m_startTimeTolerance_ != other_.m_startTimeTolerance_) {
                    return false;
                }
                if (m_taskID_ != other_.m_taskID_) {
                    return false;
                }
                return true;
            }

            bool TaskPlanType::operator != (const TaskPlanType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TaskPlanType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "dependentTaskIDs: " << sample.dependentTaskIDs ()<<", ";
                o << "endTime: " << sample.endTime ()<<", ";
                o << "endTimeTolerance: " << sample.endTimeTolerance ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "objectives: " << sample.objectives ()<<", ";
                o << "startTime: " << sample.startTime ()<<", ";
                o << "startTimeTolerance: " << sample.startTimeTolerance ()<<", ";
                o << "taskID: " << sample.taskID ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::TaskPlanType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode TaskPlanType_g_tc_dependentTaskIDs_sequence;
                static DDS_TypeCode TaskPlanType_g_tc_objectives_sequence;

                static DDS_TypeCode_Member TaskPlanType_g_tc_members[8]=
                {

                    {
                        (char *)"dependentTaskIDs",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"endTime",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"endTimeTolerance",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"name",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"objectives",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"startTime",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"startTimeTolerance",/* Member name */
                        {
                            6,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"taskID",/* Member name */
                        {
                            7,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode TaskPlanType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::TaskPlanType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        TaskPlanType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TaskPlanType*/

                if (is_initialized) {
                    return &TaskPlanType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TaskPlanType_g_tc_dependentTaskIDs_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L > >((100L));
                TaskPlanType_g_tc_objectives_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ObjectiveType, 100L > >((100L));

                TaskPlanType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TaskPlanType_g_tc_dependentTaskIDs_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                TaskPlanType_g_tc_objectives_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ObjectiveType>::get().native();
                TaskPlanType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& TaskPlanType_g_tc_dependentTaskIDs_sequence;
                TaskPlanType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                TaskPlanType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime_Tolerance>::get().native();
                TaskPlanType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                TaskPlanType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& TaskPlanType_g_tc_objectives_sequence;
                TaskPlanType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                TaskPlanType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime_Tolerance>::get().native();
                TaskPlanType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                TaskPlanType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                TaskPlanType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                TaskPlanType_g_tc._data._sampleAccessInfo = sample_access_info();
                TaskPlanType_g_tc._data._typePlugin = type_plugin_info();    

                return &TaskPlanType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::TaskPlanType *sample;

                static RTIXCdrMemberAccessInfo TaskPlanType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TaskPlanType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TaskPlanType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::TaskPlanType);
                if (sample == NULL) {
                    return NULL;
                }

                TaskPlanType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dependentTaskIDs() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTimeTolerance() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectives() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTime() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTimeTolerance() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->taskID() - (char *)sample);

                TaskPlanType_g_sampleAccessInfo.memberAccessInfos = 
                TaskPlanType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::TaskPlanType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TaskPlanType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TaskPlanType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TaskPlanType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TaskPlanType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::TaskPlanType >;

                TaskPlanType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TaskPlanType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TaskPlanType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &TaskPlanType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::TaskPlanType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::TaskPlanType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::TaskPlanType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::TaskPlanTypePlugin_new,
                ::UMAA::MM::BaseType::TaskPlanTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::TaskPlanType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::TaskPlanType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TaskPlanTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TaskPlanTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::TaskPlanType >::from_cdr_buffer(::UMAA::MM::BaseType::TaskPlanType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TaskPlanTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::TaskPlanType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::TaskPlanType >::reset_sample(::UMAA::MM::BaseType::TaskPlanType& sample) 
        {
            ::rti::topic::reset_sample(sample.dependentTaskIDs());
            ::rti::topic::reset_sample(sample.endTime());
            ::rti::topic::reset_sample(sample.endTimeTolerance());
            sample.name("");
            ::rti::topic::reset_sample(sample.objectives());
            ::rti::topic::reset_sample(sample.startTime());
            ::rti::topic::reset_sample(sample.startTimeTolerance());
            ::rti::topic::reset_sample(sample.taskID());
        }

        void topic_type_support< ::UMAA::MM::BaseType::TaskPlanType >::allocate_sample(::UMAA::MM::BaseType::TaskPlanType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.dependentTaskIDs(),  100L, -1);
            ::rti::topic::allocate_sample(sample.endTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.objectives(),  100L, -1);
            ::rti::topic::allocate_sample(sample.startTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.taskID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
