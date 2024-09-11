

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSClockType.idl
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
#include "GPSClockTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GPSClockType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace GPSStatus {

            // ---- GPSClockType: 

            GPSClockType::GPSClockType() :
                m_bias_ (0ll) ,
                m_biasUncertainty_ (0ll) ,
                m_drift_ (0) ,
                m_driftUncertainty_ (0) ,
                m_elapsedRealtime_ (0ll) ,
                m_elapsedRealtimeUncertainty_ (0ll) ,
                m_fullBias_ (0ll) ,
                m_hardwareClockDiscontinuityCount_ (0ll) ,
                m_leapSecond_ (0) ,
                m_referenceCarrierFrequency_ (0.0) ,
                m_referenceCodeTypeFor_ ("") ,
                m_referenceConstellationType_(UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::BEIDOU) ,
                m_time_ (0) ,
                m_timeFigureOfMerit_(UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_1)  {

            }   

            GPSClockType::GPSClockType (int64_t bias_,int64_t biasUncertainty_,int32_t drift_,int32_t driftUncertainty_,int64_t elapsedRealtime_,int64_t elapsedRealtimeUncertainty_,int64_t fullBias_,int64_t hardwareClockDiscontinuityCount_,int32_t leapSecond_,double referenceCarrierFrequency_,const std::string& referenceCodeTypeFor_,const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType& referenceConstellationType_,int32_t time_,const ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType& timeFigureOfMerit_):
                m_bias_(bias_), 
                m_biasUncertainty_(biasUncertainty_), 
                m_drift_(drift_), 
                m_driftUncertainty_(driftUncertainty_), 
                m_elapsedRealtime_(elapsedRealtime_), 
                m_elapsedRealtimeUncertainty_(elapsedRealtimeUncertainty_), 
                m_fullBias_(fullBias_), 
                m_hardwareClockDiscontinuityCount_(hardwareClockDiscontinuityCount_), 
                m_leapSecond_(leapSecond_), 
                m_referenceCarrierFrequency_(referenceCarrierFrequency_), 
                m_referenceCodeTypeFor_(referenceCodeTypeFor_), 
                m_referenceConstellationType_(referenceConstellationType_), 
                m_time_(time_), 
                m_timeFigureOfMerit_(timeFigureOfMerit_) {
            }

            void GPSClockType::swap(GPSClockType& other_)  noexcept 
            {
                using std::swap;
                swap(m_bias_, other_.m_bias_);
                swap(m_biasUncertainty_, other_.m_biasUncertainty_);
                swap(m_drift_, other_.m_drift_);
                swap(m_driftUncertainty_, other_.m_driftUncertainty_);
                swap(m_elapsedRealtime_, other_.m_elapsedRealtime_);
                swap(m_elapsedRealtimeUncertainty_, other_.m_elapsedRealtimeUncertainty_);
                swap(m_fullBias_, other_.m_fullBias_);
                swap(m_hardwareClockDiscontinuityCount_, other_.m_hardwareClockDiscontinuityCount_);
                swap(m_leapSecond_, other_.m_leapSecond_);
                swap(m_referenceCarrierFrequency_, other_.m_referenceCarrierFrequency_);
                swap(m_referenceCodeTypeFor_, other_.m_referenceCodeTypeFor_);
                swap(m_referenceConstellationType_, other_.m_referenceConstellationType_);
                swap(m_time_, other_.m_time_);
                swap(m_timeFigureOfMerit_, other_.m_timeFigureOfMerit_);
            }  

            bool GPSClockType::operator == (const GPSClockType& other_) const {
                if (m_bias_ != other_.m_bias_) {
                    return false;
                }
                if (m_biasUncertainty_ != other_.m_biasUncertainty_) {
                    return false;
                }
                if (m_drift_ != other_.m_drift_) {
                    return false;
                }
                if (m_driftUncertainty_ != other_.m_driftUncertainty_) {
                    return false;
                }
                if (m_elapsedRealtime_ != other_.m_elapsedRealtime_) {
                    return false;
                }
                if (m_elapsedRealtimeUncertainty_ != other_.m_elapsedRealtimeUncertainty_) {
                    return false;
                }
                if (m_fullBias_ != other_.m_fullBias_) {
                    return false;
                }
                if (m_hardwareClockDiscontinuityCount_ != other_.m_hardwareClockDiscontinuityCount_) {
                    return false;
                }
                if (m_leapSecond_ != other_.m_leapSecond_) {
                    return false;
                }
                if (std::fabs(m_referenceCarrierFrequency_ - other_.m_referenceCarrierFrequency_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_referenceCarrierFrequency_ - other_.m_referenceCarrierFrequency_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_referenceCodeTypeFor_ != other_.m_referenceCodeTypeFor_) {
                    return false;
                }
                if (m_referenceConstellationType_ != other_.m_referenceConstellationType_) {
                    return false;
                }
                if (m_time_ != other_.m_time_) {
                    return false;
                }
                if (m_timeFigureOfMerit_ != other_.m_timeFigureOfMerit_) {
                    return false;
                }
                return true;
            }

            bool GPSClockType::operator != (const GPSClockType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GPSClockType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bias: " << sample.bias ()<<", ";
                o << "biasUncertainty: " << sample.biasUncertainty ()<<", ";
                o << "drift: " << sample.drift ()<<", ";
                o << "driftUncertainty: " << sample.driftUncertainty ()<<", ";
                o << "elapsedRealtime: " << sample.elapsedRealtime ()<<", ";
                o << "elapsedRealtimeUncertainty: " << sample.elapsedRealtimeUncertainty ()<<", ";
                o << "fullBias: " << sample.fullBias ()<<", ";
                o << "hardwareClockDiscontinuityCount: " << sample.hardwareClockDiscontinuityCount ()<<", ";
                o << "leapSecond: " << sample.leapSecond ()<<", ";
                o << "referenceCarrierFrequency: " << std::setprecision(15) << sample.referenceCarrierFrequency ()<<", ";
                o << "referenceCodeTypeFor: " << sample.referenceCodeTypeFor ()<<", ";
                o << "referenceConstellationType: " << sample.referenceConstellationType ()<<", ";
                o << "time: " << sample.time ()<<", ";
                o << "timeFigureOfMerit: " << sample.timeFigureOfMerit ();
                o <<"]";
                return o;
            }

        } // namespace GPSStatus  

    } // namespace SEM  

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
        struct native_type_code< ::UMAA::SEM::GPSStatus::GPSClockType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GPSClockType_g_tc_members[14]=
                {

                    {
                        (char *)"bias",/* Member name */
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
                        (char *)"biasUncertainty",/* Member name */
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
                        (char *)"drift",/* Member name */
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
                        (char *)"driftUncertainty",/* Member name */
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
                        (char *)"elapsedRealtime",/* Member name */
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
                        (char *)"elapsedRealtimeUncertainty",/* Member name */
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
                        (char *)"fullBias",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"hardwareClockDiscontinuityCount",/* Member name */
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
                    }, 
                    {
                        (char *)"leapSecond",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"referenceCarrierFrequency",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"referenceCodeTypeFor",/* Member name */
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
                        (char *)"referenceConstellationType",/* Member name */
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
                    }, 
                    {
                        (char *)"time",/* Member name */
                        {
                            12,/* Representation ID */
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
                        (char *)"timeFigureOfMerit",/* Member name */
                        {
                            13,/* Representation ID */
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

                static DDS_TypeCode GPSClockType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::GPSStatus::GPSClockType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        GPSClockType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GPSClockType*/

                if (is_initialized) {
                    return &GPSClockType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GPSClockType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GPSClockType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsDrift_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsDrift_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RadioFrequencyHertz_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType>::get().native();
                GPSClockType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                GPSClockType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType>::get().native();

                /* Initialize the values for member annotations. */
                GPSClockType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[0]._annotations._defaultValue._u.long_long_value = 0ll;
                GPSClockType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[0]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                GPSClockType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[0]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;
                GPSClockType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[1]._annotations._defaultValue._u.long_long_value = 0ll;
                GPSClockType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[1]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                GPSClockType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[1]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;
                GPSClockType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                GPSClockType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                GPSClockType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                GPSClockType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                GPSClockType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[4]._annotations._defaultValue._u.long_long_value = 0ll;
                GPSClockType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[4]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                GPSClockType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[4]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;
                GPSClockType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[5]._annotations._defaultValue._u.long_long_value = 0ll;
                GPSClockType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[5]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                GPSClockType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[5]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;
                GPSClockType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[6]._annotations._defaultValue._u.long_long_value = 0ll;
                GPSClockType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[6]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                GPSClockType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[6]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;
                GPSClockType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[7]._annotations._defaultValue._u.long_long_value = 0ll;
                GPSClockType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[7]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                GPSClockType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                GPSClockType_g_tc_members[7]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;
                GPSClockType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[8]._annotations._defaultValue._u.long_value = 0;
                GPSClockType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[8]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[8]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                GPSClockType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GPSClockType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                GPSClockType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSClockType_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSClockType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSClockType_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GPSClockType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                GPSClockType_g_tc_members[10]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                GPSClockType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GPSClockType_g_tc_members[11]._annotations._defaultValue._u.enumerated_value = 0;
                GPSClockType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[12]._annotations._defaultValue._u.long_value = 0;
                GPSClockType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[12]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GPSClockType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GPSClockType_g_tc_members[12]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                GPSClockType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GPSClockType_g_tc_members[13]._annotations._defaultValue._u.enumerated_value = 0;

                GPSClockType_g_tc._data._sampleAccessInfo = sample_access_info();
                GPSClockType_g_tc._data._typePlugin = type_plugin_info();    

                return &GPSClockType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::GPSStatus::GPSClockType *sample;

                static RTIXCdrMemberAccessInfo GPSClockType_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GPSClockType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GPSClockType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::GPSStatus::GPSClockType);
                if (sample == NULL) {
                    return NULL;
                }

                GPSClockType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bias() - (char *)sample);

                GPSClockType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->biasUncertainty() - (char *)sample);

                GPSClockType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->drift() - (char *)sample);

                GPSClockType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->driftUncertainty() - (char *)sample);

                GPSClockType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elapsedRealtime() - (char *)sample);

                GPSClockType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elapsedRealtimeUncertainty() - (char *)sample);

                GPSClockType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->fullBias() - (char *)sample);

                GPSClockType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->hardwareClockDiscontinuityCount() - (char *)sample);

                GPSClockType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->leapSecond() - (char *)sample);

                GPSClockType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->referenceCarrierFrequency() - (char *)sample);

                GPSClockType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->referenceCodeTypeFor() - (char *)sample);

                GPSClockType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->referenceConstellationType() - (char *)sample);

                GPSClockType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->time() - (char *)sample);

                GPSClockType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeFigureOfMerit() - (char *)sample);

                GPSClockType_g_sampleAccessInfo.memberAccessInfos = 
                GPSClockType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::GPSStatus::GPSClockType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GPSClockType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GPSClockType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GPSClockType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GPSClockType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::GPSStatus::GPSClockType >;

                GPSClockType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GPSClockType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GPSClockType_g_typePlugin = 
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

                return &GPSClockType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::GPSStatus::GPSClockType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::GPSStatus::GPSClockType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SEM::GPSStatus::GPSClockType >::reset_sample(::UMAA::SEM::GPSStatus::GPSClockType& sample) 
        {
            sample.bias(0ll);
            sample.biasUncertainty(0ll);
            sample.drift(0);
            sample.driftUncertainty(0);
            sample.elapsedRealtime(0ll);
            sample.elapsedRealtimeUncertainty(0ll);
            sample.fullBias(0ll);
            sample.hardwareClockDiscontinuityCount(0ll);
            sample.leapSecond(0);
            sample.referenceCarrierFrequency(0.0);
            sample.referenceCodeTypeFor("");
            sample.referenceConstellationType(UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::BEIDOU);
            sample.time(0);
            sample.timeFigureOfMerit(UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_1);
        }

        void topic_type_support< ::UMAA::SEM::GPSStatus::GPSClockType >::allocate_sample(::UMAA::SEM::GPSStatus::GPSClockType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.referenceCodeTypeFor(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.referenceConstellationType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeFigureOfMerit(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
