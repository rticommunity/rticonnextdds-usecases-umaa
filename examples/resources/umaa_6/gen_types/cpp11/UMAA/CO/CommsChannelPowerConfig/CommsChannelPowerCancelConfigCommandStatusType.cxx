

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelPowerCancelConfigCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "CommsChannelPowerCancelConfigCommandStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsChannelPowerCancelConfigCommandStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace CommsChannelPowerConfig {

            // ---- CommsChannelPowerCancelConfigCommandStatusType: 

            CommsChannelPowerCancelConfigCommandStatusType::CommsChannelPowerCancelConfigCommandStatusType() :
                m_commandStatus_(UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::CANCELED) ,
                m_commandStatusReason_(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::CANCELED) ,
                m_logMessage_ ("")  {

            }   

            CommsChannelPowerCancelConfigCommandStatusType::CommsChannelPowerCancelConfigCommandStatusType (const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType& commandStatus_,const ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType& commandStatusReason_,const std::string& logMessage_):
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_sessionID_(sessionID_), 
                m_commandStatus_(commandStatus_), 
                m_commandStatusReason_(commandStatusReason_), 
                m_logMessage_(logMessage_) {
            }

            void CommsChannelPowerCancelConfigCommandStatusType::swap(CommsChannelPowerCancelConfigCommandStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_commandStatus_, other_.m_commandStatus_);
                swap(m_commandStatusReason_, other_.m_commandStatusReason_);
                swap(m_logMessage_, other_.m_logMessage_);
            }  

            bool CommsChannelPowerCancelConfigCommandStatusType::operator == (const CommsChannelPowerCancelConfigCommandStatusType& other_) const {
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

            bool CommsChannelPowerCancelConfigCommandStatusType::operator != (const CommsChannelPowerCancelConfigCommandStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsChannelPowerCancelConfigCommandStatusType& sample)
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

        } // namespace CommsChannelPowerConfig  

    } // namespace CO  

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
        struct native_type_code< ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CommsChannelPowerCancelConfigCommandStatusType_g_tc_logMessage_string;

                static DDS_TypeCode_Member CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[6]=
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

                static DDS_TypeCode CommsChannelPowerCancelConfigCommandStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CommsChannelPowerCancelConfigCommandStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsChannelPowerCancelConfigCommandStatusType*/

                if (is_initialized) {
                    return &CommsChannelPowerCancelConfigCommandStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsChannelPowerCancelConfigCommandStatusType_g_tc_logMessage_string = initialize_string_typecode((4095L));

                CommsChannelPowerCancelConfigCommandStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType>::get().native();
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType>::get().native();
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&CommsChannelPowerCancelConfigCommandStatusType_g_tc_logMessage_string;

                /* Initialize the values for member annotations. */
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[4]._annotations._defaultValue._u.enumerated_value = 0;
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                CommsChannelPowerCancelConfigCommandStatusType_g_tc_members[5]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                CommsChannelPowerCancelConfigCommandStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsChannelPowerCancelConfigCommandStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsChannelPowerCancelConfigCommandStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType *sample;

                static RTIXCdrMemberAccessInfo CommsChannelPowerCancelConfigCommandStatusType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsChannelPowerCancelConfigCommandStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsChannelPowerCancelConfigCommandStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsChannelPowerCancelConfigCommandStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CommsChannelPowerCancelConfigCommandStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CommsChannelPowerCancelConfigCommandStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                CommsChannelPowerCancelConfigCommandStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatus() - (char *)sample);

                CommsChannelPowerCancelConfigCommandStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatusReason() - (char *)sample);

                CommsChannelPowerCancelConfigCommandStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->logMessage() - (char *)sample);

                CommsChannelPowerCancelConfigCommandStatusType_g_sampleAccessInfo.memberAccessInfos = 
                CommsChannelPowerCancelConfigCommandStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsChannelPowerCancelConfigCommandStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsChannelPowerCancelConfigCommandStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsChannelPowerCancelConfigCommandStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsChannelPowerCancelConfigCommandStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType >;

                CommsChannelPowerCancelConfigCommandStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsChannelPowerCancelConfigCommandStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsChannelPowerCancelConfigCommandStatusType_g_typePlugin = 
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

                return &CommsChannelPowerCancelConfigCommandStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusTypePlugin_new,
                ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CommsChannelPowerCancelConfigCommandStatusTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CommsChannelPowerCancelConfigCommandStatusTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType >::from_cdr_buffer(::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CommsChannelPowerCancelConfigCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType from cdr buffer");
        }

        void topic_type_support< ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType >::reset_sample(::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
            sample.commandStatus(UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::CANCELED);
            sample.commandStatusReason(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::CANCELED);
            sample.logMessage("");
        }

        void topic_type_support< ::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType >::allocate_sample(::UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerCancelConfigCommandStatusType& sample, int, int) 
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
