

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BITConfigReportType.idl
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
#include "BITConfigReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BITConfigReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace BITConfig {

            // ---- BITConfigReportType: 

            BITConfigReportType::BITConfigReportType() :
                m_continuousTestConfiguration_(UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType::DISABLED_NO_TEST) ,
                m_powerOnTestConfiguration_(UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType::DISABLED_NO_TEST)  {

            }   

            BITConfigReportType::BITConfigReportType (const ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType& continuousTestConfiguration_,const ::dds::core::optional< double >& minTimeBetweenTests_,const ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType& powerOnTestConfiguration_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::IdentifierType& resourceID_):
                m_continuousTestConfiguration_(continuousTestConfiguration_), 
                m_minTimeBetweenTests_(minTimeBetweenTests_), 
                m_powerOnTestConfiguration_(powerOnTestConfiguration_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_resourceID_(resourceID_) {
            }

            void BITConfigReportType::swap(BITConfigReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_continuousTestConfiguration_, other_.m_continuousTestConfiguration_);
                swap(m_minTimeBetweenTests_, other_.m_minTimeBetweenTests_);
                swap(m_powerOnTestConfiguration_, other_.m_powerOnTestConfiguration_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_resourceID_, other_.m_resourceID_);
            }  

            bool BITConfigReportType::operator == (const BITConfigReportType& other_) const {
                if (m_continuousTestConfiguration_ != other_.m_continuousTestConfiguration_) {
                    return false;
                }
                if (m_minTimeBetweenTests_.has_value() != other_.m_minTimeBetweenTests_.has_value()) {
                    return false;
                } else if (m_minTimeBetweenTests_.has_value()) {
                    if (std::fabs(*m_minTimeBetweenTests_ - *other_.m_minTimeBetweenTests_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_minTimeBetweenTests_ - *other_.m_minTimeBetweenTests_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_powerOnTestConfiguration_ != other_.m_powerOnTestConfiguration_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_resourceID_ != other_.m_resourceID_) {
                    return false;
                }
                return true;
            }

            bool BITConfigReportType::operator != (const BITConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BITConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "continuousTestConfiguration: " << sample.continuousTestConfiguration ()<<", ";
                o << "minTimeBetweenTests: " << sample.minTimeBetweenTests ()<<", ";
                o << "powerOnTestConfiguration: " << sample.powerOnTestConfiguration ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "resourceID: " << sample.resourceID ();
                o <<"]";
                return o;
            }

        } // namespace BITConfig  

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
        struct native_type_code< ::UMAA::SO::BITConfig::BITConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BITConfigReportType_g_tc_members[6]=
                {

                    {
                        (char *)"continuousTestConfiguration",/* Member name */
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
                        (char *)"minTimeBetweenTests",/* Member name */
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
                        (char *)"powerOnTestConfiguration",/* Member name */
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
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                    }, 
                    {
                        (char *)"resourceID",/* Member name */
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

                static DDS_TypeCode BITConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::BITConfig::BITConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        BITConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BITConfigReportType*/

                if (is_initialized) {
                    return &BITConfigReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BITConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BITConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType>::get().native();
                BITConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationMilliseconds_AliasTag_t>::get().native();
                BITConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType>::get().native();
                BITConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                BITConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                BITConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                BITConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BITConfigReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;
                BITConfigReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BITConfigReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BITConfigReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BITConfigReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BITConfigReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BITConfigReportType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                BITConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                BITConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &BITConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::BITConfig::BITConfigReportType *sample;

                static RTIXCdrMemberAccessInfo BITConfigReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BITConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BITConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::BITConfig::BITConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                BITConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->continuousTestConfiguration() - (char *)sample);

                BITConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minTimeBetweenTests() - (char *)sample);

                BITConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->powerOnTestConfiguration() - (char *)sample);

                BITConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BITConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BITConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceID() - (char *)sample);

                BITConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                BITConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::BITConfig::BITConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BITConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BITConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BITConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BITConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::BITConfig::BITConfigReportType >;

                BITConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BITConfigReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BITConfigReportType_g_typePlugin = 
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

                return &BITConfigReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::BITConfig::BITConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::BITConfig::BITConfigReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::BITConfig::BITConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::BITConfig::BITConfigReportTypePlugin_new,
                ::UMAA::SO::BITConfig::BITConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::BITConfig::BITConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::BITConfig::BITConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BITConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BITConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::BITConfig::BITConfigReportType >::from_cdr_buffer(::UMAA::SO::BITConfig::BITConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BITConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::BITConfig::BITConfigReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::BITConfig::BITConfigReportType >::reset_sample(::UMAA::SO::BITConfig::BITConfigReportType& sample) 
        {
            sample.continuousTestConfiguration(UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType::DISABLED_NO_TEST);
            ::rti::topic::reset_sample(sample.minTimeBetweenTests());
            sample.powerOnTestConfiguration(UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType::DISABLED_NO_TEST);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.resourceID());
        }

        void topic_type_support< ::UMAA::SO::BITConfig::BITConfigReportType >::allocate_sample(::UMAA::SO::BITConfig::BITConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.continuousTestConfiguration(),  -1, -1);
            ::rti::topic::allocate_sample(sample.powerOnTestConfiguration(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.resourceID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
