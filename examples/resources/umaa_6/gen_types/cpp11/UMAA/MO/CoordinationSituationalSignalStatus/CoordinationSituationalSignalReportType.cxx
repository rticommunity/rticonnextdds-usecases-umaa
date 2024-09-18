

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CoordinationSituationalSignalReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "CoordinationSituationalSignalReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CoordinationSituationalSignalReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace CoordinationSituationalSignalStatus {

            // ---- CoordinationSituationalSignalReportType: 

            CoordinationSituationalSignalReportType::CoordinationSituationalSignalReportType() :
                m_currentSituation_(UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::AGREE_TO_BE_OVERTAKEN)  {

            }   

            CoordinationSituationalSignalReportType::CoordinationSituationalSignalReportType (const ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType& currentSituation_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_currentSituation_(currentSituation_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void CoordinationSituationalSignalReportType::swap(CoordinationSituationalSignalReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_currentSituation_, other_.m_currentSituation_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool CoordinationSituationalSignalReportType::operator == (const CoordinationSituationalSignalReportType& other_) const {
                if (m_currentSituation_ != other_.m_currentSituation_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool CoordinationSituationalSignalReportType::operator != (const CoordinationSituationalSignalReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CoordinationSituationalSignalReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "currentSituation: " << sample.currentSituation ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace CoordinationSituationalSignalStatus  

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
        struct native_type_code< ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CoordinationSituationalSignalReportType_g_tc_members[3]=
                {

                    {
                        (char *)"currentSituation",/* Member name */
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
                    }
                };

                static DDS_TypeCode CoordinationSituationalSignalReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        CoordinationSituationalSignalReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CoordinationSituationalSignalReportType*/

                if (is_initialized) {
                    return &CoordinationSituationalSignalReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CoordinationSituationalSignalReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CoordinationSituationalSignalReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType>::get().native();
                CoordinationSituationalSignalReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                CoordinationSituationalSignalReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                CoordinationSituationalSignalReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CoordinationSituationalSignalReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                CoordinationSituationalSignalReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                CoordinationSituationalSignalReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &CoordinationSituationalSignalReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType *sample;

                static RTIXCdrMemberAccessInfo CoordinationSituationalSignalReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CoordinationSituationalSignalReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CoordinationSituationalSignalReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType);
                if (sample == NULL) {
                    return NULL;
                }

                CoordinationSituationalSignalReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->currentSituation() - (char *)sample);

                CoordinationSituationalSignalReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CoordinationSituationalSignalReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CoordinationSituationalSignalReportType_g_sampleAccessInfo.memberAccessInfos = 
                CoordinationSituationalSignalReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CoordinationSituationalSignalReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CoordinationSituationalSignalReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CoordinationSituationalSignalReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CoordinationSituationalSignalReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType >;

                CoordinationSituationalSignalReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CoordinationSituationalSignalReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CoordinationSituationalSignalReportType_g_typePlugin = 
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

                return &CoordinationSituationalSignalReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportTypePlugin_new,
                ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CoordinationSituationalSignalReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CoordinationSituationalSignalReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType >::from_cdr_buffer(::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CoordinationSituationalSignalReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType >::reset_sample(::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType& sample) 
        {
            sample.currentSituation(UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::AGREE_TO_BE_OVERTAKEN);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType >::allocate_sample(::UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.currentSituation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE