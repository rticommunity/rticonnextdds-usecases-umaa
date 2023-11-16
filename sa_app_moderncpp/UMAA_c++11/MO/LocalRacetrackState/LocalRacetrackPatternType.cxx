

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRacetrackPatternType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "LocalRacetrackPatternTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "LocalRacetrackPatternType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalRacetrackState {

            // ---- LocalRacetrackPatternType: 

            LocalRacetrackPatternType::LocalRacetrackPatternType() :
                m_elevationAchieved_ (0) ,
                m_positionAchieved_ (0) ,
                m_speedAchieved_ (0)  {

            }   

            LocalRacetrackPatternType::LocalRacetrackPatternType (bool elevationAchieved_,bool positionAchieved_,bool speedAchieved_):
                m_elevationAchieved_(elevationAchieved_), 
                m_positionAchieved_(positionAchieved_), 
                m_speedAchieved_(speedAchieved_) {
            }

            void LocalRacetrackPatternType::swap(LocalRacetrackPatternType& other_)  noexcept 
            {
                using std::swap;
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_positionAchieved_, other_.m_positionAchieved_);
                swap(m_speedAchieved_, other_.m_speedAchieved_);
            }  

            bool LocalRacetrackPatternType::operator == (const LocalRacetrackPatternType& other_) const {
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                if (m_positionAchieved_ != other_.m_positionAchieved_) {
                    return false;
                }
                if (m_speedAchieved_ != other_.m_speedAchieved_) {
                    return false;
                }
                return true;
            }

            bool LocalRacetrackPatternType::operator != (const LocalRacetrackPatternType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalRacetrackPatternType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "elevationAchieved: " << sample.elevationAchieved ()<<", ";
                o << "positionAchieved: " << sample.positionAchieved ()<<", ";
                o << "speedAchieved: " << sample.speedAchieved ();
                o <<"]";
                return o;
            }

        } // namespace LocalRacetrackState  

    } // namespace MO  

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
        struct native_type_code< ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalRacetrackPatternType_g_tc_members[3]=
                {

                    {
                        (char *)"elevationAchieved",/* Member name */
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
                        (char *)"positionAchieved",/* Member name */
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
                        (char *)"speedAchieved",/* Member name */
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
                    }
                };

                static DDS_TypeCode LocalRacetrackPatternType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        LocalRacetrackPatternType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalRacetrackPatternType*/

                if (is_initialized) {
                    return &LocalRacetrackPatternType_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalRacetrackPatternType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalRacetrackPatternType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalRacetrackPatternType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalRacetrackPatternType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                LocalRacetrackPatternType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalRacetrackPatternType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                LocalRacetrackPatternType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalRacetrackPatternType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                LocalRacetrackPatternType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalRacetrackPatternType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                LocalRacetrackPatternType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalRacetrackPatternType_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalRacetrackPatternType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType *sample;

                static RTIXCdrMemberAccessInfo LocalRacetrackPatternType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalRacetrackPatternType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalRacetrackPatternType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalRacetrackPatternType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                LocalRacetrackPatternType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionAchieved() - (char *)sample);

                LocalRacetrackPatternType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedAchieved() - (char *)sample);

                LocalRacetrackPatternType_g_sampleAccessInfo.memberAccessInfos = 
                LocalRacetrackPatternType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalRacetrackPatternType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalRacetrackPatternType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalRacetrackPatternType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalRacetrackPatternType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType >;

                LocalRacetrackPatternType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalRacetrackPatternType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalRacetrackPatternType_g_typePlugin = 
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

                return &LocalRacetrackPatternType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternTypePlugin_new,
                ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalRacetrackPatternTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalRacetrackPatternTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType >::from_cdr_buffer(::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalRacetrackPatternTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType >::reset_sample(::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType& sample) 
        {
            sample.elevationAchieved(0);
            sample.positionAchieved(0);
            sample.speedAchieved(0);
        }

        void topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType >::allocate_sample(::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
