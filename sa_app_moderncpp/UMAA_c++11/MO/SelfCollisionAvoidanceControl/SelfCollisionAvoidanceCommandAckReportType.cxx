

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "SelfCollisionAvoidanceCommandAckReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SelfCollisionAvoidanceCommandAckReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace SelfCollisionAvoidanceControl {

            // ---- SelfCollisionAvoidanceCommandAckReportType: 

            SelfCollisionAvoidanceCommandAckReportType::SelfCollisionAvoidanceCommandAckReportType() :
                m_priority_ (0) ,
                m_state_(UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType::DEVIATE_FROM_PATH)  {

            }   

            SelfCollisionAvoidanceCommandAckReportType::SelfCollisionAvoidanceCommandAckReportType (int32_t priority_,const ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType& state_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_):
                m_priority_(priority_), 
                m_state_(state_), 
                m_source_(source_), 
                m_sessionID_(sessionID_) {
            }

            void SelfCollisionAvoidanceCommandAckReportType::swap(SelfCollisionAvoidanceCommandAckReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_priority_, other_.m_priority_);
                swap(m_state_, other_.m_state_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool SelfCollisionAvoidanceCommandAckReportType::operator == (const SelfCollisionAvoidanceCommandAckReportType& other_) const {
                if (m_priority_ != other_.m_priority_) {
                    return false;
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                return true;
            }

            bool SelfCollisionAvoidanceCommandAckReportType::operator != (const SelfCollisionAvoidanceCommandAckReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SelfCollisionAvoidanceCommandAckReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "priority: " << sample.priority ()<<", ";
                o << "state: " << sample.state ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ();
                o <<"]";
                return o;
            }

        } // namespace SelfCollisionAvoidanceControl  

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
        struct native_type_code< ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SelfCollisionAvoidanceCommandAckReportType_g_tc_members[4]=
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
                        (char *)"sessionID",/* Member name */
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

                static DDS_TypeCode SelfCollisionAvoidanceCommandAckReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        SelfCollisionAvoidanceCommandAckReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SelfCollisionAvoidanceCommandAckReportType*/

                if (is_initialized) {
                    return &SelfCollisionAvoidanceCommandAckReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SelfCollisionAvoidanceCommandAckReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType>::get().native();
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[0]._annotations._minValue._u.long_value = -2147483648L;
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[0]._annotations._maxValue._u.long_value = 2147483647L;
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SelfCollisionAvoidanceCommandAckReportType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                SelfCollisionAvoidanceCommandAckReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                SelfCollisionAvoidanceCommandAckReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &SelfCollisionAvoidanceCommandAckReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType *sample;

                static RTIXCdrMemberAccessInfo SelfCollisionAvoidanceCommandAckReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SelfCollisionAvoidanceCommandAckReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SelfCollisionAvoidanceCommandAckReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType);
                if (sample == NULL) {
                    return NULL;
                }

                SelfCollisionAvoidanceCommandAckReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->priority() - (char *)sample);

                SelfCollisionAvoidanceCommandAckReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                SelfCollisionAvoidanceCommandAckReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                SelfCollisionAvoidanceCommandAckReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                SelfCollisionAvoidanceCommandAckReportType_g_sampleAccessInfo.memberAccessInfos = 
                SelfCollisionAvoidanceCommandAckReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SelfCollisionAvoidanceCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SelfCollisionAvoidanceCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SelfCollisionAvoidanceCommandAckReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SelfCollisionAvoidanceCommandAckReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType >;

                SelfCollisionAvoidanceCommandAckReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SelfCollisionAvoidanceCommandAckReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SelfCollisionAvoidanceCommandAckReportType_g_typePlugin = 
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

                return &SelfCollisionAvoidanceCommandAckReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportTypePlugin_new,
                ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SelfCollisionAvoidanceCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SelfCollisionAvoidanceCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType >::from_cdr_buffer(::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SelfCollisionAvoidanceCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType >::reset_sample(::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType& sample) 
        {
            sample.priority(0);
            sample.state(UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType::DEVIATE_FROM_PATH);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< ::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType >::allocate_sample(::UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommandAckReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
