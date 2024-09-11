

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ProcessingUnitReportType.idl
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
#include "ProcessingUnitReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ProcessingUnitReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace ProcessingUnitStatus {

            // ---- ProcessingUnitReportType: 

            ProcessingUnitReportType::ProcessingUnitReportType() :
                m_type_(UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::CPU)  {

            }   

            ProcessingUnitReportType::ProcessingUnitReportType (const ::dds::core::optional< double >& load15MinuteAverage_,const ::dds::core::optional< double >& load1MinuteAverage_,const ::dds::core::optional< double >& load5MinuteAverage_,const ::dds::core::optional< int32_t >& numberOfBlockedProcesses_,const ::dds::core::optional< int32_t >& numberOfProcesses_,const ::dds::core::optional< int32_t >& numberOfRunningProcesses_,const ::dds::core::optional< double >& processorTemperature_,const ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType& type_,const ::dds::core::optional< double >& uptime_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_load15MinuteAverage_(load15MinuteAverage_), 
                m_load1MinuteAverage_(load1MinuteAverage_), 
                m_load5MinuteAverage_(load5MinuteAverage_), 
                m_numberOfBlockedProcesses_(numberOfBlockedProcesses_), 
                m_numberOfProcesses_(numberOfProcesses_), 
                m_numberOfRunningProcesses_(numberOfRunningProcesses_), 
                m_processorTemperature_(processorTemperature_), 
                m_type_(type_), 
                m_uptime_(uptime_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void ProcessingUnitReportType::swap(ProcessingUnitReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_load15MinuteAverage_, other_.m_load15MinuteAverage_);
                swap(m_load1MinuteAverage_, other_.m_load1MinuteAverage_);
                swap(m_load5MinuteAverage_, other_.m_load5MinuteAverage_);
                swap(m_numberOfBlockedProcesses_, other_.m_numberOfBlockedProcesses_);
                swap(m_numberOfProcesses_, other_.m_numberOfProcesses_);
                swap(m_numberOfRunningProcesses_, other_.m_numberOfRunningProcesses_);
                swap(m_processorTemperature_, other_.m_processorTemperature_);
                swap(m_type_, other_.m_type_);
                swap(m_uptime_, other_.m_uptime_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool ProcessingUnitReportType::operator == (const ProcessingUnitReportType& other_) const {
                if (m_load15MinuteAverage_.has_value() != other_.m_load15MinuteAverage_.has_value()) {
                    return false;
                } else if (m_load15MinuteAverage_.has_value()) {
                    if (std::fabs(*m_load15MinuteAverage_ - *other_.m_load15MinuteAverage_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_load15MinuteAverage_ - *other_.m_load15MinuteAverage_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_load1MinuteAverage_.has_value() != other_.m_load1MinuteAverage_.has_value()) {
                    return false;
                } else if (m_load1MinuteAverage_.has_value()) {
                    if (std::fabs(*m_load1MinuteAverage_ - *other_.m_load1MinuteAverage_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_load1MinuteAverage_ - *other_.m_load1MinuteAverage_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_load5MinuteAverage_.has_value() != other_.m_load5MinuteAverage_.has_value()) {
                    return false;
                } else if (m_load5MinuteAverage_.has_value()) {
                    if (std::fabs(*m_load5MinuteAverage_ - *other_.m_load5MinuteAverage_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_load5MinuteAverage_ - *other_.m_load5MinuteAverage_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_numberOfBlockedProcesses_ != other_.m_numberOfBlockedProcesses_) {
                    return false;
                }
                if (m_numberOfProcesses_ != other_.m_numberOfProcesses_) {
                    return false;
                }
                if (m_numberOfRunningProcesses_ != other_.m_numberOfRunningProcesses_) {
                    return false;
                }
                if (m_processorTemperature_.has_value() != other_.m_processorTemperature_.has_value()) {
                    return false;
                } else if (m_processorTemperature_.has_value()) {
                    if (std::fabs(*m_processorTemperature_ - *other_.m_processorTemperature_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_processorTemperature_ - *other_.m_processorTemperature_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_type_ != other_.m_type_) {
                    return false;
                }
                if (m_uptime_.has_value() != other_.m_uptime_.has_value()) {
                    return false;
                } else if (m_uptime_.has_value()) {
                    if (std::fabs(*m_uptime_ - *other_.m_uptime_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_uptime_ - *other_.m_uptime_) < (std::numeric_limits< double>::min)())) {
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

            bool ProcessingUnitReportType::operator != (const ProcessingUnitReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ProcessingUnitReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "load15MinuteAverage: " << sample.load15MinuteAverage ()<<", ";
                o << "load1MinuteAverage: " << sample.load1MinuteAverage ()<<", ";
                o << "load5MinuteAverage: " << sample.load5MinuteAverage ()<<", ";
                o << "numberOfBlockedProcesses: " << sample.numberOfBlockedProcesses ()<<", ";
                o << "numberOfProcesses: " << sample.numberOfProcesses ()<<", ";
                o << "numberOfRunningProcesses: " << sample.numberOfRunningProcesses ()<<", ";
                o << "processorTemperature: " << sample.processorTemperature ()<<", ";
                o << "type: " << sample.type ()<<", ";
                o << "uptime: " << sample.uptime ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace ProcessingUnitStatus  

    } // namespace SO  

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
        struct native_type_code< ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ProcessingUnitReportType_g_tc_members[11]=
                {

                    {
                        (char *)"load15MinuteAverage",/* Member name */
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
                        (char *)"load1MinuteAverage",/* Member name */
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
                        (char *)"load5MinuteAverage",/* Member name */
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
                        (char *)"numberOfBlockedProcesses",/* Member name */
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
                        (char *)"numberOfProcesses",/* Member name */
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
                        (char *)"numberOfRunningProcesses",/* Member name */
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
                        (char *)"processorTemperature",/* Member name */
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
                        (char *)"type",/* Member name */
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
                        (char *)"uptime",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode ProcessingUnitReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        ProcessingUnitReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ProcessingUnitReportType*/

                if (is_initialized) {
                    return &ProcessingUnitReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ProcessingUnitReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ProcessingUnitReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t>::get().native();
                ProcessingUnitReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t>::get().native();
                ProcessingUnitReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t>::get().native();
                ProcessingUnitReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                ProcessingUnitReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                ProcessingUnitReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                ProcessingUnitReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                ProcessingUnitReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType>::get().native();
                ProcessingUnitReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                ProcessingUnitReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ProcessingUnitReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                ProcessingUnitReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ProcessingUnitReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ProcessingUnitReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ProcessingUnitReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ProcessingUnitReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ProcessingUnitReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ProcessingUnitReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ProcessingUnitReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ProcessingUnitReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ProcessingUnitReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ProcessingUnitReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ProcessingUnitReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ProcessingUnitReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                ProcessingUnitReportType_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                ProcessingUnitReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                ProcessingUnitReportType_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                ProcessingUnitReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                ProcessingUnitReportType_g_tc_members[4]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                ProcessingUnitReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                ProcessingUnitReportType_g_tc_members[4]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                ProcessingUnitReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                ProcessingUnitReportType_g_tc_members[5]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                ProcessingUnitReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                ProcessingUnitReportType_g_tc_members[5]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                ProcessingUnitReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ProcessingUnitReportType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ProcessingUnitReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ProcessingUnitReportType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ProcessingUnitReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ProcessingUnitReportType_g_tc_members[7]._annotations._defaultValue._u.enumerated_value = 0;
                ProcessingUnitReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ProcessingUnitReportType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ProcessingUnitReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ProcessingUnitReportType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ProcessingUnitReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                ProcessingUnitReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &ProcessingUnitReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType *sample;

                static RTIXCdrMemberAccessInfo ProcessingUnitReportType_g_memberAccessInfos[11] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ProcessingUnitReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ProcessingUnitReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType);
                if (sample == NULL) {
                    return NULL;
                }

                ProcessingUnitReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->load15MinuteAverage() - (char *)sample);

                ProcessingUnitReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->load1MinuteAverage() - (char *)sample);

                ProcessingUnitReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->load5MinuteAverage() - (char *)sample);

                ProcessingUnitReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->numberOfBlockedProcesses() - (char *)sample);

                ProcessingUnitReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->numberOfProcesses() - (char *)sample);

                ProcessingUnitReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->numberOfRunningProcesses() - (char *)sample);

                ProcessingUnitReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->processorTemperature() - (char *)sample);

                ProcessingUnitReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->type() - (char *)sample);

                ProcessingUnitReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->uptime() - (char *)sample);

                ProcessingUnitReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ProcessingUnitReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ProcessingUnitReportType_g_sampleAccessInfo.memberAccessInfos = 
                ProcessingUnitReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ProcessingUnitReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ProcessingUnitReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ProcessingUnitReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ProcessingUnitReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType >;

                ProcessingUnitReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ProcessingUnitReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ProcessingUnitReportType_g_typePlugin = 
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

                return &ProcessingUnitReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportTypePlugin_new,
                ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ProcessingUnitReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ProcessingUnitReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType >::from_cdr_buffer(::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ProcessingUnitReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType >::reset_sample(::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.load15MinuteAverage());
            ::rti::topic::reset_sample(sample.load1MinuteAverage());
            ::rti::topic::reset_sample(sample.load5MinuteAverage());
            ::rti::topic::reset_sample(sample.numberOfBlockedProcesses());
            ::rti::topic::reset_sample(sample.numberOfProcesses());
            ::rti::topic::reset_sample(sample.numberOfRunningProcesses());
            ::rti::topic::reset_sample(sample.processorTemperature());
            sample.type(UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::CPU);
            ::rti::topic::reset_sample(sample.uptime());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType >::allocate_sample(::UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.type(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
