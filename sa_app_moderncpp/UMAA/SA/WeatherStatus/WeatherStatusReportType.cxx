

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WeatherStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "WeatherStatusReportType.hpp"
#include "WeatherStatusReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace WeatherStatus {

            // ---- WeatherStatusReportType: 

            WeatherStatusReportType::WeatherStatusReportType()  {
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            WeatherStatusReportType::WeatherStatusReportType (const ::dds::core::optional< double >& airTemperature,const ::dds::core::optional< double >& barometricPressure,const ::dds::core::optional< UMAA::Common::Measurement::CloudCoverType_All >& cloudiness,const ::dds::core::optional< double >& dewPoint,const ::dds::core::optional< UMAA::Common::Measurement::WeatherSeverityType_All >& icingSeverity,const ::dds::core::optional< UMAA::Common::Measurement::PrecipitationType_All >& precipitation,const ::dds::core::optional< double >& relativeHumidity,const ::dds::core::optional< double >& thunderstormPotential,const ::dds::core::optional< double >& visibility,const ::dds::core::optional< double >& waterTemperature,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_airTemperature_( airTemperature ),
                m_barometricPressure_( barometricPressure ),
                m_cloudiness_( cloudiness ),
                m_dewPoint_( dewPoint ),
                m_icingSeverity_( icingSeverity ),
                m_precipitation_( precipitation ),
                m_relativeHumidity_( relativeHumidity ),
                m_thunderstormPotential_( thunderstormPotential ),
                m_visibility_( visibility ),
                m_waterTemperature_( waterTemperature ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WeatherStatusReportType::WeatherStatusReportType(WeatherStatusReportType&& other_) OMG_NOEXCEPT  :m_airTemperature_ (std::move(other_.m_airTemperature_))
            ,
            m_barometricPressure_ (std::move(other_.m_barometricPressure_))
            ,
            m_cloudiness_ (std::move(other_.m_cloudiness_))
            ,
            m_dewPoint_ (std::move(other_.m_dewPoint_))
            ,
            m_icingSeverity_ (std::move(other_.m_icingSeverity_))
            ,
            m_precipitation_ (std::move(other_.m_precipitation_))
            ,
            m_relativeHumidity_ (std::move(other_.m_relativeHumidity_))
            ,
            m_thunderstormPotential_ (std::move(other_.m_thunderstormPotential_))
            ,
            m_visibility_ (std::move(other_.m_visibility_))
            ,
            m_waterTemperature_ (std::move(other_.m_waterTemperature_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            WeatherStatusReportType& WeatherStatusReportType::operator=(WeatherStatusReportType&&  other_) OMG_NOEXCEPT {
                WeatherStatusReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void WeatherStatusReportType::swap(WeatherStatusReportType& other_)  OMG_NOEXCEPT 
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
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool WeatherStatusReportType::operator == (const WeatherStatusReportType& other_) const {
                if (m_airTemperature_ != other_.m_airTemperature_) {
                    return false;
                }
                if (m_barometricPressure_ != other_.m_barometricPressure_) {
                    return false;
                }
                if (m_cloudiness_ != other_.m_cloudiness_) {
                    return false;
                }
                if (m_dewPoint_ != other_.m_dewPoint_) {
                    return false;
                }
                if (m_icingSeverity_ != other_.m_icingSeverity_) {
                    return false;
                }
                if (m_precipitation_ != other_.m_precipitation_) {
                    return false;
                }
                if (m_relativeHumidity_ != other_.m_relativeHumidity_) {
                    return false;
                }
                if (m_thunderstormPotential_ != other_.m_thunderstormPotential_) {
                    return false;
                }
                if (m_visibility_ != other_.m_visibility_) {
                    return false;
                }
                if (m_waterTemperature_ != other_.m_waterTemperature_) {
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
            bool WeatherStatusReportType::operator != (const WeatherStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WeatherStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "airTemperature: " << sample.airTemperature()<<", ";
                o << "barometricPressure: " << sample.barometricPressure()<<", ";
                o << "cloudiness: " << sample.cloudiness()<<", ";
                o << "dewPoint: " << sample.dewPoint()<<", ";
                o << "icingSeverity: " << sample.icingSeverity()<<", ";
                o << "precipitation: " << sample.precipitation()<<", ";
                o << "relativeHumidity: " << sample.relativeHumidity()<<", ";
                o << "thunderstormPotential: " << sample.thunderstormPotential()<<", ";
                o << "visibility: " << sample.visibility()<<", ";
                o << "waterTemperature: " << sample.waterTemperature()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace WeatherStatus  

    } // namespace SA  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SA::WeatherStatus::WeatherStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WeatherStatusReportType_g_tc_members[12]=
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode WeatherStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::WeatherStatus::WeatherStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        WeatherStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WeatherStatusReportType*/

                if (is_initialized) {
                    return &WeatherStatusReportType_g_tc;
                }

                WeatherStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WeatherStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                WeatherStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::BarometricPressure_AliasTag_t>::get().native();
                WeatherStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CloudCoverType_All>::get().native();
                WeatherStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                WeatherStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::WeatherSeverityType_All>::get().native();
                WeatherStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::PrecipitationType_All>::get().native();
                WeatherStatusReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MeasurementConstrained::Percent_AliasTag_t>::get().native();
                WeatherStatusReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MeasurementConstrained::Percent_AliasTag_t>::get().native();
                WeatherStatusReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                WeatherStatusReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                WeatherStatusReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                WeatherStatusReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                WeatherStatusReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[0]._annotations._minValue._u.double_value = -273LL;
                WeatherStatusReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 1000ULL;

                WeatherStatusReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WeatherStatusReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WeatherStatusReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[3]._annotations._minValue._u.double_value = -273LL;
                WeatherStatusReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 1000ULL;

                WeatherStatusReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
                WeatherStatusReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 1000ULL;

                WeatherStatusReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                WeatherStatusReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 1000ULL;

                WeatherStatusReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
                WeatherStatusReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[8]._annotations._maxValue._u.double_value = 401056000ULL;

                WeatherStatusReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[9]._annotations._minValue._u.double_value = -273LL;
                WeatherStatusReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WeatherStatusReportType_g_tc_members[9]._annotations._maxValue._u.double_value = 1000ULL;

                WeatherStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                WeatherStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WeatherStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SA::WeatherStatus::WeatherStatusReportType *sample;

                static RTIXCdrMemberAccessInfo WeatherStatusReportType_g_memberAccessInfos[12] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WeatherStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WeatherStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SA::WeatherStatus::WeatherStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                WeatherStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->airTemperature() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->barometricPressure() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cloudiness() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dewPoint() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->icingSeverity() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->precipitation() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->relativeHumidity() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->thunderstormPotential() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->visibility() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waterTemperature() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                WeatherStatusReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                WeatherStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                WeatherStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SA::WeatherStatus::WeatherStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WeatherStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WeatherStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WeatherStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WeatherStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SA::WeatherStatus::WeatherStatusReportType >;

                WeatherStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WeatherStatusReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WeatherStatusReportType_g_typePlugin = 
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
                    NULL
                };

                return &WeatherStatusReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SA::WeatherStatus::WeatherStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SA::WeatherStatus::WeatherStatusReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SA::WeatherStatus::WeatherStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SA::WeatherStatus::WeatherStatusReportTypePlugin_new,
                UMAA::SA::WeatherStatus::WeatherStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SA::WeatherStatus::WeatherStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SA::WeatherStatus::WeatherStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WeatherStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WeatherStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SA::WeatherStatus::WeatherStatusReportType >::from_cdr_buffer(UMAA::SA::WeatherStatus::WeatherStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WeatherStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SA::WeatherStatus::WeatherStatusReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SA::WeatherStatus::WeatherStatusReportType >::reset_sample(UMAA::SA::WeatherStatus::WeatherStatusReportType& sample) 
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
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SA::WeatherStatus::WeatherStatusReportType >::allocate_sample(UMAA::SA::WeatherStatus::WeatherStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

