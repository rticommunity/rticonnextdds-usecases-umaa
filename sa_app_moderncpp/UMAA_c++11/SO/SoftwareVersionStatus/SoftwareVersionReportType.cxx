

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SoftwareVersionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "SoftwareVersionReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SoftwareVersionReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace SoftwareVersionStatus {

            // ---- SoftwareVersionReportType: 

            SoftwareVersionReportType::SoftwareVersionReportType() :
                m_buildID_ ("") ,
                m_copyright_ ("") ,
                m_softwareDescription_ ("") ,
                m_version_ ("")  {

            }   

            SoftwareVersionReportType::SoftwareVersionReportType (const std::string& buildID_,const std::string& copyright_,const ::UMAA::Common::Measurement::NumericGUID& name_,const std::string& softwareDescription_,const std::string& version_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::Measurement::NumericGUID& softwareID_):
                m_buildID_(buildID_), 
                m_copyright_(copyright_), 
                m_name_(name_), 
                m_softwareDescription_(softwareDescription_), 
                m_version_(version_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_), 
                m_softwareID_(softwareID_) {
            }

            void SoftwareVersionReportType::swap(SoftwareVersionReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_buildID_, other_.m_buildID_);
                swap(m_copyright_, other_.m_copyright_);
                swap(m_name_, other_.m_name_);
                swap(m_softwareDescription_, other_.m_softwareDescription_);
                swap(m_version_, other_.m_version_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_softwareID_, other_.m_softwareID_);
            }  

            bool SoftwareVersionReportType::operator == (const SoftwareVersionReportType& other_) const {
                if (m_buildID_ != other_.m_buildID_) {
                    return false;
                }
                if (m_copyright_ != other_.m_copyright_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_softwareDescription_ != other_.m_softwareDescription_) {
                    return false;
                }
                if (m_version_ != other_.m_version_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_softwareID_ != other_.m_softwareID_) {
                    return false;
                }
                return true;
            }

            bool SoftwareVersionReportType::operator != (const SoftwareVersionReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SoftwareVersionReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "buildID: " << sample.buildID ()<<", ";
                o << "copyright: " << sample.copyright ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "softwareDescription: " << sample.softwareDescription ()<<", ";
                o << "version: " << sample.version ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "softwareID: " << sample.softwareID ();
                o <<"]";
                return o;
            }

        } // namespace SoftwareVersionStatus  

    } // namespace SO  

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
        struct native_type_code< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SoftwareVersionReportType_g_tc_members[8]=
                {

                    {
                        (char *)"buildID",/* Member name */
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
                        (char *)"copyright",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"softwareDescription",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"version",/* Member name */
                        {
                            4,/* Representation ID */
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
                            5,/* Representation ID */
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
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            6,/* Representation ID */
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
                        (char *)"softwareID",/* Member name */
                        {
                            7,/* Representation ID */
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

                static DDS_TypeCode SoftwareVersionReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        SoftwareVersionReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SoftwareVersionReportType*/

                if (is_initialized) {
                    return &SoftwareVersionReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SoftwareVersionReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SoftwareVersionReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                SoftwareVersionReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                SoftwareVersionReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SoftwareVersionReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                SoftwareVersionReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                SoftwareVersionReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SoftwareVersionReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                SoftwareVersionReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                SoftwareVersionReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                SoftwareVersionReportType_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                SoftwareVersionReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                SoftwareVersionReportType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                SoftwareVersionReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                SoftwareVersionReportType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                SoftwareVersionReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                SoftwareVersionReportType_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                SoftwareVersionReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                SoftwareVersionReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &SoftwareVersionReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType *sample;

                static RTIXCdrMemberAccessInfo SoftwareVersionReportType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SoftwareVersionReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SoftwareVersionReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType);
                if (sample == NULL) {
                    return NULL;
                }

                SoftwareVersionReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->buildID() - (char *)sample);

                SoftwareVersionReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->copyright() - (char *)sample);

                SoftwareVersionReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                SoftwareVersionReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->softwareDescription() - (char *)sample);

                SoftwareVersionReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->version() - (char *)sample);

                SoftwareVersionReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                SoftwareVersionReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                SoftwareVersionReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->softwareID() - (char *)sample);

                SoftwareVersionReportType_g_sampleAccessInfo.memberAccessInfos = 
                SoftwareVersionReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SoftwareVersionReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SoftwareVersionReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SoftwareVersionReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SoftwareVersionReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType >;

                SoftwareVersionReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SoftwareVersionReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SoftwareVersionReportType_g_typePlugin = 
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

                return &SoftwareVersionReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportTypePlugin_new,
                ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SoftwareVersionReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SoftwareVersionReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType >::from_cdr_buffer(::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SoftwareVersionReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType >::reset_sample(::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType& sample) 
        {
            sample.buildID("");
            sample.copyright("");
            ::rti::topic::reset_sample(sample.name());
            sample.softwareDescription("");
            sample.version("");
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.softwareID());
        }

        void topic_type_support< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType >::allocate_sample(::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.buildID(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.copyright(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.name(),  -1, -1);
            ::rti::topic::allocate_sample(sample.softwareDescription(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.version(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.softwareID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
