

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationVel3D.idl
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
#include "OrientationVel3DPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "OrientationVel3D.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- OrientationVel3D: 

            OrientationVel3D::OrientationVel3D() :
                m_pitchRate_ (0.0) ,
                m_rollRate_ (0.0) ,
                m_yawRate_ (0.0)  {

            }   

            OrientationVel3D::OrientationVel3D (double pitchRate_,double rollRate_,double yawRate_):
                m_pitchRate_(pitchRate_), 
                m_rollRate_(rollRate_), 
                m_yawRate_(yawRate_) {
            }

            void OrientationVel3D::swap(OrientationVel3D& other_)  noexcept 
            {
                using std::swap;
                swap(m_pitchRate_, other_.m_pitchRate_);
                swap(m_rollRate_, other_.m_rollRate_);
                swap(m_yawRate_, other_.m_yawRate_);
            }  

            bool OrientationVel3D::operator == (const OrientationVel3D& other_) const {
                if (std::fabs(m_pitchRate_ - other_.m_pitchRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pitchRate_ - other_.m_pitchRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rollRate_ - other_.m_rollRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rollRate_ - other_.m_rollRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_yawRate_ - other_.m_yawRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_yawRate_ - other_.m_yawRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool OrientationVel3D::operator != (const OrientationVel3D& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const OrientationVel3D& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pitchRate: " << std::setprecision(15) << sample.pitchRate ()<<", ";
                o << "rollRate: " << std::setprecision(15) << sample.rollRate ()<<", ";
                o << "yawRate: " << std::setprecision(15) << sample.yawRate ();
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
        struct native_type_code< ::UMAA::Common::Measurement::OrientationVel3D > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OrientationVel3D_g_tc_members[3]=
                {

                    {
                        (char *)"pitchRate",/* Member name */
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
                        (char *)"rollRate",/* Member name */
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
                        (char *)"yawRate",/* Member name */
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

                static DDS_TypeCode OrientationVel3D_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::OrientationVel3D", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        OrientationVel3D_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OrientationVel3D*/

                if (is_initialized) {
                    return &OrientationVel3D_g_tc;
                }

                is_initialized = RTI_TRUE;

                OrientationVel3D_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                OrientationVel3D_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PitchRate_AliasTag_t>::get().native();
                OrientationVel3D_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RollRate_AliasTag_t>::get().native();
                OrientationVel3D_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::YawRate_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                OrientationVel3D_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVel3D_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                OrientationVel3D_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVel3D_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationVel3D_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVel3D_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                OrientationVel3D_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVel3D_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                OrientationVel3D_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVel3D_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationVel3D_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVel3D_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                OrientationVel3D_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVel3D_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                OrientationVel3D_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVel3D_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationVel3D_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVel3D_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                OrientationVel3D_g_tc._data._sampleAccessInfo = sample_access_info();
                OrientationVel3D_g_tc._data._typePlugin = type_plugin_info();    

                return &OrientationVel3D_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::OrientationVel3D *sample;

                static RTIXCdrMemberAccessInfo OrientationVel3D_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OrientationVel3D_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OrientationVel3D_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::OrientationVel3D);
                if (sample == NULL) {
                    return NULL;
                }

                OrientationVel3D_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchRate() - (char *)sample);

                OrientationVel3D_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rollRate() - (char *)sample);

                OrientationVel3D_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yawRate() - (char *)sample);

                OrientationVel3D_g_sampleAccessInfo.memberAccessInfos = 
                OrientationVel3D_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::OrientationVel3D);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OrientationVel3D_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OrientationVel3D_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OrientationVel3D_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OrientationVel3D_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::OrientationVel3D >;

                OrientationVel3D_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OrientationVel3D_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OrientationVel3D_g_typePlugin = 
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

                return &OrientationVel3D_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::OrientationVel3D >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::OrientationVel3D >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::OrientationVel3D >::reset_sample(::UMAA::Common::Measurement::OrientationVel3D& sample) 
        {
            sample.pitchRate(0.0);
            sample.rollRate(0.0);
            sample.yawRate(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::OrientationVel3D >::allocate_sample(::UMAA::Common::Measurement::OrientationVel3D& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
