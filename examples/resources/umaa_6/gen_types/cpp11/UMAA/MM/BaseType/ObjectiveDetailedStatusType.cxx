

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ObjectiveDetailedStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ObjectiveDetailedStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- ObjectiveDetailedStatusType: 

            ObjectiveDetailedStatusType::ObjectiveDetailedStatusType() :
                m_errors_ ("") ,
                m_feedback_ ("") ,
                m_isCurrentlyMeetingObjective_ (0) ,
                m_objectiveStatus_(UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::CANCELED) ,
                m_objectiveStatusReason_(UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::BUS_MSG_DISPOSE) ,
                m_warnings_ ("") ,
                m_specializationTopic_ ("")  {

            }   

            ObjectiveDetailedStatusType::ObjectiveDetailedStatusType (const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 256L >& childObjectiveIDs_,const std::string& errors_,const std::string& feedback_,bool isCurrentlyMeetingObjective_,const ::UMAA::Common::Measurement::NumericGUID& objectiveID_,const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType& objectiveStatus_,const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType& objectiveStatusReason_,const ::UMAA::Common::Measurement::DateTime& startTime_,const std::string& warnings_,const ::UMAA::Common::Measurement::NumericGUID& specializationID_,const ::UMAA::Common::Measurement::DateTime& specializationTimestamp_,const std::string& specializationTopic_):
                m_childObjectiveIDs_(childObjectiveIDs_), 
                m_errors_(errors_), 
                m_feedback_(feedback_), 
                m_isCurrentlyMeetingObjective_(isCurrentlyMeetingObjective_), 
                m_objectiveID_(objectiveID_), 
                m_objectiveStatus_(objectiveStatus_), 
                m_objectiveStatusReason_(objectiveStatusReason_), 
                m_startTime_(startTime_), 
                m_warnings_(warnings_), 
                m_specializationID_(specializationID_), 
                m_specializationTimestamp_(specializationTimestamp_), 
                m_specializationTopic_(specializationTopic_) {
            }

            void ObjectiveDetailedStatusType::swap(ObjectiveDetailedStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_childObjectiveIDs_, other_.m_childObjectiveIDs_);
                swap(m_errors_, other_.m_errors_);
                swap(m_feedback_, other_.m_feedback_);
                swap(m_isCurrentlyMeetingObjective_, other_.m_isCurrentlyMeetingObjective_);
                swap(m_objectiveID_, other_.m_objectiveID_);
                swap(m_objectiveStatus_, other_.m_objectiveStatus_);
                swap(m_objectiveStatusReason_, other_.m_objectiveStatusReason_);
                swap(m_startTime_, other_.m_startTime_);
                swap(m_warnings_, other_.m_warnings_);
                swap(m_specializationID_, other_.m_specializationID_);
                swap(m_specializationTimestamp_, other_.m_specializationTimestamp_);
                swap(m_specializationTopic_, other_.m_specializationTopic_);
            }  

            bool ObjectiveDetailedStatusType::operator == (const ObjectiveDetailedStatusType& other_) const {
                if (m_childObjectiveIDs_ != other_.m_childObjectiveIDs_) {
                    return false;
                }
                if (m_errors_ != other_.m_errors_) {
                    return false;
                }
                if (m_feedback_ != other_.m_feedback_) {
                    return false;
                }
                if (m_isCurrentlyMeetingObjective_ != other_.m_isCurrentlyMeetingObjective_) {
                    return false;
                }
                if (m_objectiveID_ != other_.m_objectiveID_) {
                    return false;
                }
                if (m_objectiveStatus_ != other_.m_objectiveStatus_) {
                    return false;
                }
                if (m_objectiveStatusReason_ != other_.m_objectiveStatusReason_) {
                    return false;
                }
                if (m_startTime_ != other_.m_startTime_) {
                    return false;
                }
                if (m_warnings_ != other_.m_warnings_) {
                    return false;
                }
                if (m_specializationID_ != other_.m_specializationID_) {
                    return false;
                }
                if (m_specializationTimestamp_ != other_.m_specializationTimestamp_) {
                    return false;
                }
                if (m_specializationTopic_ != other_.m_specializationTopic_) {
                    return false;
                }
                return true;
            }

            bool ObjectiveDetailedStatusType::operator != (const ObjectiveDetailedStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ObjectiveDetailedStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "childObjectiveIDs: " << sample.childObjectiveIDs ()<<", ";
                o << "errors: " << sample.errors ()<<", ";
                o << "feedback: " << sample.feedback ()<<", ";
                o << "isCurrentlyMeetingObjective: " << sample.isCurrentlyMeetingObjective ()<<", ";
                o << "objectiveID: " << sample.objectiveID ()<<", ";
                o << "objectiveStatus: " << sample.objectiveStatus ()<<", ";
                o << "objectiveStatusReason: " << sample.objectiveStatusReason ()<<", ";
                o << "startTime: " << sample.startTime ()<<", ";
                o << "warnings: " << sample.warnings ()<<", ";
                o << "specializationID: " << sample.specializationID ()<<", ";
                o << "specializationTimestamp: " << sample.specializationTimestamp ()<<", ";
                o << "specializationTopic: " << sample.specializationTopic ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

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
        struct native_type_code< ::UMAA::MM::BaseType::ObjectiveDetailedStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ObjectiveDetailedStatusType_g_tc_childObjectiveIDs_sequence;

                static DDS_TypeCode_Member ObjectiveDetailedStatusType_g_tc_members[12]=
                {

                    {
                        (char *)"childObjectiveIDs",/* Member name */
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
                        (char *)"errors",/* Member name */
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
                        (char *)"feedback",/* Member name */
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
                        (char *)"isCurrentlyMeetingObjective",/* Member name */
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
                        (char *)"objectiveID",/* Member name */
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
                        (char *)"objectiveStatus",/* Member name */
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
                        (char *)"objectiveStatusReason",/* Member name */
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
                        (char *)"startTime",/* Member name */
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
                        (char *)"warnings",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"specializationID",/* Member name */
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
                        (char *)"specializationTimestamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"specializationTopic",/* Member name */
                        {
                            11,/* Representation ID */
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

                static DDS_TypeCode ObjectiveDetailedStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ObjectiveDetailedStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        ObjectiveDetailedStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ObjectiveDetailedStatusType*/

                if (is_initialized) {
                    return &ObjectiveDetailedStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ObjectiveDetailedStatusType_g_tc_childObjectiveIDs_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 256L > >((256L));

                ObjectiveDetailedStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ObjectiveDetailedStatusType_g_tc_childObjectiveIDs_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveDetailedStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ObjectiveDetailedStatusType_g_tc_childObjectiveIDs_sequence;
                ObjectiveDetailedStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ObjectiveDetailedStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ObjectiveDetailedStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                ObjectiveDetailedStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveDetailedStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType>::get().native();
                ObjectiveDetailedStatusType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType>::get().native();
                ObjectiveDetailedStatusType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ObjectiveDetailedStatusType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ObjectiveDetailedStatusType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveDetailedStatusType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ObjectiveDetailedStatusType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ObjectiveDetailedStatusType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ObjectiveDetailedStatusType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                ObjectiveDetailedStatusType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ObjectiveDetailedStatusType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                ObjectiveDetailedStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                ObjectiveDetailedStatusType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
                ObjectiveDetailedStatusType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ObjectiveDetailedStatusType_g_tc_members[5]._annotations._defaultValue._u.enumerated_value = 0;
                ObjectiveDetailedStatusType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ObjectiveDetailedStatusType_g_tc_members[6]._annotations._defaultValue._u.enumerated_value = 0;
                ObjectiveDetailedStatusType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ObjectiveDetailedStatusType_g_tc_members[8]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                ObjectiveDetailedStatusType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ObjectiveDetailedStatusType_g_tc_members[11]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ObjectiveDetailedStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                ObjectiveDetailedStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &ObjectiveDetailedStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ObjectiveDetailedStatusType *sample;

                static RTIXCdrMemberAccessInfo ObjectiveDetailedStatusType_g_memberAccessInfos[12] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ObjectiveDetailedStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ObjectiveDetailedStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ObjectiveDetailedStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                ObjectiveDetailedStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->childObjectiveIDs() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->errors() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->feedback() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->isCurrentlyMeetingObjective() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectiveID() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectiveStatus() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectiveStatusReason() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTime() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->warnings() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationID() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationTimestamp() - (char *)sample);

                ObjectiveDetailedStatusType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationTopic() - (char *)sample);

                ObjectiveDetailedStatusType_g_sampleAccessInfo.memberAccessInfos = 
                ObjectiveDetailedStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ObjectiveDetailedStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ObjectiveDetailedStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ObjectiveDetailedStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ObjectiveDetailedStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ObjectiveDetailedStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ObjectiveDetailedStatusType >;

                ObjectiveDetailedStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ObjectiveDetailedStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ObjectiveDetailedStatusType_g_typePlugin = 
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

                return &ObjectiveDetailedStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ObjectiveDetailedStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ObjectiveDetailedStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::ObjectiveDetailedStatusType >::reset_sample(::UMAA::MM::BaseType::ObjectiveDetailedStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.childObjectiveIDs());
            sample.errors("");
            sample.feedback("");
            sample.isCurrentlyMeetingObjective(0);
            ::rti::topic::reset_sample(sample.objectiveID());
            sample.objectiveStatus(UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::CANCELED);
            sample.objectiveStatusReason(UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::BUS_MSG_DISPOSE);
            ::rti::topic::reset_sample(sample.startTime());
            sample.warnings("");
            ::rti::topic::reset_sample(sample.specializationID());
            ::rti::topic::reset_sample(sample.specializationTimestamp());
            sample.specializationTopic("");
        }

        void topic_type_support< ::UMAA::MM::BaseType::ObjectiveDetailedStatusType >::allocate_sample(::UMAA::MM::BaseType::ObjectiveDetailedStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.childObjectiveIDs(),  256L, -1);
            ::rti::topic::allocate_sample(sample.errors(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.feedback(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.objectiveID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.objectiveStatus(),  -1, -1);
            ::rti::topic::allocate_sample(sample.objectiveStatusReason(),  -1, -1);
            ::rti::topic::allocate_sample(sample.startTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.warnings(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.specializationID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationTimestamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationTopic(),  -1, 1023L);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
