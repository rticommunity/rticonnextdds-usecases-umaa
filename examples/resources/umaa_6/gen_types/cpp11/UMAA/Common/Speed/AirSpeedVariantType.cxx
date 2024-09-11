

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AirSpeedVariantType.idl
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
#include "AirSpeedVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "AirSpeedVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            // ---- AirSpeedVariantType: 

            AirSpeedVariantType::AirSpeedVariantType() :
                m_speed_ (0.0)  {

            }   

            AirSpeedVariantType::AirSpeedVariantType (double speed_):
                m_speed_(speed_) {
            }

            void AirSpeedVariantType::swap(AirSpeedVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_speed_, other_.m_speed_);
            }  

            bool AirSpeedVariantType::operator == (const AirSpeedVariantType& other_) const {
                if (std::fabs(m_speed_ - other_.m_speed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_speed_ - other_.m_speed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool AirSpeedVariantType::operator != (const AirSpeedVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const AirSpeedVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "speed: " << std::setprecision(15) << sample.speed ();
                o <<"]";
                return o;
            }

        } // namespace Speed  

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::Speed::AirSpeedVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AirSpeedVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"speed",/* Member name */
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
                    }
                };

                static DDS_TypeCode AirSpeedVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::AirSpeedVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        AirSpeedVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AirSpeedVariantType*/

                if (is_initialized) {
                    return &AirSpeedVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AirSpeedVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AirSpeedVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::IndicatedAirspeed_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                AirSpeedVariantType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedVariantType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                AirSpeedVariantType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedVariantType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AirSpeedVariantType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AirSpeedVariantType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AirSpeedVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                AirSpeedVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &AirSpeedVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::AirSpeedVariantType *sample;

                static RTIXCdrMemberAccessInfo AirSpeedVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AirSpeedVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AirSpeedVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::AirSpeedVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                AirSpeedVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                AirSpeedVariantType_g_sampleAccessInfo.memberAccessInfos = 
                AirSpeedVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::AirSpeedVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AirSpeedVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AirSpeedVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AirSpeedVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AirSpeedVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::AirSpeedVariantType >;

                AirSpeedVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AirSpeedVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AirSpeedVariantType_g_typePlugin = 
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

                return &AirSpeedVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Speed::AirSpeedVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::AirSpeedVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Speed::AirSpeedVariantType >::reset_sample(::UMAA::Common::Speed::AirSpeedVariantType& sample) 
        {
            sample.speed(0.0);
        }

        void topic_type_support< ::UMAA::Common::Speed::AirSpeedVariantType >::allocate_sample(::UMAA::Common::Speed::AirSpeedVariantType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
