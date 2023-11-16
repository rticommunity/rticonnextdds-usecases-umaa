

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransitStationkeepType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "TransitStationkeepTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "TransitStationkeepType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace StationkeepState {

            // ---- TransitStationkeepType: 

            TransitStationkeepType::TransitStationkeepType() :
                m_transitElevationAchieved_ (0) ,
                m_transitSpeedAchieved_ (0)  {

            }   

            TransitStationkeepType::TransitStationkeepType (bool transitElevationAchieved_,bool transitSpeedAchieved_):
                m_transitElevationAchieved_(transitElevationAchieved_), 
                m_transitSpeedAchieved_(transitSpeedAchieved_) {
            }

            void TransitStationkeepType::swap(TransitStationkeepType& other_)  noexcept 
            {
                using std::swap;
                swap(m_transitElevationAchieved_, other_.m_transitElevationAchieved_);
                swap(m_transitSpeedAchieved_, other_.m_transitSpeedAchieved_);
            }  

            bool TransitStationkeepType::operator == (const TransitStationkeepType& other_) const {
                if (m_transitElevationAchieved_ != other_.m_transitElevationAchieved_) {
                    return false;
                }
                if (m_transitSpeedAchieved_ != other_.m_transitSpeedAchieved_) {
                    return false;
                }
                return true;
            }

            bool TransitStationkeepType::operator != (const TransitStationkeepType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TransitStationkeepType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "transitElevationAchieved: " << sample.transitElevationAchieved ()<<", ";
                o << "transitSpeedAchieved: " << sample.transitSpeedAchieved ();
                o <<"]";
                return o;
            }

        } // namespace StationkeepState  

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
        struct native_type_code< ::UMAA::MO::StationkeepState::TransitStationkeepType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TransitStationkeepType_g_tc_members[2]=
                {

                    {
                        (char *)"transitElevationAchieved",/* Member name */
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
                        (char *)"transitSpeedAchieved",/* Member name */
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

                static DDS_TypeCode TransitStationkeepType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::StationkeepState::TransitStationkeepType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        TransitStationkeepType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TransitStationkeepType*/

                if (is_initialized) {
                    return &TransitStationkeepType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TransitStationkeepType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TransitStationkeepType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                TransitStationkeepType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                TransitStationkeepType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                TransitStationkeepType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                TransitStationkeepType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                TransitStationkeepType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                TransitStationkeepType_g_tc._data._sampleAccessInfo = sample_access_info();
                TransitStationkeepType_g_tc._data._typePlugin = type_plugin_info();    

                return &TransitStationkeepType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::StationkeepState::TransitStationkeepType *sample;

                static RTIXCdrMemberAccessInfo TransitStationkeepType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TransitStationkeepType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TransitStationkeepType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::StationkeepState::TransitStationkeepType);
                if (sample == NULL) {
                    return NULL;
                }

                TransitStationkeepType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitElevationAchieved() - (char *)sample);

                TransitStationkeepType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeedAchieved() - (char *)sample);

                TransitStationkeepType_g_sampleAccessInfo.memberAccessInfos = 
                TransitStationkeepType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::StationkeepState::TransitStationkeepType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TransitStationkeepType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TransitStationkeepType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TransitStationkeepType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TransitStationkeepType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::StationkeepState::TransitStationkeepType >;

                TransitStationkeepType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TransitStationkeepType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TransitStationkeepType_g_typePlugin = 
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

                return &TransitStationkeepType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::StationkeepState::TransitStationkeepType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::StationkeepState::TransitStationkeepType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::StationkeepState::TransitStationkeepType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::StationkeepState::TransitStationkeepTypePlugin_new,
                ::UMAA::MO::StationkeepState::TransitStationkeepTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::StationkeepState::TransitStationkeepType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::StationkeepState::TransitStationkeepType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TransitStationkeepTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TransitStationkeepTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::TransitStationkeepType >::from_cdr_buffer(::UMAA::MO::StationkeepState::TransitStationkeepType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TransitStationkeepTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::StationkeepState::TransitStationkeepType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::TransitStationkeepType >::reset_sample(::UMAA::MO::StationkeepState::TransitStationkeepType& sample) 
        {
            sample.transitElevationAchieved(0);
            sample.transitSpeedAchieved(0);
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::TransitStationkeepType >::allocate_sample(::UMAA::MO::StationkeepState::TransitStationkeepType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
