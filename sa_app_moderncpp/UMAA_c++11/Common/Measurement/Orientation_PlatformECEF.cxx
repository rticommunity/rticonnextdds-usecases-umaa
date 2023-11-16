

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation_PlatformECEF.idl
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
#include "Orientation_PlatformECEFPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Orientation_PlatformECEF.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- Orientation_PlatformECEF: 

            Orientation_PlatformECEF::Orientation_PlatformECEF() :
                m_pitchY_ (0.0) ,
                m_rollX_ (0.0) ,
                m_yawZ_ (0.0)  {

            }   

            Orientation_PlatformECEF::Orientation_PlatformECEF (double pitchY_,double rollX_,double yawZ_):
                m_pitchY_(pitchY_), 
                m_rollX_(rollX_), 
                m_yawZ_(yawZ_) {
            }

            void Orientation_PlatformECEF::swap(Orientation_PlatformECEF& other_)  noexcept 
            {
                using std::swap;
                swap(m_pitchY_, other_.m_pitchY_);
                swap(m_rollX_, other_.m_rollX_);
                swap(m_yawZ_, other_.m_yawZ_);
            }  

            bool Orientation_PlatformECEF::operator == (const Orientation_PlatformECEF& other_) const {
                if (std::fabs(m_pitchY_ - other_.m_pitchY_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pitchY_ - other_.m_pitchY_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rollX_ - other_.m_rollX_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rollX_ - other_.m_rollX_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_yawZ_ - other_.m_yawZ_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_yawZ_ - other_.m_yawZ_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool Orientation_PlatformECEF::operator != (const Orientation_PlatformECEF& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Orientation_PlatformECEF& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pitchY: " << std::setprecision(15) << sample.pitchY ()<<", ";
                o << "rollX: " << std::setprecision(15) << sample.rollX ()<<", ";
                o << "yawZ: " << std::setprecision(15) << sample.yawZ ();
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
        struct native_type_code< ::UMAA::Common::Measurement::Orientation_PlatformECEF > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Orientation_PlatformECEF_g_tc_members[3]=
                {

                    {
                        (char *)"pitchY",/* Member name */
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
                        (char *)"rollX",/* Member name */
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
                        (char *)"yawZ",/* Member name */
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

                static DDS_TypeCode Orientation_PlatformECEF_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::Orientation_PlatformECEF", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Orientation_PlatformECEF_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Orientation_PlatformECEF*/

                if (is_initialized) {
                    return &Orientation_PlatformECEF_g_tc;
                }

                is_initialized = RTI_TRUE;

                Orientation_PlatformECEF_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Orientation_PlatformECEF_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                Orientation_PlatformECEF_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                Orientation_PlatformECEF_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                Orientation_PlatformECEF_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation_PlatformECEF_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                Orientation_PlatformECEF_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation_PlatformECEF_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Orientation_PlatformECEF_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation_PlatformECEF_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                Orientation_PlatformECEF_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation_PlatformECEF_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                Orientation_PlatformECEF_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation_PlatformECEF_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Orientation_PlatformECEF_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation_PlatformECEF_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                Orientation_PlatformECEF_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation_PlatformECEF_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                Orientation_PlatformECEF_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation_PlatformECEF_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Orientation_PlatformECEF_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation_PlatformECEF_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Orientation_PlatformECEF_g_tc._data._sampleAccessInfo = sample_access_info();
                Orientation_PlatformECEF_g_tc._data._typePlugin = type_plugin_info();    

                return &Orientation_PlatformECEF_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::Orientation_PlatformECEF *sample;

                static RTIXCdrMemberAccessInfo Orientation_PlatformECEF_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Orientation_PlatformECEF_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Orientation_PlatformECEF_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::Orientation_PlatformECEF);
                if (sample == NULL) {
                    return NULL;
                }

                Orientation_PlatformECEF_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchY() - (char *)sample);

                Orientation_PlatformECEF_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rollX() - (char *)sample);

                Orientation_PlatformECEF_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yawZ() - (char *)sample);

                Orientation_PlatformECEF_g_sampleAccessInfo.memberAccessInfos = 
                Orientation_PlatformECEF_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Orientation_PlatformECEF);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Orientation_PlatformECEF_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Orientation_PlatformECEF_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Orientation_PlatformECEF_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Orientation_PlatformECEF_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Orientation_PlatformECEF >;

                Orientation_PlatformECEF_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Orientation_PlatformECEF_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Orientation_PlatformECEF_g_typePlugin = 
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

                return &Orientation_PlatformECEF_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::Orientation_PlatformECEF >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Orientation_PlatformECEF >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::Orientation_PlatformECEF >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::Orientation_PlatformECEFPlugin_new,
                ::UMAA::Common::Measurement::Orientation_PlatformECEFPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::Orientation_PlatformECEF >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::Orientation_PlatformECEF& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Orientation_PlatformECEFPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Orientation_PlatformECEFPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::Orientation_PlatformECEF >::from_cdr_buffer(::UMAA::Common::Measurement::Orientation_PlatformECEF& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Orientation_PlatformECEFPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::Orientation_PlatformECEF from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::Orientation_PlatformECEF >::reset_sample(::UMAA::Common::Measurement::Orientation_PlatformECEF& sample) 
        {
            sample.pitchY(0.0);
            sample.rollX(0.0);
            sample.yawZ(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::Orientation_PlatformECEF >::allocate_sample(::UMAA::Common::Measurement::Orientation_PlatformECEF& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
