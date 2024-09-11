

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AcousticSelfNoiseInterferenceStatusType.idl
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
#include "AcousticSelfNoiseInterferenceStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "AcousticSelfNoiseInterferenceStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace AcousticInterferenceStatus {

            // ---- AcousticSelfNoiseInterferenceStatusType: 

            AcousticSelfNoiseInterferenceStatusType::AcousticSelfNoiseInterferenceStatusType() :
                m_duration_ (0.0)  {

            }   

            AcousticSelfNoiseInterferenceStatusType::AcousticSelfNoiseInterferenceStatusType (const ::dds::core::optional< double >& bandwidth_,const ::dds::core::optional< double >& centerFrequency_,double duration_,const ::UMAA::Common::Measurement::DateTime& time_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType >& type_):
                m_bandwidth_(bandwidth_), 
                m_centerFrequency_(centerFrequency_), 
                m_duration_(duration_), 
                m_time_(time_), 
                m_type_(type_) {
            }

            void AcousticSelfNoiseInterferenceStatusType::swap(AcousticSelfNoiseInterferenceStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_bandwidth_, other_.m_bandwidth_);
                swap(m_centerFrequency_, other_.m_centerFrequency_);
                swap(m_duration_, other_.m_duration_);
                swap(m_time_, other_.m_time_);
                swap(m_type_, other_.m_type_);
            }  

            bool AcousticSelfNoiseInterferenceStatusType::operator == (const AcousticSelfNoiseInterferenceStatusType& other_) const {
                if (m_bandwidth_.has_value() != other_.m_bandwidth_.has_value()) {
                    return false;
                } else if (m_bandwidth_.has_value()) {
                    if (std::fabs(*m_bandwidth_ - *other_.m_bandwidth_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_bandwidth_ - *other_.m_bandwidth_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_centerFrequency_.has_value() != other_.m_centerFrequency_.has_value()) {
                    return false;
                } else if (m_centerFrequency_.has_value()) {
                    if (std::fabs(*m_centerFrequency_ - *other_.m_centerFrequency_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_centerFrequency_ - *other_.m_centerFrequency_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_duration_ - other_.m_duration_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_duration_ - other_.m_duration_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_time_ != other_.m_time_) {
                    return false;
                }
                if (m_type_ != other_.m_type_) {
                    return false;
                }
                return true;
            }

            bool AcousticSelfNoiseInterferenceStatusType::operator != (const AcousticSelfNoiseInterferenceStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const AcousticSelfNoiseInterferenceStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bandwidth: " << sample.bandwidth ()<<", ";
                o << "centerFrequency: " << sample.centerFrequency ()<<", ";
                o << "duration: " << std::setprecision(15) << sample.duration ()<<", ";
                o << "time: " << sample.time ()<<", ";
                o << "type: " << sample.type ();
                o <<"]";
                return o;
            }

        } // namespace AcousticInterferenceStatus  

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
        struct native_type_code< ::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AcousticSelfNoiseInterferenceStatusType_g_tc_members[5]=
                {

                    {
                        (char *)"bandwidth",/* Member name */
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
                        (char *)"centerFrequency",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"duration",/* Member name */
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
                        (char *)"time",/* Member name */
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
                        (char *)"type",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode AcousticSelfNoiseInterferenceStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        AcousticSelfNoiseInterferenceStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AcousticSelfNoiseInterferenceStatusType*/

                if (is_initialized) {
                    return &AcousticSelfNoiseInterferenceStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AcousticSelfNoiseInterferenceStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AcousticSelfNoiseInterferenceStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t>::get().native();
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t>::get().native();
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType>::get().native();

                /* Initialize the values for member annotations. */
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AcousticSelfNoiseInterferenceStatusType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AcousticSelfNoiseInterferenceStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                AcousticSelfNoiseInterferenceStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &AcousticSelfNoiseInterferenceStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType *sample;

                static RTIXCdrMemberAccessInfo AcousticSelfNoiseInterferenceStatusType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AcousticSelfNoiseInterferenceStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AcousticSelfNoiseInterferenceStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                AcousticSelfNoiseInterferenceStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bandwidth() - (char *)sample);

                AcousticSelfNoiseInterferenceStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->centerFrequency() - (char *)sample);

                AcousticSelfNoiseInterferenceStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->duration() - (char *)sample);

                AcousticSelfNoiseInterferenceStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->time() - (char *)sample);

                AcousticSelfNoiseInterferenceStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->type() - (char *)sample);

                AcousticSelfNoiseInterferenceStatusType_g_sampleAccessInfo.memberAccessInfos = 
                AcousticSelfNoiseInterferenceStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AcousticSelfNoiseInterferenceStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AcousticSelfNoiseInterferenceStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AcousticSelfNoiseInterferenceStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AcousticSelfNoiseInterferenceStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType >;

                AcousticSelfNoiseInterferenceStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AcousticSelfNoiseInterferenceStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AcousticSelfNoiseInterferenceStatusType_g_typePlugin = 
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

                return &AcousticSelfNoiseInterferenceStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType >::reset_sample(::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.bandwidth());
            ::rti::topic::reset_sample(sample.centerFrequency());
            sample.duration(0.0);
            ::rti::topic::reset_sample(sample.time());
            ::rti::topic::reset_sample(sample.type());
        }

        void topic_type_support< ::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType >::allocate_sample(::UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.time(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
