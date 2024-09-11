

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GammaZPlatformType.idl
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
#include "GammaZPlatformTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GammaZPlatformType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- GammaZPlatformType: 

            GammaZPlatformType::GammaZPlatformType() :
                m_gamma_ (0.0)  {

            }   

            GammaZPlatformType::GammaZPlatformType (double gamma_):
                m_gamma_(gamma_) {
            }

            void GammaZPlatformType::swap(GammaZPlatformType& other_)  noexcept 
            {
                using std::swap;
                swap(m_gamma_, other_.m_gamma_);
            }  

            bool GammaZPlatformType::operator == (const GammaZPlatformType& other_) const {
                if (std::fabs(m_gamma_ - other_.m_gamma_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_gamma_ - other_.m_gamma_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool GammaZPlatformType::operator != (const GammaZPlatformType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GammaZPlatformType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "gamma: " << std::setprecision(15) << sample.gamma ();
                o <<"]";
                return o;
            }

        } // namespace Orientation  

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
        struct native_type_code< ::UMAA::Common::Orientation::GammaZPlatformType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GammaZPlatformType_g_tc_members[1]=
                {

                    {
                        (char *)"gamma",/* Member name */
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

                static DDS_TypeCode GammaZPlatformType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::GammaZPlatformType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GammaZPlatformType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GammaZPlatformType*/

                if (is_initialized) {
                    return &GammaZPlatformType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GammaZPlatformType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GammaZPlatformType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::YawAngle_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                GammaZPlatformType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GammaZPlatformType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                GammaZPlatformType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GammaZPlatformType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GammaZPlatformType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GammaZPlatformType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GammaZPlatformType_g_tc._data._sampleAccessInfo = sample_access_info();
                GammaZPlatformType_g_tc._data._typePlugin = type_plugin_info();    

                return &GammaZPlatformType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::GammaZPlatformType *sample;

                static RTIXCdrMemberAccessInfo GammaZPlatformType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GammaZPlatformType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GammaZPlatformType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::GammaZPlatformType);
                if (sample == NULL) {
                    return NULL;
                }

                GammaZPlatformType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->gamma() - (char *)sample);

                GammaZPlatformType_g_sampleAccessInfo.memberAccessInfos = 
                GammaZPlatformType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::GammaZPlatformType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GammaZPlatformType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GammaZPlatformType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GammaZPlatformType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GammaZPlatformType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::GammaZPlatformType >;

                GammaZPlatformType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GammaZPlatformType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GammaZPlatformType_g_typePlugin = 
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

                return &GammaZPlatformType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::GammaZPlatformType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::GammaZPlatformType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::GammaZPlatformType >::reset_sample(::UMAA::Common::Orientation::GammaZPlatformType& sample) 
        {
            sample.gamma(0.0);
        }

        void topic_type_support< ::UMAA::Common::Orientation::GammaZPlatformType >::allocate_sample(::UMAA::Common::Orientation::GammaZPlatformType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
