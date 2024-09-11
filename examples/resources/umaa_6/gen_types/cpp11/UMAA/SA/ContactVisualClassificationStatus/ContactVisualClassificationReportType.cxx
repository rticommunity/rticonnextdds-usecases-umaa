

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactVisualClassificationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
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
#include "ContactVisualClassificationReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ContactVisualClassificationReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace ContactVisualClassificationStatus {

            // ---- ContactVisualClassificationReportType: 

            ContactVisualClassificationReportType::ContactVisualClassificationReportType() :
                m_confidence_ (0.0) ,
                m_visualClassification_(UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::AID_TO_NAVIGATION_CHANNEL_MARKER)  {

            }   

            ContactVisualClassificationReportType::ContactVisualClassificationReportType (double confidence_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& contactID_,const ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType& visualClassification_):
                m_confidence_(confidence_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_contactID_(contactID_), 
                m_visualClassification_(visualClassification_) {
            }

            void ContactVisualClassificationReportType::swap(ContactVisualClassificationReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_confidence_, other_.m_confidence_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_contactID_, other_.m_contactID_);
                swap(m_visualClassification_, other_.m_visualClassification_);
            }  

            bool ContactVisualClassificationReportType::operator == (const ContactVisualClassificationReportType& other_) const {
                if (std::fabs(m_confidence_ - other_.m_confidence_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_confidence_ - other_.m_confidence_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_contactID_ != other_.m_contactID_) {
                    return false;
                }
                if (m_visualClassification_ != other_.m_visualClassification_) {
                    return false;
                }
                return true;
            }

            bool ContactVisualClassificationReportType::operator != (const ContactVisualClassificationReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ContactVisualClassificationReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "confidence: " << std::setprecision(15) << sample.confidence ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "contactID: " << sample.contactID ()<<", ";
                o << "visualClassification: " << sample.visualClassification ();
                o <<"]";
                return o;
            }

        } // namespace ContactVisualClassificationStatus  

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
        struct native_type_code< ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContactVisualClassificationReportType_g_tc_members[5]=
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        (char *)"contactID",/* Member name */
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
                        (char *)"visualClassification",/* Member name */
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

                static DDS_TypeCode ContactVisualClassificationReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ContactVisualClassificationReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContactVisualClassificationReportType*/

                if (is_initialized) {
                    return &ContactVisualClassificationReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContactVisualClassificationReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContactVisualClassificationReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t>::get().native();
                ContactVisualClassificationReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ContactVisualClassificationReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                ContactVisualClassificationReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ContactVisualClassificationReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType>::get().native();

                /* Initialize the values for member annotations. */
                ContactVisualClassificationReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactVisualClassificationReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                ContactVisualClassificationReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactVisualClassificationReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactVisualClassificationReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactVisualClassificationReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactVisualClassificationReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContactVisualClassificationReportType_g_tc_members[4]._annotations._defaultValue._u.enumerated_value = 0;

                ContactVisualClassificationReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactVisualClassificationReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContactVisualClassificationReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType *sample;

                static RTIXCdrMemberAccessInfo ContactVisualClassificationReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactVisualClassificationReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactVisualClassificationReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType);
                if (sample == NULL) {
                    return NULL;
                }

                ContactVisualClassificationReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->confidence() - (char *)sample);

                ContactVisualClassificationReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ContactVisualClassificationReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ContactVisualClassificationReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactID() - (char *)sample);

                ContactVisualClassificationReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->visualClassification() - (char *)sample);

                ContactVisualClassificationReportType_g_sampleAccessInfo.memberAccessInfos = 
                ContactVisualClassificationReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContactVisualClassificationReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContactVisualClassificationReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContactVisualClassificationReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContactVisualClassificationReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType >;

                ContactVisualClassificationReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContactVisualClassificationReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContactVisualClassificationReportType_g_typePlugin = 
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

                return &ContactVisualClassificationReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportTypePlugin_new,
                ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ContactVisualClassificationReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ContactVisualClassificationReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType >::from_cdr_buffer(::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ContactVisualClassificationReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType >::reset_sample(::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType& sample) 
        {
            sample.confidence(0.0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.contactID());
            sample.visualClassification(UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::AID_TO_NAVIGATION_CHANNEL_MARKER);
        }

        void topic_type_support< ::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType >::allocate_sample(::UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.visualClassification(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
