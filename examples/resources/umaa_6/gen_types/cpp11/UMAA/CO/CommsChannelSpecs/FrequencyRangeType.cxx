

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FrequencyRangeType.idl
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
#include "FrequencyRangeTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "FrequencyRangeType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace CommsChannelSpecs {

            // ---- FrequencyRangeType: 

            FrequencyRangeType::FrequencyRangeType() :
                m_maximum_ (0.0) ,
                m_minimum_ (0.0)  {

            }   

            FrequencyRangeType::FrequencyRangeType (double maximum_,double minimum_):
                m_maximum_(maximum_), 
                m_minimum_(minimum_) {
            }

            void FrequencyRangeType::swap(FrequencyRangeType& other_)  noexcept 
            {
                using std::swap;
                swap(m_maximum_, other_.m_maximum_);
                swap(m_minimum_, other_.m_minimum_);
            }  

            bool FrequencyRangeType::operator == (const FrequencyRangeType& other_) const {
                if (std::fabs(m_maximum_ - other_.m_maximum_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maximum_ - other_.m_maximum_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minimum_ - other_.m_minimum_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minimum_ - other_.m_minimum_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool FrequencyRangeType::operator != (const FrequencyRangeType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const FrequencyRangeType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maximum: " << std::setprecision(15) << sample.maximum ()<<", ";
                o << "minimum: " << std::setprecision(15) << sample.minimum ();
                o <<"]";
                return o;
            }

        } // namespace CommsChannelSpecs  

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
        struct native_type_code< ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FrequencyRangeType_g_tc_members[2]=
                {

                    {
                        (char *)"maximum",/* Member name */
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
                        (char *)"minimum",/* Member name */
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
                    }
                };

                static DDS_TypeCode FrequencyRangeType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::CommsChannelSpecs::FrequencyRangeType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        FrequencyRangeType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FrequencyRangeType*/

                if (is_initialized) {
                    return &FrequencyRangeType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FrequencyRangeType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                FrequencyRangeType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t>::get().native();
                FrequencyRangeType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                FrequencyRangeType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyRangeType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                FrequencyRangeType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyRangeType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FrequencyRangeType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyRangeType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                FrequencyRangeType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyRangeType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                FrequencyRangeType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyRangeType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                FrequencyRangeType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                FrequencyRangeType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                FrequencyRangeType_g_tc._data._sampleAccessInfo = sample_access_info();
                FrequencyRangeType_g_tc._data._typePlugin = type_plugin_info();    

                return &FrequencyRangeType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType *sample;

                static RTIXCdrMemberAccessInfo FrequencyRangeType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FrequencyRangeType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FrequencyRangeType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType);
                if (sample == NULL) {
                    return NULL;
                }

                FrequencyRangeType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maximum() - (char *)sample);

                FrequencyRangeType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minimum() - (char *)sample);

                FrequencyRangeType_g_sampleAccessInfo.memberAccessInfos = 
                FrequencyRangeType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::CommsChannelSpecs::FrequencyRangeType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FrequencyRangeType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FrequencyRangeType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FrequencyRangeType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FrequencyRangeType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType >;

                FrequencyRangeType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FrequencyRangeType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FrequencyRangeType_g_typePlugin = 
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

                return &FrequencyRangeType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType >::reset_sample(::UMAA::CO::CommsChannelSpecs::FrequencyRangeType& sample) 
        {
            sample.maximum(0.0);
            sample.minimum(0.0);
        }

        void topic_type_support< ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType >::allocate_sample(::UMAA::CO::CommsChannelSpecs::FrequencyRangeType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
