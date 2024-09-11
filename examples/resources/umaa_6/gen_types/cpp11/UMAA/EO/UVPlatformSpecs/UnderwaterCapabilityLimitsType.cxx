

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UnderwaterCapabilityLimitsType.idl
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
#include "UnderwaterCapabilityLimitsTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "UnderwaterCapabilityLimitsType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace UVPlatformSpecs {

            // ---- UnderwaterCapabilityLimitsType: 

            UnderwaterCapabilityLimitsType::UnderwaterCapabilityLimitsType()  {

            }   

            UnderwaterCapabilityLimitsType::UnderwaterCapabilityLimitsType (const ::dds::core::optional< double >& cruisingSpeed_,const ::dds::core::optional< double >& maxAcceleration_,const ::dds::core::optional< ::UMAA::Common::Measurement::OrientationAcceleration3D >& maxAttitudeAcceleration_,const ::dds::core::optional< ::UMAA::Common::Measurement::OrientationAcceleration3D >& maxAttitudeDeceleration_,const ::dds::core::optional< double >& maxDeceleration_,const ::dds::core::optional< double >& maxDepthAcceleration_,const ::dds::core::optional< double >& maxDepthChangeRate_,const ::dds::core::optional< double >& maxForwardSpeed_,const ::dds::core::optional< double >& maxPitchRate_,const ::dds::core::optional< double >& maxReverseSpeed_,const ::dds::core::optional< double >& maxTowingSpeed_,const ::dds::core::optional< double >& maxTowingTurnAcceleration_,const ::dds::core::optional< double >& maxTowingTurnRate_,const ::dds::core::optional< double >& maxTurnAcceleration_,const ::dds::core::optional< double >& maxTurnRate_,const ::dds::core::optional< double >& maxVehicleDepth_,const ::dds::core::optional< double >& minSpeedInMedium_,const ::dds::core::optional< double >& minTowingSpeed_):
                m_cruisingSpeed_(cruisingSpeed_), 
                m_maxAcceleration_(maxAcceleration_), 
                m_maxAttitudeAcceleration_(maxAttitudeAcceleration_), 
                m_maxAttitudeDeceleration_(maxAttitudeDeceleration_), 
                m_maxDeceleration_(maxDeceleration_), 
                m_maxDepthAcceleration_(maxDepthAcceleration_), 
                m_maxDepthChangeRate_(maxDepthChangeRate_), 
                m_maxForwardSpeed_(maxForwardSpeed_), 
                m_maxPitchRate_(maxPitchRate_), 
                m_maxReverseSpeed_(maxReverseSpeed_), 
                m_maxTowingSpeed_(maxTowingSpeed_), 
                m_maxTowingTurnAcceleration_(maxTowingTurnAcceleration_), 
                m_maxTowingTurnRate_(maxTowingTurnRate_), 
                m_maxTurnAcceleration_(maxTurnAcceleration_), 
                m_maxTurnRate_(maxTurnRate_), 
                m_maxVehicleDepth_(maxVehicleDepth_), 
                m_minSpeedInMedium_(minSpeedInMedium_), 
                m_minTowingSpeed_(minTowingSpeed_) {
            }

            void UnderwaterCapabilityLimitsType::swap(UnderwaterCapabilityLimitsType& other_)  noexcept 
            {
                using std::swap;
                swap(m_cruisingSpeed_, other_.m_cruisingSpeed_);
                swap(m_maxAcceleration_, other_.m_maxAcceleration_);
                swap(m_maxAttitudeAcceleration_, other_.m_maxAttitudeAcceleration_);
                swap(m_maxAttitudeDeceleration_, other_.m_maxAttitudeDeceleration_);
                swap(m_maxDeceleration_, other_.m_maxDeceleration_);
                swap(m_maxDepthAcceleration_, other_.m_maxDepthAcceleration_);
                swap(m_maxDepthChangeRate_, other_.m_maxDepthChangeRate_);
                swap(m_maxForwardSpeed_, other_.m_maxForwardSpeed_);
                swap(m_maxPitchRate_, other_.m_maxPitchRate_);
                swap(m_maxReverseSpeed_, other_.m_maxReverseSpeed_);
                swap(m_maxTowingSpeed_, other_.m_maxTowingSpeed_);
                swap(m_maxTowingTurnAcceleration_, other_.m_maxTowingTurnAcceleration_);
                swap(m_maxTowingTurnRate_, other_.m_maxTowingTurnRate_);
                swap(m_maxTurnAcceleration_, other_.m_maxTurnAcceleration_);
                swap(m_maxTurnRate_, other_.m_maxTurnRate_);
                swap(m_maxVehicleDepth_, other_.m_maxVehicleDepth_);
                swap(m_minSpeedInMedium_, other_.m_minSpeedInMedium_);
                swap(m_minTowingSpeed_, other_.m_minTowingSpeed_);
            }  

            bool UnderwaterCapabilityLimitsType::operator == (const UnderwaterCapabilityLimitsType& other_) const {
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
                if (m_maxAttitudeAcceleration_ != other_.m_maxAttitudeAcceleration_) {
                    return false;
                }
                if (m_maxAttitudeDeceleration_ != other_.m_maxAttitudeDeceleration_) {
                    return false;
                }
                if (m_maxDeceleration_.has_value() != other_.m_maxDeceleration_.has_value()) {
                    return false;
                } else if (m_maxDeceleration_.has_value()) {
                    if (std::fabs(*m_maxDeceleration_ - *other_.m_maxDeceleration_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxDeceleration_ - *other_.m_maxDeceleration_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxDepthAcceleration_.has_value() != other_.m_maxDepthAcceleration_.has_value()) {
                    return false;
                } else if (m_maxDepthAcceleration_.has_value()) {
                    if (std::fabs(*m_maxDepthAcceleration_ - *other_.m_maxDepthAcceleration_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxDepthAcceleration_ - *other_.m_maxDepthAcceleration_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxDepthChangeRate_.has_value() != other_.m_maxDepthChangeRate_.has_value()) {
                    return false;
                } else if (m_maxDepthChangeRate_.has_value()) {
                    if (std::fabs(*m_maxDepthChangeRate_ - *other_.m_maxDepthChangeRate_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxDepthChangeRate_ - *other_.m_maxDepthChangeRate_) < (std::numeric_limits< double>::min)())) {
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
                if (m_maxPitchRate_.has_value() != other_.m_maxPitchRate_.has_value()) {
                    return false;
                } else if (m_maxPitchRate_.has_value()) {
                    if (std::fabs(*m_maxPitchRate_ - *other_.m_maxPitchRate_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxPitchRate_ - *other_.m_maxPitchRate_) < (std::numeric_limits< double>::min)())) {
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
                if (m_maxVehicleDepth_.has_value() != other_.m_maxVehicleDepth_.has_value()) {
                    return false;
                } else if (m_maxVehicleDepth_.has_value()) {
                    if (std::fabs(*m_maxVehicleDepth_ - *other_.m_maxVehicleDepth_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxVehicleDepth_ - *other_.m_maxVehicleDepth_) < (std::numeric_limits< double>::min)())) {
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

            bool UnderwaterCapabilityLimitsType::operator != (const UnderwaterCapabilityLimitsType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const UnderwaterCapabilityLimitsType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "cruisingSpeed: " << sample.cruisingSpeed ()<<", ";
                o << "maxAcceleration: " << sample.maxAcceleration ()<<", ";
                o << "maxAttitudeAcceleration: " << sample.maxAttitudeAcceleration ()<<", ";
                o << "maxAttitudeDeceleration: " << sample.maxAttitudeDeceleration ()<<", ";
                o << "maxDeceleration: " << sample.maxDeceleration ()<<", ";
                o << "maxDepthAcceleration: " << sample.maxDepthAcceleration ()<<", ";
                o << "maxDepthChangeRate: " << sample.maxDepthChangeRate ()<<", ";
                o << "maxForwardSpeed: " << sample.maxForwardSpeed ()<<", ";
                o << "maxPitchRate: " << sample.maxPitchRate ()<<", ";
                o << "maxReverseSpeed: " << sample.maxReverseSpeed ()<<", ";
                o << "maxTowingSpeed: " << sample.maxTowingSpeed ()<<", ";
                o << "maxTowingTurnAcceleration: " << sample.maxTowingTurnAcceleration ()<<", ";
                o << "maxTowingTurnRate: " << sample.maxTowingTurnRate ()<<", ";
                o << "maxTurnAcceleration: " << sample.maxTurnAcceleration ()<<", ";
                o << "maxTurnRate: " << sample.maxTurnRate ()<<", ";
                o << "maxVehicleDepth: " << sample.maxVehicleDepth ()<<", ";
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
        struct native_type_code< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member UnderwaterCapabilityLimitsType_g_tc_members[18]=
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
                        (char *)"maxAttitudeAcceleration",/* Member name */
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
                        (char *)"maxAttitudeDeceleration",/* Member name */
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
                        (char *)"maxDeceleration",/* Member name */
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
                        (char *)"maxDepthAcceleration",/* Member name */
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
                        (char *)"maxDepthChangeRate",/* Member name */
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
                        (char *)"maxForwardSpeed",/* Member name */
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
                        (char *)"maxPitchRate",/* Member name */
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
                        (char *)"maxReverseSpeed",/* Member name */
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
                        (char *)"maxTowingSpeed",/* Member name */
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
                        (char *)"maxTowingTurnAcceleration",/* Member name */
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
                        (char *)"maxTowingTurnRate",/* Member name */
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
                        (char *)"maxTurnAcceleration",/* Member name */
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
                        (char *)"maxTurnRate",/* Member name */
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
                        (char *)"maxVehicleDepth",/* Member name */
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
                        (char *)"minSpeedInMedium",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"minTowingSpeed",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode UnderwaterCapabilityLimitsType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        18, /* Number of members */
                        UnderwaterCapabilityLimitsType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for UnderwaterCapabilityLimitsType*/

                if (is_initialized) {
                    return &UnderwaterCapabilityLimitsType_g_tc;
                }

                is_initialized = RTI_TRUE;

                UnderwaterCapabilityLimitsType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                UnderwaterCapabilityLimitsType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::OrientationAcceleration3D>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::OrientationAcceleration3D>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::SpeedBSLAcceleration_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedBSL_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PitchRate_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleAcceleration_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::TurnRate_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AngleAcceleration_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::TurnRate_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();
                UnderwaterCapabilityLimitsType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                UnderwaterCapabilityLimitsType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[15]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[15]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UnderwaterCapabilityLimitsType_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[17]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UnderwaterCapabilityLimitsType_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UnderwaterCapabilityLimitsType_g_tc_members[17]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                UnderwaterCapabilityLimitsType_g_tc._data._sampleAccessInfo = sample_access_info();
                UnderwaterCapabilityLimitsType_g_tc._data._typePlugin = type_plugin_info();    

                return &UnderwaterCapabilityLimitsType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType *sample;

                static RTIXCdrMemberAccessInfo UnderwaterCapabilityLimitsType_g_memberAccessInfos[18] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo UnderwaterCapabilityLimitsType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &UnderwaterCapabilityLimitsType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType);
                if (sample == NULL) {
                    return NULL;
                }

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cruisingSpeed() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAcceleration() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAttitudeAcceleration() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAttitudeDeceleration() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxDeceleration() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxDepthAcceleration() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxDepthChangeRate() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxForwardSpeed() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxPitchRate() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxReverseSpeed() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTowingSpeed() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTowingTurnAcceleration() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTowingTurnRate() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTurnAcceleration() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTurnRate() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxVehicleDepth() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minSpeedInMedium() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minTowingSpeed() - (char *)sample);

                UnderwaterCapabilityLimitsType_g_sampleAccessInfo.memberAccessInfos = 
                UnderwaterCapabilityLimitsType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        UnderwaterCapabilityLimitsType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        UnderwaterCapabilityLimitsType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                UnderwaterCapabilityLimitsType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                UnderwaterCapabilityLimitsType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >;

                UnderwaterCapabilityLimitsType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &UnderwaterCapabilityLimitsType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin UnderwaterCapabilityLimitsType_g_typePlugin = 
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

                return &UnderwaterCapabilityLimitsType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >::reset_sample(::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType& sample) 
        {
            ::rti::topic::reset_sample(sample.cruisingSpeed());
            ::rti::topic::reset_sample(sample.maxAcceleration());
            ::rti::topic::reset_sample(sample.maxAttitudeAcceleration());
            ::rti::topic::reset_sample(sample.maxAttitudeDeceleration());
            ::rti::topic::reset_sample(sample.maxDeceleration());
            ::rti::topic::reset_sample(sample.maxDepthAcceleration());
            ::rti::topic::reset_sample(sample.maxDepthChangeRate());
            ::rti::topic::reset_sample(sample.maxForwardSpeed());
            ::rti::topic::reset_sample(sample.maxPitchRate());
            ::rti::topic::reset_sample(sample.maxReverseSpeed());
            ::rti::topic::reset_sample(sample.maxTowingSpeed());
            ::rti::topic::reset_sample(sample.maxTowingTurnAcceleration());
            ::rti::topic::reset_sample(sample.maxTowingTurnRate());
            ::rti::topic::reset_sample(sample.maxTurnAcceleration());
            ::rti::topic::reset_sample(sample.maxTurnRate());
            ::rti::topic::reset_sample(sample.maxVehicleDepth());
            ::rti::topic::reset_sample(sample.minSpeedInMedium());
            ::rti::topic::reset_sample(sample.minTowingSpeed());
        }

        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >::allocate_sample(::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
