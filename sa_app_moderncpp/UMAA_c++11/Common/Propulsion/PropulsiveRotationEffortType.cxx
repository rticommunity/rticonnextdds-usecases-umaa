

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsiveRotationEffortType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "PropulsiveRotationEffortTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PropulsiveRotationEffortType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Propulsion {

            // ---- PropulsiveRotationEffortType: 

            PropulsiveRotationEffortType::PropulsiveRotationEffortType()  {

            }   

            PropulsiveRotationEffortType::PropulsiveRotationEffortType (const ::UMAA::Common::Measurement::RotationalEffort& yawEffort_):
                m_yawEffort_(yawEffort_) {
            }

            void PropulsiveRotationEffortType::swap(PropulsiveRotationEffortType& other_)  noexcept 
            {
                using std::swap;
                swap(m_yawEffort_, other_.m_yawEffort_);
            }  

            bool PropulsiveRotationEffortType::operator == (const PropulsiveRotationEffortType& other_) const {
                if (m_yawEffort_ != other_.m_yawEffort_) {
                    return false;
                }
                return true;
            }

            bool PropulsiveRotationEffortType::operator != (const PropulsiveRotationEffortType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropulsiveRotationEffortType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "yawEffort: " << sample.yawEffort ();
                o <<"]";
                return o;
            }

        } // namespace Propulsion  

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
        struct native_type_code< ::UMAA::Common::Propulsion::PropulsiveRotationEffortType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsiveRotationEffortType_g_tc_members[1]=
                {

                    {
                        (char *)"yawEffort",/* Member name */
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

                static DDS_TypeCode PropulsiveRotationEffortType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Propulsion::PropulsiveRotationEffortType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PropulsiveRotationEffortType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsiveRotationEffortType*/

                if (is_initialized) {
                    return &PropulsiveRotationEffortType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsiveRotationEffortType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsiveRotationEffortType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RotationalEffort>::get().native();

                /* Initialize the values for member annotations. */

                PropulsiveRotationEffortType_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsiveRotationEffortType_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsiveRotationEffortType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Propulsion::PropulsiveRotationEffortType *sample;

                static RTIXCdrMemberAccessInfo PropulsiveRotationEffortType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsiveRotationEffortType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsiveRotationEffortType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Propulsion::PropulsiveRotationEffortType);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsiveRotationEffortType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yawEffort() - (char *)sample);

                PropulsiveRotationEffortType_g_sampleAccessInfo.memberAccessInfos = 
                PropulsiveRotationEffortType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Propulsion::PropulsiveRotationEffortType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsiveRotationEffortType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsiveRotationEffortType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsiveRotationEffortType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsiveRotationEffortType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Propulsion::PropulsiveRotationEffortType >;

                PropulsiveRotationEffortType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsiveRotationEffortType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsiveRotationEffortType_g_typePlugin = 
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

                return &PropulsiveRotationEffortType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Propulsion::PropulsiveRotationEffortType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Propulsion::PropulsiveRotationEffortType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Propulsion::PropulsiveRotationEffortType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Propulsion::PropulsiveRotationEffortTypePlugin_new,
                ::UMAA::Common::Propulsion::PropulsiveRotationEffortTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Propulsion::PropulsiveRotationEffortType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Propulsion::PropulsiveRotationEffortType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PropulsiveRotationEffortTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PropulsiveRotationEffortTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsiveRotationEffortType >::from_cdr_buffer(::UMAA::Common::Propulsion::PropulsiveRotationEffortType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PropulsiveRotationEffortTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Propulsion::PropulsiveRotationEffortType from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsiveRotationEffortType >::reset_sample(::UMAA::Common::Propulsion::PropulsiveRotationEffortType& sample) 
        {
            ::rti::topic::reset_sample(sample.yawEffort());
        }

        void topic_type_support< ::UMAA::Common::Propulsion::PropulsiveRotationEffortType >::allocate_sample(::UMAA::Common::Propulsion::PropulsiveRotationEffortType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.yawEffort(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
