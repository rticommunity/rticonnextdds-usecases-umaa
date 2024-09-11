

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineRPMSpeedVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "EngineRPMSpeedVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "EngineRPMSpeedVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            // ---- EngineRPMSpeedVariantType: 

            EngineRPMSpeedVariantType::EngineRPMSpeedVariantType() :
                m_rpm_ (0)  {

            }   

            EngineRPMSpeedVariantType::EngineRPMSpeedVariantType (int32_t rpm_):
                m_rpm_(rpm_) {
            }

            void EngineRPMSpeedVariantType::swap(EngineRPMSpeedVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_rpm_, other_.m_rpm_);
            }  

            bool EngineRPMSpeedVariantType::operator == (const EngineRPMSpeedVariantType& other_) const {
                if (m_rpm_ != other_.m_rpm_) {
                    return false;
                }
                return true;
            }

            bool EngineRPMSpeedVariantType::operator != (const EngineRPMSpeedVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const EngineRPMSpeedVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "rpm: " << sample.rpm ();
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
        struct native_type_code< ::UMAA::Common::Speed::EngineRPMSpeedVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member EngineRPMSpeedVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"rpm",/* Member name */
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

                static DDS_TypeCode EngineRPMSpeedVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::EngineRPMSpeedVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        EngineRPMSpeedVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for EngineRPMSpeedVariantType*/

                if (is_initialized) {
                    return &EngineRPMSpeedVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                EngineRPMSpeedVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EngineRPMSpeedVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                EngineRPMSpeedVariantType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                EngineRPMSpeedVariantType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                EngineRPMSpeedVariantType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                EngineRPMSpeedVariantType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                EngineRPMSpeedVariantType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                EngineRPMSpeedVariantType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                EngineRPMSpeedVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                EngineRPMSpeedVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &EngineRPMSpeedVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::EngineRPMSpeedVariantType *sample;

                static RTIXCdrMemberAccessInfo EngineRPMSpeedVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EngineRPMSpeedVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EngineRPMSpeedVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::EngineRPMSpeedVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                EngineRPMSpeedVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rpm() - (char *)sample);

                EngineRPMSpeedVariantType_g_sampleAccessInfo.memberAccessInfos = 
                EngineRPMSpeedVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::EngineRPMSpeedVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EngineRPMSpeedVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EngineRPMSpeedVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EngineRPMSpeedVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EngineRPMSpeedVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::EngineRPMSpeedVariantType >;

                EngineRPMSpeedVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EngineRPMSpeedVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EngineRPMSpeedVariantType_g_typePlugin = 
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

                return &EngineRPMSpeedVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Speed::EngineRPMSpeedVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::EngineRPMSpeedVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Speed::EngineRPMSpeedVariantType >::reset_sample(::UMAA::Common::Speed::EngineRPMSpeedVariantType& sample) 
        {
            sample.rpm(0);
        }

        void topic_type_support< ::UMAA::Common::Speed::EngineRPMSpeedVariantType >::allocate_sample(::UMAA::Common::Speed::EngineRPMSpeedVariantType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
