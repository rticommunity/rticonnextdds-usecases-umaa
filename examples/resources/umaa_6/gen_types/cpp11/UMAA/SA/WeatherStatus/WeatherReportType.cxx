

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WeatherReportType.idl
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
#include "WeatherReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WeatherReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace WeatherStatus {

            // ---- WeatherReportType: 

            WeatherReportType::WeatherReportType()  {

            }   

            WeatherReportType::WeatherReportType (const ::dds::core::optional< double >& airTemperature_,const ::dds::core::optional< double >& barometricPressure_,const ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType >& cloudiness_,const ::dds::core::optional< double >& dewPoint_,const ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType >& icingSeverity_,const ::dds::core::optional< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType >& precipitation_,const ::dds::core::optional< double >& relativeHumidity_,const ::dds::core::optional< double >& thunderstormPotential_,const ::dds::core::optional< double >& visibility_,const ::dds::core::optional< double >& waterTemperature_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_airTemperature_(airTemperature_), 
                m_barometricPressure_(barometricPressure_), 
                m_cloudiness_(cloudiness_), 
                m_dewPoint_(dewPoint_), 
                m_icingSeverity_(icingSeverity_), 
                m_precipitation_(precipitation_), 
                m_relativeHumidity_(relativeHumidity_), 
                m_thunderstormPotential_(thunderstormPotential_), 
                m_visibility_(visibility_), 
                m_waterTemperature_(waterTemperature_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void WeatherReportType::swap(WeatherReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_airTemperature_, other_.m_airTemperature_);
                swap(m_barometricPressure_, other_.m_barometricPressure_);
                swap(m_cloudiness_, other_.m_cloudiness_);
                swap(m_dewPoint_, other_.m_dewPoint_);
                swap(m_icingSeverity_, other_.m_icingSeverity_);
                swap(m_precipitation_, other_.m_precipitation_);
                swap(m_relativeHumidity_, other_.m_relativeHumidity_);
                swap(m_thunderstormPotential_, other_.m_thunderstormPotential_);
                swap(m_visibility_, other_.m_visibility_);
                swap(m_waterTemperature_, other_.m_waterTemperature_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool WeatherReportType::operator == (const WeatherReportType& other_) const {
                if (m_airTemperature_.has_value() != other_.m_airTemperature_.has_value()) {
                    return false;
                } else if (m_airTemperature_.has_value()) {
                    if (std::fabs(*m_airTemperature_ - *other_.m_airTemperature_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_airTemperature_ - *other_.m_airTemperature_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_barometricPressure_.has_value() != other_.m_barometricPressure_.has_value()) {
                    return false;
                } else if (m_barometricPressure_.has_value()) {
                    if (std::fabs(*m_barometricPressure_ - *other_.m_barometricPressure_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_barometricPressure_ - *other_.m_barometricPressure_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_cloudiness_ != other_.m_cloudiness_) {
                    return false;
                }
                if (m_dewPoint_.has_value() != other_.m_dewPoint_.has_value()) {
                    return false;
                } else if (m_dewPoint_.has_value()) {
                    if (std::fabs(*m_dewPoint_ - *other_.m_dewPoint_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_dewPoint_ - *other_.m_dewPoint_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_icingSeverity_ != other_.m_icingSeverity_) {
                    return false;
                }
                if (m_precipitation_ != other_.m_precipitation_) {
                    return false;
                }
                if (m_relativeHumidity_.has_value() != other_.m_relativeHumidity_.has_value()) {
                    return false;
                } else if (m_relativeHumidity_.has_value()) {
                    if (std::fabs(*m_relativeHumidity_ - *other_.m_relativeHumidity_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_relativeHumidity_ - *other_.m_relativeHumidity_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_thunderstormPotential_.has_value() != other_.m_thunderstormPotential_.has_value()) {
                    return false;
                } else if (m_thunderstormPotential_.has_value()) {
                    if (std::fabs(*m_thunderstormPotential_ - *other_.m_thunderstormPotential_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_thunderstormPotential_ - *other_.m_thunderstormPotential_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_visibility_.has_value() != other_.m_visibility_.has_value()) {
                    return false;
                } else if (m_visibility_.has_value()) {
                    if (std::fabs(*m_visibility_ - *other_.m_visibility_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_visibility_ - *other_.m_visibility_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_waterTemperature_.has_value() != other_.m_waterTemperature_.has_value()) {
                    return false;
                } else if (m_waterTemperature_.has_value()) {
                    if (std::fabs(*m_waterTemperature_ - *other_.m_waterTemperature_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_waterTemperature_ - *other_.m_waterTemperature_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool WeatherReportType::operator != (const WeatherReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WeatherReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "airTemperature: " << sample.airTemperature ()<<", ";
                o << "barometricPressure: " << sample.barometricPressure ()<<", ";
                o << "cloudiness: " << sample.cloudiness ()<<", ";
                o << "dewPoint: " << sample.dewPoint ()<<", ";
                o << "icingSeverity: " << sample.icingSeverity ()<<", ";
                o << "precipitation: " << sample.precipitation ()<<", ";
                o << "relativeHumidity: " << sample.relativeHumidity ()<<", ";
                o << "thunderstormPotential: " << sample.thunderstormPotential ()<<", ";
                o << "visibility: " << sample.visibility ()<<", ";
                o << "waterTemperature: " << sample.waterTemperature ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace WeatherStatus  

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
        struct native_type_code< ::UMAA::SA::WeatherStatus::WeatherReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WeatherReportType_g_tc_members[12]=
                {

                    {
                        (char *)"airTemperature",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"barometricPressure",/* Member name */
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
                        (char *)"cloudiness",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"dewPoint",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"icingSeverity",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"precipitation",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"relativeHumidity",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"thunderstormPotential",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"visibility",/* Member name */
                        {
                            8,/* Representation ID */
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
                        (char *)"waterTemperature",/* Member name */
                        {
                            9,/* Representation ID */
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
                        (char *)"timeStamp",/* Member name */
                        {
                            10,/* Representation ID */
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
                            11,/* Representation ID */
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

                static DDS_TypeCode WeatherReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::WeatherStatus::WeatherReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        WeatherReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WeatherReportType*/

                if (is_initialized) {
                    return &WeatherReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WeatherReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WeatherReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::AirTemperature_AliasTag_t>::get().native();
                WeatherReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::WeatherBarometricPressure_AliasTag_t>::get().native();
                WeatherReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType>::get().native();
                WeatherReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::DewPointTemperature_AliasTag_t>::get().native();
                WeatherReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType>::get().native();
                WeatherReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType>::get().native();
                WeatherReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t>::get().native();
                WeatherReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t>::get().native();
                WeatherReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                WeatherReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::WaterTemperature_AliasTag_t>::get().native();
                WeatherReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                WeatherReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                WeatherReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WeatherReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WeatherReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WeatherReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WeatherReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WeatherReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WeatherReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WeatherReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WeatherReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WeatherReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WeatherReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WeatherReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                WeatherReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WeatherReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherReportType_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WeatherReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                WeatherReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &WeatherReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::WeatherStatus::WeatherReportType *sample;

                static RTIXCdrMemberAccessInfo WeatherReportType_g_memberAccessInfos[12] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WeatherReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WeatherReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::WeatherStatus::WeatherReportType);
                if (sample == NULL) {
                    return NULL;
                }

                WeatherReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->airTemperature() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->barometricPressure() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cloudiness() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dewPoint() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->icingSeverity() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->precipitation() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeHumidity() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->thunderstormPotential() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->visibility() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waterTemperature() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                WeatherReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                WeatherReportType_g_sampleAccessInfo.memberAccessInfos = 
                WeatherReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::WeatherStatus::WeatherReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WeatherReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WeatherReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WeatherReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WeatherReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::WeatherStatus::WeatherReportType >;

                WeatherReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WeatherReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WeatherReportType_g_typePlugin = 
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

                return &WeatherReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::WeatherStatus::WeatherReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::WeatherStatus::WeatherReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::WeatherStatus::WeatherReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::WeatherStatus::WeatherReportTypePlugin_new,
                ::UMAA::SA::WeatherStatus::WeatherReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::WeatherStatus::WeatherReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::WeatherStatus::WeatherReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WeatherReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WeatherReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::WeatherStatus::WeatherReportType >::from_cdr_buffer(::UMAA::SA::WeatherStatus::WeatherReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WeatherReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::WeatherStatus::WeatherReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::WeatherStatus::WeatherReportType >::reset_sample(::UMAA::SA::WeatherStatus::WeatherReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.airTemperature());
            ::rti::topic::reset_sample(sample.barometricPressure());
            ::rti::topic::reset_sample(sample.cloudiness());
            ::rti::topic::reset_sample(sample.dewPoint());
            ::rti::topic::reset_sample(sample.icingSeverity());
            ::rti::topic::reset_sample(sample.precipitation());
            ::rti::topic::reset_sample(sample.relativeHumidity());
            ::rti::topic::reset_sample(sample.thunderstormPotential());
            ::rti::topic::reset_sample(sample.visibility());
            ::rti::topic::reset_sample(sample.waterTemperature());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SA::WeatherStatus::WeatherReportType >::allocate_sample(::UMAA::SA::WeatherStatus::WeatherReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
