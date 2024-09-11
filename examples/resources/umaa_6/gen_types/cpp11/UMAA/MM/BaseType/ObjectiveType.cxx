

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ObjectiveTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ObjectiveType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- ObjectiveType: 

            ObjectiveType::ObjectiveType() :
                m_approvalRequired_ (0) ,
                m_name_ ("") ,
                m_objectiveDescription_ ("") ,
                m_objectivePriority_ (0) ,
                m_specializationTopic_ ("")  {

            }   

            ObjectiveType::ObjectiveType (bool approvalRequired_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& duringConditionID_,const std::string& name_,const std::string& objectiveDescription_,const ::UMAA::Common::Measurement::NumericGUID& objectiveID_,int32_t objectivePriority_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& preconditionID_,const ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 16L >& preferredResourceID_,const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L >& stateTrigger_,const ::UMAA::Common::Measurement::NumericGUID& specializationID_,const ::UMAA::Common::Measurement::DateTime& specializationTimestamp_,const std::string& specializationTopic_):
                m_approvalRequired_(approvalRequired_), 
                m_duringConditionID_(duringConditionID_), 
                m_name_(name_), 
                m_objectiveDescription_(objectiveDescription_), 
                m_objectiveID_(objectiveID_), 
                m_objectivePriority_(objectivePriority_), 
                m_preconditionID_(preconditionID_), 
                m_preferredResourceID_(preferredResourceID_), 
                m_stateTrigger_(stateTrigger_), 
                m_specializationID_(specializationID_), 
                m_specializationTimestamp_(specializationTimestamp_), 
                m_specializationTopic_(specializationTopic_) {
            }

            void ObjectiveType::swap(ObjectiveType& other_)  noexcept 
            {
                using std::swap;
                swap(m_approvalRequired_, other_.m_approvalRequired_);
                swap(m_duringConditionID_, other_.m_duringConditionID_);
                swap(m_name_, other_.m_name_);
                swap(m_objectiveDescription_, other_.m_objectiveDescription_);
                swap(m_objectiveID_, other_.m_objectiveID_);
                swap(m_objectivePriority_, other_.m_objectivePriority_);
                swap(m_preconditionID_, other_.m_preconditionID_);
                swap(m_preferredResourceID_, other_.m_preferredResourceID_);
                swap(m_stateTrigger_, other_.m_stateTrigger_);
                swap(m_specializationID_, other_.m_specializationID_);
                swap(m_specializationTimestamp_, other_.m_specializationTimestamp_);
                swap(m_specializationTopic_, other_.m_specializationTopic_);
            }  

            bool ObjectiveType::operator == (const ObjectiveType& other_) const {
                if (m_approvalRequired_ != other_.m_approvalRequired_) {
                    return false;
                }
                if (m_duringConditionID_ != other_.m_duringConditionID_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_objectiveDescription_ != other_.m_objectiveDescription_) {
                    return false;
                }
                if (m_objectiveID_ != other_.m_objectiveID_) {
                    return false;
                }
                if (m_objectivePriority_ != other_.m_objectivePriority_) {
                    return false;
                }
                if (m_preconditionID_ != other_.m_preconditionID_) {
                    return false;
                }
                if (m_preferredResourceID_ != other_.m_preferredResourceID_) {
                    return false;
                }
                if (m_stateTrigger_ != other_.m_stateTrigger_) {
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

            bool ObjectiveType::operator != (const ObjectiveType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ObjectiveType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "approvalRequired: " << sample.approvalRequired ()<<", ";
                o << "duringConditionID: " << sample.duringConditionID ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "objectiveDescription: " << sample.objectiveDescription ()<<", ";
                o << "objectiveID: " << sample.objectiveID ()<<", ";
                o << "objectivePriority: " << sample.objectivePriority ()<<", ";
                o << "preconditionID: " << sample.preconditionID ()<<", ";
                o << "preferredResourceID: " << sample.preferredResourceID ()<<", ";
                o << "stateTrigger: " << sample.stateTrigger ()<<", ";
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
        struct native_type_code< ::UMAA::MM::BaseType::ObjectiveType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ObjectiveType_g_tc_preferredResourceID_sequence;
                static DDS_TypeCode ObjectiveType_g_tc_stateTrigger_sequence;

                static DDS_TypeCode_Member ObjectiveType_g_tc_members[12]=
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
                        (char *)"duringConditionID",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"name",/* Member name */
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
                        (char *)"objectiveDescription",/* Member name */
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
                        (char *)"objectivePriority",/* Member name */
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
                        (char *)"preconditionID",/* Member name */
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
                        (char *)"preferredResourceID",/* Member name */
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
                        (char *)"stateTrigger",/* Member name */
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

                static DDS_TypeCode ObjectiveType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ObjectiveType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        ObjectiveType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ObjectiveType*/

                if (is_initialized) {
                    return &ObjectiveType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ObjectiveType_g_tc_preferredResourceID_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 16L > >((16L));
                ObjectiveType_g_tc_stateTrigger_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L > >((16L));

                ObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ObjectiveType_g_tc_preferredResourceID_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                ObjectiveType_g_tc_stateTrigger_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MM::BaseType::StateTriggerType>::get().native();
                ObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                ObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Priority_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& ObjectiveType_g_tc_preferredResourceID_sequence;
                ObjectiveType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)& ObjectiveType_g_tc_stateTrigger_sequence;
                ObjectiveType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ObjectiveType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ObjectiveType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                ObjectiveType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                ObjectiveType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ObjectiveType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                ObjectiveType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ObjectiveType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                ObjectiveType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                ObjectiveType_g_tc_members[5]._annotations._defaultValue._u.long_value = 0;
                ObjectiveType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                ObjectiveType_g_tc_members[5]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                ObjectiveType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                ObjectiveType_g_tc_members[5]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                ObjectiveType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ObjectiveType_g_tc_members[11]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ObjectiveType_g_tc._data._sampleAccessInfo = sample_access_info();
                ObjectiveType_g_tc._data._typePlugin = type_plugin_info();    

                return &ObjectiveType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ObjectiveType *sample;

                static RTIXCdrMemberAccessInfo ObjectiveType_g_memberAccessInfos[12] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ObjectiveType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ObjectiveType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ObjectiveType);
                if (sample == NULL) {
                    return NULL;
                }

                ObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->approvalRequired() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->duringConditionID() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectiveDescription() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectiveID() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectivePriority() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->preconditionID() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->preferredResourceID() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stateTrigger() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationID() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationTimestamp() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationTopic() - (char *)sample);

                ObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
                ObjectiveType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ObjectiveType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ObjectiveType >;

                ObjectiveType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ObjectiveType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ObjectiveType_g_typePlugin = 
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

                return &ObjectiveType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ObjectiveType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ObjectiveType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::ObjectiveType >::reset_sample(::UMAA::MM::BaseType::ObjectiveType& sample) 
        {
            sample.approvalRequired(0);
            ::rti::topic::reset_sample(sample.duringConditionID());
            sample.name("");
            sample.objectiveDescription("");
            ::rti::topic::reset_sample(sample.objectiveID());
            sample.objectivePriority(0);
            ::rti::topic::reset_sample(sample.preconditionID());
            ::rti::topic::reset_sample(sample.preferredResourceID());
            ::rti::topic::reset_sample(sample.stateTrigger());
            ::rti::topic::reset_sample(sample.specializationID());
            ::rti::topic::reset_sample(sample.specializationTimestamp());
            sample.specializationTopic("");
        }

        void topic_type_support< ::UMAA::MM::BaseType::ObjectiveType >::allocate_sample(::UMAA::MM::BaseType::ObjectiveType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.objectiveDescription(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.objectiveID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.preferredResourceID(),  16L, -1);
            ::rti::topic::allocate_sample(sample.stateTrigger(),  16L, -1);
            ::rti::topic::allocate_sample(sample.specializationID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationTimestamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationTopic(),  -1, 1023L);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
