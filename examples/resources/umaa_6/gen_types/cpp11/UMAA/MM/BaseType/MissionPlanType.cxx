

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "MissionPlanTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "MissionPlanType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- MissionPlanType: 

            MissionPlanType::MissionPlanType() :
                m_approvalRequired_ (0) ,
                m_missionDescription_ ("") ,
                m_missionPriority_ (0) ,
                m_name_ ("")  {

            }   

            MissionPlanType::MissionPlanType (bool approvalRequired_,const std::string& missionDescription_,const ::UMAA::Common::Measurement::NumericGUID& missionID_,int32_t missionPriority_,const std::string& name_,const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L >& stateTrigger_,const ::UMAA::Common::LargeSetMetadata& taskPlansSetMetadata_):
                m_approvalRequired_(approvalRequired_), 
                m_missionDescription_(missionDescription_), 
                m_missionID_(missionID_), 
                m_missionPriority_(missionPriority_), 
                m_name_(name_), 
                m_stateTrigger_(stateTrigger_), 
                m_taskPlansSetMetadata_(taskPlansSetMetadata_) {
            }

            void MissionPlanType::swap(MissionPlanType& other_)  noexcept 
            {
                using std::swap;
                swap(m_approvalRequired_, other_.m_approvalRequired_);
                swap(m_missionDescription_, other_.m_missionDescription_);
                swap(m_missionID_, other_.m_missionID_);
                swap(m_missionPriority_, other_.m_missionPriority_);
                swap(m_name_, other_.m_name_);
                swap(m_stateTrigger_, other_.m_stateTrigger_);
                swap(m_taskPlansSetMetadata_, other_.m_taskPlansSetMetadata_);
            }  

            bool MissionPlanType::operator == (const MissionPlanType& other_) const {
                if (m_approvalRequired_ != other_.m_approvalRequired_) {
                    return false;
                }
                if (m_missionDescription_ != other_.m_missionDescription_) {
                    return false;
                }
                if (m_missionID_ != other_.m_missionID_) {
                    return false;
                }
                if (m_missionPriority_ != other_.m_missionPriority_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_stateTrigger_ != other_.m_stateTrigger_) {
                    return false;
                }
                if (m_taskPlansSetMetadata_ != other_.m_taskPlansSetMetadata_) {
                    return false;
                }
                return true;
            }

            bool MissionPlanType::operator != (const MissionPlanType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MissionPlanType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "approvalRequired: " << sample.approvalRequired ()<<", ";
                o << "missionDescription: " << sample.missionDescription ()<<", ";
                o << "missionID: " << sample.missionID ()<<", ";
                o << "missionPriority: " << sample.missionPriority ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "stateTrigger: " << sample.stateTrigger ()<<", ";
                o << "taskPlansSetMetadata: " << sample.taskPlansSetMetadata ();
                o <<"]";
                return o;
            }

            // ---- MissionPlanTypeTaskPlansSetElement: 

            MissionPlanTypeTaskPlansSetElement::MissionPlanTypeTaskPlansSetElement()  {

            }   

            MissionPlanTypeTaskPlansSetElement::MissionPlanTypeTaskPlansSetElement (const ::UMAA::MM::BaseType::TaskPlanType& element_,const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_):
                m_element_(element_), 
                m_setID_(setID_), 
                m_elementID_(elementID_), 
                m_elementTimestamp_(elementTimestamp_) {
            }

            void MissionPlanTypeTaskPlansSetElement::swap(MissionPlanTypeTaskPlansSetElement& other_)  noexcept 
            {
                using std::swap;
                swap(m_element_, other_.m_element_);
                swap(m_setID_, other_.m_setID_);
                swap(m_elementID_, other_.m_elementID_);
                swap(m_elementTimestamp_, other_.m_elementTimestamp_);
            }  

            bool MissionPlanTypeTaskPlansSetElement::operator == (const MissionPlanTypeTaskPlansSetElement& other_) const {
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

            bool MissionPlanTypeTaskPlansSetElement::operator != (const MissionPlanTypeTaskPlansSetElement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MissionPlanTypeTaskPlansSetElement& sample)
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
        struct native_type_code< ::UMAA::MM::BaseType::MissionPlanType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MissionPlanType_g_tc_stateTrigger_sequence;

                static DDS_TypeCode_Member MissionPlanType_g_tc_members[7]=
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
                        (char *)"missionDescription",/* Member name */
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
                        (char *)"missionID",/* Member name */
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
                        (char *)"missionPriority",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"stateTrigger",/* Member name */
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
                        (char *)"taskPlansSetMetadata",/* Member name */
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

                static DDS_TypeCode MissionPlanType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::MissionPlanType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        MissionPlanType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MissionPlanType*/

                if (is_initialized) {
                    return &MissionPlanType_g_tc;
                }

                is_initialized = RTI_TRUE;

                MissionPlanType_g_tc_stateTrigger_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L > >((16L));

                MissionPlanType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MissionPlanType_g_tc_stateTrigger_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::StateTriggerType>::get().native();
                MissionPlanType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                MissionPlanType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                MissionPlanType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                MissionPlanType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Priority_AliasTag_t>::get().native();
                MissionPlanType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                MissionPlanType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& MissionPlanType_g_tc_stateTrigger_sequence;
                MissionPlanType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::LargeSetMetadata>::get().native();

                /* Initialize the values for member annotations. */
                MissionPlanType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                MissionPlanType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                MissionPlanType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                MissionPlanType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                MissionPlanType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                MissionPlanType_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                MissionPlanType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                MissionPlanType_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                MissionPlanType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                MissionPlanType_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                MissionPlanType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                MissionPlanType_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                MissionPlanType_g_tc._data._sampleAccessInfo = sample_access_info();
                MissionPlanType_g_tc._data._typePlugin = type_plugin_info();    

                return &MissionPlanType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::MissionPlanType *sample;

                static RTIXCdrMemberAccessInfo MissionPlanType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MissionPlanType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MissionPlanType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::MissionPlanType);
                if (sample == NULL) {
                    return NULL;
                }

                MissionPlanType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->approvalRequired() - (char *)sample);

                MissionPlanType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionDescription() - (char *)sample);

                MissionPlanType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionID() - (char *)sample);

                MissionPlanType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionPriority() - (char *)sample);

                MissionPlanType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                MissionPlanType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stateTrigger() - (char *)sample);

                MissionPlanType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->taskPlansSetMetadata() - (char *)sample);

                MissionPlanType_g_sampleAccessInfo.memberAccessInfos = 
                MissionPlanType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::MissionPlanType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MissionPlanType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MissionPlanType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MissionPlanType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MissionPlanType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::MissionPlanType >;

                MissionPlanType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MissionPlanType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MissionPlanType_g_typePlugin = 
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

                return &MissionPlanType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::MissionPlanType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::MissionPlanType >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MissionPlanTypeTaskPlansSetElement_g_tc_members[4]=
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

                static DDS_TypeCode MissionPlanTypeTaskPlansSetElement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        MissionPlanTypeTaskPlansSetElement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MissionPlanTypeTaskPlansSetElement*/

                if (is_initialized) {
                    return &MissionPlanTypeTaskPlansSetElement_g_tc;
                }

                is_initialized = RTI_TRUE;

                MissionPlanTypeTaskPlansSetElement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MissionPlanTypeTaskPlansSetElement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::TaskPlanType>::get().native();
                MissionPlanTypeTaskPlansSetElement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                MissionPlanTypeTaskPlansSetElement_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                MissionPlanTypeTaskPlansSetElement_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                MissionPlanTypeTaskPlansSetElement_g_tc._data._sampleAccessInfo = sample_access_info();
                MissionPlanTypeTaskPlansSetElement_g_tc._data._typePlugin = type_plugin_info();    

                return &MissionPlanTypeTaskPlansSetElement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement *sample;

                static RTIXCdrMemberAccessInfo MissionPlanTypeTaskPlansSetElement_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MissionPlanTypeTaskPlansSetElement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MissionPlanTypeTaskPlansSetElement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement);
                if (sample == NULL) {
                    return NULL;
                }

                MissionPlanTypeTaskPlansSetElement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->element() - (char *)sample);

                MissionPlanTypeTaskPlansSetElement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->setID() - (char *)sample);

                MissionPlanTypeTaskPlansSetElement_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementID() - (char *)sample);

                MissionPlanTypeTaskPlansSetElement_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementTimestamp() - (char *)sample);

                MissionPlanTypeTaskPlansSetElement_g_sampleAccessInfo.memberAccessInfos = 
                MissionPlanTypeTaskPlansSetElement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MissionPlanTypeTaskPlansSetElement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MissionPlanTypeTaskPlansSetElement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MissionPlanTypeTaskPlansSetElement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MissionPlanTypeTaskPlansSetElement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement >;

                MissionPlanTypeTaskPlansSetElement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MissionPlanTypeTaskPlansSetElement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MissionPlanTypeTaskPlansSetElement_g_typePlugin = 
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

                return &MissionPlanTypeTaskPlansSetElement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::MissionPlanType >::reset_sample(::UMAA::MM::BaseType::MissionPlanType& sample) 
        {
            sample.approvalRequired(0);
            sample.missionDescription("");
            ::rti::topic::reset_sample(sample.missionID());
            sample.missionPriority(0);
            sample.name("");
            ::rti::topic::reset_sample(sample.stateTrigger());
            ::rti::topic::reset_sample(sample.taskPlansSetMetadata());
        }

        void topic_type_support< ::UMAA::MM::BaseType::MissionPlanType >::allocate_sample(::UMAA::MM::BaseType::MissionPlanType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.missionDescription(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.missionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.stateTrigger(),  16L, -1);
            ::rti::topic::allocate_sample(sample.taskPlansSetMetadata(),  -1, -1);
        }
        void topic_type_support< ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElementPlugin_new,
                ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElementPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MissionPlanTypeTaskPlansSetElementPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MissionPlanTypeTaskPlansSetElementPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement >::from_cdr_buffer(::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MissionPlanTypeTaskPlansSetElementPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement >::reset_sample(::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement& sample) 
        {
            ::rti::topic::reset_sample(sample.element());
            ::rti::topic::reset_sample(sample.setID());
            ::rti::topic::reset_sample(sample.elementID());
            ::rti::topic::reset_sample(sample.elementTimestamp());
        }

        void topic_type_support< ::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement >::allocate_sample(::UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.element(),  -1, -1);
            ::rti::topic::allocate_sample(sample.setID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementTimestamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
