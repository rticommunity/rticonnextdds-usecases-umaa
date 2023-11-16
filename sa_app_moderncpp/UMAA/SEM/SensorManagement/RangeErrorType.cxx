

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeErrorType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "RangeErrorType.hpp"
#include "RangeErrorTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace SensorManagement {

            // ---- RangeErrorType: 

            RangeErrorType::RangeErrorType() :
                m_errorCode_(UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType::INVALID_HORIZONTAL_FOV) ,
                m_errorMessage_ ("")  {
            }   

            RangeErrorType::RangeErrorType (const UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType& errorCode,const std::string& errorMessage):
                m_errorCode_( errorCode ),
                m_errorMessage_( errorMessage ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            RangeErrorType::RangeErrorType(RangeErrorType&& other_) OMG_NOEXCEPT  :m_errorCode_ (std::move(other_.m_errorCode_))
            ,
            m_errorMessage_ (std::move(other_.m_errorMessage_))
            {
            } 

            RangeErrorType& RangeErrorType::operator=(RangeErrorType&&  other_) OMG_NOEXCEPT {
                RangeErrorType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void RangeErrorType::swap(RangeErrorType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_errorCode_, other_.m_errorCode_);
                swap(m_errorMessage_, other_.m_errorMessage_);
            }  

            bool RangeErrorType::operator == (const RangeErrorType& other_) const {
                if (m_errorCode_ != other_.m_errorCode_) {
                    return false;
                }
                if (m_errorMessage_ != other_.m_errorMessage_) {
                    return false;
                }
                return true;
            }
            bool RangeErrorType::operator != (const RangeErrorType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RangeErrorType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "errorCode: " << sample.errorCode()<<", ";
                o << "errorMessage: " << sample.errorMessage() ;
                o <<"]";
                return o;
            }

        } // namespace SensorManagement  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::SensorManagement::RangeErrorType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RangeErrorType_g_tc_members[2]=
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

                static DDS_TypeCode RangeErrorType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::SensorManagement::RangeErrorType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        RangeErrorType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RangeErrorType*/

                if (is_initialized) {
                    return &RangeErrorType_g_tc;
                }

                RangeErrorType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RangeErrorType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType>::get().native();
                RangeErrorType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                RangeErrorType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                RangeErrorType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                RangeErrorType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                RangeErrorType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                RangeErrorType_g_tc._data._sampleAccessInfo = sample_access_info();
                RangeErrorType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RangeErrorType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::SensorManagement::RangeErrorType *sample;

                static RTIXCdrMemberAccessInfo RangeErrorType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RangeErrorType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RangeErrorType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::SensorManagement::RangeErrorType);
                if (sample == NULL) {
                    return NULL;
                }

                RangeErrorType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->errorCode() - (char *)sample);

                RangeErrorType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->errorMessage() - (char *)sample);

                RangeErrorType_g_sampleAccessInfo.memberAccessInfos = 
                RangeErrorType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::SensorManagement::RangeErrorType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RangeErrorType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RangeErrorType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RangeErrorType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RangeErrorType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::SensorManagement::RangeErrorType >;

                RangeErrorType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RangeErrorType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RangeErrorType_g_typePlugin = 
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
                    NULL
                };

                return &RangeErrorType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::SensorManagement::RangeErrorType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::SensorManagement::RangeErrorType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::SensorManagement::RangeErrorType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::SensorManagement::RangeErrorTypePlugin_new,
                UMAA::SEM::SensorManagement::RangeErrorTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::SensorManagement::RangeErrorType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::SensorManagement::RangeErrorType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RangeErrorTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RangeErrorTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::SensorManagement::RangeErrorType >::from_cdr_buffer(UMAA::SEM::SensorManagement::RangeErrorType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RangeErrorTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::SensorManagement::RangeErrorType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::SensorManagement::RangeErrorType >::reset_sample(UMAA::SEM::SensorManagement::RangeErrorType& sample) 
        {
            sample.errorCode(UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType::INVALID_HORIZONTAL_FOV);
            sample.errorMessage("");
        }

        void topic_type_support< UMAA::SEM::SensorManagement::RangeErrorType >::allocate_sample(UMAA::SEM::SensorManagement::RangeErrorType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.errorCode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.errorMessage(),  -1, 1023L);
        }

    }
}  

