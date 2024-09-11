

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryReportType.idl
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
#include "BatteryReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BatteryReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BatteryStatus {

            // ---- BatteryReportType: 

            BatteryReportType::BatteryReportType() :
                m_state_(UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType::FAULT)  {

            }   

            BatteryReportType::BatteryReportType (const ::dds::core::optional< double >& chargeRemaining_,const ::dds::core::optional< double >& current_,const ::dds::core::optional< double >& energyUsageRate_,const ::dds::core::optional< double >& hours_,const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType& state_,const ::dds::core::optional< double >& temp_,const ::dds::core::optional< double >& voltage_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::LargeListMetadata& cellsListMetadata_):
                m_chargeRemaining_(chargeRemaining_), 
                m_current_(current_), 
                m_energyUsageRate_(energyUsageRate_), 
                m_hours_(hours_), 
                m_state_(state_), 
                m_temp_(temp_), 
                m_voltage_(voltage_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_cellsListMetadata_(cellsListMetadata_) {
            }

            void BatteryReportType::swap(BatteryReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_chargeRemaining_, other_.m_chargeRemaining_);
                swap(m_current_, other_.m_current_);
                swap(m_energyUsageRate_, other_.m_energyUsageRate_);
                swap(m_hours_, other_.m_hours_);
                swap(m_state_, other_.m_state_);
                swap(m_temp_, other_.m_temp_);
                swap(m_voltage_, other_.m_voltage_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_cellsListMetadata_, other_.m_cellsListMetadata_);
            }  

            bool BatteryReportType::operator == (const BatteryReportType& other_) const {
                if (m_chargeRemaining_.has_value() != other_.m_chargeRemaining_.has_value()) {
                    return false;
                } else if (m_chargeRemaining_.has_value()) {
                    if (std::fabs(*m_chargeRemaining_ - *other_.m_chargeRemaining_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_chargeRemaining_ - *other_.m_chargeRemaining_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_current_.has_value() != other_.m_current_.has_value()) {
                    return false;
                } else if (m_current_.has_value()) {
                    if (std::fabs(*m_current_ - *other_.m_current_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_current_ - *other_.m_current_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_energyUsageRate_.has_value() != other_.m_energyUsageRate_.has_value()) {
                    return false;
                } else if (m_energyUsageRate_.has_value()) {
                    if (std::fabs(*m_energyUsageRate_ - *other_.m_energyUsageRate_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_energyUsageRate_ - *other_.m_energyUsageRate_) < (std::numeric_limits< double>::min)())) {
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
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                if (m_temp_.has_value() != other_.m_temp_.has_value()) {
                    return false;
                } else if (m_temp_.has_value()) {
                    if (std::fabs(*m_temp_ - *other_.m_temp_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_temp_ - *other_.m_temp_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_voltage_.has_value() != other_.m_voltage_.has_value()) {
                    return false;
                } else if (m_voltage_.has_value()) {
                    if (std::fabs(*m_voltage_ - *other_.m_voltage_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_voltage_ - *other_.m_voltage_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_cellsListMetadata_ != other_.m_cellsListMetadata_) {
                    return false;
                }
                return true;
            }

            bool BatteryReportType::operator != (const BatteryReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BatteryReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "chargeRemaining: " << sample.chargeRemaining ()<<", ";
                o << "current: " << sample.current ()<<", ";
                o << "energyUsageRate: " << sample.energyUsageRate ()<<", ";
                o << "hours: " << sample.hours ()<<", ";
                o << "state: " << sample.state ()<<", ";
                o << "temp: " << sample.temp ()<<", ";
                o << "voltage: " << sample.voltage ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "cellsListMetadata: " << sample.cellsListMetadata ();
                o <<"]";
                return o;
            }

            // ---- BatteryReportTypeCellsListElement: 

            BatteryReportTypeCellsListElement::BatteryReportTypeCellsListElement()  {

            }   

            BatteryReportTypeCellsListElement::BatteryReportTypeCellsListElement (const ::UMAA::EO::BatteryStatus::BatteryCellDataType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_):
                m_element_(element_), 
                m_listID_(listID_), 
                m_elementID_(elementID_), 
                m_elementTimestamp_(elementTimestamp_), 
                m_nextElementID_(nextElementID_) {
            }

            void BatteryReportTypeCellsListElement::swap(BatteryReportTypeCellsListElement& other_)  noexcept 
            {
                using std::swap;
                swap(m_element_, other_.m_element_);
                swap(m_listID_, other_.m_listID_);
                swap(m_elementID_, other_.m_elementID_);
                swap(m_elementTimestamp_, other_.m_elementTimestamp_);
                swap(m_nextElementID_, other_.m_nextElementID_);
            }  

            bool BatteryReportTypeCellsListElement::operator == (const BatteryReportTypeCellsListElement& other_) const {
                if (m_element_ != other_.m_element_) {
                    return false;
                }
                if (m_listID_ != other_.m_listID_) {
                    return false;
                }
                if (m_elementID_ != other_.m_elementID_) {
                    return false;
                }
                if (m_elementTimestamp_ != other_.m_elementTimestamp_) {
                    return false;
                }
                if (m_nextElementID_ != other_.m_nextElementID_) {
                    return false;
                }
                return true;
            }

            bool BatteryReportTypeCellsListElement::operator != (const BatteryReportTypeCellsListElement& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BatteryReportTypeCellsListElement& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "element: " << sample.element ()<<", ";
                o << "listID: " << sample.listID ()<<", ";
                o << "elementID: " << sample.elementID ()<<", ";
                o << "elementTimestamp: " << sample.elementTimestamp ()<<", ";
                o << "nextElementID: " << sample.nextElementID ();
                o <<"]";
                return o;
            }

        } // namespace BatteryStatus  

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
        struct native_type_code< ::UMAA::EO::BatteryStatus::BatteryReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BatteryReportType_g_tc_members[10]=
                {

                    {
                        (char *)"chargeRemaining",/* Member name */
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
                        (char *)"current",/* Member name */
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
                        (char *)"energyUsageRate",/* Member name */
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
                        (char *)"hours",/* Member name */
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
                        (char *)"state",/* Member name */
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
                        (char *)"temp",/* Member name */
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
                        (char *)"voltage",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"cellsListMetadata",/* Member name */
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
                    }
                };

                static DDS_TypeCode BatteryReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BatteryStatus::BatteryReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        BatteryReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BatteryReportType*/

                if (is_initialized) {
                    return &BatteryReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BatteryReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BatteryReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::EnergyPercent_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElectricalPower_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationHours_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType>::get().native();
                BatteryReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                BatteryReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                BatteryReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::LargeListMetadata>::get().native();

                /* Initialize the values for member annotations. */
                BatteryReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatteryReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatteryReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatteryReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatteryReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BatteryReportType_g_tc_members[4]._annotations._defaultValue._u.enumerated_value = 0;
                BatteryReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BatteryReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BatteryReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BatteryReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                BatteryReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &BatteryReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BatteryStatus::BatteryReportType *sample;

                static RTIXCdrMemberAccessInfo BatteryReportType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BatteryReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BatteryReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BatteryStatus::BatteryReportType);
                if (sample == NULL) {
                    return NULL;
                }

                BatteryReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->chargeRemaining() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->current() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->energyUsageRate() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->hours() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->temp() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->voltage() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cellsListMetadata() - (char *)sample);

                BatteryReportType_g_sampleAccessInfo.memberAccessInfos = 
                BatteryReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BatteryStatus::BatteryReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BatteryReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BatteryReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BatteryReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BatteryReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BatteryStatus::BatteryReportType >;

                BatteryReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BatteryReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BatteryReportType_g_typePlugin = 
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

                return &BatteryReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BatteryStatus::BatteryReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BatteryStatus::BatteryReportType >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BatteryReportTypeCellsListElement_g_tc_members[5]=
                {

                    {
                        (char *)"element",/* Member name */
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
                        (char *)"listID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"elementTimestamp",/* Member name */
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
                        (char *)"nextElementID",/* Member name */
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
                    }
                };

                static DDS_TypeCode BatteryReportTypeCellsListElement_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        BatteryReportTypeCellsListElement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BatteryReportTypeCellsListElement*/

                if (is_initialized) {
                    return &BatteryReportTypeCellsListElement_g_tc;
                }

                is_initialized = RTI_TRUE;

                BatteryReportTypeCellsListElement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BatteryReportTypeCellsListElement_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BatteryStatus::BatteryCellDataType>::get().native();
                BatteryReportTypeCellsListElement_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                BatteryReportTypeCellsListElement_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                BatteryReportTypeCellsListElement_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                BatteryReportTypeCellsListElement_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                BatteryReportTypeCellsListElement_g_tc._data._sampleAccessInfo = sample_access_info();
                BatteryReportTypeCellsListElement_g_tc._data._typePlugin = type_plugin_info();    

                return &BatteryReportTypeCellsListElement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement *sample;

                static RTIXCdrMemberAccessInfo BatteryReportTypeCellsListElement_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BatteryReportTypeCellsListElement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BatteryReportTypeCellsListElement_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement);
                if (sample == NULL) {
                    return NULL;
                }

                BatteryReportTypeCellsListElement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->element() - (char *)sample);

                BatteryReportTypeCellsListElement_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->listID() - (char *)sample);

                BatteryReportTypeCellsListElement_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementID() - (char *)sample);

                BatteryReportTypeCellsListElement_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elementTimestamp() - (char *)sample);

                BatteryReportTypeCellsListElement_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->nextElementID() - (char *)sample);

                BatteryReportTypeCellsListElement_g_sampleAccessInfo.memberAccessInfos = 
                BatteryReportTypeCellsListElement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BatteryReportTypeCellsListElement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BatteryReportTypeCellsListElement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BatteryReportTypeCellsListElement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BatteryReportTypeCellsListElement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement >;

                BatteryReportTypeCellsListElement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BatteryReportTypeCellsListElement_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BatteryReportTypeCellsListElement_g_typePlugin = 
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

                return &BatteryReportTypeCellsListElement_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BatteryStatus::BatteryReportTypePlugin_new,
                ::UMAA::EO::BatteryStatus::BatteryReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BatteryStatus::BatteryReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BatteryReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BatteryReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportType >::from_cdr_buffer(::UMAA::EO::BatteryStatus::BatteryReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BatteryReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BatteryStatus::BatteryReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportType >::reset_sample(::UMAA::EO::BatteryStatus::BatteryReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.chargeRemaining());
            ::rti::topic::reset_sample(sample.current());
            ::rti::topic::reset_sample(sample.energyUsageRate());
            ::rti::topic::reset_sample(sample.hours());
            sample.state(UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType::FAULT);
            ::rti::topic::reset_sample(sample.temp());
            ::rti::topic::reset_sample(sample.voltage());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.cellsListMetadata());
        }

        void topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportType >::allocate_sample(::UMAA::EO::BatteryStatus::BatteryReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.cellsListMetadata(),  -1, -1);
        }
        void topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElementPlugin_new,
                ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElementPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BatteryReportTypeCellsListElementPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BatteryReportTypeCellsListElementPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement >::from_cdr_buffer(::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BatteryReportTypeCellsListElementPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement >::reset_sample(::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement& sample) 
        {
            ::rti::topic::reset_sample(sample.element());
            ::rti::topic::reset_sample(sample.listID());
            ::rti::topic::reset_sample(sample.elementID());
            ::rti::topic::reset_sample(sample.elementTimestamp());
            ::rti::topic::reset_sample(sample.nextElementID());
        }

        void topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement >::allocate_sample(::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.element(),  -1, -1);
            ::rti::topic::allocate_sample(sample.listID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elementTimestamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
