

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SASConfigCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "SASConfigCommandStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SASConfigCommandStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace SASConfig {

            // ---- SASConfigCommandStatusType: 

            SASConfigCommandStatusType::SASConfigCommandStatusType() :
                m_commandStatus_(UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::CANCELED) ,
                m_commandStatusReason_(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::CANCELED) ,
                m_logMessage_ ("")  {

            }   

            SASConfigCommandStatusType::SASConfigCommandStatusType (const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType& commandStatus_,const ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType& commandStatusReason_,const std::string& logMessage_):
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_sessionID_(sessionID_), 
                m_commandStatus_(commandStatus_), 
                m_commandStatusReason_(commandStatusReason_), 
                m_logMessage_(logMessage_) {
            }

            void SASConfigCommandStatusType::swap(SASConfigCommandStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_commandStatus_, other_.m_commandStatus_);
                swap(m_commandStatusReason_, other_.m_commandStatusReason_);
                swap(m_logMessage_, other_.m_logMessage_);
            }  

            bool SASConfigCommandStatusType::operator == (const SASConfigCommandStatusType& other_) const {
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

            bool SASConfigCommandStatusType::operator != (const SASConfigCommandStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SASConfigCommandStatusType& sample)
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

        } // namespace SASConfig  

    } // namespace SEM  

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
        struct native_type_code< ::UMAA::SEM::SASConfig::SASConfigCommandStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SASConfigCommandStatusType_g_tc_logMessage_string;

                static DDS_TypeCode_Member SASConfigCommandStatusType_g_tc_members[6]=
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

                static DDS_TypeCode SASConfigCommandStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::SASConfig::SASConfigCommandStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        SASConfigCommandStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SASConfigCommandStatusType*/

                if (is_initialized) {
                    return &SASConfigCommandStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SASConfigCommandStatusType_g_tc_logMessage_string = initialize_string_typecode((4095L));

                SASConfigCommandStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SASConfigCommandStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                SASConfigCommandStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                SASConfigCommandStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SASConfigCommandStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType>::get().native();
                SASConfigCommandStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType>::get().native();
                SASConfigCommandStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&SASConfigCommandStatusType_g_tc_logMessage_string;

                /* Initialize the values for member annotations. */
                SASConfigCommandStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SASConfigCommandStatusType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
                SASConfigCommandStatusType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SASConfigCommandStatusType_g_tc_members[4]._annotations._defaultValue._u.enumerated_value = 0;
                SASConfigCommandStatusType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                SASConfigCommandStatusType_g_tc_members[5]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                SASConfigCommandStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                SASConfigCommandStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &SASConfigCommandStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::SASConfig::SASConfigCommandStatusType *sample;

                static RTIXCdrMemberAccessInfo SASConfigCommandStatusType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SASConfigCommandStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SASConfigCommandStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::SASConfig::SASConfigCommandStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                SASConfigCommandStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                SASConfigCommandStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                SASConfigCommandStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                SASConfigCommandStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatus() - (char *)sample);

                SASConfigCommandStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatusReason() - (char *)sample);

                SASConfigCommandStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->logMessage() - (char *)sample);

                SASConfigCommandStatusType_g_sampleAccessInfo.memberAccessInfos = 
                SASConfigCommandStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::SASConfig::SASConfigCommandStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SASConfigCommandStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SASConfigCommandStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SASConfigCommandStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SASConfigCommandStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::SASConfig::SASConfigCommandStatusType >;

                SASConfigCommandStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SASConfigCommandStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SASConfigCommandStatusType_g_typePlugin = 
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

                return &SASConfigCommandStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::SASConfig::SASConfigCommandStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::SASConfig::SASConfigCommandStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::SASConfig::SASConfigCommandStatusType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::SASConfig::SASConfigCommandStatusTypePlugin_new,
                ::UMAA::SEM::SASConfig::SASConfigCommandStatusTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::SASConfig::SASConfigCommandStatusType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::SASConfig::SASConfigCommandStatusType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SASConfigCommandStatusTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SASConfigCommandStatusTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::SASConfig::SASConfigCommandStatusType >::from_cdr_buffer(::UMAA::SEM::SASConfig::SASConfigCommandStatusType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SASConfigCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::SASConfig::SASConfigCommandStatusType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::SASConfig::SASConfigCommandStatusType >::reset_sample(::UMAA::SEM::SASConfig::SASConfigCommandStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
            sample.commandStatus(UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::CANCELED);
            sample.commandStatusReason(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::CANCELED);
            sample.logMessage("");
        }

        void topic_type_support< ::UMAA::SEM::SASConfig::SASConfigCommandStatusType >::allocate_sample(::UMAA::SEM::SASConfig::SASConfigCommandStatusType& sample, int, int) 
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