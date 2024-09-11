

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BetaYPlatformType.idl
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
#include "BetaYPlatformTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BetaYPlatformType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- BetaYPlatformType: 

            BetaYPlatformType::BetaYPlatformType() :
                m_beta_ (0.0)  {

            }   

            BetaYPlatformType::BetaYPlatformType (double beta_):
                m_beta_(beta_) {
            }

            void BetaYPlatformType::swap(BetaYPlatformType& other_)  noexcept 
            {
                using std::swap;
                swap(m_beta_, other_.m_beta_);
            }  

            bool BetaYPlatformType::operator == (const BetaYPlatformType& other_) const {
                if (std::fabs(m_beta_ - other_.m_beta_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_beta_ - other_.m_beta_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool BetaYPlatformType::operator != (const BetaYPlatformType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BetaYPlatformType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "beta: " << std::setprecision(15) << sample.beta ();
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
        struct native_type_code< ::UMAA::Common::Orientation::BetaYPlatformType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BetaYPlatformType_g_tc_members[1]=
                {

                    {
                        (char *)"beta",/* Member name */
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

                static DDS_TypeCode BetaYPlatformType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::BetaYPlatformType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        BetaYPlatformType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BetaYPlatformType*/

                if (is_initialized) {
                    return &BetaYPlatformType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BetaYPlatformType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BetaYPlatformType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PitchHalfAngle_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                BetaYPlatformType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BetaYPlatformType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                BetaYPlatformType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BetaYPlatformType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BetaYPlatformType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BetaYPlatformType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BetaYPlatformType_g_tc._data._sampleAccessInfo = sample_access_info();
                BetaYPlatformType_g_tc._data._typePlugin = type_plugin_info();    

                return &BetaYPlatformType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::BetaYPlatformType *sample;

                static RTIXCdrMemberAccessInfo BetaYPlatformType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BetaYPlatformType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BetaYPlatformType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::BetaYPlatformType);
                if (sample == NULL) {
                    return NULL;
                }

                BetaYPlatformType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->beta() - (char *)sample);

                BetaYPlatformType_g_sampleAccessInfo.memberAccessInfos = 
                BetaYPlatformType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::BetaYPlatformType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BetaYPlatformType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BetaYPlatformType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BetaYPlatformType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BetaYPlatformType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::BetaYPlatformType >;

                BetaYPlatformType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BetaYPlatformType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BetaYPlatformType_g_typePlugin = 
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

                return &BetaYPlatformType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::BetaYPlatformType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::BetaYPlatformType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::BetaYPlatformType >::reset_sample(::UMAA::Common::Orientation::BetaYPlatformType& sample) 
        {
            sample.beta(0.0);
        }

        void topic_type_support< ::UMAA::Common::Orientation::BetaYPlatformType >::allocate_sample(::UMAA::Common::Orientation::BetaYPlatformType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
