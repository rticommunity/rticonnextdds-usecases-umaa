

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsiveRPMType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PropulsiveRPMTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PropulsiveRPMType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Propulsion {

            // ---- PropulsiveRPMType: 

            PropulsiveRPMType::PropulsiveRPMType() :
                m_RPM_ (0)  {

            }   

            PropulsiveRPMType::PropulsiveRPMType (int32_t RPM_):
                m_RPM_(RPM_) {
            }

            void PropulsiveRPMType::swap(PropulsiveRPMType& other_)  noexcept 
            {
                using std::swap;
                swap(m_RPM_, other_.m_RPM_);
            }  

            bool PropulsiveRPMType::operator == (const PropulsiveRPMType& other_) const {
                if (m_RPM_ != other_.m_RPM_) {
                    return false;
                }
                return true;
            }

            bool PropulsiveRPMType::operator != (const PropulsiveRPMType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropulsiveRPMType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "RPM: " << sample.RPM ();
                o <<"]";
                return o;
            }

        } // namespace Propulsion  

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
        struct native_type_code< ::UMAA::Common::Propulsion::PropulsiveRPMType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsiveRPMType_g_tc_members[1]=
                {

                    {
                        (char *)"RPM",/* Member name */
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

                static DDS_TypeCode PropulsiveRPMType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsiveRPMType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PropulsiveRPMType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsiveRPMType*/

                if (is_initialized) {
                    return &PropulsiveRPMType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsiveRPMType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsiveRPMType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                PropulsiveRPMType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                PropulsiveRPMType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                PropulsiveRPMType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                PropulsiveRPMType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                PropulsiveRPMType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                PropulsiveRPMType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                PropulsiveRPMType_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsiveRPMType_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsiveRPMType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Propulsion::PropulsiveRPMType *sample;

                static RTIXCdrMemberAccessInfo PropulsiveRPMType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsiveRPMType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsiveRPMType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Propulsion::PropulsiveRPMType);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsiveRPMType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RPM() - (char *)sample);

                PropulsiveRPMType_g_sampleAccessInfo.memberAccessInfos = 
                PropulsiveRPMType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Propulsion::PropulsiveRPMType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsiveRPMType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsiveRPMType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsiveRPMType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsiveRPMType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Propulsion::PropulsiveRPMType >;

                PropulsiveRPMType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsiveRPMType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsiveRPMType_g_typePlugin = 
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

                return &PropulsiveRPMType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Propulsion::PropulsiveRPMType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Propulsion::PropulsiveRPMType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsiveRPMType >::reset_sample(::UMAA::Common::Propulsion::PropulsiveRPMType& sample) 
        {
            sample.RPM(0);
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsiveRPMType >::allocate_sample(::UMAA::Common::Propulsion::PropulsiveRPMType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
