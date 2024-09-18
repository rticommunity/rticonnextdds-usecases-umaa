

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactManeuverInfluenceReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ContactManeuverInfluenceReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ContactManeuverInfluenceReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace ContactManeuverInfluenceStatus {

            // ---- ContactManeuverInfluenceReportType: 

            ContactManeuverInfluenceReportType::ContactManeuverInfluenceReportType() :
                m_influence_(UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::COLLISION)  {

            }   

            ContactManeuverInfluenceReportType::ContactManeuverInfluenceReportType (const ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType& influence_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& contactID_):
                m_influence_(influence_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_contactID_(contactID_) {
            }

            void ContactManeuverInfluenceReportType::swap(ContactManeuverInfluenceReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_influence_, other_.m_influence_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_contactID_, other_.m_contactID_);
            }  

            bool ContactManeuverInfluenceReportType::operator == (const ContactManeuverInfluenceReportType& other_) const {
                if (m_influence_ != other_.m_influence_) {
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
                return true;
            }

            bool ContactManeuverInfluenceReportType::operator != (const ContactManeuverInfluenceReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ContactManeuverInfluenceReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "influence: " << sample.influence ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "contactID: " << sample.contactID ();
                o <<"]";
                return o;
            }

        } // namespace ContactManeuverInfluenceStatus  

    } // namespace MO  

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
        struct native_type_code< ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContactManeuverInfluenceReportType_g_tc_members[4]=
                {

                    {
                        (char *)"influence",/* Member name */
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
                    }
                };

                static DDS_TypeCode ContactManeuverInfluenceReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ContactManeuverInfluenceReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContactManeuverInfluenceReportType*/

                if (is_initialized) {
                    return &ContactManeuverInfluenceReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContactManeuverInfluenceReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContactManeuverInfluenceReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType>::get().native();
                ContactManeuverInfluenceReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ContactManeuverInfluenceReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                ContactManeuverInfluenceReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ContactManeuverInfluenceReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContactManeuverInfluenceReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                ContactManeuverInfluenceReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactManeuverInfluenceReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContactManeuverInfluenceReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType *sample;

                static RTIXCdrMemberAccessInfo ContactManeuverInfluenceReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactManeuverInfluenceReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactManeuverInfluenceReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType);
                if (sample == NULL) {
                    return NULL;
                }

                ContactManeuverInfluenceReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->influence() - (char *)sample);

                ContactManeuverInfluenceReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ContactManeuverInfluenceReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ContactManeuverInfluenceReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactID() - (char *)sample);

                ContactManeuverInfluenceReportType_g_sampleAccessInfo.memberAccessInfos = 
                ContactManeuverInfluenceReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContactManeuverInfluenceReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContactManeuverInfluenceReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContactManeuverInfluenceReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContactManeuverInfluenceReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType >;

                ContactManeuverInfluenceReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContactManeuverInfluenceReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContactManeuverInfluenceReportType_g_typePlugin = 
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

                return &ContactManeuverInfluenceReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportTypePlugin_new,
                ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ContactManeuverInfluenceReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ContactManeuverInfluenceReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType >::from_cdr_buffer(::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ContactManeuverInfluenceReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType >::reset_sample(::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType& sample) 
        {
            sample.influence(UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::COLLISION);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.contactID());
        }

        void topic_type_support< ::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType >::allocate_sample(::UMAA::MO::ContactManeuverInfluenceStatus::ContactManeuverInfluenceReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.influence(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE