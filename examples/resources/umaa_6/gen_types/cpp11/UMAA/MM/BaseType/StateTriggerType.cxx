

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StateTriggerType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "StateTriggerTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "StateTriggerType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- StateTriggerType: 

            StateTriggerType::StateTriggerType() :
                m_state_(UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType::CANCEL)  {

            }   

            StateTriggerType::StateTriggerType (const ::UMAA::Common::Measurement::NumericGUID& conditionalID_,const ::dds::core::optional< int32_t >& count_,const ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType& state_):
                m_conditionalID_(conditionalID_), 
                m_count_(count_), 
                m_state_(state_) {
            }

            void StateTriggerType::swap(StateTriggerType& other_)  noexcept 
            {
                using std::swap;
                swap(m_conditionalID_, other_.m_conditionalID_);
                swap(m_count_, other_.m_count_);
                swap(m_state_, other_.m_state_);
            }  

            bool StateTriggerType::operator == (const StateTriggerType& other_) const {
                if (m_conditionalID_ != other_.m_conditionalID_) {
                    return false;
                }
                if (m_count_ != other_.m_count_) {
                    return false;
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                return true;
            }

            bool StateTriggerType::operator != (const StateTriggerType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const StateTriggerType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "conditionalID: " << sample.conditionalID ()<<", ";
                o << "count: " << sample.count ()<<", ";
                o << "state: " << sample.state ();
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
        struct native_type_code< ::UMAA::MM::BaseType::StateTriggerType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StateTriggerType_g_tc_members[3]=
                {

                    {
                        (char *)"conditionalID",/* Member name */
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
                        (char *)"count",/* Member name */
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
                        (char *)"state",/* Member name */
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
                    }
                };

                static DDS_TypeCode StateTriggerType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::StateTriggerType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        StateTriggerType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for StateTriggerType*/

                if (is_initialized) {
                    return &StateTriggerType_g_tc;
                }

                is_initialized = RTI_TRUE;

                StateTriggerType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StateTriggerType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                StateTriggerType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                StateTriggerType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType>::get().native();

                /* Initialize the values for member annotations. */
                StateTriggerType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                StateTriggerType_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                StateTriggerType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                StateTriggerType_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                StateTriggerType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                StateTriggerType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                StateTriggerType_g_tc._data._sampleAccessInfo = sample_access_info();
                StateTriggerType_g_tc._data._typePlugin = type_plugin_info();    

                return &StateTriggerType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::StateTriggerType *sample;

                static RTIXCdrMemberAccessInfo StateTriggerType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StateTriggerType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StateTriggerType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::StateTriggerType);
                if (sample == NULL) {
                    return NULL;
                }

                StateTriggerType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->conditionalID() - (char *)sample);

                StateTriggerType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->count() - (char *)sample);

                StateTriggerType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                StateTriggerType_g_sampleAccessInfo.memberAccessInfos = 
                StateTriggerType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::StateTriggerType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StateTriggerType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StateTriggerType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StateTriggerType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StateTriggerType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::StateTriggerType >;

                StateTriggerType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StateTriggerType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StateTriggerType_g_typePlugin = 
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

                return &StateTriggerType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::StateTriggerType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::StateTriggerType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::MM::BaseType::StateTriggerType >::reset_sample(::UMAA::MM::BaseType::StateTriggerType& sample) 
        {
            ::rti::topic::reset_sample(sample.conditionalID());
            ::rti::topic::reset_sample(sample.count());
            sample.state(UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType::CANCEL);
        }

        void topic_type_support< ::UMAA::MM::BaseType::StateTriggerType >::allocate_sample(::UMAA::MM::BaseType::StateTriggerType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.conditionalID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
