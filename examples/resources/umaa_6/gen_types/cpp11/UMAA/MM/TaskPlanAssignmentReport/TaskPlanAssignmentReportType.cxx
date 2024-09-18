

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "TaskPlanAssignmentReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "TaskPlanAssignmentReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace TaskPlanAssignmentReport {

            // ---- TaskPlanAssignmentReportType: 

            TaskPlanAssignmentReportType::TaskPlanAssignmentReportType()  {

            }   

            TaskPlanAssignmentReportType::TaskPlanAssignmentReportType (const ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 256L >& resourceIDs_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& missionID_,const ::UMAA::Common::Measurement::NumericGUID& taskID_):
                m_resourceIDs_(resourceIDs_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_missionID_(missionID_), 
                m_taskID_(taskID_) {
            }

            void TaskPlanAssignmentReportType::swap(TaskPlanAssignmentReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_resourceIDs_, other_.m_resourceIDs_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_missionID_, other_.m_missionID_);
                swap(m_taskID_, other_.m_taskID_);
            }  

            bool TaskPlanAssignmentReportType::operator == (const TaskPlanAssignmentReportType& other_) const {
                if (m_resourceIDs_ != other_.m_resourceIDs_) {
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
                if (m_taskID_ != other_.m_taskID_) {
                    return false;
                }
                return true;
            }

            bool TaskPlanAssignmentReportType::operator != (const TaskPlanAssignmentReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TaskPlanAssignmentReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "resourceIDs: " << sample.resourceIDs ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "missionID: " << sample.missionID ()<<", ";
                o << "taskID: " << sample.taskID ();
                o <<"]";
                return o;
            }

        } // namespace TaskPlanAssignmentReport  

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
        struct native_type_code< ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode TaskPlanAssignmentReportType_g_tc_resourceIDs_sequence;

                static DDS_TypeCode_Member TaskPlanAssignmentReportType_g_tc_members[5]=
                {

                    {
                        (char *)"resourceIDs",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"missionID",/* Member name */
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
                    }, 
                    {
                        (char *)"taskID",/* Member name */
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
                    }
                };

                static DDS_TypeCode TaskPlanAssignmentReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        TaskPlanAssignmentReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TaskPlanAssignmentReportType*/

                if (is_initialized) {
                    return &TaskPlanAssignmentReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TaskPlanAssignmentReportType_g_tc_resourceIDs_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 256L > >((256L));

                TaskPlanAssignmentReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TaskPlanAssignmentReportType_g_tc_resourceIDs_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                TaskPlanAssignmentReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& TaskPlanAssignmentReportType_g_tc_resourceIDs_sequence;
                TaskPlanAssignmentReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                TaskPlanAssignmentReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                TaskPlanAssignmentReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                TaskPlanAssignmentReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                TaskPlanAssignmentReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                TaskPlanAssignmentReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &TaskPlanAssignmentReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType *sample;

                static RTIXCdrMemberAccessInfo TaskPlanAssignmentReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TaskPlanAssignmentReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TaskPlanAssignmentReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType);
                if (sample == NULL) {
                    return NULL;
                }

                TaskPlanAssignmentReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceIDs() - (char *)sample);

                TaskPlanAssignmentReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                TaskPlanAssignmentReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                TaskPlanAssignmentReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionID() - (char *)sample);

                TaskPlanAssignmentReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->taskID() - (char *)sample);

                TaskPlanAssignmentReportType_g_sampleAccessInfo.memberAccessInfos = 
                TaskPlanAssignmentReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TaskPlanAssignmentReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TaskPlanAssignmentReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TaskPlanAssignmentReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TaskPlanAssignmentReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType >;

                TaskPlanAssignmentReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TaskPlanAssignmentReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TaskPlanAssignmentReportType_g_typePlugin = 
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

                return &TaskPlanAssignmentReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportTypePlugin_new,
                ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TaskPlanAssignmentReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TaskPlanAssignmentReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType >::from_cdr_buffer(::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TaskPlanAssignmentReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType >::reset_sample(::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.resourceIDs());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.missionID());
            ::rti::topic::reset_sample(sample.taskID());
        }

        void topic_type_support< ::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType >::allocate_sample(::UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.resourceIDs(),  256L, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.missionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.taskID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE