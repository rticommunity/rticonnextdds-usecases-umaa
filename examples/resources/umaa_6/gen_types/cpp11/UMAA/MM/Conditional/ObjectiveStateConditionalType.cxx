

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveStateConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ObjectiveStateConditionalTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ObjectiveStateConditionalType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace Conditional {

            // ---- ObjectiveStateConditionalType: 

            ObjectiveStateConditionalType::ObjectiveStateConditionalType() :
                m_objectiveState_(UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::AWAITING_EXECUTION_APPROVAL)  {

            }   

            ObjectiveStateConditionalType::ObjectiveStateConditionalType (const ::UMAA::Common::Measurement::NumericGUID& missionID_,const ::UMAA::Common::Measurement::NumericGUID& objectiveID_,const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType& objectiveState_,const ::UMAA::Common::Measurement::NumericGUID& taskID_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_):
                m_missionID_(missionID_), 
                m_objectiveID_(objectiveID_), 
                m_objectiveState_(objectiveState_), 
                m_taskID_(taskID_), 
                m_specializationReferenceTimestamp_(specializationReferenceTimestamp_), 
                m_specializationReferenceID_(specializationReferenceID_) {
            }

            void ObjectiveStateConditionalType::swap(ObjectiveStateConditionalType& other_)  noexcept 
            {
                using std::swap;
                swap(m_missionID_, other_.m_missionID_);
                swap(m_objectiveID_, other_.m_objectiveID_);
                swap(m_objectiveState_, other_.m_objectiveState_);
                swap(m_taskID_, other_.m_taskID_);
                swap(m_specializationReferenceTimestamp_, other_.m_specializationReferenceTimestamp_);
                swap(m_specializationReferenceID_, other_.m_specializationReferenceID_);
            }  

            bool ObjectiveStateConditionalType::operator == (const ObjectiveStateConditionalType& other_) const {
                if (m_missionID_ != other_.m_missionID_) {
                    return false;
                }
                if (m_objectiveID_ != other_.m_objectiveID_) {
                    return false;
                }
                if (m_objectiveState_ != other_.m_objectiveState_) {
                    return false;
                }
                if (m_taskID_ != other_.m_taskID_) {
                    return false;
                }
                if (m_specializationReferenceTimestamp_ != other_.m_specializationReferenceTimestamp_) {
                    return false;
                }
                if (m_specializationReferenceID_ != other_.m_specializationReferenceID_) {
                    return false;
                }
                return true;
            }

            bool ObjectiveStateConditionalType::operator != (const ObjectiveStateConditionalType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ObjectiveStateConditionalType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "missionID: " << sample.missionID ()<<", ";
                o << "objectiveID: " << sample.objectiveID ()<<", ";
                o << "objectiveState: " << sample.objectiveState ()<<", ";
                o << "taskID: " << sample.taskID ()<<", ";
                o << "specializationReferenceTimestamp: " << sample.specializationReferenceTimestamp ()<<", ";
                o << "specializationReferenceID: " << sample.specializationReferenceID ();
                o <<"]";
                return o;
            }

        } // namespace Conditional  

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
        struct native_type_code< ::UMAA::MM::Conditional::ObjectiveStateConditionalType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ObjectiveStateConditionalType_g_tc_members[6]=
                {

                    {
                        (char *)"missionID",/* Member name */
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
                        (char *)"objectiveID",/* Member name */
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
                        (char *)"objectiveState",/* Member name */
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
                        (char *)"taskID",/* Member name */
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
                        (char *)"specializationReferenceTimestamp",/* Member name */
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
                        (char *)"specializationReferenceID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ObjectiveStateConditionalType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::Conditional::ObjectiveStateConditionalType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        ObjectiveStateConditionalType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ObjectiveStateConditionalType*/

                if (is_initialized) {
                    return &ObjectiveStateConditionalType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ObjectiveStateConditionalType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ObjectiveStateConditionalType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveStateConditionalType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveStateConditionalType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType>::get().native();
                ObjectiveStateConditionalType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveStateConditionalType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ObjectiveStateConditionalType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ObjectiveStateConditionalType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ObjectiveStateConditionalType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                ObjectiveStateConditionalType_g_tc._data._sampleAccessInfo = sample_access_info();
                ObjectiveStateConditionalType_g_tc._data._typePlugin = type_plugin_info();    

                return &ObjectiveStateConditionalType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::Conditional::ObjectiveStateConditionalType *sample;

                static RTIXCdrMemberAccessInfo ObjectiveStateConditionalType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ObjectiveStateConditionalType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ObjectiveStateConditionalType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::Conditional::ObjectiveStateConditionalType);
                if (sample == NULL) {
                    return NULL;
                }

                ObjectiveStateConditionalType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionID() - (char *)sample);

                ObjectiveStateConditionalType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectiveID() - (char *)sample);

                ObjectiveStateConditionalType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectiveState() - (char *)sample);

                ObjectiveStateConditionalType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->taskID() - (char *)sample);

                ObjectiveStateConditionalType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceTimestamp() - (char *)sample);

                ObjectiveStateConditionalType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceID() - (char *)sample);

                ObjectiveStateConditionalType_g_sampleAccessInfo.memberAccessInfos = 
                ObjectiveStateConditionalType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::Conditional::ObjectiveStateConditionalType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ObjectiveStateConditionalType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ObjectiveStateConditionalType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ObjectiveStateConditionalType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ObjectiveStateConditionalType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::Conditional::ObjectiveStateConditionalType >;

                ObjectiveStateConditionalType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ObjectiveStateConditionalType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ObjectiveStateConditionalType_g_typePlugin = 
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

                return &ObjectiveStateConditionalType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::Conditional::ObjectiveStateConditionalType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::Conditional::ObjectiveStateConditionalType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::Conditional::ObjectiveStateConditionalType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::Conditional::ObjectiveStateConditionalTypePlugin_new,
                ::UMAA::MM::Conditional::ObjectiveStateConditionalTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::Conditional::ObjectiveStateConditionalType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::Conditional::ObjectiveStateConditionalType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ObjectiveStateConditionalTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ObjectiveStateConditionalTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::Conditional::ObjectiveStateConditionalType >::from_cdr_buffer(::UMAA::MM::Conditional::ObjectiveStateConditionalType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ObjectiveStateConditionalTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::Conditional::ObjectiveStateConditionalType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::Conditional::ObjectiveStateConditionalType >::reset_sample(::UMAA::MM::Conditional::ObjectiveStateConditionalType& sample) 
        {
            ::rti::topic::reset_sample(sample.missionID());
            ::rti::topic::reset_sample(sample.objectiveID());
            sample.objectiveState(UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::AWAITING_EXECUTION_APPROVAL);
            ::rti::topic::reset_sample(sample.taskID());
            ::rti::topic::reset_sample(sample.specializationReferenceTimestamp());
            ::rti::topic::reset_sample(sample.specializationReferenceID());
        }

        void topic_type_support< ::UMAA::MM::Conditional::ObjectiveStateConditionalType >::allocate_sample(::UMAA::MM::Conditional::ObjectiveStateConditionalType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.missionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.objectiveID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.objectiveState(),  -1, -1);
            ::rti::topic::allocate_sample(sample.taskID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceTimestamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE