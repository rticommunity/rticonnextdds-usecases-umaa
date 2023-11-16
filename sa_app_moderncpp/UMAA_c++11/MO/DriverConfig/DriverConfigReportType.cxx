

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DriverConfigReportType.idl
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
#include "DriverConfigReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DriverConfigReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace DriverConfig {

            // ---- DriverConfigReportType: 

            DriverConfigReportType::DriverConfigReportType()  {

            }   

            DriverConfigReportType::DriverConfigReportType (const ::dds::core::optional< ::UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& maxAllowableAcceleration_,const ::dds::core::optional< ::UMAA::Common::Measurement::OrientationAcceleration3D >& maxAllowableAttitudeAcceleration_,const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationType >& maxAllowableElevation_,const ::dds::core::optional< ::UMAA::Common::Speed::SpeedControlType >& maxAllowableSpeed_,const ::dds::core::optional< double >& maxAllowableTurnRate_,const ::dds::core::optional< ::UMAA::Common::Capabilities::Speed_BSL_Capability >& maxElevationChangeRate_,const ::dds::core::optional< ::UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& minAllowableAcceleration_,const ::dds::core::optional< ::UMAA::Common::Measurement::OrientationAcceleration3D >& minAllowableAttitudeAcceleration_,const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationType >& minAllowableElevation_,const ::dds::core::optional< ::UMAA::Common::Speed::SpeedControlType >& minAllowableSpeed_,const ::dds::core::optional< ::UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& recommendedAcceleration_,const ::dds::core::optional< ::UMAA::Common::Measurement::OrientationAcceleration3D >& recommendedAttitudeAcceleration_,const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationType >& recommendedElevation_,const ::dds::core::optional< ::UMAA::Common::Capabilities::Speed_BSL_Capability >& recommendedElevationChangeRate_,const ::dds::core::optional< ::UMAA::Common::Speed::SpeedControlType >& recommendedSpeed_,const ::dds::core::optional< double >& recommendedTurnRate_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_maxAllowableAcceleration_(maxAllowableAcceleration_), 
                m_maxAllowableAttitudeAcceleration_(maxAllowableAttitudeAcceleration_), 
                m_maxAllowableElevation_(maxAllowableElevation_), 
                m_maxAllowableSpeed_(maxAllowableSpeed_), 
                m_maxAllowableTurnRate_(maxAllowableTurnRate_), 
                m_maxElevationChangeRate_(maxElevationChangeRate_), 
                m_minAllowableAcceleration_(minAllowableAcceleration_), 
                m_minAllowableAttitudeAcceleration_(minAllowableAttitudeAcceleration_), 
                m_minAllowableElevation_(minAllowableElevation_), 
                m_minAllowableSpeed_(minAllowableSpeed_), 
                m_recommendedAcceleration_(recommendedAcceleration_), 
                m_recommendedAttitudeAcceleration_(recommendedAttitudeAcceleration_), 
                m_recommendedElevation_(recommendedElevation_), 
                m_recommendedElevationChangeRate_(recommendedElevationChangeRate_), 
                m_recommendedSpeed_(recommendedSpeed_), 
                m_recommendedTurnRate_(recommendedTurnRate_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void DriverConfigReportType::swap(DriverConfigReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_maxAllowableAcceleration_, other_.m_maxAllowableAcceleration_);
                swap(m_maxAllowableAttitudeAcceleration_, other_.m_maxAllowableAttitudeAcceleration_);
                swap(m_maxAllowableElevation_, other_.m_maxAllowableElevation_);
                swap(m_maxAllowableSpeed_, other_.m_maxAllowableSpeed_);
                swap(m_maxAllowableTurnRate_, other_.m_maxAllowableTurnRate_);
                swap(m_maxElevationChangeRate_, other_.m_maxElevationChangeRate_);
                swap(m_minAllowableAcceleration_, other_.m_minAllowableAcceleration_);
                swap(m_minAllowableAttitudeAcceleration_, other_.m_minAllowableAttitudeAcceleration_);
                swap(m_minAllowableElevation_, other_.m_minAllowableElevation_);
                swap(m_minAllowableSpeed_, other_.m_minAllowableSpeed_);
                swap(m_recommendedAcceleration_, other_.m_recommendedAcceleration_);
                swap(m_recommendedAttitudeAcceleration_, other_.m_recommendedAttitudeAcceleration_);
                swap(m_recommendedElevation_, other_.m_recommendedElevation_);
                swap(m_recommendedElevationChangeRate_, other_.m_recommendedElevationChangeRate_);
                swap(m_recommendedSpeed_, other_.m_recommendedSpeed_);
                swap(m_recommendedTurnRate_, other_.m_recommendedTurnRate_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool DriverConfigReportType::operator == (const DriverConfigReportType& other_) const {
                if (m_maxAllowableAcceleration_ != other_.m_maxAllowableAcceleration_) {
                    return false;
                }
                if (m_maxAllowableAttitudeAcceleration_ != other_.m_maxAllowableAttitudeAcceleration_) {
                    return false;
                }
                if (m_maxAllowableElevation_ != other_.m_maxAllowableElevation_) {
                    return false;
                }
                if (m_maxAllowableSpeed_ != other_.m_maxAllowableSpeed_) {
                    return false;
                }
                if (m_maxAllowableTurnRate_.has_value() != other_.m_maxAllowableTurnRate_.has_value()) {
                    return false;
                } else if (m_maxAllowableTurnRate_.has_value()) {
                    if (std::fabs(*m_maxAllowableTurnRate_ - *other_.m_maxAllowableTurnRate_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxAllowableTurnRate_ - *other_.m_maxAllowableTurnRate_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxElevationChangeRate_ != other_.m_maxElevationChangeRate_) {
                    return false;
                }
                if (m_minAllowableAcceleration_ != other_.m_minAllowableAcceleration_) {
                    return false;
                }
                if (m_minAllowableAttitudeAcceleration_ != other_.m_minAllowableAttitudeAcceleration_) {
                    return false;
                }
                if (m_minAllowableElevation_ != other_.m_minAllowableElevation_) {
                    return false;
                }
                if (m_minAllowableSpeed_ != other_.m_minAllowableSpeed_) {
                    return false;
                }
                if (m_recommendedAcceleration_ != other_.m_recommendedAcceleration_) {
                    return false;
                }
                if (m_recommendedAttitudeAcceleration_ != other_.m_recommendedAttitudeAcceleration_) {
                    return false;
                }
                if (m_recommendedElevation_ != other_.m_recommendedElevation_) {
                    return false;
                }
                if (m_recommendedElevationChangeRate_ != other_.m_recommendedElevationChangeRate_) {
                    return false;
                }
                if (m_recommendedSpeed_ != other_.m_recommendedSpeed_) {
                    return false;
                }
                if (m_recommendedTurnRate_.has_value() != other_.m_recommendedTurnRate_.has_value()) {
                    return false;
                } else if (m_recommendedTurnRate_.has_value()) {
                    if (std::fabs(*m_recommendedTurnRate_ - *other_.m_recommendedTurnRate_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_recommendedTurnRate_ - *other_.m_recommendedTurnRate_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }

            bool DriverConfigReportType::operator != (const DriverConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DriverConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "maxAllowableAcceleration: " << sample.maxAllowableAcceleration ()<<", ";
                o << "maxAllowableAttitudeAcceleration: " << sample.maxAllowableAttitudeAcceleration ()<<", ";
                o << "maxAllowableElevation: " << sample.maxAllowableElevation ()<<", ";
                o << "maxAllowableSpeed: " << sample.maxAllowableSpeed ()<<", ";
                o << "maxAllowableTurnRate: " << sample.maxAllowableTurnRate ()<<", ";
                o << "maxElevationChangeRate: " << sample.maxElevationChangeRate ()<<", ";
                o << "minAllowableAcceleration: " << sample.minAllowableAcceleration ()<<", ";
                o << "minAllowableAttitudeAcceleration: " << sample.minAllowableAttitudeAcceleration ()<<", ";
                o << "minAllowableElevation: " << sample.minAllowableElevation ()<<", ";
                o << "minAllowableSpeed: " << sample.minAllowableSpeed ()<<", ";
                o << "recommendedAcceleration: " << sample.recommendedAcceleration ()<<", ";
                o << "recommendedAttitudeAcceleration: " << sample.recommendedAttitudeAcceleration ()<<", ";
                o << "recommendedElevation: " << sample.recommendedElevation ()<<", ";
                o << "recommendedElevationChangeRate: " << sample.recommendedElevationChangeRate ()<<", ";
                o << "recommendedSpeed: " << sample.recommendedSpeed ()<<", ";
                o << "recommendedTurnRate: " << sample.recommendedTurnRate ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace DriverConfig  

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
        struct native_type_code< ::UMAA::MO::DriverConfig::DriverConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DriverConfigReportType_g_tc_members[18]=
                {

                    {
                        (char *)"maxAllowableAcceleration",/* Member name */
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
                        (char *)"maxAllowableAttitudeAcceleration",/* Member name */
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
                        (char *)"maxAllowableElevation",/* Member name */
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
                        (char *)"maxAllowableSpeed",/* Member name */
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
                        (char *)"maxAllowableTurnRate",/* Member name */
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
                        (char *)"maxElevationChangeRate",/* Member name */
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
                        (char *)"minAllowableAcceleration",/* Member name */
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
                        (char *)"minAllowableAttitudeAcceleration",/* Member name */
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
                        (char *)"minAllowableElevation",/* Member name */
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
                        (char *)"minAllowableSpeed",/* Member name */
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
                        (char *)"recommendedAcceleration",/* Member name */
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
                        (char *)"recommendedAttitudeAcceleration",/* Member name */
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
                        (char *)"recommendedElevation",/* Member name */
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
                        (char *)"recommendedElevationChangeRate",/* Member name */
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
                    }, 
                    {
                        (char *)"recommendedSpeed",/* Member name */
                        {
                            14,/* Representation ID */
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
                        (char *)"recommendedTurnRate",/* Member name */
                        {
                            15,/* Representation ID */
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
                            16,/* Representation ID */
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
                            17,/* Representation ID */
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

                static DDS_TypeCode DriverConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::DriverConfig::DriverConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        18, /* Number of members */
                        DriverConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DriverConfigReportType*/

                if (is_initialized) {
                    return &DriverConfigReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DriverConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DriverConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Acceleration3D_PlatformXYZ>::get().native();
                DriverConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::OrientationAcceleration3D>::get().native();
                DriverConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationType>::get().native();
                DriverConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedControlType>::get().native();
                DriverConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleRate_AliasTag_t>::get().native();
                DriverConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Capabilities::Speed_BSL_Capability>::get().native();
                DriverConfigReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Acceleration3D_PlatformXYZ>::get().native();
                DriverConfigReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::OrientationAcceleration3D>::get().native();
                DriverConfigReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationType>::get().native();
                DriverConfigReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedControlType>::get().native();
                DriverConfigReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Acceleration3D_PlatformXYZ>::get().native();
                DriverConfigReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::OrientationAcceleration3D>::get().native();
                DriverConfigReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationType>::get().native();
                DriverConfigReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Capabilities::Speed_BSL_Capability>::get().native();
                DriverConfigReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Speed::SpeedControlType>::get().native();
                DriverConfigReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleRate_AliasTag_t>::get().native();
                DriverConfigReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                DriverConfigReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                DriverConfigReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DriverConfigReportType_g_tc_members[4]._annotations._minValue._u.double_value = -62.831;
                DriverConfigReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DriverConfigReportType_g_tc_members[4]._annotations._maxValue._u.double_value = 62.831;
                DriverConfigReportType_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DriverConfigReportType_g_tc_members[15]._annotations._minValue._u.double_value = -62.831;
                DriverConfigReportType_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DriverConfigReportType_g_tc_members[15]._annotations._maxValue._u.double_value = 62.831;

                DriverConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                DriverConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &DriverConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::DriverConfig::DriverConfigReportType *sample;

                static RTIXCdrMemberAccessInfo DriverConfigReportType_g_memberAccessInfos[18] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DriverConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DriverConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::DriverConfig::DriverConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                DriverConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowableAcceleration() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowableAttitudeAcceleration() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowableElevation() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowableSpeed() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowableTurnRate() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxElevationChangeRate() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minAllowableAcceleration() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minAllowableAttitudeAcceleration() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minAllowableElevation() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minAllowableSpeed() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->recommendedAcceleration() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->recommendedAttitudeAcceleration() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->recommendedElevation() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->recommendedElevationChangeRate() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->recommendedSpeed() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->recommendedTurnRate() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                DriverConfigReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                DriverConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                DriverConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::DriverConfig::DriverConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DriverConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DriverConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DriverConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DriverConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::DriverConfig::DriverConfigReportType >;

                DriverConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DriverConfigReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DriverConfigReportType_g_typePlugin = 
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

                return &DriverConfigReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::DriverConfig::DriverConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::DriverConfig::DriverConfigReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::DriverConfig::DriverConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::DriverConfig::DriverConfigReportTypePlugin_new,
                ::UMAA::MO::DriverConfig::DriverConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::DriverConfig::DriverConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::DriverConfig::DriverConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DriverConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DriverConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::DriverConfig::DriverConfigReportType >::from_cdr_buffer(::UMAA::MO::DriverConfig::DriverConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DriverConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::DriverConfig::DriverConfigReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::DriverConfig::DriverConfigReportType >::reset_sample(::UMAA::MO::DriverConfig::DriverConfigReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.maxAllowableAcceleration());
            ::rti::topic::reset_sample(sample.maxAllowableAttitudeAcceleration());
            ::rti::topic::reset_sample(sample.maxAllowableElevation());
            ::rti::topic::reset_sample(sample.maxAllowableSpeed());
            ::rti::topic::reset_sample(sample.maxAllowableTurnRate());
            ::rti::topic::reset_sample(sample.maxElevationChangeRate());
            ::rti::topic::reset_sample(sample.minAllowableAcceleration());
            ::rti::topic::reset_sample(sample.minAllowableAttitudeAcceleration());
            ::rti::topic::reset_sample(sample.minAllowableElevation());
            ::rti::topic::reset_sample(sample.minAllowableSpeed());
            ::rti::topic::reset_sample(sample.recommendedAcceleration());
            ::rti::topic::reset_sample(sample.recommendedAttitudeAcceleration());
            ::rti::topic::reset_sample(sample.recommendedElevation());
            ::rti::topic::reset_sample(sample.recommendedElevationChangeRate());
            ::rti::topic::reset_sample(sample.recommendedSpeed());
            ::rti::topic::reset_sample(sample.recommendedTurnRate());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::MO::DriverConfig::DriverConfigReportType >::allocate_sample(::UMAA::MO::DriverConfig::DriverConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
