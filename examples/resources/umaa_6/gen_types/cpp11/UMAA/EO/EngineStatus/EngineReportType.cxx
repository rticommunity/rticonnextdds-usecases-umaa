

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineReportType.idl
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
#include "EngineReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "EngineReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace EngineStatus {

            // ---- EngineReportType: 

            EngineReportType::EngineReportType() :
                m_state_(UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType::OFF)  {

            }   

            EngineReportType::EngineReportType (const ::dds::core::optional< double >& coolantLevel_,const ::dds::core::optional< double >& coolantPressure_,const ::dds::core::optional< double >& coolantTemp_,const ::dds::core::optional< double >& engineTemp_,const ::dds::core::optional< double >& exhaustTemp_,const ::dds::core::optional< bool >& glowPlugIndicator_,const ::dds::core::optional< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType >& glowPlugState_,const ::dds::core::optional< double >& glowPlugTemp_,const ::dds::core::optional< double >& glowPlugTimeRemaining_,const ::dds::core::optional< double >& hours_,const ::dds::core::optional< double >& manifoldAirTemp_,const ::dds::core::optional< double >& manifoldPressure_,const ::dds::core::optional< double >& oilLevel_,const ::dds::core::optional< double >& oilPressure_,const ::dds::core::optional< double >& oilTemp_,const ::dds::core::optional< double >& percentOilPressure_,const ::dds::core::optional< double >& RPM_,const ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType& state_,const ::dds::core::optional< double >& throttle_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_coolantLevel_(coolantLevel_), 
                m_coolantPressure_(coolantPressure_), 
                m_coolantTemp_(coolantTemp_), 
                m_engineTemp_(engineTemp_), 
                m_exhaustTemp_(exhaustTemp_), 
                m_glowPlugIndicator_(glowPlugIndicator_), 
                m_glowPlugState_(glowPlugState_), 
                m_glowPlugTemp_(glowPlugTemp_), 
                m_glowPlugTimeRemaining_(glowPlugTimeRemaining_), 
                m_hours_(hours_), 
                m_manifoldAirTemp_(manifoldAirTemp_), 
                m_manifoldPressure_(manifoldPressure_), 
                m_oilLevel_(oilLevel_), 
                m_oilPressure_(oilPressure_), 
                m_oilTemp_(oilTemp_), 
                m_percentOilPressure_(percentOilPressure_), 
                m_RPM_(RPM_), 
                m_state_(state_), 
                m_throttle_(throttle_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void EngineReportType::swap(EngineReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_coolantLevel_, other_.m_coolantLevel_);
                swap(m_coolantPressure_, other_.m_coolantPressure_);
                swap(m_coolantTemp_, other_.m_coolantTemp_);
                swap(m_engineTemp_, other_.m_engineTemp_);
                swap(m_exhaustTemp_, other_.m_exhaustTemp_);
                swap(m_glowPlugIndicator_, other_.m_glowPlugIndicator_);
                swap(m_glowPlugState_, other_.m_glowPlugState_);
                swap(m_glowPlugTemp_, other_.m_glowPlugTemp_);
                swap(m_glowPlugTimeRemaining_, other_.m_glowPlugTimeRemaining_);
                swap(m_hours_, other_.m_hours_);
                swap(m_manifoldAirTemp_, other_.m_manifoldAirTemp_);
                swap(m_manifoldPressure_, other_.m_manifoldPressure_);
                swap(m_oilLevel_, other_.m_oilLevel_);
                swap(m_oilPressure_, other_.m_oilPressure_);
                swap(m_oilTemp_, other_.m_oilTemp_);
                swap(m_percentOilPressure_, other_.m_percentOilPressure_);
                swap(m_RPM_, other_.m_RPM_);
                swap(m_state_, other_.m_state_);
                swap(m_throttle_, other_.m_throttle_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool EngineReportType::operator == (const EngineReportType& other_) const {
                if (m_coolantLevel_.has_value() != other_.m_coolantLevel_.has_value()) {
                    return false;
                } else if (m_coolantLevel_.has_value()) {
                    if (std::fabs(*m_coolantLevel_ - *other_.m_coolantLevel_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_coolantLevel_ - *other_.m_coolantLevel_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_coolantPressure_.has_value() != other_.m_coolantPressure_.has_value()) {
                    return false;
                } else if (m_coolantPressure_.has_value()) {
                    if (std::fabs(*m_coolantPressure_ - *other_.m_coolantPressure_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_coolantPressure_ - *other_.m_coolantPressure_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_coolantTemp_.has_value() != other_.m_coolantTemp_.has_value()) {
                    return false;
                } else if (m_coolantTemp_.has_value()) {
                    if (std::fabs(*m_coolantTemp_ - *other_.m_coolantTemp_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_coolantTemp_ - *other_.m_coolantTemp_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_engineTemp_.has_value() != other_.m_engineTemp_.has_value()) {
                    return false;
                } else if (m_engineTemp_.has_value()) {
                    if (std::fabs(*m_engineTemp_ - *other_.m_engineTemp_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_engineTemp_ - *other_.m_engineTemp_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_exhaustTemp_.has_value() != other_.m_exhaustTemp_.has_value()) {
                    return false;
                } else if (m_exhaustTemp_.has_value()) {
                    if (std::fabs(*m_exhaustTemp_ - *other_.m_exhaustTemp_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_exhaustTemp_ - *other_.m_exhaustTemp_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_glowPlugIndicator_ != other_.m_glowPlugIndicator_) {
                    return false;
                }
                if (m_glowPlugState_ != other_.m_glowPlugState_) {
                    return false;
                }
                if (m_glowPlugTemp_.has_value() != other_.m_glowPlugTemp_.has_value()) {
                    return false;
                } else if (m_glowPlugTemp_.has_value()) {
                    if (std::fabs(*m_glowPlugTemp_ - *other_.m_glowPlugTemp_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_glowPlugTemp_ - *other_.m_glowPlugTemp_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_glowPlugTimeRemaining_.has_value() != other_.m_glowPlugTimeRemaining_.has_value()) {
                    return false;
                } else if (m_glowPlugTimeRemaining_.has_value()) {
                    if (std::fabs(*m_glowPlugTimeRemaining_ - *other_.m_glowPlugTimeRemaining_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_glowPlugTimeRemaining_ - *other_.m_glowPlugTimeRemaining_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_hours_.has_value() != other_.m_hours_.has_value()) {
                    return false;
                } else if (m_hours_.has_value()) {
                    if (std::fabs(*m_hours_ - *other_.m_hours_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_hours_ - *other_.m_hours_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_manifoldAirTemp_.has_value() != other_.m_manifoldAirTemp_.has_value()) {
                    return false;
                } else if (m_manifoldAirTemp_.has_value()) {
                    if (std::fabs(*m_manifoldAirTemp_ - *other_.m_manifoldAirTemp_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_manifoldAirTemp_ - *other_.m_manifoldAirTemp_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_manifoldPressure_.has_value() != other_.m_manifoldPressure_.has_value()) {
                    return false;
                } else if (m_manifoldPressure_.has_value()) {
                    if (std::fabs(*m_manifoldPressure_ - *other_.m_manifoldPressure_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_manifoldPressure_ - *other_.m_manifoldPressure_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_oilLevel_.has_value() != other_.m_oilLevel_.has_value()) {
                    return false;
                } else if (m_oilLevel_.has_value()) {
                    if (std::fabs(*m_oilLevel_ - *other_.m_oilLevel_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_oilLevel_ - *other_.m_oilLevel_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_oilPressure_.has_value() != other_.m_oilPressure_.has_value()) {
                    return false;
                } else if (m_oilPressure_.has_value()) {
                    if (std::fabs(*m_oilPressure_ - *other_.m_oilPressure_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_oilPressure_ - *other_.m_oilPressure_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_oilTemp_.has_value() != other_.m_oilTemp_.has_value()) {
                    return false;
                } else if (m_oilTemp_.has_value()) {
                    if (std::fabs(*m_oilTemp_ - *other_.m_oilTemp_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_oilTemp_ - *other_.m_oilTemp_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_percentOilPressure_.has_value() != other_.m_percentOilPressure_.has_value()) {
                    return false;
                } else if (m_percentOilPressure_.has_value()) {
                    if (std::fabs(*m_percentOilPressure_ - *other_.m_percentOilPressure_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_percentOilPressure_ - *other_.m_percentOilPressure_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_RPM_.has_value() != other_.m_RPM_.has_value()) {
                    return false;
                } else if (m_RPM_.has_value()) {
                    if (std::fabs(*m_RPM_ - *other_.m_RPM_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_RPM_ - *other_.m_RPM_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                if (m_throttle_.has_value() != other_.m_throttle_.has_value()) {
                    return false;
                } else if (m_throttle_.has_value()) {
                    if (std::fabs(*m_throttle_ - *other_.m_throttle_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_throttle_ - *other_.m_throttle_) < (std::numeric_limits< double>::min)())) {
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

            bool EngineReportType::operator != (const EngineReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const EngineReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "coolantLevel: " << sample.coolantLevel ()<<", ";
                o << "coolantPressure: " << sample.coolantPressure ()<<", ";
                o << "coolantTemp: " << sample.coolantTemp ()<<", ";
                o << "engineTemp: " << sample.engineTemp ()<<", ";
                o << "exhaustTemp: " << sample.exhaustTemp ()<<", ";
                o << "glowPlugIndicator: " << sample.glowPlugIndicator ()<<", ";
                o << "glowPlugState: " << sample.glowPlugState ()<<", ";
                o << "glowPlugTemp: " << sample.glowPlugTemp ()<<", ";
                o << "glowPlugTimeRemaining: " << sample.glowPlugTimeRemaining ()<<", ";
                o << "hours: " << sample.hours ()<<", ";
                o << "manifoldAirTemp: " << sample.manifoldAirTemp ()<<", ";
                o << "manifoldPressure: " << sample.manifoldPressure ()<<", ";
                o << "oilLevel: " << sample.oilLevel ()<<", ";
                o << "oilPressure: " << sample.oilPressure ()<<", ";
                o << "oilTemp: " << sample.oilTemp ()<<", ";
                o << "percentOilPressure: " << sample.percentOilPressure ()<<", ";
                o << "RPM: " << sample.RPM ()<<", ";
                o << "state: " << sample.state ()<<", ";
                o << "throttle: " << sample.throttle ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace EngineStatus  

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
        struct native_type_code< ::UMAA::EO::EngineStatus::EngineReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member EngineReportType_g_tc_members[21]=
                {

                    {
                        (char *)"coolantLevel",/* Member name */
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
                        (char *)"coolantPressure",/* Member name */
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
                        (char *)"coolantTemp",/* Member name */
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
                        (char *)"engineTemp",/* Member name */
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
                        (char *)"exhaustTemp",/* Member name */
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
                        (char *)"glowPlugIndicator",/* Member name */
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
                        (char *)"glowPlugState",/* Member name */
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
                        (char *)"glowPlugTemp",/* Member name */
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
                        (char *)"glowPlugTimeRemaining",/* Member name */
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
                        (char *)"hours",/* Member name */
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
                        (char *)"manifoldAirTemp",/* Member name */
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
                        (char *)"manifoldPressure",/* Member name */
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
                        (char *)"oilLevel",/* Member name */
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
                        (char *)"oilPressure",/* Member name */
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
                        (char *)"oilTemp",/* Member name */
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
                        (char *)"percentOilPressure",/* Member name */
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
                        (char *)"RPM",/* Member name */
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
                        (char *)"state",/* Member name */
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
                    }, 
                    {
                        (char *)"throttle",/* Member name */
                        {
                            18,/* Representation ID */
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
                            19,/* Representation ID */
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
                            20,/* Representation ID */
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

                static DDS_TypeCode EngineReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::EngineStatus::EngineReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        21, /* Number of members */
                        EngineReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for EngineReportType*/

                if (is_initialized) {
                    return &EngineReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                EngineReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EngineReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::VolumePercent_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PressureKiloPascals_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                EngineReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType>::get().native();
                EngineReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationHours_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PressureKiloPascals_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::VolumePercent_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PressureKiloPascals_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PressurePercent_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType>::get().native();
                EngineReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Effort_AliasTag_t>::get().native();
                EngineReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                EngineReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                EngineReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[15]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[15]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                EngineReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                EngineReportType_g_tc_members[17]._annotations._defaultValue._u.enumerated_value = 0;
                EngineReportType_g_tc_members[18]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[18]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                EngineReportType_g_tc_members[18]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineReportType_g_tc_members[18]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                EngineReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                EngineReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &EngineReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::EngineStatus::EngineReportType *sample;

                static RTIXCdrMemberAccessInfo EngineReportType_g_memberAccessInfos[21] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EngineReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EngineReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::EngineStatus::EngineReportType);
                if (sample == NULL) {
                    return NULL;
                }

                EngineReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->coolantLevel() - (char *)sample);

                EngineReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->coolantPressure() - (char *)sample);

                EngineReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->coolantTemp() - (char *)sample);

                EngineReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->engineTemp() - (char *)sample);

                EngineReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->exhaustTemp() - (char *)sample);

                EngineReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->glowPlugIndicator() - (char *)sample);

                EngineReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->glowPlugState() - (char *)sample);

                EngineReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->glowPlugTemp() - (char *)sample);

                EngineReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->glowPlugTimeRemaining() - (char *)sample);

                EngineReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->hours() - (char *)sample);

                EngineReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->manifoldAirTemp() - (char *)sample);

                EngineReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->manifoldPressure() - (char *)sample);

                EngineReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->oilLevel() - (char *)sample);

                EngineReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->oilPressure() - (char *)sample);

                EngineReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->oilTemp() - (char *)sample);

                EngineReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->percentOilPressure() - (char *)sample);

                EngineReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RPM() - (char *)sample);

                EngineReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                EngineReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->throttle() - (char *)sample);

                EngineReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                EngineReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                EngineReportType_g_sampleAccessInfo.memberAccessInfos = 
                EngineReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::EngineStatus::EngineReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EngineReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EngineReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EngineReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EngineReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::EngineStatus::EngineReportType >;

                EngineReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EngineReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EngineReportType_g_typePlugin = 
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

                return &EngineReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::EngineStatus::EngineReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::EngineStatus::EngineReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::EngineStatus::EngineReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::EngineStatus::EngineReportTypePlugin_new,
                ::UMAA::EO::EngineStatus::EngineReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::EngineStatus::EngineReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::EngineStatus::EngineReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = EngineReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = EngineReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::EngineStatus::EngineReportType >::from_cdr_buffer(::UMAA::EO::EngineStatus::EngineReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = EngineReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::EngineStatus::EngineReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::EngineStatus::EngineReportType >::reset_sample(::UMAA::EO::EngineStatus::EngineReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.coolantLevel());
            ::rti::topic::reset_sample(sample.coolantPressure());
            ::rti::topic::reset_sample(sample.coolantTemp());
            ::rti::topic::reset_sample(sample.engineTemp());
            ::rti::topic::reset_sample(sample.exhaustTemp());
            ::rti::topic::reset_sample(sample.glowPlugIndicator());
            ::rti::topic::reset_sample(sample.glowPlugState());
            ::rti::topic::reset_sample(sample.glowPlugTemp());
            ::rti::topic::reset_sample(sample.glowPlugTimeRemaining());
            ::rti::topic::reset_sample(sample.hours());
            ::rti::topic::reset_sample(sample.manifoldAirTemp());
            ::rti::topic::reset_sample(sample.manifoldPressure());
            ::rti::topic::reset_sample(sample.oilLevel());
            ::rti::topic::reset_sample(sample.oilPressure());
            ::rti::topic::reset_sample(sample.oilTemp());
            ::rti::topic::reset_sample(sample.percentOilPressure());
            ::rti::topic::reset_sample(sample.RPM());
            sample.state(UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType::OFF);
            ::rti::topic::reset_sample(sample.throttle());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::EO::EngineStatus::EngineReportType >::allocate_sample(::UMAA::EO::EngineStatus::EngineReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
