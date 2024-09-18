

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelDeleteMessageConfigCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "CommsChannelDeleteMessageConfigCommandTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsChannelDeleteMessageConfigCommandType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace CommsChannelConfig {

            // ---- CommsChannelDeleteMessageConfigCommandType: 

            CommsChannelDeleteMessageConfigCommandType::CommsChannelDeleteMessageConfigCommandType() :
                m_messageType_ ("")  {

            }   

            CommsChannelDeleteMessageConfigCommandType::CommsChannelDeleteMessageConfigCommandType (const ::UMAA::Common::Measurement::NumericGUID& messageConfigID_,const std::string& messageType_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::IdentifierType& destination_):
                m_messageConfigID_(messageConfigID_), 
                m_messageType_(messageType_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_sessionID_(sessionID_), 
                m_destination_(destination_) {
            }

            void CommsChannelDeleteMessageConfigCommandType::swap(CommsChannelDeleteMessageConfigCommandType& other_)  noexcept 
            {
                using std::swap;
                swap(m_messageConfigID_, other_.m_messageConfigID_);
                swap(m_messageType_, other_.m_messageType_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_destination_, other_.m_destination_);
            }  

            bool CommsChannelDeleteMessageConfigCommandType::operator == (const CommsChannelDeleteMessageConfigCommandType& other_) const {
                if (m_messageConfigID_ != other_.m_messageConfigID_) {
                    return false;
                }
                if (m_messageType_ != other_.m_messageType_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_destination_ != other_.m_destination_) {
                    return false;
                }
                return true;
            }

            bool CommsChannelDeleteMessageConfigCommandType::operator != (const CommsChannelDeleteMessageConfigCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsChannelDeleteMessageConfigCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "messageConfigID: " << sample.messageConfigID ()<<", ";
                o << "messageType: " << sample.messageType ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ()<<", ";
                o << "destination: " << sample.destination ();
                o <<"]";
                return o;
            }

        } // namespace CommsChannelConfig  

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
        struct native_type_code< ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommsChannelDeleteMessageConfigCommandType_g_tc_members[6]=
                {

                    {
                        (char *)"messageConfigID",/* Member name */
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
                        (char *)"messageType",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sessionID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"destination",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CommsChannelDeleteMessageConfigCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CommsChannelDeleteMessageConfigCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsChannelDeleteMessageConfigCommandType*/

                if (is_initialized) {
                    return &CommsChannelDeleteMessageConfigCommandType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsChannelDeleteMessageConfigCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsChannelDeleteMessageConfigCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CommsChannelDeleteMessageConfigCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                CommsChannelDeleteMessageConfigCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                CommsChannelDeleteMessageConfigCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                CommsChannelDeleteMessageConfigCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CommsChannelDeleteMessageConfigCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                CommsChannelDeleteMessageConfigCommandType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                CommsChannelDeleteMessageConfigCommandType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                CommsChannelDeleteMessageConfigCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsChannelDeleteMessageConfigCommandType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsChannelDeleteMessageConfigCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType *sample;

                static RTIXCdrMemberAccessInfo CommsChannelDeleteMessageConfigCommandType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsChannelDeleteMessageConfigCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsChannelDeleteMessageConfigCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsChannelDeleteMessageConfigCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageConfigID() - (char *)sample);

                CommsChannelDeleteMessageConfigCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageType() - (char *)sample);

                CommsChannelDeleteMessageConfigCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CommsChannelDeleteMessageConfigCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CommsChannelDeleteMessageConfigCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                CommsChannelDeleteMessageConfigCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                CommsChannelDeleteMessageConfigCommandType_g_sampleAccessInfo.memberAccessInfos = 
                CommsChannelDeleteMessageConfigCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsChannelDeleteMessageConfigCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsChannelDeleteMessageConfigCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsChannelDeleteMessageConfigCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsChannelDeleteMessageConfigCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType >;

                CommsChannelDeleteMessageConfigCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsChannelDeleteMessageConfigCommandType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsChannelDeleteMessageConfigCommandType_g_typePlugin = 
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

                return &CommsChannelDeleteMessageConfigCommandType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandTypePlugin_new,
                ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CommsChannelDeleteMessageConfigCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CommsChannelDeleteMessageConfigCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType >::from_cdr_buffer(::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CommsChannelDeleteMessageConfigCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType from cdr buffer");
        }

        void topic_type_support< ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType >::reset_sample(::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType& sample) 
        {
            ::rti::topic::reset_sample(sample.messageConfigID());
            sample.messageType("");
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.destination());
        }

        void topic_type_support< ::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType >::allocate_sample(::UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.messageConfigID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.messageType(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE