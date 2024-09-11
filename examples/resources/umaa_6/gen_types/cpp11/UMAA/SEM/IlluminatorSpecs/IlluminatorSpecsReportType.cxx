

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IlluminatorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "IlluminatorSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "IlluminatorSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace IlluminatorSpecs {

            // ---- IlluminatorSpecsReportType: 

            IlluminatorSpecsReportType::IlluminatorSpecsReportType() :
                m_name_ ("") ,
                m_supportedColor_ (0) ,
                m_supportedInfrared_ (0) ,
                m_supportedIntensityLevel_ (0)  {

            }   

            IlluminatorSpecsReportType::IlluminatorSpecsReportType (const ::dds::core::optional< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >& beamWidthSpecs_,const std::string& name_,bool supportedColor_,bool supportedInfrared_,bool supportedIntensityLevel_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_beamWidthSpecs_(beamWidthSpecs_), 
                m_name_(name_), 
                m_supportedColor_(supportedColor_), 
                m_supportedInfrared_(supportedInfrared_), 
                m_supportedIntensityLevel_(supportedIntensityLevel_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void IlluminatorSpecsReportType::swap(IlluminatorSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_beamWidthSpecs_, other_.m_beamWidthSpecs_);
                swap(m_name_, other_.m_name_);
                swap(m_supportedColor_, other_.m_supportedColor_);
                swap(m_supportedInfrared_, other_.m_supportedInfrared_);
                swap(m_supportedIntensityLevel_, other_.m_supportedIntensityLevel_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool IlluminatorSpecsReportType::operator == (const IlluminatorSpecsReportType& other_) const {
                if (m_beamWidthSpecs_ != other_.m_beamWidthSpecs_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_supportedColor_ != other_.m_supportedColor_) {
                    return false;
                }
                if (m_supportedInfrared_ != other_.m_supportedInfrared_) {
                    return false;
                }
                if (m_supportedIntensityLevel_ != other_.m_supportedIntensityLevel_) {
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

            bool IlluminatorSpecsReportType::operator != (const IlluminatorSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const IlluminatorSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "beamWidthSpecs: " << sample.beamWidthSpecs ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "supportedColor: " << sample.supportedColor ()<<", ";
                o << "supportedInfrared: " << sample.supportedInfrared ()<<", ";
                o << "supportedIntensityLevel: " << sample.supportedIntensityLevel ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace IlluminatorSpecs  

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
        struct native_type_code< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member IlluminatorSpecsReportType_g_tc_members[7]=
                {

                    {
                        (char *)"beamWidthSpecs",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
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
                        (char *)"supportedColor",/* Member name */
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
                        (char *)"supportedInfrared",/* Member name */
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
                        (char *)"supportedIntensityLevel",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode IlluminatorSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        IlluminatorSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for IlluminatorSpecsReportType*/

                if (is_initialized) {
                    return &IlluminatorSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                IlluminatorSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                IlluminatorSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType>::get().native();
                IlluminatorSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                IlluminatorSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                IlluminatorSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                IlluminatorSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                IlluminatorSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                IlluminatorSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                IlluminatorSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                IlluminatorSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                IlluminatorSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                IlluminatorSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                IlluminatorSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                IlluminatorSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
                IlluminatorSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                IlluminatorSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                IlluminatorSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                IlluminatorSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &IlluminatorSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo IlluminatorSpecsReportType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IlluminatorSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IlluminatorSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                IlluminatorSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->beamWidthSpecs() - (char *)sample);

                IlluminatorSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                IlluminatorSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedColor() - (char *)sample);

                IlluminatorSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedInfrared() - (char *)sample);

                IlluminatorSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedIntensityLevel() - (char *)sample);

                IlluminatorSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                IlluminatorSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                IlluminatorSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                IlluminatorSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IlluminatorSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IlluminatorSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IlluminatorSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IlluminatorSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType >;

                IlluminatorSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IlluminatorSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IlluminatorSpecsReportType_g_typePlugin = 
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

                return &IlluminatorSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportTypePlugin_new,
                ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IlluminatorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IlluminatorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType >::from_cdr_buffer(::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IlluminatorSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType >::reset_sample(::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.beamWidthSpecs());
            sample.name("");
            sample.supportedColor(0);
            sample.supportedInfrared(0);
            sample.supportedIntensityLevel(0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType >::allocate_sample(::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
