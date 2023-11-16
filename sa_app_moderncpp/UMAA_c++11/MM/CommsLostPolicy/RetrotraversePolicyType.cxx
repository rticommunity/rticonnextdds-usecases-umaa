

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RetrotraversePolicyType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "RetrotraversePolicyTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "RetrotraversePolicyType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace CommsLostPolicy {

            // ---- RetrotraversePolicyType: 

            RetrotraversePolicyType::RetrotraversePolicyType()  {

            }   

            RetrotraversePolicyType::RetrotraversePolicyType (const ::UMAA::MM::Retrotraverse::RetrotraverseType& retrotraversePolicy_,const ::dds::core::optional< ::UMAA::MM::BaseType::WaypointType >& waypointPolicy_):
                m_retrotraversePolicy_(retrotraversePolicy_), 
                m_waypointPolicy_(waypointPolicy_) {
            }

            void RetrotraversePolicyType::swap(RetrotraversePolicyType& other_)  noexcept 
            {
                using std::swap;
                swap(m_retrotraversePolicy_, other_.m_retrotraversePolicy_);
                swap(m_waypointPolicy_, other_.m_waypointPolicy_);
            }  

            bool RetrotraversePolicyType::operator == (const RetrotraversePolicyType& other_) const {
                if (m_retrotraversePolicy_ != other_.m_retrotraversePolicy_) {
                    return false;
                }
                if (m_waypointPolicy_ != other_.m_waypointPolicy_) {
                    return false;
                }
                return true;
            }

            bool RetrotraversePolicyType::operator != (const RetrotraversePolicyType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RetrotraversePolicyType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "retrotraversePolicy: " << sample.retrotraversePolicy ()<<", ";
                o << "waypointPolicy: " << sample.waypointPolicy ();
                o <<"]";
                return o;
            }

        } // namespace CommsLostPolicy  

    } // namespace MM  

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
        struct native_type_code< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RetrotraversePolicyType_g_tc_members[2]=
                {

                    {
                        (char *)"retrotraversePolicy",/* Member name */
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
                        (char *)"waypointPolicy",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RetrotraversePolicyType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::CommsLostPolicy::RetrotraversePolicyType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        RetrotraversePolicyType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RetrotraversePolicyType*/

                if (is_initialized) {
                    return &RetrotraversePolicyType_g_tc;
                }

                is_initialized = RTI_TRUE;

                RetrotraversePolicyType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RetrotraversePolicyType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::Retrotraverse::RetrotraverseType>::get().native();
                RetrotraversePolicyType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::WaypointType>::get().native();

                /* Initialize the values for member annotations. */

                RetrotraversePolicyType_g_tc._data._sampleAccessInfo = sample_access_info();
                RetrotraversePolicyType_g_tc._data._typePlugin = type_plugin_info();    

                return &RetrotraversePolicyType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType *sample;

                static RTIXCdrMemberAccessInfo RetrotraversePolicyType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RetrotraversePolicyType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RetrotraversePolicyType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType);
                if (sample == NULL) {
                    return NULL;
                }

                RetrotraversePolicyType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->retrotraversePolicy() - (char *)sample);

                RetrotraversePolicyType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointPolicy() - (char *)sample);

                RetrotraversePolicyType_g_sampleAccessInfo.memberAccessInfos = 
                RetrotraversePolicyType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RetrotraversePolicyType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RetrotraversePolicyType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RetrotraversePolicyType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RetrotraversePolicyType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >;

                RetrotraversePolicyType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RetrotraversePolicyType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RetrotraversePolicyType_g_typePlugin = 
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

                return &RetrotraversePolicyType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyTypePlugin_new,
                ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RetrotraversePolicyTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RetrotraversePolicyTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >::from_cdr_buffer(::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RetrotraversePolicyTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >::reset_sample(::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType& sample) 
        {
            ::rti::topic::reset_sample(sample.retrotraversePolicy());
            ::rti::topic::reset_sample(sample.waypointPolicy());
        }

        void topic_type_support< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >::allocate_sample(::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.retrotraversePolicy(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
