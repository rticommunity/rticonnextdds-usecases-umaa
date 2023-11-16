

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TamperDetectionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "TamperDetectionReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "TamperDetectionReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace TamperDetectionStatus {

            // ---- TamperDetectionReportType: 

            TamperDetectionReportType::TamperDetectionReportType() :
                m_descriptor_ ("") ,
                m_electricalTamper_ (0) ,
                m_hardwareTamper_ (0) ,
                m_networkInstrusion_ (0) ,
                m_otherTamper_ (0) ,
                m_state_(UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType::ALWAYS_ENABLED_OR_CLEAR)  {

            }   

            TamperDetectionReportType::TamperDetectionReportType (const std::string& descriptor_,bool electricalTamper_,bool hardwareTamper_,bool networkInstrusion_,bool otherTamper_,const ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType& state_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_descriptor_(descriptor_), 
                m_electricalTamper_(electricalTamper_), 
                m_hardwareTamper_(hardwareTamper_), 
                m_networkInstrusion_(networkInstrusion_), 
                m_otherTamper_(otherTamper_), 
                m_state_(state_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void TamperDetectionReportType::swap(TamperDetectionReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_descriptor_, other_.m_descriptor_);
                swap(m_electricalTamper_, other_.m_electricalTamper_);
                swap(m_hardwareTamper_, other_.m_hardwareTamper_);
                swap(m_networkInstrusion_, other_.m_networkInstrusion_);
                swap(m_otherTamper_, other_.m_otherTamper_);
                swap(m_state_, other_.m_state_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool TamperDetectionReportType::operator == (const TamperDetectionReportType& other_) const {
                if (m_descriptor_ != other_.m_descriptor_) {
                    return false;
                }
                if (m_electricalTamper_ != other_.m_electricalTamper_) {
                    return false;
                }
                if (m_hardwareTamper_ != other_.m_hardwareTamper_) {
                    return false;
                }
                if (m_networkInstrusion_ != other_.m_networkInstrusion_) {
                    return false;
                }
                if (m_otherTamper_ != other_.m_otherTamper_) {
                    return false;
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }

            bool TamperDetectionReportType::operator != (const TamperDetectionReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const TamperDetectionReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "descriptor: " << sample.descriptor ()<<", ";
                o << "electricalTamper: " << sample.electricalTamper ()<<", ";
                o << "hardwareTamper: " << sample.hardwareTamper ()<<", ";
                o << "networkInstrusion: " << sample.networkInstrusion ()<<", ";
                o << "otherTamper: " << sample.otherTamper ()<<", ";
                o << "state: " << sample.state ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace TamperDetectionStatus  

    } // namespace SO  

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
        struct native_type_code< ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TamperDetectionReportType_g_tc_members[8]=
                {

                    {
                        (char *)"descriptor",/* Member name */
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
                        (char *)"electricalTamper",/* Member name */
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
                        (char *)"hardwareTamper",/* Member name */
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
                        (char *)"networkInstrusion",/* Member name */
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
                        (char *)"otherTamper",/* Member name */
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
                        (char *)"state",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode TamperDetectionReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::TamperDetectionStatus::TamperDetectionReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        TamperDetectionReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TamperDetectionReportType*/

                if (is_initialized) {
                    return &TamperDetectionReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TamperDetectionReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TamperDetectionReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                TamperDetectionReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                TamperDetectionReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                TamperDetectionReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                TamperDetectionReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                TamperDetectionReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType>::get().native();
                TamperDetectionReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                TamperDetectionReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                TamperDetectionReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                TamperDetectionReportType_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                TamperDetectionReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                TamperDetectionReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                TamperDetectionReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                TamperDetectionReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                TamperDetectionReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                TamperDetectionReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
                TamperDetectionReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                TamperDetectionReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
                TamperDetectionReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TamperDetectionReportType_g_tc_members[5]._annotations._defaultValue._u.enumerated_value = 0;

                TamperDetectionReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                TamperDetectionReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &TamperDetectionReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType *sample;

                static RTIXCdrMemberAccessInfo TamperDetectionReportType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TamperDetectionReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TamperDetectionReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType);
                if (sample == NULL) {
                    return NULL;
                }

                TamperDetectionReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->descriptor() - (char *)sample);

                TamperDetectionReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->electricalTamper() - (char *)sample);

                TamperDetectionReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->hardwareTamper() - (char *)sample);

                TamperDetectionReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->networkInstrusion() - (char *)sample);

                TamperDetectionReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->otherTamper() - (char *)sample);

                TamperDetectionReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                TamperDetectionReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                TamperDetectionReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                TamperDetectionReportType_g_sampleAccessInfo.memberAccessInfos = 
                TamperDetectionReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TamperDetectionReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TamperDetectionReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TamperDetectionReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TamperDetectionReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType >;

                TamperDetectionReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TamperDetectionReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TamperDetectionReportType_g_typePlugin = 
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

                return &TamperDetectionReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportTypePlugin_new,
                ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TamperDetectionReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TamperDetectionReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType >::from_cdr_buffer(::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TamperDetectionReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType >::reset_sample(::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType& sample) 
        {
            sample.descriptor("");
            sample.electricalTamper(0);
            sample.hardwareTamper(0);
            sample.networkInstrusion(0);
            sample.otherTamper(0);
            sample.state(UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType::ALWAYS_ENABLED_OR_CLEAR);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType >::allocate_sample(::UMAA::SO::TamperDetectionStatus::TamperDetectionReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.descriptor(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
