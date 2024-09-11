

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PassiveContactType.idl
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
#include "PassiveContactTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PassiveContactType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace PassiveContactReport {

            // ---- PassiveContactType: 

            PassiveContactType::PassiveContactType() :
                m_bearing_ (0.0) ,
                m_bearingRate_ (0.0) ,
                m_bearingRateUncertainty_ (0.0) ,
                m_bearingUncertainty_ (0.0) ,
                m_contactLevel_ (0.0)  {

            }   

            PassiveContactType::PassiveContactType (double bearing_,double bearingRate_,double bearingRateUncertainty_,double bearingUncertainty_,double contactLevel_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType >& contactType_,const ::dds::core::optional< double >& course_,const ::dds::core::optional< double >& courseUncertainty_,const ::dds::core::optional< double >& declination_,const ::dds::core::optional< double >& declinationUncertainty_,const ::dds::core::optional< double >& narrowbandContactFrequency_,const ::dds::core::optional< double >& range_,const ::dds::core::optional< double >& rangeUncertainty_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType >& threatType_):
                m_bearing_(bearing_), 
                m_bearingRate_(bearingRate_), 
                m_bearingRateUncertainty_(bearingRateUncertainty_), 
                m_bearingUncertainty_(bearingUncertainty_), 
                m_contactLevel_(contactLevel_), 
                m_contactType_(contactType_), 
                m_course_(course_), 
                m_courseUncertainty_(courseUncertainty_), 
                m_declination_(declination_), 
                m_declinationUncertainty_(declinationUncertainty_), 
                m_narrowbandContactFrequency_(narrowbandContactFrequency_), 
                m_range_(range_), 
                m_rangeUncertainty_(rangeUncertainty_), 
                m_threatType_(threatType_) {
            }

            void PassiveContactType::swap(PassiveContactType& other_)  noexcept 
            {
                using std::swap;
                swap(m_bearing_, other_.m_bearing_);
                swap(m_bearingRate_, other_.m_bearingRate_);
                swap(m_bearingRateUncertainty_, other_.m_bearingRateUncertainty_);
                swap(m_bearingUncertainty_, other_.m_bearingUncertainty_);
                swap(m_contactLevel_, other_.m_contactLevel_);
                swap(m_contactType_, other_.m_contactType_);
                swap(m_course_, other_.m_course_);
                swap(m_courseUncertainty_, other_.m_courseUncertainty_);
                swap(m_declination_, other_.m_declination_);
                swap(m_declinationUncertainty_, other_.m_declinationUncertainty_);
                swap(m_narrowbandContactFrequency_, other_.m_narrowbandContactFrequency_);
                swap(m_range_, other_.m_range_);
                swap(m_rangeUncertainty_, other_.m_rangeUncertainty_);
                swap(m_threatType_, other_.m_threatType_);
            }  

            bool PassiveContactType::operator == (const PassiveContactType& other_) const {
                if (std::fabs(m_bearing_ - other_.m_bearing_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearing_ - other_.m_bearing_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_bearingRate_ - other_.m_bearingRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearingRate_ - other_.m_bearingRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_bearingRateUncertainty_ - other_.m_bearingRateUncertainty_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearingRateUncertainty_ - other_.m_bearingRateUncertainty_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_bearingUncertainty_ - other_.m_bearingUncertainty_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearingUncertainty_ - other_.m_bearingUncertainty_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_contactLevel_ - other_.m_contactLevel_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_contactLevel_ - other_.m_contactLevel_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_contactType_ != other_.m_contactType_) {
                    return false;
                }
                if (m_course_.has_value() != other_.m_course_.has_value()) {
                    return false;
                } else if (m_course_.has_value()) {
                    if (std::fabs(*m_course_ - *other_.m_course_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_course_ - *other_.m_course_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_courseUncertainty_.has_value() != other_.m_courseUncertainty_.has_value()) {
                    return false;
                } else if (m_courseUncertainty_.has_value()) {
                    if (std::fabs(*m_courseUncertainty_ - *other_.m_courseUncertainty_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_courseUncertainty_ - *other_.m_courseUncertainty_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_declination_.has_value() != other_.m_declination_.has_value()) {
                    return false;
                } else if (m_declination_.has_value()) {
                    if (std::fabs(*m_declination_ - *other_.m_declination_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_declination_ - *other_.m_declination_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_declinationUncertainty_.has_value() != other_.m_declinationUncertainty_.has_value()) {
                    return false;
                } else if (m_declinationUncertainty_.has_value()) {
                    if (std::fabs(*m_declinationUncertainty_ - *other_.m_declinationUncertainty_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_declinationUncertainty_ - *other_.m_declinationUncertainty_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_narrowbandContactFrequency_.has_value() != other_.m_narrowbandContactFrequency_.has_value()) {
                    return false;
                } else if (m_narrowbandContactFrequency_.has_value()) {
                    if (std::fabs(*m_narrowbandContactFrequency_ - *other_.m_narrowbandContactFrequency_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_narrowbandContactFrequency_ - *other_.m_narrowbandContactFrequency_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_range_.has_value() != other_.m_range_.has_value()) {
                    return false;
                } else if (m_range_.has_value()) {
                    if (std::fabs(*m_range_ - *other_.m_range_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_range_ - *other_.m_range_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_rangeUncertainty_.has_value() != other_.m_rangeUncertainty_.has_value()) {
                    return false;
                } else if (m_rangeUncertainty_.has_value()) {
                    if (std::fabs(*m_rangeUncertainty_ - *other_.m_rangeUncertainty_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_rangeUncertainty_ - *other_.m_rangeUncertainty_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_threatType_ != other_.m_threatType_) {
                    return false;
                }
                return true;
            }

            bool PassiveContactType::operator != (const PassiveContactType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PassiveContactType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bearing: " << std::setprecision(15) << sample.bearing ()<<", ";
                o << "bearingRate: " << std::setprecision(15) << sample.bearingRate ()<<", ";
                o << "bearingRateUncertainty: " << std::setprecision(15) << sample.bearingRateUncertainty ()<<", ";
                o << "bearingUncertainty: " << std::setprecision(15) << sample.bearingUncertainty ()<<", ";
                o << "contactLevel: " << std::setprecision(15) << sample.contactLevel ()<<", ";
                o << "contactType: " << sample.contactType ()<<", ";
                o << "course: " << sample.course ()<<", ";
                o << "courseUncertainty: " << sample.courseUncertainty ()<<", ";
                o << "declination: " << sample.declination ()<<", ";
                o << "declinationUncertainty: " << sample.declinationUncertainty ()<<", ";
                o << "narrowbandContactFrequency: " << sample.narrowbandContactFrequency ()<<", ";
                o << "range: " << sample.range ()<<", ";
                o << "rangeUncertainty: " << sample.rangeUncertainty ()<<", ";
                o << "threatType: " << sample.threatType ();
                o <<"]";
                return o;
            }

        } // namespace PassiveContactReport  

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
        struct native_type_code< ::UMAA::SA::PassiveContactReport::PassiveContactType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PassiveContactType_g_tc_members[14]=
                {

                    {
                        (char *)"bearing",/* Member name */
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
                        (char *)"bearingRate",/* Member name */
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
                        (char *)"bearingRateUncertainty",/* Member name */
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
                        (char *)"bearingUncertainty",/* Member name */
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
                        (char *)"contactLevel",/* Member name */
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
                        (char *)"contactType",/* Member name */
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
                        (char *)"course",/* Member name */
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
                        (char *)"courseUncertainty",/* Member name */
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
                        (char *)"declination",/* Member name */
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
                        (char *)"declinationUncertainty",/* Member name */
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
                        (char *)"narrowbandContactFrequency",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"range",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"rangeUncertainty",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"threatType",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PassiveContactType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::PassiveContactReport::PassiveContactType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        PassiveContactType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PassiveContactType*/

                if (is_initialized) {
                    return &PassiveContactType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PassiveContactType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PassiveContactType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::BearingAngle_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleRate_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::ContactUncertainty_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::ContactUncertainty_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::PeakSoundPressureLevel_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType>::get().native();
                PassiveContactType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CourseTrueNorth_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::ContactUncertainty_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MeasurementConstrained::AngleHalf_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::ContactUncertainty_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::ContactUncertainty_AliasTag_t>::get().native();
                PassiveContactType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType>::get().native();

                /* Initialize the values for member annotations. */
                PassiveContactType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                PassiveContactType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                PassiveContactType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                PassiveContactType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                PassiveContactType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                PassiveContactType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PassiveContactType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PassiveContactType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PassiveContactType_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PassiveContactType_g_tc._data._sampleAccessInfo = sample_access_info();
                PassiveContactType_g_tc._data._typePlugin = type_plugin_info();    

                return &PassiveContactType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::PassiveContactReport::PassiveContactType *sample;

                static RTIXCdrMemberAccessInfo PassiveContactType_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PassiveContactType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PassiveContactType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::PassiveContactReport::PassiveContactType);
                if (sample == NULL) {
                    return NULL;
                }

                PassiveContactType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearing() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingRate() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingRateUncertainty() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingUncertainty() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactLevel() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactType() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->course() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->courseUncertainty() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->declination() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->declinationUncertainty() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->narrowbandContactFrequency() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->range() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rangeUncertainty() - (char *)sample);

                PassiveContactType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->threatType() - (char *)sample);

                PassiveContactType_g_sampleAccessInfo.memberAccessInfos = 
                PassiveContactType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::PassiveContactReport::PassiveContactType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PassiveContactType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PassiveContactType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PassiveContactType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PassiveContactType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::PassiveContactReport::PassiveContactType >;

                PassiveContactType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PassiveContactType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PassiveContactType_g_typePlugin = 
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

                return &PassiveContactType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::PassiveContactReport::PassiveContactType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::PassiveContactReport::PassiveContactType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactType >::reset_sample(::UMAA::SA::PassiveContactReport::PassiveContactType& sample) 
        {
            sample.bearing(0.0);
            sample.bearingRate(0.0);
            sample.bearingRateUncertainty(0.0);
            sample.bearingUncertainty(0.0);
            sample.contactLevel(0.0);
            ::rti::topic::reset_sample(sample.contactType());
            ::rti::topic::reset_sample(sample.course());
            ::rti::topic::reset_sample(sample.courseUncertainty());
            ::rti::topic::reset_sample(sample.declination());
            ::rti::topic::reset_sample(sample.declinationUncertainty());
            ::rti::topic::reset_sample(sample.narrowbandContactFrequency());
            ::rti::topic::reset_sample(sample.range());
            ::rti::topic::reset_sample(sample.rangeUncertainty());
            ::rti::topic::reset_sample(sample.threatType());
        }

        void topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactType >::allocate_sample(::UMAA::SA::PassiveContactReport::PassiveContactType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
