

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectivePlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ObjectivePlanAssignmentReportType.hpp"
#include "ObjectivePlanAssignmentReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace ObjectivePlanAssignmentStatus {

            // ---- ObjectivePlanAssignmentReportType: 

            ObjectivePlanAssignmentReportType::ObjectivePlanAssignmentReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                ::rti::core::fill_array( 
                    m_objectiveID_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                ::rti::core::fill_array( 
                    m_taskID_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            ObjectivePlanAssignmentReportType::ObjectivePlanAssignmentReportType (const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& resourceIDs,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& objectiveID,const UMAA::Common::Measurement::NumericGUID& taskID):
                m_resourceIDs_( resourceIDs ),
                m_source_( source ),
                m_timeStamp_( timeStamp ),
                m_objectiveID_( objectiveID ),
                m_taskID_( taskID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ObjectivePlanAssignmentReportType::ObjectivePlanAssignmentReportType(ObjectivePlanAssignmentReportType&& other_) OMG_NOEXCEPT  :m_resourceIDs_ (std::move(other_.m_resourceIDs_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            ,
            m_objectiveID_ (std::move(other_.m_objectiveID_))
            ,
            m_taskID_ (std::move(other_.m_taskID_))
            {
            } 

            ObjectivePlanAssignmentReportType& ObjectivePlanAssignmentReportType::operator=(ObjectivePlanAssignmentReportType&&  other_) OMG_NOEXCEPT {
                ObjectivePlanAssignmentReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ObjectivePlanAssignmentReportType::swap(ObjectivePlanAssignmentReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_resourceIDs_, other_.m_resourceIDs_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_objectiveID_, other_.m_objectiveID_);
                swap(m_taskID_, other_.m_taskID_);
            }  

            bool ObjectivePlanAssignmentReportType::operator == (const ObjectivePlanAssignmentReportType& other_) const {
                if (m_resourceIDs_ != other_.m_resourceIDs_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_objectiveID_ != other_.m_objectiveID_) {
                    return false;
                }
                if (m_taskID_ != other_.m_taskID_) {
                    return false;
                }
                return true;
            }
            bool ObjectivePlanAssignmentReportType::operator != (const ObjectivePlanAssignmentReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ObjectivePlanAssignmentReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "resourceIDs: " << sample.resourceIDs()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp()<<", ";
                o << "objectiveID: " << sample.objectiveID()<<", ";
                o << "taskID: " << sample.taskID() ;
                o <<"]";
                return o;
            }

        } // namespace ObjectivePlanAssignmentStatus  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ObjectivePlanAssignmentReportType_g_tc_resourceIDs_sequence;

                static DDS_TypeCode_Member ObjectivePlanAssignmentReportType_g_tc_members[5]=
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
                        (char *)"objectiveID",/* Member name */
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

                static DDS_TypeCode ObjectivePlanAssignmentReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ObjectivePlanAssignmentReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ObjectivePlanAssignmentReportType*/

                if (is_initialized) {
                    return &ObjectivePlanAssignmentReportType_g_tc;
                }

                ObjectivePlanAssignmentReportType_g_tc_resourceIDs_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > >((100L));

                ObjectivePlanAssignmentReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ObjectivePlanAssignmentReportType_g_tc_resourceIDs_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectivePlanAssignmentReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ObjectivePlanAssignmentReportType_g_tc_resourceIDs_sequence;
                ObjectivePlanAssignmentReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectivePlanAssignmentReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                ObjectivePlanAssignmentReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectivePlanAssignmentReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                ObjectivePlanAssignmentReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                ObjectivePlanAssignmentReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ObjectivePlanAssignmentReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType *sample;

                static RTIXCdrMemberAccessInfo ObjectivePlanAssignmentReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ObjectivePlanAssignmentReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ObjectivePlanAssignmentReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType);
                if (sample == NULL) {
                    return NULL;
                }

                ObjectivePlanAssignmentReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceIDs() - (char *)sample);

                ObjectivePlanAssignmentReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ObjectivePlanAssignmentReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ObjectivePlanAssignmentReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectiveID() - (char *)sample);

                ObjectivePlanAssignmentReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->taskID() - (char *)sample);

                ObjectivePlanAssignmentReportType_g_sampleAccessInfo.memberAccessInfos = 
                ObjectivePlanAssignmentReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ObjectivePlanAssignmentReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ObjectivePlanAssignmentReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ObjectivePlanAssignmentReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ObjectivePlanAssignmentReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType >;

                ObjectivePlanAssignmentReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ObjectivePlanAssignmentReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ObjectivePlanAssignmentReportType_g_typePlugin = 
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

                return &ObjectivePlanAssignmentReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportTypePlugin_new,
                UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ObjectivePlanAssignmentReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ObjectivePlanAssignmentReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType >::from_cdr_buffer(UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ObjectivePlanAssignmentReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType >::reset_sample(UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.resourceIDs());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.objectiveID());
            ::rti::topic::reset_sample(sample.taskID());
        }

        void topic_type_support< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType >::allocate_sample(UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.resourceIDs(),  100L, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.objectiveID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.taskID(),  -1, -1);
        }

    }
}  

