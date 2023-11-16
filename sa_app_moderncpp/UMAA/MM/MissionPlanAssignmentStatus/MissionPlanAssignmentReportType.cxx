

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "MissionPlanAssignmentReportType.hpp"
#include "MissionPlanAssignmentReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace MissionPlanAssignmentStatus {

            // ---- MissionPlanAssignmentReportType: 

            MissionPlanAssignmentReportType::MissionPlanAssignmentReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                ::rti::core::fill_array( 
                    m_missionID_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            MissionPlanAssignmentReportType::MissionPlanAssignmentReportType (const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& resourceIDs,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& missionID):
                m_resourceIDs_( resourceIDs ),
                m_source_( source ),
                m_timeStamp_( timeStamp ),
                m_missionID_( missionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            MissionPlanAssignmentReportType::MissionPlanAssignmentReportType(MissionPlanAssignmentReportType&& other_) OMG_NOEXCEPT  :m_resourceIDs_ (std::move(other_.m_resourceIDs_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            ,
            m_missionID_ (std::move(other_.m_missionID_))
            {
            } 

            MissionPlanAssignmentReportType& MissionPlanAssignmentReportType::operator=(MissionPlanAssignmentReportType&&  other_) OMG_NOEXCEPT {
                MissionPlanAssignmentReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void MissionPlanAssignmentReportType::swap(MissionPlanAssignmentReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_resourceIDs_, other_.m_resourceIDs_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_missionID_, other_.m_missionID_);
            }  

            bool MissionPlanAssignmentReportType::operator == (const MissionPlanAssignmentReportType& other_) const {
                if (m_resourceIDs_ != other_.m_resourceIDs_) {
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
            bool MissionPlanAssignmentReportType::operator != (const MissionPlanAssignmentReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MissionPlanAssignmentReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "resourceIDs: " << sample.resourceIDs()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp()<<", ";
                o << "missionID: " << sample.missionID() ;
                o <<"]";
                return o;
            }

        } // namespace MissionPlanAssignmentStatus  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MissionPlanAssignmentReportType_g_tc_resourceIDs_sequence;

                static DDS_TypeCode_Member MissionPlanAssignmentReportType_g_tc_members[4]=
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode MissionPlanAssignmentReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        MissionPlanAssignmentReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MissionPlanAssignmentReportType*/

                if (is_initialized) {
                    return &MissionPlanAssignmentReportType_g_tc;
                }

                MissionPlanAssignmentReportType_g_tc_resourceIDs_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > >((100L));

                MissionPlanAssignmentReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MissionPlanAssignmentReportType_g_tc_resourceIDs_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                MissionPlanAssignmentReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& MissionPlanAssignmentReportType_g_tc_resourceIDs_sequence;
                MissionPlanAssignmentReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                MissionPlanAssignmentReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                MissionPlanAssignmentReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                MissionPlanAssignmentReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                MissionPlanAssignmentReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MissionPlanAssignmentReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType *sample;

                static RTIXCdrMemberAccessInfo MissionPlanAssignmentReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MissionPlanAssignmentReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MissionPlanAssignmentReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType);
                if (sample == NULL) {
                    return NULL;
                }

                MissionPlanAssignmentReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceIDs() - (char *)sample);

                MissionPlanAssignmentReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                MissionPlanAssignmentReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                MissionPlanAssignmentReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionID() - (char *)sample);

                MissionPlanAssignmentReportType_g_sampleAccessInfo.memberAccessInfos = 
                MissionPlanAssignmentReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MissionPlanAssignmentReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MissionPlanAssignmentReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MissionPlanAssignmentReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MissionPlanAssignmentReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType >;

                MissionPlanAssignmentReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MissionPlanAssignmentReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MissionPlanAssignmentReportType_g_typePlugin = 
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

                return &MissionPlanAssignmentReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportTypePlugin_new,
                UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MissionPlanAssignmentReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MissionPlanAssignmentReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType >::from_cdr_buffer(UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MissionPlanAssignmentReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType >::reset_sample(UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.resourceIDs());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.missionID());
        }

        void topic_type_support< UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType >::allocate_sample(UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.resourceIDs(),  100L, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.missionID(),  -1, -1);
        }

    }
}  

