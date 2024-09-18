

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SASConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "SASConfigReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SASConfigReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace SASConfig {

            // ---- SASConfigReportType: 

            SASConfigReportType::SASConfigReportType() :
                m_autoOffMode_(UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType::DEACTIVATE) ,
                m_name_ ("")  {

            }   

            SASConfigReportType::SASConfigReportType (const ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType& autoOffMode_,const std::string& name_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_autoOffMode_(autoOffMode_), 
                m_name_(name_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void SASConfigReportType::swap(SASConfigReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_autoOffMode_, other_.m_autoOffMode_);
                swap(m_name_, other_.m_name_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool SASConfigReportType::operator == (const SASConfigReportType& other_) const {
                if (m_autoOffMode_ != other_.m_autoOffMode_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
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

            bool SASConfigReportType::operator != (const SASConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SASConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "autoOffMode: " << sample.autoOffMode ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace SASConfig  

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
        struct native_type_code< ::UMAA::SEM::SASConfig::SASConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SASConfigReportType_g_tc_members[4]=
                {

                    {
                        (char *)"autoOffMode",/* Member name */
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
                        (char *)"name",/* Member name */
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

                static DDS_TypeCode SASConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::SASConfig::SASConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        SASConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SASConfigReportType*/

                if (is_initialized) {
                    return &SASConfigReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SASConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SASConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType>::get().native();
                SASConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier_AliasTag_t>::get().native();
                SASConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                SASConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                SASConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SASConfigReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;
                SASConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                SASConfigReportType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                SASConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                SASConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &SASConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::SASConfig::SASConfigReportType *sample;

                static RTIXCdrMemberAccessInfo SASConfigReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SASConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SASConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::SASConfig::SASConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                SASConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->autoOffMode() - (char *)sample);

                SASConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                SASConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                SASConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                SASConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                SASConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::SASConfig::SASConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SASConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SASConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SASConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SASConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::SASConfig::SASConfigReportType >;

                SASConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SASConfigReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SASConfigReportType_g_typePlugin = 
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

                return &SASConfigReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::SASConfig::SASConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::SASConfig::SASConfigReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::SASConfig::SASConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::SASConfig::SASConfigReportTypePlugin_new,
                ::UMAA::SEM::SASConfig::SASConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::SASConfig::SASConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::SASConfig::SASConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SASConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SASConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::SASConfig::SASConfigReportType >::from_cdr_buffer(::UMAA::SEM::SASConfig::SASConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SASConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::SASConfig::SASConfigReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::SASConfig::SASConfigReportType >::reset_sample(::UMAA::SEM::SASConfig::SASConfigReportType& sample) 
        {
            sample.autoOffMode(UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType::DEACTIVATE);
            sample.name("");
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SEM::SASConfig::SASConfigReportType >::allocate_sample(::UMAA::SEM::SASConfig::SASConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.autoOffMode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.name(),  -1, 2047L);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE