

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "MissionPlanReportType.hpp"
#include "MissionPlanReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace MissionPlanStatus {

            // ---- MissionPlanReportType: 

            MissionPlanReportType::MissionPlanReportType() :
                m_missionDescription_ ("") ,
                m_missionName_ ("")  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_missionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            MissionPlanReportType::MissionPlanReportType (const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& dependentMissionIDs,const UMAA::Common::Measurement::DateTime& endTime,const ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance,const std::string& missionDescription,const std::string& missionName,const UMAA::Common::Measurement::DateTime& startTime,const ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance,const ::rti::core::bounded_sequence< UMAA::MM::BaseType::TaskPlanType, 100L >& taskPlans,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& missionID):
                m_dependentMissionIDs_( dependentMissionIDs ),
                m_endTime_( endTime ),
                m_endTimeTolerance_( endTimeTolerance ),
                m_missionDescription_( missionDescription ),
                m_missionName_( missionName ),
                m_startTime_( startTime ),
                m_startTimeTolerance_( startTimeTolerance ),
                m_taskPlans_( taskPlans ),
                m_source_( source ),
                m_timeStamp_( timeStamp ),
                m_missionID_( missionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            MissionPlanReportType::MissionPlanReportType(MissionPlanReportType&& other_) OMG_NOEXCEPT  :m_dependentMissionIDs_ (std::move(other_.m_dependentMissionIDs_))
            ,
            m_endTime_ (std::move(other_.m_endTime_))
            ,
            m_endTimeTolerance_ (std::move(other_.m_endTimeTolerance_))
            ,
            m_missionDescription_ (std::move(other_.m_missionDescription_))
            ,
            m_missionName_ (std::move(other_.m_missionName_))
            ,
            m_startTime_ (std::move(other_.m_startTime_))
            ,
            m_startTimeTolerance_ (std::move(other_.m_startTimeTolerance_))
            ,
            m_taskPlans_ (std::move(other_.m_taskPlans_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            ,
            m_missionID_ (std::move(other_.m_missionID_))
            {
            } 

            MissionPlanReportType& MissionPlanReportType::operator=(MissionPlanReportType&&  other_) OMG_NOEXCEPT {
                MissionPlanReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void MissionPlanReportType::swap(MissionPlanReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_dependentMissionIDs_, other_.m_dependentMissionIDs_);
                swap(m_endTime_, other_.m_endTime_);
                swap(m_endTimeTolerance_, other_.m_endTimeTolerance_);
                swap(m_missionDescription_, other_.m_missionDescription_);
                swap(m_missionName_, other_.m_missionName_);
                swap(m_startTime_, other_.m_startTime_);
                swap(m_startTimeTolerance_, other_.m_startTimeTolerance_);
                swap(m_taskPlans_, other_.m_taskPlans_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_missionID_, other_.m_missionID_);
            }  

            bool MissionPlanReportType::operator == (const MissionPlanReportType& other_) const {
                if (m_dependentMissionIDs_ != other_.m_dependentMissionIDs_) {
                    return false;
                }
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                if (m_endTimeTolerance_ != other_.m_endTimeTolerance_) {
                    return false;
                }
                if (m_missionDescription_ != other_.m_missionDescription_) {
                    return false;
                }
                if (m_missionName_ != other_.m_missionName_) {
                    return false;
                }
                if (m_startTime_ != other_.m_startTime_) {
                    return false;
                }
                if (m_startTimeTolerance_ != other_.m_startTimeTolerance_) {
                    return false;
                }
                if (m_taskPlans_ != other_.m_taskPlans_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_missionID_ != other_.m_missionID_) {
                    return false;
                }
                return true;
            }
            bool MissionPlanReportType::operator != (const MissionPlanReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MissionPlanReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "dependentMissionIDs: " << sample.dependentMissionIDs()<<", ";
                o << "endTime: " << sample.endTime()<<", ";
                o << "endTimeTolerance: " << sample.endTimeTolerance()<<", ";
                o << "missionDescription: " << sample.missionDescription()<<", ";
                o << "missionName: " << sample.missionName()<<", ";
                o << "startTime: " << sample.startTime()<<", ";
                o << "startTimeTolerance: " << sample.startTimeTolerance()<<", ";
                o << "taskPlans: " << sample.taskPlans()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp()<<", ";
                o << "missionID: " << sample.missionID() ;
                o <<"]";
                return o;
            }

        } // namespace MissionPlanStatus  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::MissionPlanStatus::MissionPlanReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MissionPlanReportType_g_tc_dependentMissionIDs_sequence;
                static DDS_TypeCode MissionPlanReportType_g_tc_taskPlans_sequence;

                static DDS_TypeCode_Member MissionPlanReportType_g_tc_members[11]=
                {

                    {
                        (char *)"dependentMissionIDs",/* Member name */
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
                        (char *)"endTime",/* Member name */
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
                        (char *)"endTimeTolerance",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"missionDescription",/* Member name */
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
                        (char *)"missionName",/* Member name */
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
                        (char *)"startTime",/* Member name */
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
                        (char *)"startTimeTolerance",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"taskPlans",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            9,/* Representation ID */
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
                        (char *)"missionID",/* Member name */
                        {
                            10,/* Representation ID */
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

                static DDS_TypeCode MissionPlanReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::MissionPlanStatus::MissionPlanReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        MissionPlanReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MissionPlanReportType*/

                if (is_initialized) {
                    return &MissionPlanReportType_g_tc;
                }

                MissionPlanReportType_g_tc_dependentMissionIDs_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > >((100L));
                MissionPlanReportType_g_tc_taskPlans_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::MM::BaseType::TaskPlanType, 100L > >((100L));

                MissionPlanReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MissionPlanReportType_g_tc_dependentMissionIDs_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                MissionPlanReportType_g_tc_taskPlans_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::TaskPlanType>::get().native();
                MissionPlanReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& MissionPlanReportType_g_tc_dependentMissionIDs_sequence;
                MissionPlanReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                MissionPlanReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime_Tolerance>::get().native();
                MissionPlanReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                MissionPlanReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                MissionPlanReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                MissionPlanReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime_Tolerance>::get().native();
                MissionPlanReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& MissionPlanReportType_g_tc_taskPlans_sequence;
                MissionPlanReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                MissionPlanReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                MissionPlanReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                MissionPlanReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                MissionPlanReportType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                MissionPlanReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                MissionPlanReportType_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                MissionPlanReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                MissionPlanReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MissionPlanReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::MissionPlanStatus::MissionPlanReportType *sample;

                static RTIXCdrMemberAccessInfo MissionPlanReportType_g_memberAccessInfos[11] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MissionPlanReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MissionPlanReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::MissionPlanStatus::MissionPlanReportType);
                if (sample == NULL) {
                    return NULL;
                }

                MissionPlanReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dependentMissionIDs() - (char *)sample);

                MissionPlanReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                MissionPlanReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTimeTolerance() - (char *)sample);

                MissionPlanReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionDescription() - (char *)sample);

                MissionPlanReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionName() - (char *)sample);

                MissionPlanReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTime() - (char *)sample);

                MissionPlanReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTimeTolerance() - (char *)sample);

                MissionPlanReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->taskPlans() - (char *)sample);

                MissionPlanReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                MissionPlanReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                MissionPlanReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionID() - (char *)sample);

                MissionPlanReportType_g_sampleAccessInfo.memberAccessInfos = 
                MissionPlanReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::MissionPlanStatus::MissionPlanReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MissionPlanReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MissionPlanReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MissionPlanReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MissionPlanReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::MissionPlanStatus::MissionPlanReportType >;

                MissionPlanReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MissionPlanReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MissionPlanReportType_g_typePlugin = 
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
                    NULL
                };

                return &MissionPlanReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::MissionPlanStatus::MissionPlanReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::MissionPlanStatus::MissionPlanReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::MissionPlanStatus::MissionPlanReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::MissionPlanStatus::MissionPlanReportTypePlugin_new,
                UMAA::MM::MissionPlanStatus::MissionPlanReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::MissionPlanStatus::MissionPlanReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::MissionPlanStatus::MissionPlanReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MissionPlanReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MissionPlanReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::MissionPlanStatus::MissionPlanReportType >::from_cdr_buffer(UMAA::MM::MissionPlanStatus::MissionPlanReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MissionPlanReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::MissionPlanStatus::MissionPlanReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::MissionPlanStatus::MissionPlanReportType >::reset_sample(UMAA::MM::MissionPlanStatus::MissionPlanReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.dependentMissionIDs());
            ::rti::topic::reset_sample(sample.endTime());
            ::rti::topic::reset_sample(sample.endTimeTolerance());
            sample.missionDescription("");
            sample.missionName("");
            ::rti::topic::reset_sample(sample.startTime());
            ::rti::topic::reset_sample(sample.startTimeTolerance());
            ::rti::topic::reset_sample(sample.taskPlans());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.missionID());
        }

        void topic_type_support< UMAA::MM::MissionPlanStatus::MissionPlanReportType >::allocate_sample(UMAA::MM::MissionPlanStatus::MissionPlanReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.dependentMissionIDs(),  100L, -1);
            ::rti::topic::allocate_sample(sample.endTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.missionDescription(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.missionName(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.startTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.taskPlans(),  100L, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.missionID(),  -1, -1);
        }

    }
}  

