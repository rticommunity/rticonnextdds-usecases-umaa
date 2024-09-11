

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanExecutionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "MissionPlanExecutionReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "MissionPlanExecutionReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace MissionPlanExecutionStatus {

            // ---- MissionPlanExecutionReportType: 

            MissionPlanExecutionReportType::MissionPlanExecutionReportType() :
                m_feedback_ ("") ,
                m_missionPlanDescription_ ("") ,
                m_name_ ("") ,
                m_state_(UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::AWAITING_EXECUTION_APPROVAL)  {

            }   

            MissionPlanExecutionReportType::MissionPlanExecutionReportType (const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime_,const std::string& feedback_,const std::string& missionPlanDescription_,const std::string& name_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& startTime_,const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType& state_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& missionID_):
                m_endTime_(endTime_), 
                m_feedback_(feedback_), 
                m_missionPlanDescription_(missionPlanDescription_), 
                m_name_(name_), 
                m_startTime_(startTime_), 
                m_state_(state_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_missionID_(missionID_) {
            }

            void MissionPlanExecutionReportType::swap(MissionPlanExecutionReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_endTime_, other_.m_endTime_);
                swap(m_feedback_, other_.m_feedback_);
                swap(m_missionPlanDescription_, other_.m_missionPlanDescription_);
                swap(m_name_, other_.m_name_);
                swap(m_startTime_, other_.m_startTime_);
                swap(m_state_, other_.m_state_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_missionID_, other_.m_missionID_);
            }  

            bool MissionPlanExecutionReportType::operator == (const MissionPlanExecutionReportType& other_) const {
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                if (m_feedback_ != other_.m_feedback_) {
                    return false;
                }
                if (m_missionPlanDescription_ != other_.m_missionPlanDescription_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_startTime_ != other_.m_startTime_) {
                    return false;
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_missionID_ != other_.m_missionID_) {
                    return false;
                }
                return true;
            }

            bool MissionPlanExecutionReportType::operator != (const MissionPlanExecutionReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MissionPlanExecutionReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "endTime: " << sample.endTime ()<<", ";
                o << "feedback: " << sample.feedback ()<<", ";
                o << "missionPlanDescription: " << sample.missionPlanDescription ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "startTime: " << sample.startTime ()<<", ";
                o << "state: " << sample.state ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "missionID: " << sample.missionID ();
                o <<"]";
                return o;
            }

        } // namespace MissionPlanExecutionStatus  

    } // namespace MM  

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
        struct native_type_code< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MissionPlanExecutionReportType_g_tc_members[9]=
                {

                    {
                        (char *)"endTime",/* Member name */
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
                        (char *)"feedback",/* Member name */
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
                        (char *)"missionPlanDescription",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"startTime",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"state",/* Member name */
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
                        (char *)"source",/* Member name */
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
                    }, 
                    {
                        (char *)"missionID",/* Member name */
                        {
                            8,/* Representation ID */
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

                static DDS_TypeCode MissionPlanExecutionReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        MissionPlanExecutionReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MissionPlanExecutionReportType*/

                if (is_initialized) {
                    return &MissionPlanExecutionReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                MissionPlanExecutionReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MissionPlanExecutionReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                MissionPlanExecutionReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                MissionPlanExecutionReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                MissionPlanExecutionReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                MissionPlanExecutionReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                MissionPlanExecutionReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType>::get().native();
                MissionPlanExecutionReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                MissionPlanExecutionReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                MissionPlanExecutionReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                MissionPlanExecutionReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                MissionPlanExecutionReportType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                MissionPlanExecutionReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                MissionPlanExecutionReportType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                MissionPlanExecutionReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                MissionPlanExecutionReportType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                MissionPlanExecutionReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                MissionPlanExecutionReportType_g_tc_members[5]._annotations._defaultValue._u.enumerated_value = 0;

                MissionPlanExecutionReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                MissionPlanExecutionReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &MissionPlanExecutionReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType *sample;

                static RTIXCdrMemberAccessInfo MissionPlanExecutionReportType_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MissionPlanExecutionReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MissionPlanExecutionReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType);
                if (sample == NULL) {
                    return NULL;
                }

                MissionPlanExecutionReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                MissionPlanExecutionReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->feedback() - (char *)sample);

                MissionPlanExecutionReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionPlanDescription() - (char *)sample);

                MissionPlanExecutionReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                MissionPlanExecutionReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTime() - (char *)sample);

                MissionPlanExecutionReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                MissionPlanExecutionReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                MissionPlanExecutionReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                MissionPlanExecutionReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionID() - (char *)sample);

                MissionPlanExecutionReportType_g_sampleAccessInfo.memberAccessInfos = 
                MissionPlanExecutionReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MissionPlanExecutionReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MissionPlanExecutionReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MissionPlanExecutionReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MissionPlanExecutionReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType >;

                MissionPlanExecutionReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MissionPlanExecutionReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MissionPlanExecutionReportType_g_typePlugin = 
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

                return &MissionPlanExecutionReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportTypePlugin_new,
                ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MissionPlanExecutionReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MissionPlanExecutionReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType >::from_cdr_buffer(::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MissionPlanExecutionReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType >::reset_sample(::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.endTime());
            sample.feedback("");
            sample.missionPlanDescription("");
            sample.name("");
            ::rti::topic::reset_sample(sample.startTime());
            sample.state(UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::AWAITING_EXECUTION_APPROVAL);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.missionID());
        }

        void topic_type_support< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType >::allocate_sample(::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.feedback(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.missionPlanDescription(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.missionID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
