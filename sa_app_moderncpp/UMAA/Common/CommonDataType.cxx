

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommonDataType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "CommonDataType.hpp"
#include "CommonDataTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        // ---- CommonDataType: 

        CommonDataType::CommonDataType() :
            m_commandStatusReason_(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType::CANCELED) ,
            m_logMessage_ ("")  {
        }   

        CommonDataType::CommonDataType (const UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType& commandStatusReason,const std::string& logMessage):
            m_commandStatusReason_( commandStatusReason ),
            m_logMessage_( logMessage ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        CommonDataType::CommonDataType(CommonDataType&& other_) OMG_NOEXCEPT  :m_commandStatusReason_ (std::move(other_.m_commandStatusReason_))
        ,
        m_logMessage_ (std::move(other_.m_logMessage_))
        {
        } 

        CommonDataType& CommonDataType::operator=(CommonDataType&&  other_) OMG_NOEXCEPT {
            CommonDataType tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void CommonDataType::swap(CommonDataType& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_commandStatusReason_, other_.m_commandStatusReason_);
            swap(m_logMessage_, other_.m_logMessage_);
        }  

        bool CommonDataType::operator == (const CommonDataType& other_) const {
            if (m_commandStatusReason_ != other_.m_commandStatusReason_) {
                return false;
            }
            if (m_logMessage_ != other_.m_logMessage_) {
                return false;
            }
            return true;
        }
        bool CommonDataType::operator != (const CommonDataType& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const CommonDataType& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "commandStatusReason: " << sample.commandStatusReason()<<", ";
            o << "logMessage: " << sample.logMessage() ;
            o <<"]";
            return o;
        }

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::CommonDataType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommonDataType_g_tc_members[2]=
                {

                    {
                        (char *)"commandStatusReason",/* Member name */
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
                        (char *)"logMessage",/* Member name */
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

                static DDS_TypeCode CommonDataType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::CommonDataType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        CommonDataType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommonDataType*/

                if (is_initialized) {
                    return &CommonDataType_g_tc;
                }

                CommonDataType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommonDataType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType>::get().native();
                CommonDataType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringLongDescription_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                CommonDataType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CommonDataType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                CommonDataType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                CommonDataType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                CommonDataType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommonDataType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &CommonDataType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::CommonDataType *sample;

                static RTIXCdrMemberAccessInfo CommonDataType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommonDataType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommonDataType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::CommonDataType);
                if (sample == NULL) {
                    return NULL;
                }

                CommonDataType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatusReason() - (char *)sample);

                CommonDataType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->logMessage() - (char *)sample);

                CommonDataType_g_sampleAccessInfo.memberAccessInfos = 
                CommonDataType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::CommonDataType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommonDataType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommonDataType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommonDataType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommonDataType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::CommonDataType >;

                CommonDataType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommonDataType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommonDataType_g_typePlugin = 
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

                return &CommonDataType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::CommonDataType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::CommonDataType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::CommonDataType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::CommonDataTypePlugin_new,
                UMAA::Common::CommonDataTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::CommonDataType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::CommonDataType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CommonDataTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CommonDataTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::CommonDataType >::from_cdr_buffer(UMAA::Common::CommonDataType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CommonDataTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::CommonDataType from cdr buffer");
        }

        void topic_type_support< UMAA::Common::CommonDataType >::reset_sample(UMAA::Common::CommonDataType& sample) 
        {
            sample.commandStatusReason(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType::CANCELED);
            sample.logMessage("");
        }

        void topic_type_support< UMAA::Common::CommonDataType >::allocate_sample(UMAA::Common::CommonDataType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.commandStatusReason(),  -1, -1);
            ::rti::topic::allocate_sample(sample.logMessage(),  -1, 4095L);
        }

    }
}  

