

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RecordingStatusReportType.idl
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
#include "RecordingStatusReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "RecordingStatusReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace RecordingStatus {

            // ---- RecordingStatusReportType: 

            RecordingStatusReportType::RecordingStatusReportType() :
                m_isRecording_ (0) ,
                m_received_ (0) ,
                m_receiveErrors_ (0) ,
                m_spaceUsed_ (0.0) ,
                m_writeErrors_ (0)  {

            }   

            RecordingStatusReportType::RecordingStatusReportType (bool isRecording_,int32_t received_,int32_t receiveErrors_,double spaceUsed_,int32_t writeErrors_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_isRecording_(isRecording_), 
                m_received_(received_), 
                m_receiveErrors_(receiveErrors_), 
                m_spaceUsed_(spaceUsed_), 
                m_writeErrors_(writeErrors_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void RecordingStatusReportType::swap(RecordingStatusReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_isRecording_, other_.m_isRecording_);
                swap(m_received_, other_.m_received_);
                swap(m_receiveErrors_, other_.m_receiveErrors_);
                swap(m_spaceUsed_, other_.m_spaceUsed_);
                swap(m_writeErrors_, other_.m_writeErrors_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool RecordingStatusReportType::operator == (const RecordingStatusReportType& other_) const {
                if (m_isRecording_ != other_.m_isRecording_) {
                    return false;
                }
                if (m_received_ != other_.m_received_) {
                    return false;
                }
                if (m_receiveErrors_ != other_.m_receiveErrors_) {
                    return false;
                }
                if (std::fabs(m_spaceUsed_ - other_.m_spaceUsed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_spaceUsed_ - other_.m_spaceUsed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_writeErrors_ != other_.m_writeErrors_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool RecordingStatusReportType::operator != (const RecordingStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RecordingStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "isRecording: " << sample.isRecording ()<<", ";
                o << "received: " << sample.received ()<<", ";
                o << "receiveErrors: " << sample.receiveErrors ()<<", ";
                o << "spaceUsed: " << std::setprecision(15) << sample.spaceUsed ()<<", ";
                o << "writeErrors: " << sample.writeErrors ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace RecordingStatus  

    } // namespace SO  

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
        struct native_type_code< ::UMAA::SO::RecordingStatus::RecordingStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RecordingStatusReportType_g_tc_members[7]=
                {

                    {
                        (char *)"isRecording",/* Member name */
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
                        (char *)"received",/* Member name */
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
                        (char *)"receiveErrors",/* Member name */
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
                        (char *)"spaceUsed",/* Member name */
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
                        (char *)"writeErrors",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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

                static DDS_TypeCode RecordingStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::RecordingStatus::RecordingStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        RecordingStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RecordingStatusReportType*/

                if (is_initialized) {
                    return &RecordingStatusReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                RecordingStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RecordingStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RecordingStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                RecordingStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                RecordingStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t>::get().native();
                RecordingStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                RecordingStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                RecordingStatusReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                RecordingStatusReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RecordingStatusReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                RecordingStatusReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                RecordingStatusReportType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                RecordingStatusReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                RecordingStatusReportType_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                RecordingStatusReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                RecordingStatusReportType_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                RecordingStatusReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                RecordingStatusReportType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                RecordingStatusReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                RecordingStatusReportType_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                RecordingStatusReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                RecordingStatusReportType_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                RecordingStatusReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RecordingStatusReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                RecordingStatusReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RecordingStatusReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RecordingStatusReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RecordingStatusReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                RecordingStatusReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                RecordingStatusReportType_g_tc_members[4]._annotations._defaultValue._u.long_value = 0;
                RecordingStatusReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                RecordingStatusReportType_g_tc_members[4]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                RecordingStatusReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                RecordingStatusReportType_g_tc_members[4]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                RecordingStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                RecordingStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &RecordingStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::RecordingStatus::RecordingStatusReportType *sample;

                static RTIXCdrMemberAccessInfo RecordingStatusReportType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RecordingStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RecordingStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::RecordingStatus::RecordingStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                RecordingStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->isRecording() - (char *)sample);

                RecordingStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->received() - (char *)sample);

                RecordingStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->receiveErrors() - (char *)sample);

                RecordingStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->spaceUsed() - (char *)sample);

                RecordingStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->writeErrors() - (char *)sample);

                RecordingStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                RecordingStatusReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                RecordingStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                RecordingStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::RecordingStatus::RecordingStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RecordingStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RecordingStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RecordingStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RecordingStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::RecordingStatus::RecordingStatusReportType >;

                RecordingStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RecordingStatusReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RecordingStatusReportType_g_typePlugin = 
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

                return &RecordingStatusReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::RecordingStatus::RecordingStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::RecordingStatus::RecordingStatusReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::RecordingStatus::RecordingStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::RecordingStatus::RecordingStatusReportTypePlugin_new,
                ::UMAA::SO::RecordingStatus::RecordingStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::RecordingStatus::RecordingStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::RecordingStatus::RecordingStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RecordingStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RecordingStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::RecordingStatus::RecordingStatusReportType >::from_cdr_buffer(::UMAA::SO::RecordingStatus::RecordingStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RecordingStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::RecordingStatus::RecordingStatusReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::RecordingStatus::RecordingStatusReportType >::reset_sample(::UMAA::SO::RecordingStatus::RecordingStatusReportType& sample) 
        {
            sample.isRecording(0);
            sample.received(0);
            sample.receiveErrors(0);
            sample.spaceUsed(0.0);
            sample.writeErrors(0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SO::RecordingStatus::RecordingStatusReportType >::allocate_sample(::UMAA::SO::RecordingStatus::RecordingStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
