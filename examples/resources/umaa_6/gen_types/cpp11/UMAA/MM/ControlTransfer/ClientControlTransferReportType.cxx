

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ClientControlTransferReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ClientControlTransferReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ClientControlTransferReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace ControlTransfer {

            // ---- ClientControlTransferReportType: 

            ClientControlTransferReportType::ClientControlTransferReportType() :
                m_authorityLevel_ (0) ,
                m_result_(UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType::DEFERRED)  {

            }   

            ClientControlTransferReportType::ClientControlTransferReportType (int32_t authorityLevel_,const ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType& result_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_authorityLevel_(authorityLevel_), 
                m_result_(result_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void ClientControlTransferReportType::swap(ClientControlTransferReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_authorityLevel_, other_.m_authorityLevel_);
                swap(m_result_, other_.m_result_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool ClientControlTransferReportType::operator == (const ClientControlTransferReportType& other_) const {
                if (m_authorityLevel_ != other_.m_authorityLevel_) {
                    return false;
                }
                if (m_result_ != other_.m_result_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool ClientControlTransferReportType::operator != (const ClientControlTransferReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ClientControlTransferReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "authorityLevel: " << sample.authorityLevel ()<<", ";
                o << "result: " << sample.result ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace ControlTransfer  

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
        struct native_type_code< ::UMAA::MM::ControlTransfer::ClientControlTransferReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ClientControlTransferReportType_g_tc_members[4]=
                {

                    {
                        (char *)"authorityLevel",/* Member name */
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
                        (char *)"result",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                    }, 
                    {
                        (char *)"source",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ClientControlTransferReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::ControlTransfer::ClientControlTransferReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ClientControlTransferReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ClientControlTransferReportType*/

                if (is_initialized) {
                    return &ClientControlTransferReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ClientControlTransferReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ClientControlTransferReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                ClientControlTransferReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType>::get().native();
                ClientControlTransferReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ClientControlTransferReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                ClientControlTransferReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                ClientControlTransferReportType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                ClientControlTransferReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                ClientControlTransferReportType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                ClientControlTransferReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                ClientControlTransferReportType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                ClientControlTransferReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ClientControlTransferReportType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                ClientControlTransferReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                ClientControlTransferReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &ClientControlTransferReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::ControlTransfer::ClientControlTransferReportType *sample;

                static RTIXCdrMemberAccessInfo ClientControlTransferReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ClientControlTransferReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ClientControlTransferReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::ControlTransfer::ClientControlTransferReportType);
                if (sample == NULL) {
                    return NULL;
                }

                ClientControlTransferReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->authorityLevel() - (char *)sample);

                ClientControlTransferReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->result() - (char *)sample);

                ClientControlTransferReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ClientControlTransferReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ClientControlTransferReportType_g_sampleAccessInfo.memberAccessInfos = 
                ClientControlTransferReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::ControlTransfer::ClientControlTransferReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ClientControlTransferReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ClientControlTransferReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ClientControlTransferReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ClientControlTransferReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::ControlTransfer::ClientControlTransferReportType >;

                ClientControlTransferReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ClientControlTransferReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ClientControlTransferReportType_g_typePlugin = 
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

                return &ClientControlTransferReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::ControlTransfer::ClientControlTransferReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::ControlTransfer::ClientControlTransferReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::ControlTransfer::ClientControlTransferReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::ControlTransfer::ClientControlTransferReportTypePlugin_new,
                ::UMAA::MM::ControlTransfer::ClientControlTransferReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::ControlTransfer::ClientControlTransferReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::ControlTransfer::ClientControlTransferReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ClientControlTransferReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ClientControlTransferReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::ControlTransfer::ClientControlTransferReportType >::from_cdr_buffer(::UMAA::MM::ControlTransfer::ClientControlTransferReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ClientControlTransferReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::ControlTransfer::ClientControlTransferReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::ControlTransfer::ClientControlTransferReportType >::reset_sample(::UMAA::MM::ControlTransfer::ClientControlTransferReportType& sample) 
        {
            sample.authorityLevel(0);
            sample.result(UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType::DEFERRED);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::MM::ControlTransfer::ClientControlTransferReportType >::allocate_sample(::UMAA::MM::ControlTransfer::ClientControlTransferReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.result(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE