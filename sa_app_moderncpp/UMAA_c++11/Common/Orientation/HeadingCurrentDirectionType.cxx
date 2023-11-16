

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingCurrentDirectionType.idl
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
#include "HeadingCurrentDirectionTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "HeadingCurrentDirectionType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Orientation {

            // ---- HeadingCurrentDirectionType: 

            HeadingCurrentDirectionType::HeadingCurrentDirectionType() :
                m_headingCurrentDirection_ (0.0)  {

            }   

            HeadingCurrentDirectionType::HeadingCurrentDirectionType (double headingCurrentDirection_):
                m_headingCurrentDirection_(headingCurrentDirection_) {
            }

            void HeadingCurrentDirectionType::swap(HeadingCurrentDirectionType& other_)  noexcept 
            {
                using std::swap;
                swap(m_headingCurrentDirection_, other_.m_headingCurrentDirection_);
            }  

            bool HeadingCurrentDirectionType::operator == (const HeadingCurrentDirectionType& other_) const {
                if (std::fabs(m_headingCurrentDirection_ - other_.m_headingCurrentDirection_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_headingCurrentDirection_ - other_.m_headingCurrentDirection_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool HeadingCurrentDirectionType::operator != (const HeadingCurrentDirectionType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const HeadingCurrentDirectionType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "headingCurrentDirection: " << std::setprecision(15) << sample.headingCurrentDirection ();
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
        struct native_type_code< ::UMAA::Common::Orientation::HeadingCurrentDirectionType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HeadingCurrentDirectionType_g_tc_members[1]=
                {

                    {
                        (char *)"headingCurrentDirection",/* Member name */
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

                static DDS_TypeCode HeadingCurrentDirectionType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Orientation::HeadingCurrentDirectionType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        HeadingCurrentDirectionType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HeadingCurrentDirectionType*/

                if (is_initialized) {
                    return &HeadingCurrentDirectionType_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingCurrentDirectionType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HeadingCurrentDirectionType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Heading_CurrentDirection_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                HeadingCurrentDirectionType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingCurrentDirectionType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                HeadingCurrentDirectionType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingCurrentDirectionType_g_tc_members[0]._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
                HeadingCurrentDirectionType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                HeadingCurrentDirectionType_g_tc_members[0]._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

                HeadingCurrentDirectionType_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingCurrentDirectionType_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingCurrentDirectionType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Orientation::HeadingCurrentDirectionType *sample;

                static RTIXCdrMemberAccessInfo HeadingCurrentDirectionType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingCurrentDirectionType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingCurrentDirectionType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Orientation::HeadingCurrentDirectionType);
                if (sample == NULL) {
                    return NULL;
                }

                HeadingCurrentDirectionType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->headingCurrentDirection() - (char *)sample);

                HeadingCurrentDirectionType_g_sampleAccessInfo.memberAccessInfos = 
                HeadingCurrentDirectionType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Orientation::HeadingCurrentDirectionType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingCurrentDirectionType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingCurrentDirectionType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingCurrentDirectionType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingCurrentDirectionType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Orientation::HeadingCurrentDirectionType >;

                HeadingCurrentDirectionType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingCurrentDirectionType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingCurrentDirectionType_g_typePlugin = 
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

                return &HeadingCurrentDirectionType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Orientation::HeadingCurrentDirectionType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Orientation::HeadingCurrentDirectionType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Orientation::HeadingCurrentDirectionType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Orientation::HeadingCurrentDirectionTypePlugin_new,
                ::UMAA::Common::Orientation::HeadingCurrentDirectionTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Orientation::HeadingCurrentDirectionType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Orientation::HeadingCurrentDirectionType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HeadingCurrentDirectionTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HeadingCurrentDirectionTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Orientation::HeadingCurrentDirectionType >::from_cdr_buffer(::UMAA::Common::Orientation::HeadingCurrentDirectionType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HeadingCurrentDirectionTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Orientation::HeadingCurrentDirectionType from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Orientation::HeadingCurrentDirectionType >::reset_sample(::UMAA::Common::Orientation::HeadingCurrentDirectionType& sample) 
        {
            sample.headingCurrentDirection(0.0);
        }

        void topic_type_support< ::UMAA::Common::Orientation::HeadingCurrentDirectionType >::allocate_sample(::UMAA::Common::Orientation::HeadingCurrentDirectionType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
