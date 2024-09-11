

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanAssignmentCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "TaskPlanAssignmentCommandStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "TaskPlanAssignmentCommandStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace TaskPlanAssignmentControl {

            // ---- TaskPlanAssignmentCommandStatusType: 

            TaskPlanAssignmentCommandStatusType::TaskPlanAssignmentCommandStatusType() :
                m_commandStatus_(UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::CANCELED) ,
                m_commandStatusReason_(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::CANCELED) ,
                m_logMessage_ ("")  {

            }   

            TaskPlanAssignmentCommandStatusType::TaskPlanAssignmentCommandStatusType (const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType& commandStatus_,const ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType& commandStatusReason_,const std::string& logMessage_):
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_sessionID_(sessionID_), 
                m_commandStatus_(commandStatus_), 
                m_commandStatusReason_(commandStatusReason_), 
                m_logMessage_(logMessage_) {
            }

            void TaskPlanAssignmentCommandStatusType::swap(TaskPlanAssignmentCommandStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_commandStatus_, other_.m_commandStatus_);
                swap(m_commandStatusReason_, other_.m_commandStatusReason_);
                swap(m_logMessage_, other_.m_logMessage_);
            }  

            bool TaskPlanAssignmentCommandStatusType::operator == (const TaskPlanAssignmentCommandStatusType& other_) const {
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_commandStatus_ != other_.m_commandStatus_) {
                    return false;
                }
                if (m_commandStatusReason_ != other_.m_commandStatusReason_) {
                    return false;
                }
                if (m_logMessage_ != other_.m_logMessage_) {
                    return false;
                }
                return true;
            }

            bool TaskPlanAssignmentCommandStatusType::operator != (const TaskPlanAssignmentCommandStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TaskPlanAssignmentCommandStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ()<<", ";
                o << "commandStatus: " << sample.commandStatus ()<<", ";
                o << "commandStatusReason: " << sample.commandStatusReason ()<<", ";
                o << "logMessage: " << sample.logMessage ();
                o <<"]";
                return o;
            }

        } // namespace TaskPlanAssignmentControl  

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
        struct native_type_code< ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode TaskPlanAssignmentCommandStatusType_g_tc_logMessage_string;

                static DDS_TypeCode_Member TaskPlanAssignmentCommandStatusType_g_tc_members[6]=
                {

                    {
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sessionID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"commandStatus",/* Member name */
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
                        (char *)"commandStatusReason",/* Member name */
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
                        (char *)"logMessage",/* Member name */
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
                    }
                };

                static DDS_TypeCode TaskPlanAssignmentCommandStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        TaskPlanAssignmentCommandStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TaskPlanAssignmentCommandStatusType*/

                if (is_initialized) {
                    return &TaskPlanAssignmentCommandStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TaskPlanAssignmentCommandStatusType_g_tc_logMessage_string = initialize_string_typecode((4095L));

                TaskPlanAssignmentCommandStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TaskPlanAssignmentCommandStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                TaskPlanAssignmentCommandStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                TaskPlanAssignmentCommandStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                TaskPlanAssignmentCommandStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType>::get().native();
                TaskPlanAssignmentCommandStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType>::get().native();
                TaskPlanAssignmentCommandStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&TaskPlanAssignmentCommandStatusType_g_tc_logMessage_string;

                /* Initialize the values for member annotations. */
                TaskPlanAssignmentCommandStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TaskPlanAssignmentCommandStatusType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
                TaskPlanAssignmentCommandStatusType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TaskPlanAssignmentCommandStatusType_g_tc_members[4]._annotations._defaultValue._u.enumerated_value = 0;
                TaskPlanAssignmentCommandStatusType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                TaskPlanAssignmentCommandStatusType_g_tc_members[5]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                TaskPlanAssignmentCommandStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                TaskPlanAssignmentCommandStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &TaskPlanAssignmentCommandStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType *sample;

                static RTIXCdrMemberAccessInfo TaskPlanAssignmentCommandStatusType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TaskPlanAssignmentCommandStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TaskPlanAssignmentCommandStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                TaskPlanAssignmentCommandStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                TaskPlanAssignmentCommandStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                TaskPlanAssignmentCommandStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                TaskPlanAssignmentCommandStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatus() - (char *)sample);

                TaskPlanAssignmentCommandStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatusReason() - (char *)sample);

                TaskPlanAssignmentCommandStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->logMessage() - (char *)sample);

                TaskPlanAssignmentCommandStatusType_g_sampleAccessInfo.memberAccessInfos = 
                TaskPlanAssignmentCommandStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TaskPlanAssignmentCommandStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TaskPlanAssignmentCommandStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TaskPlanAssignmentCommandStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TaskPlanAssignmentCommandStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType >;

                TaskPlanAssignmentCommandStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TaskPlanAssignmentCommandStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TaskPlanAssignmentCommandStatusType_g_typePlugin = 
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

                return &TaskPlanAssignmentCommandStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusTypePlugin_new,
                ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TaskPlanAssignmentCommandStatusTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TaskPlanAssignmentCommandStatusTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType >::from_cdr_buffer(::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TaskPlanAssignmentCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType >::reset_sample(::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
            sample.commandStatus(UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::CANCELED);
            sample.commandStatusReason(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::CANCELED);
            sample.logMessage("");
        }

        void topic_type_support< ::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType >::allocate_sample(::UMAA::MM::TaskPlanAssignmentControl::TaskPlanAssignmentCommandStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.commandStatus(),  -1, -1);
            ::rti::topic::allocate_sample(sample.commandStatusReason(),  -1, -1);
            ::rti::topic::allocate_sample(sample.logMessage(),  -1, 4095L);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
