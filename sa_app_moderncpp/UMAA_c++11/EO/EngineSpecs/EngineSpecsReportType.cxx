

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineSpecsReportType.idl
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
#include "EngineSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "EngineSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace EngineSpecs {

            // ---- EngineSpecsReportType: 

            EngineSpecsReportType::EngineSpecsReportType() :
                m_engineKind_(UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType::DIESEL) ,
                m_maxCoolantLevel_ (0.0) ,
                m_maxCoolantPressure_ (0.0) ,
                m_maxCoolantTemp_ (0.0) ,
                m_maxEngineTemp_ (0.0) ,
                m_maxManifoldAirTemp_ (0.0) ,
                m_maxManifoldPressure_ (0.0) ,
                m_maxOilPressure_ (0.0) ,
                m_maxOilTemp_ (0.0) ,
                m_minCoolantLevel_ (0.0) ,
                m_minOilLevel_ (0.0) ,
                m_name_ ("") ,
                m_oilCapacity_ (0.0) ,
                m_reverseRPMLowerLimit_ (0.0) ,
                m_reverseRPMMaxLimit_ (0.0) ,
                m_reverseRPMUpperLimit_ (0.0) ,
                m_reversible_ (0) ,
                m_RPMLowerLimit_ (0.0) ,
                m_RPMMaxLimit_ (0.0) ,
                m_RPMUpperLimit_ (0.0)  {

            }   

            EngineSpecsReportType::EngineSpecsReportType (const ::UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType& engineKind_,const ::dds::core::optional< double >& glowPlugTime_,double maxCoolantLevel_,double maxCoolantPressure_,double maxCoolantTemp_,double maxEngineTemp_,const ::dds::core::optional< double >& maxGlowPlugTemp_,double maxManifoldAirTemp_,double maxManifoldPressure_,double maxOilPressure_,double maxOilTemp_,double minCoolantLevel_,double minOilLevel_,const std::string& name_,double oilCapacity_,double reverseRPMLowerLimit_,double reverseRPMMaxLimit_,double reverseRPMUpperLimit_,bool reversible_,double RPMLowerLimit_,double RPMMaxLimit_,double RPMUpperLimit_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_engineKind_(engineKind_), 
                m_glowPlugTime_(glowPlugTime_), 
                m_maxCoolantLevel_(maxCoolantLevel_), 
                m_maxCoolantPressure_(maxCoolantPressure_), 
                m_maxCoolantTemp_(maxCoolantTemp_), 
                m_maxEngineTemp_(maxEngineTemp_), 
                m_maxGlowPlugTemp_(maxGlowPlugTemp_), 
                m_maxManifoldAirTemp_(maxManifoldAirTemp_), 
                m_maxManifoldPressure_(maxManifoldPressure_), 
                m_maxOilPressure_(maxOilPressure_), 
                m_maxOilTemp_(maxOilTemp_), 
                m_minCoolantLevel_(minCoolantLevel_), 
                m_minOilLevel_(minOilLevel_), 
                m_name_(name_), 
                m_oilCapacity_(oilCapacity_), 
                m_reverseRPMLowerLimit_(reverseRPMLowerLimit_), 
                m_reverseRPMMaxLimit_(reverseRPMMaxLimit_), 
                m_reverseRPMUpperLimit_(reverseRPMUpperLimit_), 
                m_reversible_(reversible_), 
                m_RPMLowerLimit_(RPMLowerLimit_), 
                m_RPMMaxLimit_(RPMMaxLimit_), 
                m_RPMUpperLimit_(RPMUpperLimit_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void EngineSpecsReportType::swap(EngineSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_engineKind_, other_.m_engineKind_);
                swap(m_glowPlugTime_, other_.m_glowPlugTime_);
                swap(m_maxCoolantLevel_, other_.m_maxCoolantLevel_);
                swap(m_maxCoolantPressure_, other_.m_maxCoolantPressure_);
                swap(m_maxCoolantTemp_, other_.m_maxCoolantTemp_);
                swap(m_maxEngineTemp_, other_.m_maxEngineTemp_);
                swap(m_maxGlowPlugTemp_, other_.m_maxGlowPlugTemp_);
                swap(m_maxManifoldAirTemp_, other_.m_maxManifoldAirTemp_);
                swap(m_maxManifoldPressure_, other_.m_maxManifoldPressure_);
                swap(m_maxOilPressure_, other_.m_maxOilPressure_);
                swap(m_maxOilTemp_, other_.m_maxOilTemp_);
                swap(m_minCoolantLevel_, other_.m_minCoolantLevel_);
                swap(m_minOilLevel_, other_.m_minOilLevel_);
                swap(m_name_, other_.m_name_);
                swap(m_oilCapacity_, other_.m_oilCapacity_);
                swap(m_reverseRPMLowerLimit_, other_.m_reverseRPMLowerLimit_);
                swap(m_reverseRPMMaxLimit_, other_.m_reverseRPMMaxLimit_);
                swap(m_reverseRPMUpperLimit_, other_.m_reverseRPMUpperLimit_);
                swap(m_reversible_, other_.m_reversible_);
                swap(m_RPMLowerLimit_, other_.m_RPMLowerLimit_);
                swap(m_RPMMaxLimit_, other_.m_RPMMaxLimit_);
                swap(m_RPMUpperLimit_, other_.m_RPMUpperLimit_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool EngineSpecsReportType::operator == (const EngineSpecsReportType& other_) const {
                if (m_engineKind_ != other_.m_engineKind_) {
                    return false;
                }
                if (m_glowPlugTime_.has_value() != other_.m_glowPlugTime_.has_value()) {
                    return false;
                } else if (m_glowPlugTime_.has_value()) {
                    if (std::fabs(*m_glowPlugTime_ - *other_.m_glowPlugTime_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_glowPlugTime_ - *other_.m_glowPlugTime_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_maxCoolantLevel_ - other_.m_maxCoolantLevel_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxCoolantLevel_ - other_.m_maxCoolantLevel_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxCoolantPressure_ - other_.m_maxCoolantPressure_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxCoolantPressure_ - other_.m_maxCoolantPressure_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxCoolantTemp_ - other_.m_maxCoolantTemp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxCoolantTemp_ - other_.m_maxCoolantTemp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxEngineTemp_ - other_.m_maxEngineTemp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxEngineTemp_ - other_.m_maxEngineTemp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_maxGlowPlugTemp_.has_value() != other_.m_maxGlowPlugTemp_.has_value()) {
                    return false;
                } else if (m_maxGlowPlugTemp_.has_value()) {
                    if (std::fabs(*m_maxGlowPlugTemp_ - *other_.m_maxGlowPlugTemp_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxGlowPlugTemp_ - *other_.m_maxGlowPlugTemp_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_maxManifoldAirTemp_ - other_.m_maxManifoldAirTemp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxManifoldAirTemp_ - other_.m_maxManifoldAirTemp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxManifoldPressure_ - other_.m_maxManifoldPressure_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxManifoldPressure_ - other_.m_maxManifoldPressure_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxOilPressure_ - other_.m_maxOilPressure_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxOilPressure_ - other_.m_maxOilPressure_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxOilTemp_ - other_.m_maxOilTemp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxOilTemp_ - other_.m_maxOilTemp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minCoolantLevel_ - other_.m_minCoolantLevel_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minCoolantLevel_ - other_.m_minCoolantLevel_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minOilLevel_ - other_.m_minOilLevel_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minOilLevel_ - other_.m_minOilLevel_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (std::fabs(m_oilCapacity_ - other_.m_oilCapacity_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_oilCapacity_ - other_.m_oilCapacity_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_reverseRPMLowerLimit_ - other_.m_reverseRPMLowerLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_reverseRPMLowerLimit_ - other_.m_reverseRPMLowerLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_reverseRPMMaxLimit_ - other_.m_reverseRPMMaxLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_reverseRPMMaxLimit_ - other_.m_reverseRPMMaxLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_reverseRPMUpperLimit_ - other_.m_reverseRPMUpperLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_reverseRPMUpperLimit_ - other_.m_reverseRPMUpperLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_reversible_ != other_.m_reversible_) {
                    return false;
                }
                if (std::fabs(m_RPMLowerLimit_ - other_.m_RPMLowerLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_RPMLowerLimit_ - other_.m_RPMLowerLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_RPMMaxLimit_ - other_.m_RPMMaxLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_RPMMaxLimit_ - other_.m_RPMMaxLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_RPMUpperLimit_ - other_.m_RPMUpperLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_RPMUpperLimit_ - other_.m_RPMUpperLimit_) < (std::numeric_limits< double>::min)())) {
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

            bool EngineSpecsReportType::operator != (const EngineSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const EngineSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "engineKind: " << sample.engineKind ()<<", ";
                o << "glowPlugTime: " << sample.glowPlugTime ()<<", ";
                o << "maxCoolantLevel: " << std::setprecision(15) << sample.maxCoolantLevel ()<<", ";
                o << "maxCoolantPressure: " << std::setprecision(15) << sample.maxCoolantPressure ()<<", ";
                o << "maxCoolantTemp: " << std::setprecision(15) << sample.maxCoolantTemp ()<<", ";
                o << "maxEngineTemp: " << std::setprecision(15) << sample.maxEngineTemp ()<<", ";
                o << "maxGlowPlugTemp: " << sample.maxGlowPlugTemp ()<<", ";
                o << "maxManifoldAirTemp: " << std::setprecision(15) << sample.maxManifoldAirTemp ()<<", ";
                o << "maxManifoldPressure: " << std::setprecision(15) << sample.maxManifoldPressure ()<<", ";
                o << "maxOilPressure: " << std::setprecision(15) << sample.maxOilPressure ()<<", ";
                o << "maxOilTemp: " << std::setprecision(15) << sample.maxOilTemp ()<<", ";
                o << "minCoolantLevel: " << std::setprecision(15) << sample.minCoolantLevel ()<<", ";
                o << "minOilLevel: " << std::setprecision(15) << sample.minOilLevel ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "oilCapacity: " << std::setprecision(15) << sample.oilCapacity ()<<", ";
                o << "reverseRPMLowerLimit: " << std::setprecision(15) << sample.reverseRPMLowerLimit ()<<", ";
                o << "reverseRPMMaxLimit: " << std::setprecision(15) << sample.reverseRPMMaxLimit ()<<", ";
                o << "reverseRPMUpperLimit: " << std::setprecision(15) << sample.reverseRPMUpperLimit ()<<", ";
                o << "reversible: " << sample.reversible ()<<", ";
                o << "RPMLowerLimit: " << std::setprecision(15) << sample.RPMLowerLimit ()<<", ";
                o << "RPMMaxLimit: " << std::setprecision(15) << sample.RPMMaxLimit ()<<", ";
                o << "RPMUpperLimit: " << std::setprecision(15) << sample.RPMUpperLimit ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace EngineSpecs  

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
        struct native_type_code< ::UMAA::EO::EngineSpecs::EngineSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member EngineSpecsReportType_g_tc_members[24]=
                {

                    {
                        (char *)"engineKind",/* Member name */
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
                        (char *)"glowPlugTime",/* Member name */
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
                        (char *)"maxCoolantLevel",/* Member name */
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
                        (char *)"maxCoolantPressure",/* Member name */
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
                        (char *)"maxCoolantTemp",/* Member name */
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
                        (char *)"maxEngineTemp",/* Member name */
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
                        (char *)"maxGlowPlugTemp",/* Member name */
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
                        (char *)"maxManifoldAirTemp",/* Member name */
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
                        (char *)"maxManifoldPressure",/* Member name */
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
                        (char *)"maxOilPressure",/* Member name */
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
                        (char *)"maxOilTemp",/* Member name */
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
                        (char *)"minCoolantLevel",/* Member name */
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
                        (char *)"minOilLevel",/* Member name */
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
                        (char *)"name",/* Member name */
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
                    }, 
                    {
                        (char *)"oilCapacity",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"reverseRPMLowerLimit",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"reverseRPMMaxLimit",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"reverseRPMUpperLimit",/* Member name */
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
                        (char *)"reversible",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RPMLowerLimit",/* Member name */
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
                        (char *)"RPMMaxLimit",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RPMUpperLimit",/* Member name */
                        {
                            21,/* Representation ID */
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
                            22,/* Representation ID */
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
                            23,/* Representation ID */
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

                static DDS_TypeCode EngineSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::EngineSpecs::EngineSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        24, /* Number of members */
                        EngineSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for EngineSpecsReportType*/

                if (is_initialized) {
                    return &EngineSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                EngineSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EngineSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType>::get().native();
                EngineSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Volume_CubicMeter_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Pressure_KiloPascals_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Pressure_KiloPascals_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Pressure_KiloPascals_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Volume_CubicMeter_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Volume_CubicMeter_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Volume_CubicMeter_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                EngineSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                EngineSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                EngineSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                EngineSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;
                EngineSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                EngineSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 37817280ULL;
                EngineSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                EngineSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 1000ULL;
                EngineSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                EngineSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 51200ULL;
                EngineSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[4]._annotations._minValue._u.double_value = -273LL;
                EngineSpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[4]._annotations._maxValue._u.double_value = 1000ULL;
                EngineSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[5]._annotations._minValue._u.double_value = -273LL;
                EngineSpecsReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[5]._annotations._maxValue._u.double_value = 1000ULL;
                EngineSpecsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[6]._annotations._minValue._u.double_value = -273LL;
                EngineSpecsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 1000ULL;
                EngineSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[7]._annotations._minValue._u.double_value = -273LL;
                EngineSpecsReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 1000ULL;
                EngineSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
                EngineSpecsReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[8]._annotations._maxValue._u.double_value = 51200ULL;
                EngineSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
                EngineSpecsReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[9]._annotations._maxValue._u.double_value = 51200ULL;
                EngineSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[10]._annotations._minValue._u.double_value = -273LL;
                EngineSpecsReportType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[10]._annotations._maxValue._u.double_value = 1000ULL;
                EngineSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
                EngineSpecsReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[11]._annotations._maxValue._u.double_value = 1000ULL;
                EngineSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
                EngineSpecsReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[12]._annotations._maxValue._u.double_value = 1000ULL;
                EngineSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                EngineSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                EngineSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[14]._annotations._minValue._u.double_value = 0ULL;
                EngineSpecsReportType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[14]._annotations._maxValue._u.double_value = 1000ULL;
                EngineSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[15]._annotations._minValue._u.double_value = -100000LL;
                EngineSpecsReportType_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[15]._annotations._maxValue._u.double_value = 100000ULL;
                EngineSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[16]._annotations._minValue._u.double_value = -100000LL;
                EngineSpecsReportType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[16]._annotations._maxValue._u.double_value = 100000ULL;
                EngineSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[17]._annotations._minValue._u.double_value = -100000LL;
                EngineSpecsReportType_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[17]._annotations._maxValue._u.double_value = 100000ULL;
                EngineSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                EngineSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.boolean_value = 0;
                EngineSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[19]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[19]._annotations._minValue._u.double_value = -100000LL;
                EngineSpecsReportType_g_tc_members[19]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[19]._annotations._maxValue._u.double_value = 100000ULL;
                EngineSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[20]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[20]._annotations._minValue._u.double_value = -100000LL;
                EngineSpecsReportType_g_tc_members[20]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[20]._annotations._maxValue._u.double_value = 100000ULL;
                EngineSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.double_value = 0.0;
                EngineSpecsReportType_g_tc_members[21]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[21]._annotations._minValue._u.double_value = -100000LL;
                EngineSpecsReportType_g_tc_members[21]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineSpecsReportType_g_tc_members[21]._annotations._maxValue._u.double_value = 100000ULL;

                EngineSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                EngineSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &EngineSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::EngineSpecs::EngineSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo EngineSpecsReportType_g_memberAccessInfos[24] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EngineSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EngineSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::EngineSpecs::EngineSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                EngineSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->engineKind() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->glowPlugTime() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxCoolantLevel() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxCoolantPressure() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxCoolantTemp() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxEngineTemp() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxGlowPlugTemp() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxManifoldAirTemp() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxManifoldPressure() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxOilPressure() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxOilTemp() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minCoolantLevel() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minOilLevel() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->oilCapacity() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->reverseRPMLowerLimit() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->reverseRPMMaxLimit() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->reverseRPMUpperLimit() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->reversible() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RPMLowerLimit() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RPMMaxLimit() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RPMUpperLimit() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                EngineSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                EngineSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                EngineSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::EngineSpecs::EngineSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EngineSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EngineSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EngineSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EngineSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::EngineSpecs::EngineSpecsReportType >;

                EngineSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EngineSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EngineSpecsReportType_g_typePlugin = 
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

                return &EngineSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::EngineSpecs::EngineSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::EngineSpecs::EngineSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::EngineSpecs::EngineSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::EngineSpecs::EngineSpecsReportTypePlugin_new,
                ::UMAA::EO::EngineSpecs::EngineSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::EngineSpecs::EngineSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::EngineSpecs::EngineSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = EngineSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = EngineSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::EngineSpecs::EngineSpecsReportType >::from_cdr_buffer(::UMAA::EO::EngineSpecs::EngineSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = EngineSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::EngineSpecs::EngineSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::EngineSpecs::EngineSpecsReportType >::reset_sample(::UMAA::EO::EngineSpecs::EngineSpecsReportType& sample) 
        {
            sample.engineKind(UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType::DIESEL);
            ::rti::topic::reset_sample(sample.glowPlugTime());
            sample.maxCoolantLevel(0.0);
            sample.maxCoolantPressure(0.0);
            sample.maxCoolantTemp(0.0);
            sample.maxEngineTemp(0.0);
            ::rti::topic::reset_sample(sample.maxGlowPlugTemp());
            sample.maxManifoldAirTemp(0.0);
            sample.maxManifoldPressure(0.0);
            sample.maxOilPressure(0.0);
            sample.maxOilTemp(0.0);
            sample.minCoolantLevel(0.0);
            sample.minOilLevel(0.0);
            sample.name("");
            sample.oilCapacity(0.0);
            sample.reverseRPMLowerLimit(0.0);
            sample.reverseRPMMaxLimit(0.0);
            sample.reverseRPMUpperLimit(0.0);
            sample.reversible(0);
            sample.RPMLowerLimit(0.0);
            sample.RPMMaxLimit(0.0);
            sample.RPMUpperLimit(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::EO::EngineSpecs::EngineSpecsReportType >::allocate_sample(::UMAA::EO::EngineSpecs::EngineSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.engineKind(),  -1, -1);
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
