

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "DigitalAudioConfigReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DigitalAudioConfigReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace DigitalAudioConfig {

            // ---- DigitalAudioConfigReportType: 

            DigitalAudioConfigReportType::DigitalAudioConfigReportType() :
                m_bitDepth_(UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType::TEN_BITS) ,
                m_digitalFormat_(UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType::AAC_MPEG2) ,
                m_encodingQuality_(UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType::AVERAGE) ,
                m_maxBitRate_ (0) ,
                m_minBitRate_ (0) ,
                m_numberOfChannels_ (0) ,
                m_sampleRate_ (0) ,
                m_sensitivity_ (0)  {

            }   

            DigitalAudioConfigReportType::DigitalAudioConfigReportType (const ::UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType& bitDepth_,const ::UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType& digitalFormat_,const ::UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType& encodingQuality_,int32_t maxBitRate_,int32_t minBitRate_,int32_t numberOfChannels_,int32_t sampleRate_,int32_t sensitivity_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_bitDepth_(bitDepth_), 
                m_digitalFormat_(digitalFormat_), 
                m_encodingQuality_(encodingQuality_), 
                m_maxBitRate_(maxBitRate_), 
                m_minBitRate_(minBitRate_), 
                m_numberOfChannels_(numberOfChannels_), 
                m_sampleRate_(sampleRate_), 
                m_sensitivity_(sensitivity_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void DigitalAudioConfigReportType::swap(DigitalAudioConfigReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_bitDepth_, other_.m_bitDepth_);
                swap(m_digitalFormat_, other_.m_digitalFormat_);
                swap(m_encodingQuality_, other_.m_encodingQuality_);
                swap(m_maxBitRate_, other_.m_maxBitRate_);
                swap(m_minBitRate_, other_.m_minBitRate_);
                swap(m_numberOfChannels_, other_.m_numberOfChannels_);
                swap(m_sampleRate_, other_.m_sampleRate_);
                swap(m_sensitivity_, other_.m_sensitivity_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool DigitalAudioConfigReportType::operator == (const DigitalAudioConfigReportType& other_) const {
                if (m_bitDepth_ != other_.m_bitDepth_) {
                    return false;
                }
                if (m_digitalFormat_ != other_.m_digitalFormat_) {
                    return false;
                }
                if (m_encodingQuality_ != other_.m_encodingQuality_) {
                    return false;
                }
                if (m_maxBitRate_ != other_.m_maxBitRate_) {
                    return false;
                }
                if (m_minBitRate_ != other_.m_minBitRate_) {
                    return false;
                }
                if (m_numberOfChannels_ != other_.m_numberOfChannels_) {
                    return false;
                }
                if (m_sampleRate_ != other_.m_sampleRate_) {
                    return false;
                }
                if (m_sensitivity_ != other_.m_sensitivity_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }

            bool DigitalAudioConfigReportType::operator != (const DigitalAudioConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DigitalAudioConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bitDepth: " << sample.bitDepth ()<<", ";
                o << "digitalFormat: " << sample.digitalFormat ()<<", ";
                o << "encodingQuality: " << sample.encodingQuality ()<<", ";
                o << "maxBitRate: " << sample.maxBitRate ()<<", ";
                o << "minBitRate: " << sample.minBitRate ()<<", ";
                o << "numberOfChannels: " << sample.numberOfChannels ()<<", ";
                o << "sampleRate: " << sample.sampleRate ()<<", ";
                o << "sensitivity: " << sample.sensitivity ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace DigitalAudioConfig  

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
        struct native_type_code< ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DigitalAudioConfigReportType_g_tc_members[10]=
                {

                    {
                        (char *)"bitDepth",/* Member name */
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
                        (char *)"digitalFormat",/* Member name */
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
                        (char *)"encodingQuality",/* Member name */
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
                        (char *)"maxBitRate",/* Member name */
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
                        (char *)"minBitRate",/* Member name */
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
                        (char *)"numberOfChannels",/* Member name */
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
                        (char *)"sampleRate",/* Member name */
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
                        (char *)"sensitivity",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
                        {
                            8,/* Representation ID */
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
                        (char *)"timeStamp",/* Member name */
                        {
                            9,/* Representation ID */
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

                static DDS_TypeCode DigitalAudioConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        DigitalAudioConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DigitalAudioConfigReportType*/

                if (is_initialized) {
                    return &DigitalAudioConfigReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DigitalAudioConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DigitalAudioConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType>::get().native();
                DigitalAudioConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType>::get().native();
                DigitalAudioConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType>::get().native();
                DigitalAudioConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CommsRate_BitsPerSecond_AliasTag_t>::get().native();
                DigitalAudioConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CommsRate_BitsPerSecond_AliasTag_t>::get().native();
                DigitalAudioConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                DigitalAudioConfigReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                DigitalAudioConfigReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                DigitalAudioConfigReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                DigitalAudioConfigReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                DigitalAudioConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DigitalAudioConfigReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;
                DigitalAudioConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DigitalAudioConfigReportType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;
                DigitalAudioConfigReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DigitalAudioConfigReportType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;
                DigitalAudioConfigReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                DigitalAudioConfigReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DigitalAudioConfigReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                DigitalAudioConfigReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[4]._annotations._defaultValue._u.long_value = 0;
                DigitalAudioConfigReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[4]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DigitalAudioConfigReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[4]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                DigitalAudioConfigReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[5]._annotations._defaultValue._u.long_value = 0;
                DigitalAudioConfigReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[5]._annotations._minValue._u.long_value = -2147483648L;
                DigitalAudioConfigReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[5]._annotations._maxValue._u.long_value = 2147483647L;
                DigitalAudioConfigReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[6]._annotations._defaultValue._u.long_value = 0;
                DigitalAudioConfigReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[6]._annotations._minValue._u.long_value = -2147483648L;
                DigitalAudioConfigReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[6]._annotations._maxValue._u.long_value = 2147483647L;
                DigitalAudioConfigReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[7]._annotations._defaultValue._u.long_value = 0;
                DigitalAudioConfigReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[7]._annotations._minValue._u.long_value = -2147483648L;
                DigitalAudioConfigReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DigitalAudioConfigReportType_g_tc_members[7]._annotations._maxValue._u.long_value = 2147483647L;

                DigitalAudioConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                DigitalAudioConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &DigitalAudioConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType *sample;

                static RTIXCdrMemberAccessInfo DigitalAudioConfigReportType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DigitalAudioConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DigitalAudioConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                DigitalAudioConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bitDepth() - (char *)sample);

                DigitalAudioConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->digitalFormat() - (char *)sample);

                DigitalAudioConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->encodingQuality() - (char *)sample);

                DigitalAudioConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxBitRate() - (char *)sample);

                DigitalAudioConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minBitRate() - (char *)sample);

                DigitalAudioConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->numberOfChannels() - (char *)sample);

                DigitalAudioConfigReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sampleRate() - (char *)sample);

                DigitalAudioConfigReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sensitivity() - (char *)sample);

                DigitalAudioConfigReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                DigitalAudioConfigReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                DigitalAudioConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                DigitalAudioConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DigitalAudioConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DigitalAudioConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DigitalAudioConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DigitalAudioConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType >;

                DigitalAudioConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DigitalAudioConfigReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DigitalAudioConfigReportType_g_typePlugin = 
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

                return &DigitalAudioConfigReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportTypePlugin_new,
                ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DigitalAudioConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DigitalAudioConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType >::from_cdr_buffer(::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DigitalAudioConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType >::reset_sample(::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType& sample) 
        {
            sample.bitDepth(UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType::TEN_BITS);
            sample.digitalFormat(UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType::AAC_MPEG2);
            sample.encodingQuality(UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType::AVERAGE);
            sample.maxBitRate(0);
            sample.minBitRate(0);
            sample.numberOfChannels(0);
            sample.sampleRate(0);
            sample.sensitivity(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType >::allocate_sample(::UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.bitDepth(),  -1, -1);
            ::rti::topic::allocate_sample(sample.digitalFormat(),  -1, -1);
            ::rti::topic::allocate_sample(sample.encodingQuality(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
