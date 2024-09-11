

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelReceiverReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "CommsChannelReceiverReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsChannelReceiverReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace CommsChannelStatus {

            // ---- CommsChannelReceiverReportType: 

            CommsChannelReceiverReportType::CommsChannelReceiverReportType() :
                m_messageSize_ (0) ,
                m_messageSNR_ (0.0) ,
                m_messageType_ ("")  {

            }   

            CommsChannelReceiverReportType::CommsChannelReceiverReportType (int32_t messageSize_,double messageSNR_,const ::UMAA::Common::Measurement::DateTime& messageTime_,const std::string& messageType_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& messageID_):
                m_messageSize_(messageSize_), 
                m_messageSNR_(messageSNR_), 
                m_messageTime_(messageTime_), 
                m_messageType_(messageType_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_messageID_(messageID_) {
            }

            void CommsChannelReceiverReportType::swap(CommsChannelReceiverReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_messageSize_, other_.m_messageSize_);
                swap(m_messageSNR_, other_.m_messageSNR_);
                swap(m_messageTime_, other_.m_messageTime_);
                swap(m_messageType_, other_.m_messageType_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_messageID_, other_.m_messageID_);
            }  

            bool CommsChannelReceiverReportType::operator == (const CommsChannelReceiverReportType& other_) const {
                if (m_messageSize_ != other_.m_messageSize_) {
                    return false;
                }
                if (std::fabs(m_messageSNR_ - other_.m_messageSNR_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_messageSNR_ - other_.m_messageSNR_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_messageTime_ != other_.m_messageTime_) {
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
                if (m_messageID_ != other_.m_messageID_) {
                    return false;
                }
                return true;
            }

            bool CommsChannelReceiverReportType::operator != (const CommsChannelReceiverReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsChannelReceiverReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "messageSize: " << sample.messageSize ()<<", ";
                o << "messageSNR: " << std::setprecision(15) << sample.messageSNR ()<<", ";
                o << "messageTime: " << sample.messageTime ()<<", ";
                o << "messageType: " << sample.messageType ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "messageID: " << sample.messageID ();
                o <<"]";
                return o;
            }

        } // namespace CommsChannelStatus  

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
        struct native_type_code< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommsChannelReceiverReportType_g_tc_members[7]=
                {

                    {
                        (char *)"messageSize",/* Member name */
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
                        (char *)"messageSNR",/* Member name */
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
                        (char *)"messageTime",/* Member name */
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
                        (char *)"messageType",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                    }, 
                    {
                        (char *)"messageID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CommsChannelReceiverReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        CommsChannelReceiverReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsChannelReceiverReportType*/

                if (is_initialized) {
                    return &CommsChannelReceiverReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsChannelReceiverReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsChannelReceiverReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeBytes_AliasTag_t>::get().native();
                CommsChannelReceiverReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::SignalToNoiseRatio_AliasTag_t>::get().native();
                CommsChannelReceiverReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                CommsChannelReceiverReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                CommsChannelReceiverReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                CommsChannelReceiverReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                CommsChannelReceiverReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CommsChannelReceiverReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                CommsChannelReceiverReportType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                CommsChannelReceiverReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                CommsChannelReceiverReportType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                CommsChannelReceiverReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                CommsChannelReceiverReportType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                CommsChannelReceiverReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelReceiverReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                CommsChannelReceiverReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelReceiverReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CommsChannelReceiverReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CommsChannelReceiverReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CommsChannelReceiverReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                CommsChannelReceiverReportType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                CommsChannelReceiverReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsChannelReceiverReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsChannelReceiverReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType *sample;

                static RTIXCdrMemberAccessInfo CommsChannelReceiverReportType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsChannelReceiverReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsChannelReceiverReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsChannelReceiverReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageSize() - (char *)sample);

                CommsChannelReceiverReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageSNR() - (char *)sample);

                CommsChannelReceiverReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageTime() - (char *)sample);

                CommsChannelReceiverReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageType() - (char *)sample);

                CommsChannelReceiverReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CommsChannelReceiverReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CommsChannelReceiverReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageID() - (char *)sample);

                CommsChannelReceiverReportType_g_sampleAccessInfo.memberAccessInfos = 
                CommsChannelReceiverReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsChannelReceiverReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsChannelReceiverReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsChannelReceiverReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsChannelReceiverReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType >;

                CommsChannelReceiverReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsChannelReceiverReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsChannelReceiverReportType_g_typePlugin = 
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

                return &CommsChannelReceiverReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportTypePlugin_new,
                ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CommsChannelReceiverReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CommsChannelReceiverReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType >::from_cdr_buffer(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CommsChannelReceiverReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType >::reset_sample(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType& sample) 
        {
            sample.messageSize(0);
            sample.messageSNR(0.0);
            ::rti::topic::reset_sample(sample.messageTime());
            sample.messageType("");
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.messageID());
        }

        void topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType >::allocate_sample(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.messageTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.messageType(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.messageID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
