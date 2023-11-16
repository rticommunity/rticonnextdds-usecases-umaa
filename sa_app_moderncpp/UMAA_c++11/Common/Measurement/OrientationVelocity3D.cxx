

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationVelocity3D.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
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
#include "OrientationVelocity3DPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "OrientationVelocity3D.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- OrientationVelocity3D: 

            OrientationVelocity3D::OrientationVelocity3D() :
                m_pitchRateY_ (0.0) ,
                m_rollRateX_ (0.0) ,
                m_yawRateZ_ (0.0)  {

            }   

            OrientationVelocity3D::OrientationVelocity3D (double pitchRateY_,double rollRateX_,double yawRateZ_):
                m_pitchRateY_(pitchRateY_), 
                m_rollRateX_(rollRateX_), 
                m_yawRateZ_(yawRateZ_) {
            }

            void OrientationVelocity3D::swap(OrientationVelocity3D& other_)  noexcept 
            {
                using std::swap;
                swap(m_pitchRateY_, other_.m_pitchRateY_);
                swap(m_rollRateX_, other_.m_rollRateX_);
                swap(m_yawRateZ_, other_.m_yawRateZ_);
            }  

            bool OrientationVelocity3D::operator == (const OrientationVelocity3D& other_) const {
                if (std::fabs(m_pitchRateY_ - other_.m_pitchRateY_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pitchRateY_ - other_.m_pitchRateY_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rollRateX_ - other_.m_rollRateX_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rollRateX_ - other_.m_rollRateX_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_yawRateZ_ - other_.m_yawRateZ_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_yawRateZ_ - other_.m_yawRateZ_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool OrientationVelocity3D::operator != (const OrientationVelocity3D& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const OrientationVelocity3D& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pitchRateY: " << std::setprecision(15) << sample.pitchRateY ()<<", ";
                o << "rollRateX: " << std::setprecision(15) << sample.rollRateX ()<<", ";
                o << "yawRateZ: " << std::setprecision(15) << sample.yawRateZ ();
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
        struct native_type_code< ::UMAA::Common::Measurement::OrientationVelocity3D > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OrientationVelocity3D_g_tc_members[3]=
                {

                    {
                        (char *)"pitchRateY",/* Member name */
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
                        (char *)"rollRateX",/* Member name */
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
                        (char *)"yawRateZ",/* Member name */
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

                static DDS_TypeCode OrientationVelocity3D_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::OrientationVelocity3D", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        OrientationVelocity3D_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OrientationVelocity3D*/

                if (is_initialized) {
                    return &OrientationVelocity3D_g_tc;
                }

                is_initialized = RTI_TRUE;

                OrientationVelocity3D_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                OrientationVelocity3D_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PitchRate_AliasTag_t>::get().native();
                OrientationVelocity3D_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RollRate_AliasTag_t>::get().native();
                OrientationVelocity3D_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::YawRate_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                OrientationVelocity3D_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVelocity3D_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                OrientationVelocity3D_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVelocity3D_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                OrientationVelocity3D_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVelocity3D_g_tc_members[0]._annotations._maxValue._u.double_value = 32.767;
                OrientationVelocity3D_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVelocity3D_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                OrientationVelocity3D_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVelocity3D_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationVelocity3D_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVelocity3D_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                OrientationVelocity3D_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVelocity3D_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                OrientationVelocity3D_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVelocity3D_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                OrientationVelocity3D_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                OrientationVelocity3D_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                OrientationVelocity3D_g_tc._data._sampleAccessInfo = sample_access_info();
                OrientationVelocity3D_g_tc._data._typePlugin = type_plugin_info();    

                return &OrientationVelocity3D_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::OrientationVelocity3D *sample;

                static RTIXCdrMemberAccessInfo OrientationVelocity3D_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OrientationVelocity3D_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OrientationVelocity3D_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::OrientationVelocity3D);
                if (sample == NULL) {
                    return NULL;
                }

                OrientationVelocity3D_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchRateY() - (char *)sample);

                OrientationVelocity3D_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rollRateX() - (char *)sample);

                OrientationVelocity3D_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yawRateZ() - (char *)sample);

                OrientationVelocity3D_g_sampleAccessInfo.memberAccessInfos = 
                OrientationVelocity3D_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::OrientationVelocity3D);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OrientationVelocity3D_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OrientationVelocity3D_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OrientationVelocity3D_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OrientationVelocity3D_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::OrientationVelocity3D >;

                OrientationVelocity3D_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OrientationVelocity3D_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OrientationVelocity3D_g_typePlugin = 
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

                return &OrientationVelocity3D_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::OrientationVelocity3D >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::OrientationVelocity3D >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::OrientationVelocity3D >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::OrientationVelocity3DPlugin_new,
                ::UMAA::Common::Measurement::OrientationVelocity3DPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::OrientationVelocity3D >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::OrientationVelocity3D& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = OrientationVelocity3DPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = OrientationVelocity3DPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::OrientationVelocity3D >::from_cdr_buffer(::UMAA::Common::Measurement::OrientationVelocity3D& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = OrientationVelocity3DPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::OrientationVelocity3D from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::OrientationVelocity3D >::reset_sample(::UMAA::Common::Measurement::OrientationVelocity3D& sample) 
        {
            sample.pitchRateY(0.0);
            sample.rollRateX(0.0);
            sample.yawRateZ(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::OrientationVelocity3D >::allocate_sample(::UMAA::Common::Measurement::OrientationVelocity3D& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
