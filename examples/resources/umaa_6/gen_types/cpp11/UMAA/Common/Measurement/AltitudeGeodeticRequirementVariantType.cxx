

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AltitudeGeodeticRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "AltitudeGeodeticRequirementVariantTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "AltitudeGeodeticRequirementVariantType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- AltitudeGeodeticRequirementVariantType: 

            AltitudeGeodeticRequirementVariantType::AltitudeGeodeticRequirementVariantType()  {

            }   

            AltitudeGeodeticRequirementVariantType::AltitudeGeodeticRequirementVariantType (const ::UMAA::Common::Measurement::AltitudeGeodeticRequirementType& altitude_):
                m_altitude_(altitude_) {
            }

            void AltitudeGeodeticRequirementVariantType::swap(AltitudeGeodeticRequirementVariantType& other_)  noexcept 
            {
                using std::swap;
                swap(m_altitude_, other_.m_altitude_);
            }  

            bool AltitudeGeodeticRequirementVariantType::operator == (const AltitudeGeodeticRequirementVariantType& other_) const {
                if (m_altitude_ != other_.m_altitude_) {
                    return false;
                }
                return true;
            }

            bool AltitudeGeodeticRequirementVariantType::operator != (const AltitudeGeodeticRequirementVariantType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const AltitudeGeodeticRequirementVariantType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "altitude: " << sample.altitude ();
                o <<"]";
                return o;
            }

        } // namespace Measurement  

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
        struct native_type_code< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AltitudeGeodeticRequirementVariantType_g_tc_members[1]=
                {

                    {
                        (char *)"altitude",/* Member name */
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

                static DDS_TypeCode AltitudeGeodeticRequirementVariantType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        AltitudeGeodeticRequirementVariantType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AltitudeGeodeticRequirementVariantType*/

                if (is_initialized) {
                    return &AltitudeGeodeticRequirementVariantType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AltitudeGeodeticRequirementVariantType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AltitudeGeodeticRequirementVariantType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementType>::get().native();

                /* Initialize the values for member annotations. */

                AltitudeGeodeticRequirementVariantType_g_tc._data._sampleAccessInfo = sample_access_info();
                AltitudeGeodeticRequirementVariantType_g_tc._data._typePlugin = type_plugin_info();    

                return &AltitudeGeodeticRequirementVariantType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType *sample;

                static RTIXCdrMemberAccessInfo AltitudeGeodeticRequirementVariantType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AltitudeGeodeticRequirementVariantType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AltitudeGeodeticRequirementVariantType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType);
                if (sample == NULL) {
                    return NULL;
                }

                AltitudeGeodeticRequirementVariantType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitude() - (char *)sample);

                AltitudeGeodeticRequirementVariantType_g_sampleAccessInfo.memberAccessInfos = 
                AltitudeGeodeticRequirementVariantType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AltitudeGeodeticRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AltitudeGeodeticRequirementVariantType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AltitudeGeodeticRequirementVariantType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AltitudeGeodeticRequirementVariantType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType >;

                AltitudeGeodeticRequirementVariantType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AltitudeGeodeticRequirementVariantType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AltitudeGeodeticRequirementVariantType_g_typePlugin = 
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

                return &AltitudeGeodeticRequirementVariantType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType >::reset_sample(::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType& sample) 
        {
            ::rti::topic::reset_sample(sample.altitude());
        }

        void topic_type_support< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType >::allocate_sample(::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.altitude(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
