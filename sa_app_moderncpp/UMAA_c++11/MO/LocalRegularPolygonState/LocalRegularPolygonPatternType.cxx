

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonPatternType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "LocalRegularPolygonPatternTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "LocalRegularPolygonPatternType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalRegularPolygonState {

            // ---- LocalRegularPolygonPatternType: 

            LocalRegularPolygonPatternType::LocalRegularPolygonPatternType() :
                m_elevationAchieved_ (0) ,
                m_positionAchieved_ (0) ,
                m_speedAchieved_ (0)  {

            }   

            LocalRegularPolygonPatternType::LocalRegularPolygonPatternType (bool elevationAchieved_,bool positionAchieved_,bool speedAchieved_):
                m_elevationAchieved_(elevationAchieved_), 
                m_positionAchieved_(positionAchieved_), 
                m_speedAchieved_(speedAchieved_) {
            }

            void LocalRegularPolygonPatternType::swap(LocalRegularPolygonPatternType& other_)  noexcept 
            {
                using std::swap;
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_positionAchieved_, other_.m_positionAchieved_);
                swap(m_speedAchieved_, other_.m_speedAchieved_);
            }  

            bool LocalRegularPolygonPatternType::operator == (const LocalRegularPolygonPatternType& other_) const {
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

            bool LocalRegularPolygonPatternType::operator != (const LocalRegularPolygonPatternType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalRegularPolygonPatternType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "elevationAchieved: " << sample.elevationAchieved ()<<", ";
                o << "positionAchieved: " << sample.positionAchieved ()<<", ";
                o << "speedAchieved: " << sample.speedAchieved ();
                o <<"]";
                return o;
            }

        } // namespace LocalRegularPolygonState  

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
        struct native_type_code< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalRegularPolygonPatternType_g_tc_members[3]=
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

                static DDS_TypeCode LocalRegularPolygonPatternType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        LocalRegularPolygonPatternType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalRegularPolygonPatternType*/

                if (is_initialized) {
                    return &LocalRegularPolygonPatternType_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalRegularPolygonPatternType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalRegularPolygonPatternType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalRegularPolygonPatternType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalRegularPolygonPatternType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                LocalRegularPolygonPatternType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalRegularPolygonPatternType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                LocalRegularPolygonPatternType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalRegularPolygonPatternType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                LocalRegularPolygonPatternType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalRegularPolygonPatternType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                LocalRegularPolygonPatternType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalRegularPolygonPatternType_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalRegularPolygonPatternType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType *sample;

                static RTIXCdrMemberAccessInfo LocalRegularPolygonPatternType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalRegularPolygonPatternType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalRegularPolygonPatternType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalRegularPolygonPatternType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                LocalRegularPolygonPatternType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionAchieved() - (char *)sample);

                LocalRegularPolygonPatternType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedAchieved() - (char *)sample);

                LocalRegularPolygonPatternType_g_sampleAccessInfo.memberAccessInfos = 
                LocalRegularPolygonPatternType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalRegularPolygonPatternType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalRegularPolygonPatternType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalRegularPolygonPatternType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalRegularPolygonPatternType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType >;

                LocalRegularPolygonPatternType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalRegularPolygonPatternType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalRegularPolygonPatternType_g_typePlugin = 
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

                return &LocalRegularPolygonPatternType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternTypePlugin_new,
                ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalRegularPolygonPatternTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalRegularPolygonPatternTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType >::from_cdr_buffer(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalRegularPolygonPatternTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType >::reset_sample(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType& sample) 
        {
            sample.elevationAchieved(0);
            sample.positionAchieved(0);
            sample.speedAchieved(0);
        }

        void topic_type_support< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType >::allocate_sample(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
