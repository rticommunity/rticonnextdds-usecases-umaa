

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationAcceleration3D.idl
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
#include "OrientationAcceleration3DPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "OrientationAcceleration3D.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- OrientationAcceleration3D: 

            OrientationAcceleration3D::OrientationAcceleration3D() :
                m_pitchAccelY_ (0.0) ,
                m_rollAccelX_ (0.0) ,
                m_yawAccelZ_ (0.0)  {

            }   

            OrientationAcceleration3D::OrientationAcceleration3D (double pitchAccelY_,double rollAccelX_,double yawAccelZ_):
                m_pitchAccelY_(pitchAccelY_), 
                m_rollAccelX_(rollAccelX_), 
                m_yawAccelZ_(yawAccelZ_) {
            }

            void OrientationAcceleration3D::swap(OrientationAcceleration3D& other_)  noexcept 
            {
                using std::swap;
                swap(m_pitchAccelY_, other_.m_pitchAccelY_);
                swap(m_rollAccelX_, other_.m_rollAccelX_);
                swap(m_yawAccelZ_, other_.m_yawAccelZ_);
            }  

            bool OrientationAcceleration3D::operator == (const OrientationAcceleration3D& other_) const {
                if (std::fabs(m_pitchAccelY_ - other_.m_pitchAccelY_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pitchAccelY_ - other_.m_pitchAccelY_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rollAccelX_ - other_.m_rollAccelX_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rollAccelX_ - other_.m_rollAccelX_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_yawAccelZ_ - other_.m_yawAccelZ_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_yawAccelZ_ - other_.m_yawAccelZ_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool OrientationAcceleration3D::operator != (const OrientationAcceleration3D& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const OrientationAcceleration3D& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pitchAccelY: " << std::setprecision(15) << sample.pitchAccelY ()<<", ";
                o << "rollAccelX: " << std::setprecision(15) << sample.rollAccelX ()<<", ";
                o << "yawAccelZ: " << std::setprecision(15) << sample.yawAccelZ ();
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
        struct native_type_code< ::UMAA::Common::Measurement::OrientationAcceleration3D > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OrientationAcceleration3D_g_tc_members[3]=
                {

                    {
                        (char *)"pitchAccelY",/* Member name */
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
                        (char *)"rollAccelX",/* Member name */
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
                        (char *)"yawAccelZ",/* Member name */
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

                static DDS_TypeCode OrientationAcceleration3D_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::OrientationAcceleration3D", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        OrientationAcceleration3D_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OrientationAcceleration3D*/

                if (is_initialized) {
                    return &OrientationAcceleration3D_g_tc;
                }

                is_initialized = RTI_TRUE;

                OrientationAcceleration3D_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                OrientationAcceleration3D_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PitchAcceleration_AliasTag_t>::get().native();
                OrientationAcceleration3D_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RollAcceleration_AliasTag_t>::get().native();
                OrientationAcceleration3D_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::YawAcceleration_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                OrientationAcceleration3D_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3D_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                OrientationAcceleration3D_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3D_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationAcceleration3D_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3D_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                OrientationAcceleration3D_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3D_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                OrientationAcceleration3D_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3D_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationAcceleration3D_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3D_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                OrientationAcceleration3D_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3D_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                OrientationAcceleration3D_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3D_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationAcceleration3D_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationAcceleration3D_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                OrientationAcceleration3D_g_tc._data._sampleAccessInfo = sample_access_info();
                OrientationAcceleration3D_g_tc._data._typePlugin = type_plugin_info();    

                return &OrientationAcceleration3D_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::OrientationAcceleration3D *sample;

                static RTIXCdrMemberAccessInfo OrientationAcceleration3D_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OrientationAcceleration3D_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OrientationAcceleration3D_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::OrientationAcceleration3D);
                if (sample == NULL) {
                    return NULL;
                }

                OrientationAcceleration3D_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchAccelY() - (char *)sample);

                OrientationAcceleration3D_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rollAccelX() - (char *)sample);

                OrientationAcceleration3D_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yawAccelZ() - (char *)sample);

                OrientationAcceleration3D_g_sampleAccessInfo.memberAccessInfos = 
                OrientationAcceleration3D_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::OrientationAcceleration3D);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OrientationAcceleration3D_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OrientationAcceleration3D_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OrientationAcceleration3D_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OrientationAcceleration3D_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::OrientationAcceleration3D >;

                OrientationAcceleration3D_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OrientationAcceleration3D_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OrientationAcceleration3D_g_typePlugin = 
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

                return &OrientationAcceleration3D_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::OrientationAcceleration3D >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::OrientationAcceleration3D >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::OrientationAcceleration3D >::reset_sample(::UMAA::Common::Measurement::OrientationAcceleration3D& sample) 
        {
            sample.pitchAccelY(0.0);
            sample.rollAccelX(0.0);
            sample.yawAccelZ(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::OrientationAcceleration3D >::allocate_sample(::UMAA::Common::Measurement::OrientationAcceleration3D& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE