

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DepthSpeedPairType.idl
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
#include "DepthSpeedPairTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DepthSpeedPairType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Environment {

            // ---- DepthSpeedPairType: 

            DepthSpeedPairType::DepthSpeedPairType() :
                m_depth_ (0.0) ,
                m_soundSpeed_ (0.0)  {

            }   

            DepthSpeedPairType::DepthSpeedPairType (double depth_,double soundSpeed_):
                m_depth_(depth_), 
                m_soundSpeed_(soundSpeed_) {
            }

            void DepthSpeedPairType::swap(DepthSpeedPairType& other_)  noexcept 
            {
                using std::swap;
                swap(m_depth_, other_.m_depth_);
                swap(m_soundSpeed_, other_.m_soundSpeed_);
            }  

            bool DepthSpeedPairType::operator == (const DepthSpeedPairType& other_) const {
                if (std::fabs(m_depth_ - other_.m_depth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_depth_ - other_.m_depth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_soundSpeed_ - other_.m_soundSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_soundSpeed_ - other_.m_soundSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool DepthSpeedPairType::operator != (const DepthSpeedPairType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DepthSpeedPairType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "depth: " << std::setprecision(15) << sample.depth ()<<", ";
                o << "soundSpeed: " << std::setprecision(15) << sample.soundSpeed ();
                o <<"]";
                return o;
            }

        } // namespace Environment  

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
        struct native_type_code< ::UMAA::Common::Environment::DepthSpeedPairType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DepthSpeedPairType_g_tc_members[2]=
                {

                    {
                        (char *)"depth",/* Member name */
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
                        (char *)"soundSpeed",/* Member name */
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

                static DDS_TypeCode DepthSpeedPairType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Environment::DepthSpeedPairType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DepthSpeedPairType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DepthSpeedPairType*/

                if (is_initialized) {
                    return &DepthSpeedPairType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DepthSpeedPairType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DepthSpeedPairType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t>::get().native();
                DepthSpeedPairType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                DepthSpeedPairType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DepthSpeedPairType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DepthSpeedPairType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DepthSpeedPairType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DepthSpeedPairType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DepthSpeedPairType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                DepthSpeedPairType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DepthSpeedPairType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DepthSpeedPairType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DepthSpeedPairType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DepthSpeedPairType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DepthSpeedPairType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DepthSpeedPairType_g_tc._data._sampleAccessInfo = sample_access_info();
                DepthSpeedPairType_g_tc._data._typePlugin = type_plugin_info();    

                return &DepthSpeedPairType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Environment::DepthSpeedPairType *sample;

                static RTIXCdrMemberAccessInfo DepthSpeedPairType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DepthSpeedPairType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DepthSpeedPairType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Environment::DepthSpeedPairType);
                if (sample == NULL) {
                    return NULL;
                }

                DepthSpeedPairType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->depth() - (char *)sample);

                DepthSpeedPairType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->soundSpeed() - (char *)sample);

                DepthSpeedPairType_g_sampleAccessInfo.memberAccessInfos = 
                DepthSpeedPairType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Environment::DepthSpeedPairType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DepthSpeedPairType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DepthSpeedPairType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DepthSpeedPairType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DepthSpeedPairType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Environment::DepthSpeedPairType >;

                DepthSpeedPairType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DepthSpeedPairType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DepthSpeedPairType_g_typePlugin = 
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

                return &DepthSpeedPairType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Environment::DepthSpeedPairType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Environment::DepthSpeedPairType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Environment::DepthSpeedPairType >::reset_sample(::UMAA::Common::Environment::DepthSpeedPairType& sample) 
        {
            sample.depth(0.0);
            sample.soundSpeed(0.0);
        }

        void topic_type_support< ::UMAA::Common::Environment::DepthSpeedPairType >::allocate_sample(::UMAA::Common::Environment::DepthSpeedPairType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
