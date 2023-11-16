

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthSummaryReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "HealthSummaryReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "HealthSummaryReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace HealthSummaryStatus {

            // ---- HealthSummaryReportType: 

            HealthSummaryReportType::HealthSummaryReportType()  {

            }   

            HealthSummaryReportType::HealthSummaryReportType (const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& resourceIDs_,const ::rti::core::bounded_sequence< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType, 100L >& severities_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_resourceIDs_(resourceIDs_), 
                m_severities_(severities_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void HealthSummaryReportType::swap(HealthSummaryReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_resourceIDs_, other_.m_resourceIDs_);
                swap(m_severities_, other_.m_severities_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool HealthSummaryReportType::operator == (const HealthSummaryReportType& other_) const {
                if (m_resourceIDs_ != other_.m_resourceIDs_) {
                    return false;
                }
                if (m_severities_ != other_.m_severities_) {
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

            bool HealthSummaryReportType::operator != (const HealthSummaryReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const HealthSummaryReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "resourceIDs: " << sample.resourceIDs ()<<", ";
                o << "severities: " << sample.severities ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace HealthSummaryStatus  

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
        struct native_type_code< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode HealthSummaryReportType_g_tc_resourceIDs_sequence;
                static DDS_TypeCode HealthSummaryReportType_g_tc_severities_sequence;

                static DDS_TypeCode_Member HealthSummaryReportType_g_tc_members[4]=
                {

                    {
                        (char *)"resourceIDs",/* Member name */
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
                        (char *)"severities",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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

                static DDS_TypeCode HealthSummaryReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::HealthSummaryStatus::HealthSummaryReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        HealthSummaryReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HealthSummaryReportType*/

                if (is_initialized) {
                    return &HealthSummaryReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                HealthSummaryReportType_g_tc_resourceIDs_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L > >((100L));
                HealthSummaryReportType_g_tc_severities_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType, 100L > >((100L));

                HealthSummaryReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HealthSummaryReportType_g_tc_resourceIDs_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                HealthSummaryReportType_g_tc_severities_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType>::get().native();
                HealthSummaryReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& HealthSummaryReportType_g_tc_resourceIDs_sequence;
                HealthSummaryReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& HealthSummaryReportType_g_tc_severities_sequence;
                HealthSummaryReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                HealthSummaryReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                HealthSummaryReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                HealthSummaryReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &HealthSummaryReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType *sample;

                static RTIXCdrMemberAccessInfo HealthSummaryReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HealthSummaryReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HealthSummaryReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType);
                if (sample == NULL) {
                    return NULL;
                }

                HealthSummaryReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceIDs() - (char *)sample);

                HealthSummaryReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->severities() - (char *)sample);

                HealthSummaryReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                HealthSummaryReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                HealthSummaryReportType_g_sampleAccessInfo.memberAccessInfos = 
                HealthSummaryReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HealthSummaryReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HealthSummaryReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HealthSummaryReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HealthSummaryReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType >;

                HealthSummaryReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HealthSummaryReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HealthSummaryReportType_g_typePlugin = 
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

                return &HealthSummaryReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportTypePlugin_new,
                ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HealthSummaryReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HealthSummaryReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType >::from_cdr_buffer(::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HealthSummaryReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType >::reset_sample(::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.resourceIDs());
            ::rti::topic::reset_sample(sample.severities());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType >::allocate_sample(::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.resourceIDs(),  100L, -1);
            ::rti::topic::allocate_sample(sample.severities(),  100L, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
