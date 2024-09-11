

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SurfaceCapabilityLimitsType.idl
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
#include "SurfaceCapabilityLimitsTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SurfaceCapabilityLimitsType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace UVPlatformSpecs {

            // ---- SurfaceCapabilityLimitsType: 

            SurfaceCapabilityLimitsType::SurfaceCapabilityLimitsType()  {

            }   

            SurfaceCapabilityLimitsType::SurfaceCapabilityLimitsType (const ::dds::core::optional< double >& cruisingSpeed_,const ::dds::core::optional< double >& maxAcceleration_,const ::dds::core::optional< double >& maxDeceleration_,const ::dds::core::optional< double >& maxForwardSpeed_,const ::dds::core::optional< double >& maxReverseSpeed_,const ::dds::core::optional< double >& maxTowingSpeed_,const ::dds::core::optional< double >& maxTowingTurnAcceleration_,const ::dds::core::optional< double >& maxTowingTurnRate_,const ::dds::core::optional< double >& maxTurnAcceleration_,const ::dds::core::optional< double >& maxTurnRate_,const ::dds::core::optional< double >& minSpeedInMedium_,const ::dds::core::optional< double >& minTowingSpeed_):
                m_cruisingSpeed_(cruisingSpeed_), 
                m_maxAcceleration_(maxAcceleration_), 
                m_maxDeceleration_(maxDeceleration_), 
                m_maxForwardSpeed_(maxForwardSpeed_), 
                m_maxReverseSpeed_(maxReverseSpeed_), 
                m_maxTowingSpeed_(maxTowingSpeed_), 
                m_maxTowingTurnAcceleration_(maxTowingTurnAcceleration_), 
                m_maxTowingTurnRate_(maxTowingTurnRate_), 
                m_maxTurnAcceleration_(maxTurnAcceleration_), 
                m_maxTurnRate_(maxTurnRate_), 
                m_minSpeedInMedium_(minSpeedInMedium_), 
                m_minTowingSpeed_(minTowingSpeed_) {
            }

            void SurfaceCapabilityLimitsType::swap(SurfaceCapabilityLimitsType& other_)  noexcept 
            {
                using std::swap;
                swap(m_cruisingSpeed_, other_.m_cruisingSpeed_);
                swap(m_maxAcceleration_, other_.m_maxAcceleration_);
                swap(m_maxDeceleration_, other_.m_maxDeceleration_);
                swap(m_maxForwardSpeed_, other_.m_maxForwardSpeed_);
                swap(m_maxReverseSpeed_, other_.m_maxReverseSpeed_);
                swap(m_maxTowingSpeed_, other_.m_maxTowingSpeed_);
                swap(m_maxTowingTurnAcceleration_, other_.m_maxTowingTurnAcceleration_);
                swap(m_maxTowingTurnRate_, other_.m_maxTowingTurnRate_);
                swap(m_maxTurnAcceleration_, other_.m_maxTurnAcceleration_);
                swap(m_maxTurnRate_, other_.m_maxTurnRate_);
                swap(m_minSpeedInMedium_, other_.m_minSpeedInMedium_);
                swap(m_minTowingSpeed_, other_.m_minTowingSpeed_);
            }  

            bool SurfaceCapabilityLimitsType::operator == (const SurfaceCapabilityLimitsType& other_) const {
                if (m_cruisingSpeed_.has_value() != other_.m_cruisingSpeed_.has_value()) {
                    return false;
                } else if (m_cruisingSpeed_.has_value()) {
                    if (std::fabs(*m_cruisingSpeed_ - *other_.m_cruisingSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_cruisingSpeed_ - *other_.m_cruisingSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxAcceleration_.has_value() != other_.m_maxAcceleration_.has_value()) {
                    return false;
                } else if (m_maxAcceleration_.has_value()) {
                    if (std::fabs(*m_maxAcceleration_ - *other_.m_maxAcceleration_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxAcceleration_ - *other_.m_maxAcceleration_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxDeceleration_.has_value() != other_.m_maxDeceleration_.has_value()) {
                    return false;
                } else if (m_maxDeceleration_.has_value()) {
                    if (std::fabs(*m_maxDeceleration_ - *other_.m_maxDeceleration_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxDeceleration_ - *other_.m_maxDeceleration_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxForwardSpeed_.has_value() != other_.m_maxForwardSpeed_.has_value()) {
                    return false;
                } else if (m_maxForwardSpeed_.has_value()) {
                    if (std::fabs(*m_maxForwardSpeed_ - *other_.m_maxForwardSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxForwardSpeed_ - *other_.m_maxForwardSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxReverseSpeed_.has_value() != other_.m_maxReverseSpeed_.has_value()) {
                    return false;
                } else if (m_maxReverseSpeed_.has_value()) {
                    if (std::fabs(*m_maxReverseSpeed_ - *other_.m_maxReverseSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxReverseSpeed_ - *other_.m_maxReverseSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxTowingSpeed_.has_value() != other_.m_maxTowingSpeed_.has_value()) {
                    return false;
                } else if (m_maxTowingSpeed_.has_value()) {
                    if (std::fabs(*m_maxTowingSpeed_ - *other_.m_maxTowingSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxTowingSpeed_ - *other_.m_maxTowingSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxTowingTurnAcceleration_.has_value() != other_.m_maxTowingTurnAcceleration_.has_value()) {
                    return false;
                } else if (m_maxTowingTurnAcceleration_.has_value()) {
                    if (std::fabs(*m_maxTowingTurnAcceleration_ - *other_.m_maxTowingTurnAcceleration_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxTowingTurnAcceleration_ - *other_.m_maxTowingTurnAcceleration_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxTowingTurnRate_.has_value() != other_.m_maxTowingTurnRate_.has_value()) {
                    return false;
                } else if (m_maxTowingTurnRate_.has_value()) {
                    if (std::fabs(*m_maxTowingTurnRate_ - *other_.m_maxTowingTurnRate_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxTowingTurnRate_ - *other_.m_maxTowingTurnRate_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxTurnAcceleration_.has_value() != other_.m_maxTurnAcceleration_.has_value()) {
                    return false;
                } else if (m_maxTurnAcceleration_.has_value()) {
                    if (std::fabs(*m_maxTurnAcceleration_ - *other_.m_maxTurnAcceleration_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxTurnAcceleration_ - *other_.m_maxTurnAcceleration_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxTurnRate_.has_value() != other_.m_maxTurnRate_.has_value()) {
                    return false;
                } else if (m_maxTurnRate_.has_value()) {
                    if (std::fabs(*m_maxTurnRate_ - *other_.m_maxTurnRate_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxTurnRate_ - *other_.m_maxTurnRate_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_minSpeedInMedium_.has_value() != other_.m_minSpeedInMedium_.has_value()) {
                    return false;
                } else if (m_minSpeedInMedium_.has_value()) {
                    if (std::fabs(*m_minSpeedInMedium_ - *other_.m_minSpeedInMedium_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_minSpeedInMedium_ - *other_.m_minSpeedInMedium_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_minTowingSpeed_.has_value() != other_.m_minTowingSpeed_.has_value()) {
                    return false;
                } else if (m_minTowingSpeed_.has_value()) {
                    if (std::fabs(*m_minTowingSpeed_ - *other_.m_minTowingSpeed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_minTowingSpeed_ - *other_.m_minTowingSpeed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                return true;
            }

            bool SurfaceCapabilityLimitsType::operator != (const SurfaceCapabilityLimitsType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SurfaceCapabilityLimitsType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "cruisingSpeed: " << sample.cruisingSpeed ()<<", ";
                o << "maxAcceleration: " << sample.maxAcceleration ()<<", ";
                o << "maxDeceleration: " << sample.maxDeceleration ()<<", ";
                o << "maxForwardSpeed: " << sample.maxForwardSpeed ()<<", ";
                o << "maxReverseSpeed: " << sample.maxReverseSpeed ()<<", ";
                o << "maxTowingSpeed: " << sample.maxTowingSpeed ()<<", ";
                o << "maxTowingTurnAcceleration: " << sample.maxTowingTurnAcceleration ()<<", ";
                o << "maxTowingTurnRate: " << sample.maxTowingTurnRate ()<<", ";
                o << "maxTurnAcceleration: " << sample.maxTurnAcceleration ()<<", ";
                o << "maxTurnRate: " << sample.maxTurnRate ()<<", ";
                o << "minSpeedInMedium: " << sample.minSpeedInMedium ()<<", ";
                o << "minTowingSpeed: " << sample.minTowingSpeed ();
                o <<"]";
                return o;
            }

        } // namespace UVPlatformSpecs  

    } // namespace EO  

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
        struct native_type_code< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SurfaceCapabilityLimitsType_g_tc_members[12]=
                {

                    {
                        (char *)"cruisingSpeed",/* Member name */
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
                        (char *)"maxAcceleration",/* Member name */
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
                        (char *)"maxDeceleration",/* Member name */
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
                        (char *)"maxForwardSpeed",/* Member name */
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
                        (char *)"maxReverseSpeed",/* Member name */
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
                        (char *)"maxTowingSpeed",/* Member name */
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
                        (char *)"maxTowingTurnAcceleration",/* Member name */
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
                        (char *)"maxTowingTurnRate",/* Member name */
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
                        (char *)"maxTurnAcceleration",/* Member name */
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
                        (char *)"maxTurnRate",/* Member name */
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
                        (char *)"minSpeedInMedium",/* Member name */
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
                        (char *)"minTowingSpeed",/* Member name */
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
                    }
                };

                static DDS_TypeCode SurfaceCapabilityLimitsType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        SurfaceCapabilityLimitsType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SurfaceCapabilityLimitsType*/

                if (is_initialized) {
                    return &SurfaceCapabilityLimitsType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SurfaceCapabilityLimitsType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SurfaceCapabilityLimitsType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleAcceleration_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::TurnRate_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleAcceleration_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::TurnRate_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();
                SurfaceCapabilityLimitsType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                SurfaceCapabilityLimitsType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SurfaceCapabilityLimitsType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SurfaceCapabilityLimitsType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SurfaceCapabilityLimitsType_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                SurfaceCapabilityLimitsType_g_tc._data._sampleAccessInfo = sample_access_info();
                SurfaceCapabilityLimitsType_g_tc._data._typePlugin = type_plugin_info();    

                return &SurfaceCapabilityLimitsType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType *sample;

                static RTIXCdrMemberAccessInfo SurfaceCapabilityLimitsType_g_memberAccessInfos[12] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SurfaceCapabilityLimitsType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SurfaceCapabilityLimitsType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType);
                if (sample == NULL) {
                    return NULL;
                }

                SurfaceCapabilityLimitsType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cruisingSpeed() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAcceleration() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxDeceleration() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxForwardSpeed() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxReverseSpeed() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTowingSpeed() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTowingTurnAcceleration() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTowingTurnRate() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTurnAcceleration() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTurnRate() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minSpeedInMedium() - (char *)sample);

                SurfaceCapabilityLimitsType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minTowingSpeed() - (char *)sample);

                SurfaceCapabilityLimitsType_g_sampleAccessInfo.memberAccessInfos = 
                SurfaceCapabilityLimitsType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SurfaceCapabilityLimitsType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SurfaceCapabilityLimitsType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SurfaceCapabilityLimitsType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SurfaceCapabilityLimitsType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType >;

                SurfaceCapabilityLimitsType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SurfaceCapabilityLimitsType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SurfaceCapabilityLimitsType_g_typePlugin = 
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

                return &SurfaceCapabilityLimitsType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType >::reset_sample(::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType& sample) 
        {
            ::rti::topic::reset_sample(sample.cruisingSpeed());
            ::rti::topic::reset_sample(sample.maxAcceleration());
            ::rti::topic::reset_sample(sample.maxDeceleration());
            ::rti::topic::reset_sample(sample.maxForwardSpeed());
            ::rti::topic::reset_sample(sample.maxReverseSpeed());
            ::rti::topic::reset_sample(sample.maxTowingSpeed());
            ::rti::topic::reset_sample(sample.maxTowingTurnAcceleration());
            ::rti::topic::reset_sample(sample.maxTowingTurnRate());
            ::rti::topic::reset_sample(sample.maxTurnAcceleration());
            ::rti::topic::reset_sample(sample.maxTurnRate());
            ::rti::topic::reset_sample(sample.minSpeedInMedium());
            ::rti::topic::reset_sample(sample.minTowingSpeed());
        }

        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType >::allocate_sample(::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
