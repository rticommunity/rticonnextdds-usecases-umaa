

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepingStationkeepType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "StationkeepingStationkeepTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "StationkeepingStationkeepType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace StationkeepState {

            // ---- StationkeepingStationkeepType: 

            StationkeepingStationkeepType::StationkeepingStationkeepType() :
                m_bearingToContactAchieved_ (0) ,
                m_elevationAchieved_ (0) ,
                m_rangeAchieved_ (0)  {

            }   

            StationkeepingStationkeepType::StationkeepingStationkeepType (bool bearingToContactAchieved_,bool elevationAchieved_,bool rangeAchieved_):
                m_bearingToContactAchieved_(bearingToContactAchieved_), 
                m_elevationAchieved_(elevationAchieved_), 
                m_rangeAchieved_(rangeAchieved_) {
            }

            void StationkeepingStationkeepType::swap(StationkeepingStationkeepType& other_)  noexcept 
            {
                using std::swap;
                swap(m_bearingToContactAchieved_, other_.m_bearingToContactAchieved_);
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_rangeAchieved_, other_.m_rangeAchieved_);
            }  

            bool StationkeepingStationkeepType::operator == (const StationkeepingStationkeepType& other_) const {
                if (m_bearingToContactAchieved_ != other_.m_bearingToContactAchieved_) {
                    return false;
                }
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                if (m_rangeAchieved_ != other_.m_rangeAchieved_) {
                    return false;
                }
                return true;
            }

            bool StationkeepingStationkeepType::operator != (const StationkeepingStationkeepType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const StationkeepingStationkeepType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bearingToContactAchieved: " << sample.bearingToContactAchieved ()<<", ";
                o << "elevationAchieved: " << sample.elevationAchieved ()<<", ";
                o << "rangeAchieved: " << sample.rangeAchieved ();
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
        struct native_type_code< ::UMAA::MO::StationkeepState::StationkeepingStationkeepType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StationkeepingStationkeepType_g_tc_members[3]=
                {

                    {
                        (char *)"bearingToContactAchieved",/* Member name */
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
                        (char *)"elevationAchieved",/* Member name */
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
                        (char *)"rangeAchieved",/* Member name */
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

                static DDS_TypeCode StationkeepingStationkeepType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::StationkeepState::StationkeepingStationkeepType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        StationkeepingStationkeepType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for StationkeepingStationkeepType*/

                if (is_initialized) {
                    return &StationkeepingStationkeepType_g_tc;
                }

                is_initialized = RTI_TRUE;

                StationkeepingStationkeepType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StationkeepingStationkeepType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                StationkeepingStationkeepType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                StationkeepingStationkeepType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                StationkeepingStationkeepType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                StationkeepingStationkeepType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                StationkeepingStationkeepType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                StationkeepingStationkeepType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                StationkeepingStationkeepType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                StationkeepingStationkeepType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                StationkeepingStationkeepType_g_tc._data._sampleAccessInfo = sample_access_info();
                StationkeepingStationkeepType_g_tc._data._typePlugin = type_plugin_info();    

                return &StationkeepingStationkeepType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::StationkeepState::StationkeepingStationkeepType *sample;

                static RTIXCdrMemberAccessInfo StationkeepingStationkeepType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StationkeepingStationkeepType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StationkeepingStationkeepType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::StationkeepState::StationkeepingStationkeepType);
                if (sample == NULL) {
                    return NULL;
                }

                StationkeepingStationkeepType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingToContactAchieved() - (char *)sample);

                StationkeepingStationkeepType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                StationkeepingStationkeepType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rangeAchieved() - (char *)sample);

                StationkeepingStationkeepType_g_sampleAccessInfo.memberAccessInfos = 
                StationkeepingStationkeepType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::StationkeepState::StationkeepingStationkeepType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StationkeepingStationkeepType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StationkeepingStationkeepType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StationkeepingStationkeepType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StationkeepingStationkeepType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::StationkeepState::StationkeepingStationkeepType >;

                StationkeepingStationkeepType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StationkeepingStationkeepType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StationkeepingStationkeepType_g_typePlugin = 
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

                return &StationkeepingStationkeepType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::StationkeepState::StationkeepingStationkeepType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::StationkeepState::StationkeepingStationkeepType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepingStationkeepType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::StationkeepState::StationkeepingStationkeepTypePlugin_new,
                ::UMAA::MO::StationkeepState::StationkeepingStationkeepTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::StationkeepState::StationkeepingStationkeepType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::StationkeepState::StationkeepingStationkeepType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = StationkeepingStationkeepTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = StationkeepingStationkeepTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepingStationkeepType >::from_cdr_buffer(::UMAA::MO::StationkeepState::StationkeepingStationkeepType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = StationkeepingStationkeepTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::StationkeepState::StationkeepingStationkeepType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepingStationkeepType >::reset_sample(::UMAA::MO::StationkeepState::StationkeepingStationkeepType& sample) 
        {
            sample.bearingToContactAchieved(0);
            sample.elevationAchieved(0);
            sample.rangeAchieved(0);
        }

        void topic_type_support< ::UMAA::MO::StationkeepState::StationkeepingStationkeepType >::allocate_sample(::UMAA::MO::StationkeepState::StationkeepingStationkeepType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
