

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelReceiverStatisticsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "CommsChannelReceiverStatisticsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsChannelReceiverStatisticsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace CommsChannelStatus {

            // ---- CommsChannelReceiverStatisticsReportType: 

            CommsChannelReceiverStatisticsReportType::CommsChannelReceiverStatisticsReportType()  {

            }   

            CommsChannelReceiverStatisticsReportType::CommsChannelReceiverStatisticsReportType (const ::rti::core::bounded_sequence< ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType, 256L >& receiverStatistics_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_receiverStatistics_(receiverStatistics_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void CommsChannelReceiverStatisticsReportType::swap(CommsChannelReceiverStatisticsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_receiverStatistics_, other_.m_receiverStatistics_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool CommsChannelReceiverStatisticsReportType::operator == (const CommsChannelReceiverStatisticsReportType& other_) const {
                if (m_receiverStatistics_ != other_.m_receiverStatistics_) {
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

            bool CommsChannelReceiverStatisticsReportType::operator != (const CommsChannelReceiverStatisticsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsChannelReceiverStatisticsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "receiverStatistics: " << sample.receiverStatistics ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
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
        struct native_type_code< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CommsChannelReceiverStatisticsReportType_g_tc_receiverStatistics_sequence;

                static DDS_TypeCode_Member CommsChannelReceiverStatisticsReportType_g_tc_members[3]=
                {

                    {
                        (char *)"receiverStatistics",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                    }
                };

                static DDS_TypeCode CommsChannelReceiverStatisticsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        CommsChannelReceiverStatisticsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsChannelReceiverStatisticsReportType*/

                if (is_initialized) {
                    return &CommsChannelReceiverStatisticsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsChannelReceiverStatisticsReportType_g_tc_receiverStatistics_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType, 256L > >((256L));

                CommsChannelReceiverStatisticsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsChannelReceiverStatisticsReportType_g_tc_receiverStatistics_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType>::get().native();
                CommsChannelReceiverStatisticsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& CommsChannelReceiverStatisticsReportType_g_tc_receiverStatistics_sequence;
                CommsChannelReceiverStatisticsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                CommsChannelReceiverStatisticsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */

                CommsChannelReceiverStatisticsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsChannelReceiverStatisticsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsChannelReceiverStatisticsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType *sample;

                static RTIXCdrMemberAccessInfo CommsChannelReceiverStatisticsReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsChannelReceiverStatisticsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsChannelReceiverStatisticsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsChannelReceiverStatisticsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->receiverStatistics() - (char *)sample);

                CommsChannelReceiverStatisticsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CommsChannelReceiverStatisticsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CommsChannelReceiverStatisticsReportType_g_sampleAccessInfo.memberAccessInfos = 
                CommsChannelReceiverStatisticsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsChannelReceiverStatisticsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsChannelReceiverStatisticsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsChannelReceiverStatisticsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsChannelReceiverStatisticsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType >;

                CommsChannelReceiverStatisticsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsChannelReceiverStatisticsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsChannelReceiverStatisticsReportType_g_typePlugin = 
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

                return &CommsChannelReceiverStatisticsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportTypePlugin_new,
                ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CommsChannelReceiverStatisticsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CommsChannelReceiverStatisticsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType >::from_cdr_buffer(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CommsChannelReceiverStatisticsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType >::reset_sample(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.receiverStatistics());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType >::allocate_sample(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverStatisticsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.receiverStatistics(),  256L, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
