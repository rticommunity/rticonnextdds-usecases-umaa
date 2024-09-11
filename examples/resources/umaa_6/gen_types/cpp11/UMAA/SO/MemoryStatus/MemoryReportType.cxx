

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MemoryReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "MemoryReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "MemoryReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace MemoryStatus {

            // ---- MemoryReportType: 

            MemoryReportType::MemoryReportType() :
                m_freeMemory_ (0ull) ,
                m_totalMemory_ (0ull)  {

            }   

            MemoryReportType::MemoryReportType (const ::dds::core::optional< uint64_t >& bufferedRam_,uint64_t freeMemory_,const ::dds::core::optional< uint64_t >& freeSwap_,const ::dds::core::optional< uint64_t >& sharedMemory_,uint64_t totalMemory_,const ::dds::core::optional< uint64_t >& totalSwap_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_bufferedRam_(bufferedRam_), 
                m_freeMemory_(freeMemory_), 
                m_freeSwap_(freeSwap_), 
                m_sharedMemory_(sharedMemory_), 
                m_totalMemory_(totalMemory_), 
                m_totalSwap_(totalSwap_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void MemoryReportType::swap(MemoryReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_bufferedRam_, other_.m_bufferedRam_);
                swap(m_freeMemory_, other_.m_freeMemory_);
                swap(m_freeSwap_, other_.m_freeSwap_);
                swap(m_sharedMemory_, other_.m_sharedMemory_);
                swap(m_totalMemory_, other_.m_totalMemory_);
                swap(m_totalSwap_, other_.m_totalSwap_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool MemoryReportType::operator == (const MemoryReportType& other_) const {
                if (m_bufferedRam_ != other_.m_bufferedRam_) {
                    return false;
                }
                if (m_freeMemory_ != other_.m_freeMemory_) {
                    return false;
                }
                if (m_freeSwap_ != other_.m_freeSwap_) {
                    return false;
                }
                if (m_sharedMemory_ != other_.m_sharedMemory_) {
                    return false;
                }
                if (m_totalMemory_ != other_.m_totalMemory_) {
                    return false;
                }
                if (m_totalSwap_ != other_.m_totalSwap_) {
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

            bool MemoryReportType::operator != (const MemoryReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MemoryReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bufferedRam: " << sample.bufferedRam ()<<", ";
                o << "freeMemory: " << sample.freeMemory ()<<", ";
                o << "freeSwap: " << sample.freeSwap ()<<", ";
                o << "sharedMemory: " << sample.sharedMemory ()<<", ";
                o << "totalMemory: " << sample.totalMemory ()<<", ";
                o << "totalSwap: " << sample.totalSwap ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace MemoryStatus  

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
        struct native_type_code< ::UMAA::SO::MemoryStatus::MemoryReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MemoryReportType_g_tc_members[8]=
                {

                    {
                        (char *)"bufferedRam",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"freeMemory",/* Member name */
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
                        (char *)"freeSwap",/* Member name */
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
                        (char *)"sharedMemory",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"totalMemory",/* Member name */
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
                        (char *)"totalSwap",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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

                static DDS_TypeCode MemoryReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::MemoryStatus::MemoryReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        MemoryReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MemoryReportType*/

                if (is_initialized) {
                    return &MemoryReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                MemoryReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MemoryReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t>::get().native();
                MemoryReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t>::get().native();
                MemoryReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t>::get().native();
                MemoryReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t>::get().native();
                MemoryReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t>::get().native();
                MemoryReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t>::get().native();
                MemoryReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                MemoryReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                MemoryReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[0]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                MemoryReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[0]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                MemoryReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[1]._annotations._defaultValue._u.ulong_long_value = 0ull;
                MemoryReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[1]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                MemoryReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[1]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                MemoryReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[2]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                MemoryReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[2]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                MemoryReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[3]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                MemoryReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[3]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                MemoryReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[4]._annotations._defaultValue._u.ulong_long_value = 0ull;
                MemoryReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[4]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                MemoryReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[4]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                MemoryReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[5]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                MemoryReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                MemoryReportType_g_tc_members[5]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                MemoryReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                MemoryReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &MemoryReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::MemoryStatus::MemoryReportType *sample;

                static RTIXCdrMemberAccessInfo MemoryReportType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MemoryReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MemoryReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::MemoryStatus::MemoryReportType);
                if (sample == NULL) {
                    return NULL;
                }

                MemoryReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bufferedRam() - (char *)sample);

                MemoryReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->freeMemory() - (char *)sample);

                MemoryReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->freeSwap() - (char *)sample);

                MemoryReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sharedMemory() - (char *)sample);

                MemoryReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->totalMemory() - (char *)sample);

                MemoryReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->totalSwap() - (char *)sample);

                MemoryReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                MemoryReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                MemoryReportType_g_sampleAccessInfo.memberAccessInfos = 
                MemoryReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::MemoryStatus::MemoryReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MemoryReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MemoryReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MemoryReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MemoryReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::MemoryStatus::MemoryReportType >;

                MemoryReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MemoryReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MemoryReportType_g_typePlugin = 
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

                return &MemoryReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::MemoryStatus::MemoryReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::MemoryStatus::MemoryReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::MemoryStatus::MemoryReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::MemoryStatus::MemoryReportTypePlugin_new,
                ::UMAA::SO::MemoryStatus::MemoryReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::MemoryStatus::MemoryReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::MemoryStatus::MemoryReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MemoryReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MemoryReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::MemoryStatus::MemoryReportType >::from_cdr_buffer(::UMAA::SO::MemoryStatus::MemoryReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MemoryReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::MemoryStatus::MemoryReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::MemoryStatus::MemoryReportType >::reset_sample(::UMAA::SO::MemoryStatus::MemoryReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.bufferedRam());
            sample.freeMemory(0ull);
            ::rti::topic::reset_sample(sample.freeSwap());
            ::rti::topic::reset_sample(sample.sharedMemory());
            sample.totalMemory(0ull);
            ::rti::topic::reset_sample(sample.totalSwap());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SO::MemoryStatus::MemoryReportType >::allocate_sample(::UMAA::SO::MemoryStatus::MemoryReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
