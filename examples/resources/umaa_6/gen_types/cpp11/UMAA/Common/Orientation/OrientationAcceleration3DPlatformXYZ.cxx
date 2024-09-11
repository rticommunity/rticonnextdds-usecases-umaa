

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationAcceleration3DPlatformXYZ.idl
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
#include "OrientationAcceleration3DPlatformXYZPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "OrientationAcceleration3DPlatformXYZ.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- OrientationAcceleration3DPlatformXYZ: 

            OrientationAcceleration3DPlatformXYZ::OrientationAcceleration3DPlatformXYZ() :
                m_xAccel_ (0.0) ,
                m_yAccel_ (0.0) ,
                m_zAccel_ (0.0)  {

            }   

            OrientationAcceleration3DPlatformXYZ::OrientationAcceleration3DPlatformXYZ (double xAccel_,double yAccel_,double zAccel_):
                m_xAccel_(xAccel_), 
                m_yAccel_(yAccel_), 
                m_zAccel_(zAccel_) {
            }

            void OrientationAcceleration3DPlatformXYZ::swap(OrientationAcceleration3DPlatformXYZ& other_)  noexcept 
            {
                using std::swap;
                swap(m_xAccel_, other_.m_xAccel_);
                swap(m_yAccel_, other_.m_yAccel_);
                swap(m_zAccel_, other_.m_zAccel_);
            }  

            bool OrientationAcceleration3DPlatformXYZ::operator == (const OrientationAcceleration3DPlatformXYZ& other_) const {
                if (std::fabs(m_xAccel_ - other_.m_xAccel_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_xAccel_ - other_.m_xAccel_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_yAccel_ - other_.m_yAccel_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_yAccel_ - other_.m_yAccel_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_zAccel_ - other_.m_zAccel_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_zAccel_ - other_.m_zAccel_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool OrientationAcceleration3DPlatformXYZ::operator != (const OrientationAcceleration3DPlatformXYZ& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const OrientationAcceleration3DPlatformXYZ& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "xAccel: " << std::setprecision(15) << sample.xAccel ()<<", ";
                o << "yAccel: " << std::setprecision(15) << sample.yAccel ()<<", ";
                o << "zAccel: " << std::setprecision(15) << sample.zAccel ();
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
        struct native_type_code< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OrientationAcceleration3DPlatformXYZ_g_tc_members[3]=
                {

                    {
                        (char *)"xAccel",/* Member name */
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
                        (char *)"yAccel",/* Member name */
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
                        (char *)"zAccel",/* Member name */
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
                    }
                };

                static DDS_TypeCode OrientationAcceleration3DPlatformXYZ_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        OrientationAcceleration3DPlatformXYZ_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OrientationAcceleration3DPlatformXYZ*/

                if (is_initialized) {
                    return &OrientationAcceleration3DPlatformXYZ_g_tc;
                }

                is_initialized = RTI_TRUE;

                OrientationAcceleration3DPlatformXYZ_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                OrientationAcceleration3DPlatformXYZ_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::AngleAcceleration_AliasTag_t>::get().native();
                OrientationAcceleration3DPlatformXYZ_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::AngleAcceleration_AliasTag_t>::get().native();
                OrientationAcceleration3DPlatformXYZ_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::AngleAcceleration_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                OrientationAcceleration3DPlatformXYZ_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3DPlatformXYZ_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                OrientationAcceleration3DPlatformXYZ_g_tc._data._sampleAccessInfo = sample_access_info();
                OrientationAcceleration3DPlatformXYZ_g_tc._data._typePlugin = type_plugin_info();    

                return &OrientationAcceleration3DPlatformXYZ_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ *sample;

                static RTIXCdrMemberAccessInfo OrientationAcceleration3DPlatformXYZ_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OrientationAcceleration3DPlatformXYZ_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OrientationAcceleration3DPlatformXYZ_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ);
                if (sample == NULL) {
                    return NULL;
                }

                OrientationAcceleration3DPlatformXYZ_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->xAccel() - (char *)sample);

                OrientationAcceleration3DPlatformXYZ_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yAccel() - (char *)sample);

                OrientationAcceleration3DPlatformXYZ_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zAccel() - (char *)sample);

                OrientationAcceleration3DPlatformXYZ_g_sampleAccessInfo.memberAccessInfos = 
                OrientationAcceleration3DPlatformXYZ_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OrientationAcceleration3DPlatformXYZ_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OrientationAcceleration3DPlatformXYZ_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OrientationAcceleration3DPlatformXYZ_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OrientationAcceleration3DPlatformXYZ_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ >;

                OrientationAcceleration3DPlatformXYZ_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OrientationAcceleration3DPlatformXYZ_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OrientationAcceleration3DPlatformXYZ_g_typePlugin = 
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

                return &OrientationAcceleration3DPlatformXYZ_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ >::reset_sample(::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ& sample) 
        {
            sample.xAccel(0.0);
            sample.yAccel(0.0);
            sample.zAccel(0.0);
        }

        void topic_type_support< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ >::allocate_sample(::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
