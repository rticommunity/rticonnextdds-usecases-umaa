

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimeConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "TimeConditionalTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "TimeConditionalType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace Conditional {

            // ---- TimeConditionalType: 

            TimeConditionalType::TimeConditionalType() :
                m_conditionalOp_(UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType::GREATER_THAN)  {

            }   

            TimeConditionalType::TimeConditionalType (const ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType& conditionalOp_,const ::UMAA::Common::Measurement::DateTime& time_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_):
                m_conditionalOp_(conditionalOp_), 
                m_time_(time_), 
                m_specializationReferenceTimestamp_(specializationReferenceTimestamp_), 
                m_specializationReferenceID_(specializationReferenceID_) {
            }

            void TimeConditionalType::swap(TimeConditionalType& other_)  noexcept 
            {
                using std::swap;
                swap(m_conditionalOp_, other_.m_conditionalOp_);
                swap(m_time_, other_.m_time_);
                swap(m_specializationReferenceTimestamp_, other_.m_specializationReferenceTimestamp_);
                swap(m_specializationReferenceID_, other_.m_specializationReferenceID_);
            }  

            bool TimeConditionalType::operator == (const TimeConditionalType& other_) const {
                if (m_conditionalOp_ != other_.m_conditionalOp_) {
                    return false;
                }
                if (m_time_ != other_.m_time_) {
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

            bool TimeConditionalType::operator != (const TimeConditionalType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TimeConditionalType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "conditionalOp: " << sample.conditionalOp ()<<", ";
                o << "time: " << sample.time ()<<", ";
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
        struct native_type_code< ::UMAA::MM::Conditional::TimeConditionalType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TimeConditionalType_g_tc_members[4]=
                {

                    {
                        (char *)"conditionalOp",/* Member name */
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
                        (char *)"time",/* Member name */
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
                        (char *)"specializationReferenceTimestamp",/* Member name */
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
                        (char *)"specializationReferenceID",/* Member name */
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

                static DDS_TypeCode TimeConditionalType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::Conditional::TimeConditionalType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        TimeConditionalType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TimeConditionalType*/

                if (is_initialized) {
                    return &TimeConditionalType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TimeConditionalType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TimeConditionalType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType>::get().native();
                TimeConditionalType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                TimeConditionalType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                TimeConditionalType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                TimeConditionalType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TimeConditionalType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                TimeConditionalType_g_tc._data._sampleAccessInfo = sample_access_info();
                TimeConditionalType_g_tc._data._typePlugin = type_plugin_info();    

                return &TimeConditionalType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::Conditional::TimeConditionalType *sample;

                static RTIXCdrMemberAccessInfo TimeConditionalType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TimeConditionalType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TimeConditionalType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::Conditional::TimeConditionalType);
                if (sample == NULL) {
                    return NULL;
                }

                TimeConditionalType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->conditionalOp() - (char *)sample);

                TimeConditionalType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->time() - (char *)sample);

                TimeConditionalType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceTimestamp() - (char *)sample);

                TimeConditionalType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceID() - (char *)sample);

                TimeConditionalType_g_sampleAccessInfo.memberAccessInfos = 
                TimeConditionalType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::Conditional::TimeConditionalType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TimeConditionalType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TimeConditionalType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TimeConditionalType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TimeConditionalType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::Conditional::TimeConditionalType >;

                TimeConditionalType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TimeConditionalType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TimeConditionalType_g_typePlugin = 
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

                return &TimeConditionalType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::Conditional::TimeConditionalType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::Conditional::TimeConditionalType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::Conditional::TimeConditionalType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::Conditional::TimeConditionalTypePlugin_new,
                ::UMAA::MM::Conditional::TimeConditionalTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::Conditional::TimeConditionalType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::Conditional::TimeConditionalType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TimeConditionalTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TimeConditionalTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::Conditional::TimeConditionalType >::from_cdr_buffer(::UMAA::MM::Conditional::TimeConditionalType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TimeConditionalTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::Conditional::TimeConditionalType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::Conditional::TimeConditionalType >::reset_sample(::UMAA::MM::Conditional::TimeConditionalType& sample) 
        {
            sample.conditionalOp(UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType::GREATER_THAN);
            ::rti::topic::reset_sample(sample.time());
            ::rti::topic::reset_sample(sample.specializationReferenceTimestamp());
            ::rti::topic::reset_sample(sample.specializationReferenceID());
        }

        void topic_type_support< ::UMAA::MM::Conditional::TimeConditionalType >::allocate_sample(::UMAA::MM::Conditional::TimeConditionalType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.conditionalOp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.time(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceTimestamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
