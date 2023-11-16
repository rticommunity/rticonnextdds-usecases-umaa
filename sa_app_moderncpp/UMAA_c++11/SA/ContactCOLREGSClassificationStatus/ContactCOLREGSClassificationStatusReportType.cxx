

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactCOLREGSClassificationStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ContactCOLREGSClassificationStatusReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ContactCOLREGSClassificationStatusReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace ContactCOLREGSClassificationStatus {

            // ---- ContactCOLREGSClassificationStatusReportType: 

            ContactCOLREGSClassificationStatusReportType::ContactCOLREGSClassificationStatusReportType() :
                m_confidence_ (0.0) ,
                m_colregsClassification_(UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType::POWER_DRIVEN_UNDERWAY)  {

            }   

            ContactCOLREGSClassificationStatusReportType::ContactCOLREGSClassificationStatusReportType (double confidence_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType& colregsClassification_,const ::UMAA::Common::Measurement::NumericGUID& contactID_):
                m_confidence_(confidence_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_), 
                m_colregsClassification_(colregsClassification_), 
                m_contactID_(contactID_) {
            }

            void ContactCOLREGSClassificationStatusReportType::swap(ContactCOLREGSClassificationStatusReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_confidence_, other_.m_confidence_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_colregsClassification_, other_.m_colregsClassification_);
                swap(m_contactID_, other_.m_contactID_);
            }  

            bool ContactCOLREGSClassificationStatusReportType::operator == (const ContactCOLREGSClassificationStatusReportType& other_) const {
                if (std::fabs(m_confidence_ - other_.m_confidence_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_confidence_ - other_.m_confidence_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_colregsClassification_ != other_.m_colregsClassification_) {
                    return false;
                }
                if (m_contactID_ != other_.m_contactID_) {
                    return false;
                }
                return true;
            }

            bool ContactCOLREGSClassificationStatusReportType::operator != (const ContactCOLREGSClassificationStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ContactCOLREGSClassificationStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "confidence: " << std::setprecision(15) << sample.confidence ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "colregsClassification: " << sample.colregsClassification ()<<", ";
                o << "contactID: " << sample.contactID ();
                o <<"]";
                return o;
            }

        } // namespace ContactCOLREGSClassificationStatus  

    } // namespace SA  

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
        struct native_type_code< ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContactCOLREGSClassificationStatusReportType_g_tc_members[5]=
                {

                    {
                        (char *)"confidence",/* Member name */
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
                        (char *)"colregsClassification",/* Member name */
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
                        (char *)"contactID",/* Member name */
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

                static DDS_TypeCode ContactCOLREGSClassificationStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ContactCOLREGSClassificationStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContactCOLREGSClassificationStatusReportType*/

                if (is_initialized) {
                    return &ContactCOLREGSClassificationStatusReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContactCOLREGSClassificationStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContactCOLREGSClassificationStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t>::get().native();
                ContactCOLREGSClassificationStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ContactCOLREGSClassificationStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ContactCOLREGSClassificationStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType>::get().native();
                ContactCOLREGSClassificationStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ContactCOLREGSClassificationStatusReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactCOLREGSClassificationStatusReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                ContactCOLREGSClassificationStatusReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactCOLREGSClassificationStatusReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                ContactCOLREGSClassificationStatusReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactCOLREGSClassificationStatusReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 1000ULL;
                ContactCOLREGSClassificationStatusReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContactCOLREGSClassificationStatusReportType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

                ContactCOLREGSClassificationStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactCOLREGSClassificationStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContactCOLREGSClassificationStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType *sample;

                static RTIXCdrMemberAccessInfo ContactCOLREGSClassificationStatusReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactCOLREGSClassificationStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactCOLREGSClassificationStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                ContactCOLREGSClassificationStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->confidence() - (char *)sample);

                ContactCOLREGSClassificationStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ContactCOLREGSClassificationStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ContactCOLREGSClassificationStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->colregsClassification() - (char *)sample);

                ContactCOLREGSClassificationStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactID() - (char *)sample);

                ContactCOLREGSClassificationStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                ContactCOLREGSClassificationStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContactCOLREGSClassificationStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContactCOLREGSClassificationStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContactCOLREGSClassificationStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContactCOLREGSClassificationStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType >;

                ContactCOLREGSClassificationStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContactCOLREGSClassificationStatusReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContactCOLREGSClassificationStatusReportType_g_typePlugin = 
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

                return &ContactCOLREGSClassificationStatusReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportTypePlugin_new,
                ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ContactCOLREGSClassificationStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ContactCOLREGSClassificationStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType >::from_cdr_buffer(::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ContactCOLREGSClassificationStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType >::reset_sample(::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType& sample) 
        {
            sample.confidence(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            sample.colregsClassification(UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType::POWER_DRIVEN_UNDERWAY);
            ::rti::topic::reset_sample(sample.contactID());
        }

        void topic_type_support< ::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType >::allocate_sample(::UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.colregsClassification(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
