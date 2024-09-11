

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterPresetConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "EmitterPresetConfigReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "EmitterPresetConfigReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace EmitterPresetConfig {

            // ---- EmitterPresetConfigReportType: 

            EmitterPresetConfigReportType::EmitterPresetConfigReportType() :
                m_levelName_ ("")  {

            }   

            EmitterPresetConfigReportType::EmitterPresetConfigReportType (const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& allowedEmitterID_,const std::string& levelName_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& securedEmitterID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& levelID_):
                m_allowedEmitterID_(allowedEmitterID_), 
                m_levelName_(levelName_), 
                m_securedEmitterID_(securedEmitterID_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_levelID_(levelID_) {
            }

            void EmitterPresetConfigReportType::swap(EmitterPresetConfigReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_allowedEmitterID_, other_.m_allowedEmitterID_);
                swap(m_levelName_, other_.m_levelName_);
                swap(m_securedEmitterID_, other_.m_securedEmitterID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_levelID_, other_.m_levelID_);
            }  

            bool EmitterPresetConfigReportType::operator == (const EmitterPresetConfigReportType& other_) const {
                if (m_allowedEmitterID_ != other_.m_allowedEmitterID_) {
                    return false;
                }
                if (m_levelName_ != other_.m_levelName_) {
                    return false;
                }
                if (m_securedEmitterID_ != other_.m_securedEmitterID_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_levelID_ != other_.m_levelID_) {
                    return false;
                }
                return true;
            }

            bool EmitterPresetConfigReportType::operator != (const EmitterPresetConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const EmitterPresetConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "allowedEmitterID: " << sample.allowedEmitterID ()<<", ";
                o << "levelName: " << sample.levelName ()<<", ";
                o << "securedEmitterID: " << sample.securedEmitterID ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "levelID: " << sample.levelID ();
                o <<"]";
                return o;
            }

        } // namespace EmitterPresetConfig  

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
        struct native_type_code< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode EmitterPresetConfigReportType_g_tc_allowedEmitterID_sequence;
                static DDS_TypeCode EmitterPresetConfigReportType_g_tc_securedEmitterID_sequence;

                static DDS_TypeCode_Member EmitterPresetConfigReportType_g_tc_members[6]=
                {

                    {
                        (char *)"allowedEmitterID",/* Member name */
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
                        (char *)"levelName",/* Member name */
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
                        (char *)"securedEmitterID",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"levelID",/* Member name */
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
                    }
                };

                static DDS_TypeCode EmitterPresetConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        EmitterPresetConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for EmitterPresetConfigReportType*/

                if (is_initialized) {
                    return &EmitterPresetConfigReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                EmitterPresetConfigReportType_g_tc_allowedEmitterID_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L > >((128L));
                EmitterPresetConfigReportType_g_tc_securedEmitterID_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L > >((128L));

                EmitterPresetConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EmitterPresetConfigReportType_g_tc_allowedEmitterID_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                EmitterPresetConfigReportType_g_tc_securedEmitterID_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                EmitterPresetConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& EmitterPresetConfigReportType_g_tc_allowedEmitterID_sequence;
                EmitterPresetConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                EmitterPresetConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& EmitterPresetConfigReportType_g_tc_securedEmitterID_sequence;
                EmitterPresetConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                EmitterPresetConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                EmitterPresetConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                EmitterPresetConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                EmitterPresetConfigReportType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                EmitterPresetConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                EmitterPresetConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &EmitterPresetConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType *sample;

                static RTIXCdrMemberAccessInfo EmitterPresetConfigReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EmitterPresetConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EmitterPresetConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                EmitterPresetConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->allowedEmitterID() - (char *)sample);

                EmitterPresetConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->levelName() - (char *)sample);

                EmitterPresetConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->securedEmitterID() - (char *)sample);

                EmitterPresetConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                EmitterPresetConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                EmitterPresetConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->levelID() - (char *)sample);

                EmitterPresetConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                EmitterPresetConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EmitterPresetConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EmitterPresetConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EmitterPresetConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EmitterPresetConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType >;

                EmitterPresetConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EmitterPresetConfigReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EmitterPresetConfigReportType_g_typePlugin = 
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

                return &EmitterPresetConfigReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportTypePlugin_new,
                ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = EmitterPresetConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = EmitterPresetConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType >::from_cdr_buffer(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = EmitterPresetConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType >::reset_sample(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.allowedEmitterID());
            sample.levelName("");
            ::rti::topic::reset_sample(sample.securedEmitterID());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.levelID());
        }

        void topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType >::allocate_sample(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.allowedEmitterID(),  128L, -1);
            ::rti::topic::allocate_sample(sample.levelName(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.securedEmitterID(),  128L, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.levelID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
