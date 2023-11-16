

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "SelfCollisionAvoidanceConfigReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SelfCollisionAvoidanceConfigReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace SelfCollisionAvoidanceConfig {

            // ---- SelfCollisionAvoidanceConfigReportType: 

            SelfCollisionAvoidanceConfigReportType::SelfCollisionAvoidanceConfigReportType() :
                m_priority_ (0) ,
                m_state_(UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType::DEVIATE_FROM_PATH)  {

            }   

            SelfCollisionAvoidanceConfigReportType::SelfCollisionAvoidanceConfigReportType (int32_t priority_,const ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType& state_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_priority_(priority_), 
                m_state_(state_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void SelfCollisionAvoidanceConfigReportType::swap(SelfCollisionAvoidanceConfigReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_priority_, other_.m_priority_);
                swap(m_state_, other_.m_state_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool SelfCollisionAvoidanceConfigReportType::operator == (const SelfCollisionAvoidanceConfigReportType& other_) const {
                if (m_priority_ != other_.m_priority_) {
                    return false;
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }

            bool SelfCollisionAvoidanceConfigReportType::operator != (const SelfCollisionAvoidanceConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SelfCollisionAvoidanceConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "priority: " << sample.priority ()<<", ";
                o << "state: " << sample.state ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace SelfCollisionAvoidanceConfig  

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
        struct native_type_code< ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SelfCollisionAvoidanceConfigReportType_g_tc_members[4]=
                {

                    {
                        (char *)"priority",/* Member name */
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
                        (char *)"state",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
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
                    }
                };

                static DDS_TypeCode SelfCollisionAvoidanceConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        SelfCollisionAvoidanceConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SelfCollisionAvoidanceConfigReportType*/

                if (is_initialized) {
                    return &SelfCollisionAvoidanceConfigReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SelfCollisionAvoidanceConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SelfCollisionAvoidanceConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                SelfCollisionAvoidanceConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType>::get().native();
                SelfCollisionAvoidanceConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SelfCollisionAvoidanceConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                SelfCollisionAvoidanceConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                SelfCollisionAvoidanceConfigReportType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                SelfCollisionAvoidanceConfigReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                SelfCollisionAvoidanceConfigReportType_g_tc_members[0]._annotations._minValue._u.long_value = -2147483648L;
                SelfCollisionAvoidanceConfigReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                SelfCollisionAvoidanceConfigReportType_g_tc_members[0]._annotations._maxValue._u.long_value = 2147483647L;
                SelfCollisionAvoidanceConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SelfCollisionAvoidanceConfigReportType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                SelfCollisionAvoidanceConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                SelfCollisionAvoidanceConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &SelfCollisionAvoidanceConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType *sample;

                static RTIXCdrMemberAccessInfo SelfCollisionAvoidanceConfigReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SelfCollisionAvoidanceConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SelfCollisionAvoidanceConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                SelfCollisionAvoidanceConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->priority() - (char *)sample);

                SelfCollisionAvoidanceConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                SelfCollisionAvoidanceConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                SelfCollisionAvoidanceConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                SelfCollisionAvoidanceConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                SelfCollisionAvoidanceConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SelfCollisionAvoidanceConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SelfCollisionAvoidanceConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SelfCollisionAvoidanceConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SelfCollisionAvoidanceConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType >;

                SelfCollisionAvoidanceConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SelfCollisionAvoidanceConfigReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SelfCollisionAvoidanceConfigReportType_g_typePlugin = 
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

                return &SelfCollisionAvoidanceConfigReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportTypePlugin_new,
                ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SelfCollisionAvoidanceConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SelfCollisionAvoidanceConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType >::from_cdr_buffer(::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SelfCollisionAvoidanceConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType >::reset_sample(::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType& sample) 
        {
            sample.priority(0);
            sample.state(UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType::DEVIATE_FROM_PATH);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType >::allocate_sample(::UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
