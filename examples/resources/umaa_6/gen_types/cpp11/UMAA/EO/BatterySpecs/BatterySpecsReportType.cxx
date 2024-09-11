

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatterySpecsReportType.idl
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
#include "BatterySpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BatterySpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BatterySpecs {

            // ---- BatterySpecsReportType: 

            BatterySpecsReportType::BatterySpecsReportType() :
                m_cellMinimumVoltage_ (0.0) ,
                m_maxCapacity_ (0.0) ,
                m_maxChargingCurrent_ (0.0) ,
                m_maxChargingTemp_ (0.0) ,
                m_maxOutputCurrent_ (0.0) ,
                m_maxStorageTemp_ (0.0) ,
                m_maxTemperature_ (0.0) ,
                m_maxVoltage_ (0.0) ,
                m_minChargingTemp_ (0.0) ,
                m_minStorageTemp_ (0.0) ,
                m_minTemperature_ (0.0) ,
                m_minVoltage_ (0.0) ,
                m_name_ ("") ,
                m_nominalCapacity_ (0.0) ,
                m_nominalEnergy_ (0.0) ,
                m_nominalVoltage_ (0.0) ,
                m_peakDischargeCurrent_ (0.0)  {

            }   

            BatterySpecsReportType::BatterySpecsReportType (double cellMinimumVoltage_,double maxCapacity_,double maxChargingCurrent_,double maxChargingTemp_,double maxOutputCurrent_,const ::dds::core::optional< double >& maxPulsedChargeCurrent_,const ::dds::core::optional< double >& maxPulsedChargeCurrentDuration_,double maxStorageTemp_,double maxTemperature_,double maxVoltage_,const ::dds::core::optional< double >& minChargeCycles_,double minChargingTemp_,double minStorageTemp_,double minTemperature_,double minVoltage_,const std::string& name_,double nominalCapacity_,double nominalEnergy_,double nominalVoltage_,double peakDischargeCurrent_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_cellMinimumVoltage_(cellMinimumVoltage_), 
                m_maxCapacity_(maxCapacity_), 
                m_maxChargingCurrent_(maxChargingCurrent_), 
                m_maxChargingTemp_(maxChargingTemp_), 
                m_maxOutputCurrent_(maxOutputCurrent_), 
                m_maxPulsedChargeCurrent_(maxPulsedChargeCurrent_), 
                m_maxPulsedChargeCurrentDuration_(maxPulsedChargeCurrentDuration_), 
                m_maxStorageTemp_(maxStorageTemp_), 
                m_maxTemperature_(maxTemperature_), 
                m_maxVoltage_(maxVoltage_), 
                m_minChargeCycles_(minChargeCycles_), 
                m_minChargingTemp_(minChargingTemp_), 
                m_minStorageTemp_(minStorageTemp_), 
                m_minTemperature_(minTemperature_), 
                m_minVoltage_(minVoltage_), 
                m_name_(name_), 
                m_nominalCapacity_(nominalCapacity_), 
                m_nominalEnergy_(nominalEnergy_), 
                m_nominalVoltage_(nominalVoltage_), 
                m_peakDischargeCurrent_(peakDischargeCurrent_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void BatterySpecsReportType::swap(BatterySpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_cellMinimumVoltage_, other_.m_cellMinimumVoltage_);
                swap(m_maxCapacity_, other_.m_maxCapacity_);
                swap(m_maxChargingCurrent_, other_.m_maxChargingCurrent_);
                swap(m_maxChargingTemp_, other_.m_maxChargingTemp_);
                swap(m_maxOutputCurrent_, other_.m_maxOutputCurrent_);
                swap(m_maxPulsedChargeCurrent_, other_.m_maxPulsedChargeCurrent_);
                swap(m_maxPulsedChargeCurrentDuration_, other_.m_maxPulsedChargeCurrentDuration_);
                swap(m_maxStorageTemp_, other_.m_maxStorageTemp_);
                swap(m_maxTemperature_, other_.m_maxTemperature_);
                swap(m_maxVoltage_, other_.m_maxVoltage_);
                swap(m_minChargeCycles_, other_.m_minChargeCycles_);
                swap(m_minChargingTemp_, other_.m_minChargingTemp_);
                swap(m_minStorageTemp_, other_.m_minStorageTemp_);
                swap(m_minTemperature_, other_.m_minTemperature_);
                swap(m_minVoltage_, other_.m_minVoltage_);
                swap(m_name_, other_.m_name_);
                swap(m_nominalCapacity_, other_.m_nominalCapacity_);
                swap(m_nominalEnergy_, other_.m_nominalEnergy_);
                swap(m_nominalVoltage_, other_.m_nominalVoltage_);
                swap(m_peakDischargeCurrent_, other_.m_peakDischargeCurrent_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool BatterySpecsReportType::operator == (const BatterySpecsReportType& other_) const {
                if (std::fabs(m_cellMinimumVoltage_ - other_.m_cellMinimumVoltage_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_cellMinimumVoltage_ - other_.m_cellMinimumVoltage_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxCapacity_ - other_.m_maxCapacity_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxCapacity_ - other_.m_maxCapacity_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxChargingCurrent_ - other_.m_maxChargingCurrent_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxChargingCurrent_ - other_.m_maxChargingCurrent_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxChargingTemp_ - other_.m_maxChargingTemp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxChargingTemp_ - other_.m_maxChargingTemp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxOutputCurrent_ - other_.m_maxOutputCurrent_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxOutputCurrent_ - other_.m_maxOutputCurrent_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_maxPulsedChargeCurrent_.has_value() != other_.m_maxPulsedChargeCurrent_.has_value()) {
                    return false;
                } else if (m_maxPulsedChargeCurrent_.has_value()) {
                    if (std::fabs(*m_maxPulsedChargeCurrent_ - *other_.m_maxPulsedChargeCurrent_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxPulsedChargeCurrent_ - *other_.m_maxPulsedChargeCurrent_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_maxPulsedChargeCurrentDuration_.has_value() != other_.m_maxPulsedChargeCurrentDuration_.has_value()) {
                    return false;
                } else if (m_maxPulsedChargeCurrentDuration_.has_value()) {
                    if (std::fabs(*m_maxPulsedChargeCurrentDuration_ - *other_.m_maxPulsedChargeCurrentDuration_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_maxPulsedChargeCurrentDuration_ - *other_.m_maxPulsedChargeCurrentDuration_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_maxStorageTemp_ - other_.m_maxStorageTemp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxStorageTemp_ - other_.m_maxStorageTemp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxTemperature_ - other_.m_maxTemperature_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxTemperature_ - other_.m_maxTemperature_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxVoltage_ - other_.m_maxVoltage_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxVoltage_ - other_.m_maxVoltage_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_minChargeCycles_.has_value() != other_.m_minChargeCycles_.has_value()) {
                    return false;
                } else if (m_minChargeCycles_.has_value()) {
                    if (std::fabs(*m_minChargeCycles_ - *other_.m_minChargeCycles_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_minChargeCycles_ - *other_.m_minChargeCycles_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_minChargingTemp_ - other_.m_minChargingTemp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minChargingTemp_ - other_.m_minChargingTemp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minStorageTemp_ - other_.m_minStorageTemp_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minStorageTemp_ - other_.m_minStorageTemp_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minTemperature_ - other_.m_minTemperature_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minTemperature_ - other_.m_minTemperature_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minVoltage_ - other_.m_minVoltage_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minVoltage_ - other_.m_minVoltage_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (std::fabs(m_nominalCapacity_ - other_.m_nominalCapacity_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_nominalCapacity_ - other_.m_nominalCapacity_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_nominalEnergy_ - other_.m_nominalEnergy_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_nominalEnergy_ - other_.m_nominalEnergy_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_nominalVoltage_ - other_.m_nominalVoltage_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_nominalVoltage_ - other_.m_nominalVoltage_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_peakDischargeCurrent_ - other_.m_peakDischargeCurrent_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_peakDischargeCurrent_ - other_.m_peakDischargeCurrent_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool BatterySpecsReportType::operator != (const BatterySpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BatterySpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "cellMinimumVoltage: " << std::setprecision(15) << sample.cellMinimumVoltage ()<<", ";
                o << "maxCapacity: " << std::setprecision(15) << sample.maxCapacity ()<<", ";
                o << "maxChargingCurrent: " << std::setprecision(15) << sample.maxChargingCurrent ()<<", ";
                o << "maxChargingTemp: " << std::setprecision(15) << sample.maxChargingTemp ()<<", ";
                o << "maxOutputCurrent: " << std::setprecision(15) << sample.maxOutputCurrent ()<<", ";
                o << "maxPulsedChargeCurrent: " << sample.maxPulsedChargeCurrent ()<<", ";
                o << "maxPulsedChargeCurrentDuration: " << sample.maxPulsedChargeCurrentDuration ()<<", ";
                o << "maxStorageTemp: " << std::setprecision(15) << sample.maxStorageTemp ()<<", ";
                o << "maxTemperature: " << std::setprecision(15) << sample.maxTemperature ()<<", ";
                o << "maxVoltage: " << std::setprecision(15) << sample.maxVoltage ()<<", ";
                o << "minChargeCycles: " << sample.minChargeCycles ()<<", ";
                o << "minChargingTemp: " << std::setprecision(15) << sample.minChargingTemp ()<<", ";
                o << "minStorageTemp: " << std::setprecision(15) << sample.minStorageTemp ()<<", ";
                o << "minTemperature: " << std::setprecision(15) << sample.minTemperature ()<<", ";
                o << "minVoltage: " << std::setprecision(15) << sample.minVoltage ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "nominalCapacity: " << std::setprecision(15) << sample.nominalCapacity ()<<", ";
                o << "nominalEnergy: " << std::setprecision(15) << sample.nominalEnergy ()<<", ";
                o << "nominalVoltage: " << std::setprecision(15) << sample.nominalVoltage ()<<", ";
                o << "peakDischargeCurrent: " << std::setprecision(15) << sample.peakDischargeCurrent ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace BatterySpecs  

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
        struct native_type_code< ::UMAA::EO::BatterySpecs::BatterySpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BatterySpecsReportType_g_tc_members[22]=
                {

                    {
                        (char *)"cellMinimumVoltage",/* Member name */
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
                        (char *)"maxCapacity",/* Member name */
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
                        (char *)"maxChargingCurrent",/* Member name */
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
                        (char *)"maxChargingTemp",/* Member name */
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
                        (char *)"maxOutputCurrent",/* Member name */
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
                        (char *)"maxPulsedChargeCurrent",/* Member name */
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
                        (char *)"maxPulsedChargeCurrentDuration",/* Member name */
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
                        (char *)"maxStorageTemp",/* Member name */
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
                        (char *)"maxTemperature",/* Member name */
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
                        (char *)"maxVoltage",/* Member name */
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
                        (char *)"minChargeCycles",/* Member name */
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
                        (char *)"minChargingTemp",/* Member name */
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
                        (char *)"minStorageTemp",/* Member name */
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
                        (char *)"minTemperature",/* Member name */
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
                        (char *)"minVoltage",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"nominalCapacity",/* Member name */
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
                        (char *)"nominalEnergy",/* Member name */
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
                        (char *)"nominalVoltage",/* Member name */
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
                        (char *)"peakDischargeCurrent",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BatterySpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BatterySpecs::BatterySpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        22, /* Number of members */
                        BatterySpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BatterySpecsReportType*/

                if (is_initialized) {
                    return &BatterySpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BatterySpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BatterySpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Charge_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::BatteryCurrent_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::BatteryCurrentDuration_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::BatteryCycles_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::AmpHours_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::WattHours_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t>::get().native();
                BatterySpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                BatterySpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                BatterySpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                BatterySpecsReportType_g_tc_members[15]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                BatterySpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[17]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[17]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[17]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[18]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[18]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[18]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[18]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[18]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatterySpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[19]._annotations._defaultValue._u.double_value = 0.0;
                BatterySpecsReportType_g_tc_members[19]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[19]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatterySpecsReportType_g_tc_members[19]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatterySpecsReportType_g_tc_members[19]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BatterySpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                BatterySpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &BatterySpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BatterySpecs::BatterySpecsReportType *sample;

                static RTIXCdrMemberAccessInfo BatterySpecsReportType_g_memberAccessInfos[22] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BatterySpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BatterySpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BatterySpecs::BatterySpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                BatterySpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cellMinimumVoltage() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxCapacity() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxChargingCurrent() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxChargingTemp() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxOutputCurrent() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxPulsedChargeCurrent() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxPulsedChargeCurrentDuration() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxStorageTemp() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxTemperature() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxVoltage() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minChargeCycles() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minChargingTemp() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minStorageTemp() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minTemperature() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minVoltage() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nominalCapacity() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nominalEnergy() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nominalVoltage() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->peakDischargeCurrent() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BatterySpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BatterySpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                BatterySpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BatterySpecs::BatterySpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BatterySpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BatterySpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BatterySpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BatterySpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BatterySpecs::BatterySpecsReportType >;

                BatterySpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BatterySpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BatterySpecsReportType_g_typePlugin = 
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

                return &BatterySpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BatterySpecs::BatterySpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BatterySpecs::BatterySpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::BatterySpecs::BatterySpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BatterySpecs::BatterySpecsReportTypePlugin_new,
                ::UMAA::EO::BatterySpecs::BatterySpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BatterySpecs::BatterySpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BatterySpecs::BatterySpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BatterySpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BatterySpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BatterySpecs::BatterySpecsReportType >::from_cdr_buffer(::UMAA::EO::BatterySpecs::BatterySpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BatterySpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BatterySpecs::BatterySpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BatterySpecs::BatterySpecsReportType >::reset_sample(::UMAA::EO::BatterySpecs::BatterySpecsReportType& sample) 
        {
            sample.cellMinimumVoltage(0.0);
            sample.maxCapacity(0.0);
            sample.maxChargingCurrent(0.0);
            sample.maxChargingTemp(0.0);
            sample.maxOutputCurrent(0.0);
            ::rti::topic::reset_sample(sample.maxPulsedChargeCurrent());
            ::rti::topic::reset_sample(sample.maxPulsedChargeCurrentDuration());
            sample.maxStorageTemp(0.0);
            sample.maxTemperature(0.0);
            sample.maxVoltage(0.0);
            ::rti::topic::reset_sample(sample.minChargeCycles());
            sample.minChargingTemp(0.0);
            sample.minStorageTemp(0.0);
            sample.minTemperature(0.0);
            sample.minVoltage(0.0);
            sample.name("");
            sample.nominalCapacity(0.0);
            sample.nominalEnergy(0.0);
            sample.nominalVoltage(0.0);
            sample.peakDischargeCurrent(0.0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::EO::BatterySpecs::BatterySpecsReportType >::allocate_sample(::UMAA::EO::BatterySpecs::BatterySpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
