

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnalogSensorErrorType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "AnalogSensorErrorTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "AnalogSensorErrorType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace SensorManagement {

            // ---- AnalogSensorErrorType: 

            AnalogSensorErrorType::AnalogSensorErrorType() :
                m_errorCode_(UMAA::Common::MaritimeEnumeration::AnalogSensorErrorCodeEnumType::AnalogSensorErrorCodeEnumType::INVALID_FORMAT) ,
                m_errorMessage_ ("")  {

            }   

            AnalogSensorErrorType::AnalogSensorErrorType (const ::UMAA::Common::MaritimeEnumeration::AnalogSensorErrorCodeEnumType::AnalogSensorErrorCodeEnumType& errorCode_,const std::string& errorMessage_):
                m_errorCode_(errorCode_), 
                m_errorMessage_(errorMessage_) {
            }

            void AnalogSensorErrorType::swap(AnalogSensorErrorType& other_)  noexcept 
            {
                using std::swap;
                swap(m_errorCode_, other_.m_errorCode_);
                swap(m_errorMessage_, other_.m_errorMessage_);
            }  

            bool AnalogSensorErrorType::operator == (const AnalogSensorErrorType& other_) const {
                if (m_errorCode_ != other_.m_errorCode_) {
                    return false;
                }
                if (m_errorMessage_ != other_.m_errorMessage_) {
                    return false;
                }
                return true;
            }

            bool AnalogSensorErrorType::operator != (const AnalogSensorErrorType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const AnalogSensorErrorType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "errorCode: " << sample.errorCode ()<<", ";
                o << "errorMessage: " << sample.errorMessage ();
                o <<"]";
                return o;
            }

        } // namespace SensorManagement  

    } // namespace SEM  

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
        struct native_type_code< ::UMAA::SEM::SensorManagement::AnalogSensorErrorType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AnalogSensorErrorType_g_tc_members[2]=
                {

                    {
                        (char *)"errorCode",/* Member name */
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
                        (char *)"errorMessage",/* Member name */
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

                static DDS_TypeCode AnalogSensorErrorType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::SensorManagement::AnalogSensorErrorType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        AnalogSensorErrorType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AnalogSensorErrorType*/

                if (is_initialized) {
                    return &AnalogSensorErrorType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AnalogSensorErrorType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AnalogSensorErrorType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnalogSensorErrorCodeEnumType::AnalogSensorErrorCodeEnumType>::get().native();
                AnalogSensorErrorType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                AnalogSensorErrorType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                AnalogSensorErrorType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;
                AnalogSensorErrorType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                AnalogSensorErrorType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                AnalogSensorErrorType_g_tc._data._sampleAccessInfo = sample_access_info();
                AnalogSensorErrorType_g_tc._data._typePlugin = type_plugin_info();    

                return &AnalogSensorErrorType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::SensorManagement::AnalogSensorErrorType *sample;

                static RTIXCdrMemberAccessInfo AnalogSensorErrorType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AnalogSensorErrorType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AnalogSensorErrorType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::SensorManagement::AnalogSensorErrorType);
                if (sample == NULL) {
                    return NULL;
                }

                AnalogSensorErrorType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->errorCode() - (char *)sample);

                AnalogSensorErrorType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->errorMessage() - (char *)sample);

                AnalogSensorErrorType_g_sampleAccessInfo.memberAccessInfos = 
                AnalogSensorErrorType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::SensorManagement::AnalogSensorErrorType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AnalogSensorErrorType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AnalogSensorErrorType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AnalogSensorErrorType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AnalogSensorErrorType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::SensorManagement::AnalogSensorErrorType >;

                AnalogSensorErrorType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AnalogSensorErrorType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AnalogSensorErrorType_g_typePlugin = 
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

                return &AnalogSensorErrorType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::SensorManagement::AnalogSensorErrorType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::SensorManagement::AnalogSensorErrorType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::SensorManagement::AnalogSensorErrorType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::SensorManagement::AnalogSensorErrorTypePlugin_new,
                ::UMAA::SEM::SensorManagement::AnalogSensorErrorTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::SensorManagement::AnalogSensorErrorType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::SensorManagement::AnalogSensorErrorType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = AnalogSensorErrorTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = AnalogSensorErrorTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::SensorManagement::AnalogSensorErrorType >::from_cdr_buffer(::UMAA::SEM::SensorManagement::AnalogSensorErrorType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = AnalogSensorErrorTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::SensorManagement::AnalogSensorErrorType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::SensorManagement::AnalogSensorErrorType >::reset_sample(::UMAA::SEM::SensorManagement::AnalogSensorErrorType& sample) 
        {
            sample.errorCode(UMAA::Common::MaritimeEnumeration::AnalogSensorErrorCodeEnumType::AnalogSensorErrorCodeEnumType::INVALID_FORMAT);
            sample.errorMessage("");
        }

        void topic_type_support< ::UMAA::SEM::SensorManagement::AnalogSensorErrorType >::allocate_sample(::UMAA::SEM::SensorManagement::AnalogSensorErrorType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.errorCode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.errorMessage(),  -1, 1023L);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
