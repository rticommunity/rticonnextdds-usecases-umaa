

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "TaskPlanTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "TaskPlanType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- TaskPlanType: 

            TaskPlanType::TaskPlanType() :
                m_approvalRequired_ (0) ,
                m_name_ ("") ,
                m_taskDescription_ ("") ,
                m_taskPriority_ (0)  {

            }   

            TaskPlanType::TaskPlanType (bool approvalRequired_,const std::string& name_,const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L >& stateTrigger_,const std::string& taskDescription_,const ::UMAA::Common::Measurement::NumericGUID& taskID_,int32_t taskPriority_,const ::UMAA::Common::LargeSetMetadata& objectivesSetMetadata_):
                m_approvalRequired_(approvalRequired_), 
                m_name_(name_), 
                m_stateTrigger_(stateTrigger_), 
                m_taskDescription_(taskDescription_), 
                m_taskID_(taskID_), 
                m_taskPriority_(taskPriority_), 
                m_objectivesSetMetadata_(objectivesSetMetadata_) {
            }

            void TaskPlanType::swap(TaskPlanType& other_)  noexcept 
            {
                using std::swap;
                swap(m_approvalRequired_, other_.m_approvalRequired_);
                swap(m_name_, other_.m_name_);
                swap(m_stateTrigger_, other_.m_stateTrigger_);
                swap(m_taskDescription_, other_.m_taskDescription_);
                swap(m_taskID_, other_.m_taskID_);
                swap(m_taskPriority_, other_.m_taskPriority_);
                swap(m_objectivesSetMetadata_, other_.m_objectivesSetMetadata_);
            }  

            bool TaskPlanType::operator == (const TaskPlanType& other_) const {
                if (m_approvalRequired_ != other_.m_approvalRequired_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_stateTrigger_ != other_.m_stateTrigger_) {
                    return false;
                }
                if (m_taskDescription_ != other_.m_taskDescription_) {
                    return false;
                }
                if (m_taskID_ != other_.m_taskID_) {
                    return false;
                }
                if (m_taskPriority_ != other_.m_taskPriority_) {
                    return false;
                }
                if (m_objectivesSetMetadata_ != other_.m_objectivesSetMetadata_) {
                    return false;
                }
                return true;
            }

            bool TaskPlanType::operator != (const TaskPlanType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TaskPlanType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "approvalRequired: " << sample.approvalRequired ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "stateTrigger: " << sample.stateTrigger ()<<", ";
                o << "taskDescription: " << sample.taskDescription ()<<", ";
                o << "taskID: " << sample.taskID ()<<", ";
                o << "taskPriority: " << sample.taskPriority ()<<", ";
                o << "objectivesSetMetadata: " << sample.objectivesSetMetadata ();
                o <<"]";
                return o;
            }

            // ---- TaskPlanTypeObjectivesSetElement: 

            TaskPlanTypeObjectivesSetElement::TaskPlanTypeObjectivesSetElement()  {

            }   

            TaskPlanTypeObjectivesSetElement::TaskPlanTypeObjectivesSetElement (const ::UMAA::MM::BaseType::ObjectiveType& element_,const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_):
                m_element_(element_), 
                m_setID_(setID_), 
                m_elementID_(elementID_), 
                m_elementTimestamp_(elementTimestamp_) {
            }

            void TaskPlanTypeObjectivesSetElement::swap(TaskPlanTypeObjectivesSetElement& other_)  noexcept 
            {
                using std::swap;
                swap(m_element_, other_.m_element_);
                swap(m_setID_, other_.m_setID_);
                swap(m_elementID_, other_.m_elementID_);
                swap(m_elementTimestamp_, other_.m_elementTimestamp_);
            }  

            bool TaskPlanTypeObjectivesSetElement::operator == (const TaskPlanTypeObjectivesSetElement& other_) const {
                if (m_element_ != other_.m_element_) {
                    return false;
                }
                if (m_setID_ != other_.m_setID_) {
                    return false;
                }
                if (m_elementID_ != other_.m_elementID_) {
                    return false;
                }
                if (m_elementTimestamp_ != other_.m_elementTimestamp_) {
                    return false;
                }
                return true;
            }

            bool TaskPlanTypeObjectivesSetElement::operator != (const TaskPlanTypeObjectivesSetElement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TaskPlanTypeObjectivesSetElement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "element: " << sample.element ()<<", ";
                o << "setID: " << sample.setID ()<<", ";
                o << "elementID: " << sample.elementID ()<<", ";
                o << "elementTimestamp: " << sample.elementTimestamp ();
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
        struct native_type_code< ::UMAA::MM::BaseType::TaskPlanType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode TaskPlanType_g_tc_stateTrigger_sequence;

                static DDS_TypeCode_Member TaskPlanType_g_tc_members[7]=
                {

                    {
                        (char *)"approvalRequired",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"stateTrigger",/* Member name */
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
                        (char *)"taskDescription",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"taskPriority",/* Member name */
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
                        (char *)"objectivesSetMetadata",/* Member name */
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
                    }
                };

                static DDS_TypeCode TaskPlanType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::TaskPlanType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        TaskPlanType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TaskPlanType*/

                if (is_initialized) {
                    return &TaskPlanType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TaskPlanType_g_tc_stateTrigger_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L > >((16L));

                TaskPlanType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TaskPlanType_g_tc_stateTrigger_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::StateTriggerType>::get().native();
                TaskPlanType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                TaskPlanType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                TaskPlanType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& TaskPlanType_g_tc_stateTrigger_sequence;
                TaskPlanType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                TaskPlanType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                TaskPlanType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Priority_AliasTag_t>::get().native();
                TaskPlanType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::LargeSetMetadata>::get().native();

                /* Initialize the values for member annotations. */
                TaskPlanType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                TaskPlanType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                TaskPlanType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                TaskPlanType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                TaskPlanType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                TaskPlanType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                TaskPlanType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                TaskPlanType_g_tc_members[5]._annotations._defaultValue._u.long_value = 0;
                TaskPlanType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                TaskPlanType_g_tc_members[5]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                TaskPlanType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                TaskPlanType_g_tc_members[5]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                TaskPlanType_g_tc._data._sampleAccessInfo = sample_access_info();
                TaskPlanType_g_tc._data._typePlugin = type_plugin_info();    

                return &TaskPlanType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::TaskPlanType *sample;

                static RTIXCdrMemberAccessInfo TaskPlanType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TaskPlanType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TaskPlanType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::TaskPlanType);
                if (sample == NULL) {
                    return NULL;
                }

                TaskPlanType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->approvalRequired() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stateTrigger() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->taskDescription() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->taskID() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->taskPriority() - (char *)sample);

                TaskPlanType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectivesSetMetadata() - (char *)sample);

                TaskPlanType_g_sampleAccessInfo.memberAccessInfos = 
                TaskPlanType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::TaskPlanType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TaskPlanType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TaskPlanType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TaskPlanType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TaskPlanType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::TaskPlanType >;

                TaskPlanType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TaskPlanType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TaskPlanType_g_typePlugin = 
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

                return &TaskPlanType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::TaskPlanType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::TaskPlanType >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TaskPlanTypeObjectivesSetElement_g_tc_members[4]=
                {

                    {
                        (char *)"element",/* Member name */
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
                        (char *)"setID",/* Member name */
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
                        (char *)"elementID",/* Member name */
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
                        (char *)"elementTimestamp",/* Member name */
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

                static DDS_TypeCode TaskPlanTypeObjectivesSetElement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        TaskPlanTypeObjectivesSetElement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TaskPlanTypeObjectivesSetElement*/

                if (is_initialized) {
                    return &TaskPlanTypeObjectivesSetElement_g_tc;
                }

                is_initialized = RTI_TRUE;

                TaskPlanTypeObjectivesSetElement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TaskPlanTypeObjectivesSetElement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::ObjectiveType>::get().native();
                TaskPlanTypeObjectivesSetElement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                TaskPlanTypeObjectivesSetElement_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                TaskPlanTypeObjectivesSetElement_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                TaskPlanTypeObjectivesSetElement_g_tc._data._sampleAccessInfo = sample_access_info();
                TaskPlanTypeObjectivesSetElement_g_tc._data._typePlugin = type_plugin_info();    

                return &TaskPlanTypeObjectivesSetElement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement *sample;

                static RTIXCdrMemberAccessInfo TaskPlanTypeObjectivesSetElement_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TaskPlanTypeObjectivesSetElement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TaskPlanTypeObjectivesSetElement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement);
                if (sample == NULL) {
                    return NULL;
                }

                TaskPlanTypeObjectivesSetElement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->element() - (char *)sample);

                TaskPlanTypeObjectivesSetElement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->setID() - (char *)sample);

                TaskPlanTypeObjectivesSetElement_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementID() - (char *)sample);

                TaskPlanTypeObjectivesSetElement_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementTimestamp() - (char *)sample);

                TaskPlanTypeObjectivesSetElement_g_sampleAccessInfo.memberAccessInfos = 
                TaskPlanTypeObjectivesSetElement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TaskPlanTypeObjectivesSetElement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TaskPlanTypeObjectivesSetElement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TaskPlanTypeObjectivesSetElement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TaskPlanTypeObjectivesSetElement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement >;

                TaskPlanTypeObjectivesSetElement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TaskPlanTypeObjectivesSetElement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TaskPlanTypeObjectivesSetElement_g_typePlugin = 
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

                return &TaskPlanTypeObjectivesSetElement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::TaskPlanType >::reset_sample(::UMAA::MM::BaseType::TaskPlanType& sample) 
        {
            sample.approvalRequired(0);
            sample.name("");
            ::rti::topic::reset_sample(sample.stateTrigger());
            sample.taskDescription("");
            ::rti::topic::reset_sample(sample.taskID());
            sample.taskPriority(0);
            ::rti::topic::reset_sample(sample.objectivesSetMetadata());
        }

        void topic_type_support< ::UMAA::MM::BaseType::TaskPlanType >::allocate_sample(::UMAA::MM::BaseType::TaskPlanType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.stateTrigger(),  16L, -1);
            ::rti::topic::allocate_sample(sample.taskDescription(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.taskID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.objectivesSetMetadata(),  -1, -1);
        }
        void topic_type_support< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElementPlugin_new,
                ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElementPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TaskPlanTypeObjectivesSetElementPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TaskPlanTypeObjectivesSetElementPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement >::from_cdr_buffer(::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TaskPlanTypeObjectivesSetElementPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement >::reset_sample(::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement& sample) 
        {
            ::rti::topic::reset_sample(sample.element());
            ::rti::topic::reset_sample(sample.setID());
            ::rti::topic::reset_sample(sample.elementID());
            ::rti::topic::reset_sample(sample.elementTimestamp());
        }

        void topic_type_support< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement >::allocate_sample(::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.element(),  -1, -1);
            ::rti::topic::allocate_sample(sample.setID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementTimestamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
