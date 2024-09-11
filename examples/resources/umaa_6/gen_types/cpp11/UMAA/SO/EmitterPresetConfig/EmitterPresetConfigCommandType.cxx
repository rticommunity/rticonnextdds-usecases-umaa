

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterPresetConfigCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "EmitterPresetConfigCommandTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "EmitterPresetConfigCommandType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace EmitterPresetConfig {

            // ---- EmitterPresetConfigCommandType: 

            EmitterPresetConfigCommandType::EmitterPresetConfigCommandType() :
                m_levelName_ ("")  {

            }   

            EmitterPresetConfigCommandType::EmitterPresetConfigCommandType (const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& allowedEmitterID_,const ::UMAA::Common::Measurement::NumericGUID& levelID_,const std::string& levelName_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& securedEmitterID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::IdentifierType& destination_):
                m_allowedEmitterID_(allowedEmitterID_), 
                m_levelID_(levelID_), 
                m_levelName_(levelName_), 
                m_securedEmitterID_(securedEmitterID_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_sessionID_(sessionID_), 
                m_destination_(destination_) {
            }

            void EmitterPresetConfigCommandType::swap(EmitterPresetConfigCommandType& other_)  noexcept 
            {
                using std::swap;
                swap(m_allowedEmitterID_, other_.m_allowedEmitterID_);
                swap(m_levelID_, other_.m_levelID_);
                swap(m_levelName_, other_.m_levelName_);
                swap(m_securedEmitterID_, other_.m_securedEmitterID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_destination_, other_.m_destination_);
            }  

            bool EmitterPresetConfigCommandType::operator == (const EmitterPresetConfigCommandType& other_) const {
                if (m_allowedEmitterID_ != other_.m_allowedEmitterID_) {
                    return false;
                }
                if (m_levelID_ != other_.m_levelID_) {
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
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_destination_ != other_.m_destination_) {
                    return false;
                }
                return true;
            }

            bool EmitterPresetConfigCommandType::operator != (const EmitterPresetConfigCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const EmitterPresetConfigCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "allowedEmitterID: " << sample.allowedEmitterID ()<<", ";
                o << "levelID: " << sample.levelID ()<<", ";
                o << "levelName: " << sample.levelName ()<<", ";
                o << "securedEmitterID: " << sample.securedEmitterID ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ()<<", ";
                o << "destination: " << sample.destination ();
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
        struct native_type_code< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode EmitterPresetConfigCommandType_g_tc_allowedEmitterID_sequence;
                static DDS_TypeCode EmitterPresetConfigCommandType_g_tc_securedEmitterID_sequence;

                static DDS_TypeCode_Member EmitterPresetConfigCommandType_g_tc_members[8]=
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
                        (char *)"levelID",/* Member name */
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
                        (char *)"levelName",/* Member name */
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
                        (char *)"securedEmitterID",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"sessionID",/* Member name */
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
                    }, 
                    {
                        (char *)"destination",/* Member name */
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

                static DDS_TypeCode EmitterPresetConfigCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        EmitterPresetConfigCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for EmitterPresetConfigCommandType*/

                if (is_initialized) {
                    return &EmitterPresetConfigCommandType_g_tc;
                }

                is_initialized = RTI_TRUE;

                EmitterPresetConfigCommandType_g_tc_allowedEmitterID_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L > >((128L));
                EmitterPresetConfigCommandType_g_tc_securedEmitterID_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L > >((128L));

                EmitterPresetConfigCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EmitterPresetConfigCommandType_g_tc_allowedEmitterID_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                EmitterPresetConfigCommandType_g_tc_securedEmitterID_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                EmitterPresetConfigCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& EmitterPresetConfigCommandType_g_tc_allowedEmitterID_sequence;
                EmitterPresetConfigCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                EmitterPresetConfigCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                EmitterPresetConfigCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& EmitterPresetConfigCommandType_g_tc_securedEmitterID_sequence;
                EmitterPresetConfigCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                EmitterPresetConfigCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                EmitterPresetConfigCommandType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                EmitterPresetConfigCommandType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                EmitterPresetConfigCommandType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                EmitterPresetConfigCommandType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                EmitterPresetConfigCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                EmitterPresetConfigCommandType_g_tc._data._typePlugin = type_plugin_info();    

                return &EmitterPresetConfigCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType *sample;

                static RTIXCdrMemberAccessInfo EmitterPresetConfigCommandType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EmitterPresetConfigCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EmitterPresetConfigCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                EmitterPresetConfigCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->allowedEmitterID() - (char *)sample);

                EmitterPresetConfigCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->levelID() - (char *)sample);

                EmitterPresetConfigCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->levelName() - (char *)sample);

                EmitterPresetConfigCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->securedEmitterID() - (char *)sample);

                EmitterPresetConfigCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                EmitterPresetConfigCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                EmitterPresetConfigCommandType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                EmitterPresetConfigCommandType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                EmitterPresetConfigCommandType_g_sampleAccessInfo.memberAccessInfos = 
                EmitterPresetConfigCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EmitterPresetConfigCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EmitterPresetConfigCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EmitterPresetConfigCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EmitterPresetConfigCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType >;

                EmitterPresetConfigCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EmitterPresetConfigCommandType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EmitterPresetConfigCommandType_g_typePlugin = 
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

                return &EmitterPresetConfigCommandType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandTypePlugin_new,
                ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = EmitterPresetConfigCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = EmitterPresetConfigCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType >::from_cdr_buffer(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = EmitterPresetConfigCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType >::reset_sample(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType& sample) 
        {
            ::rti::topic::reset_sample(sample.allowedEmitterID());
            ::rti::topic::reset_sample(sample.levelID());
            sample.levelName("");
            ::rti::topic::reset_sample(sample.securedEmitterID());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.destination());
        }

        void topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType >::allocate_sample(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.allowedEmitterID(),  128L, -1);
            ::rti::topic::allocate_sample(sample.levelID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.levelName(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.securedEmitterID(),  128L, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
