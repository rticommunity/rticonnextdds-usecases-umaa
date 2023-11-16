

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "RangeConfigReportType.hpp"
#include "RangeConfigReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace RangeConfig {

            // ---- RangeConfigReportType: 

            RangeConfigReportType::RangeConfigReportType() :
                m_horizontalFOVStartAngle_ (0.0) ,
                m_horizontalFOVStopAngle_ (0.0) ,
                m_maxRange_ (0.0) ,
                m_minRange_ (0.0) ,
                m_status_(UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType::POWER_OFF) ,
                m_updateRate_ (0.0) ,
                m_verticalFOVStartAngle_ (0.0) ,
                m_verticalFOVStopAngle_ (0.0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            RangeConfigReportType::RangeConfigReportType (double horizontalFOVStartAngle,double horizontalFOVStopAngle,double maxRange,double minRange,const UMAA::SEM::SensorManagement::RangeErrorType& rangeError,const UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status,double updateRate,double verticalFOVStartAngle,double verticalFOVStopAngle,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_horizontalFOVStartAngle_( horizontalFOVStartAngle ),
                m_horizontalFOVStopAngle_( horizontalFOVStopAngle ),
                m_maxRange_( maxRange ),
                m_minRange_( minRange ),
                m_rangeError_( rangeError ),
                m_status_( status ),
                m_updateRate_( updateRate ),
                m_verticalFOVStartAngle_( verticalFOVStartAngle ),
                m_verticalFOVStopAngle_( verticalFOVStopAngle ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            RangeConfigReportType::RangeConfigReportType(RangeConfigReportType&& other_) OMG_NOEXCEPT  :m_horizontalFOVStartAngle_ (std::move(other_.m_horizontalFOVStartAngle_))
            ,
            m_horizontalFOVStopAngle_ (std::move(other_.m_horizontalFOVStopAngle_))
            ,
            m_maxRange_ (std::move(other_.m_maxRange_))
            ,
            m_minRange_ (std::move(other_.m_minRange_))
            ,
            m_rangeError_ (std::move(other_.m_rangeError_))
            ,
            m_status_ (std::move(other_.m_status_))
            ,
            m_updateRate_ (std::move(other_.m_updateRate_))
            ,
            m_verticalFOVStartAngle_ (std::move(other_.m_verticalFOVStartAngle_))
            ,
            m_verticalFOVStopAngle_ (std::move(other_.m_verticalFOVStopAngle_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            RangeConfigReportType& RangeConfigReportType::operator=(RangeConfigReportType&&  other_) OMG_NOEXCEPT {
                RangeConfigReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void RangeConfigReportType::swap(RangeConfigReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_horizontalFOVStartAngle_, other_.m_horizontalFOVStartAngle_);
                swap(m_horizontalFOVStopAngle_, other_.m_horizontalFOVStopAngle_);
                swap(m_maxRange_, other_.m_maxRange_);
                swap(m_minRange_, other_.m_minRange_);
                swap(m_rangeError_, other_.m_rangeError_);
                swap(m_status_, other_.m_status_);
                swap(m_updateRate_, other_.m_updateRate_);
                swap(m_verticalFOVStartAngle_, other_.m_verticalFOVStartAngle_);
                swap(m_verticalFOVStopAngle_, other_.m_verticalFOVStopAngle_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool RangeConfigReportType::operator == (const RangeConfigReportType& other_) const {
                if (m_horizontalFOVStartAngle_ != other_.m_horizontalFOVStartAngle_) {
                    return false;
                }
                if (m_horizontalFOVStopAngle_ != other_.m_horizontalFOVStopAngle_) {
                    return false;
                }
                if (m_maxRange_ != other_.m_maxRange_) {
                    return false;
                }
                if (m_minRange_ != other_.m_minRange_) {
                    return false;
                }
                if (m_rangeError_ != other_.m_rangeError_) {
                    return false;
                }
                if (m_status_ != other_.m_status_) {
                    return false;
                }
                if (m_updateRate_ != other_.m_updateRate_) {
                    return false;
                }
                if (m_verticalFOVStartAngle_ != other_.m_verticalFOVStartAngle_) {
                    return false;
                }
                if (m_verticalFOVStopAngle_ != other_.m_verticalFOVStopAngle_) {
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
            bool RangeConfigReportType::operator != (const RangeConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RangeConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "horizontalFOVStartAngle: " << std::setprecision(15) <<sample.horizontalFOVStartAngle()<<", ";
                o << "horizontalFOVStopAngle: " << std::setprecision(15) <<sample.horizontalFOVStopAngle()<<", ";
                o << "maxRange: " << std::setprecision(15) <<sample.maxRange()<<", ";
                o << "minRange: " << std::setprecision(15) <<sample.minRange()<<", ";
                o << "rangeError: " << sample.rangeError()<<", ";
                o << "status: " << sample.status()<<", ";
                o << "updateRate: " << std::setprecision(15) <<sample.updateRate()<<", ";
                o << "verticalFOVStartAngle: " << std::setprecision(15) <<sample.verticalFOVStartAngle()<<", ";
                o << "verticalFOVStopAngle: " << std::setprecision(15) <<sample.verticalFOVStopAngle()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace RangeConfig  

    } // namespace SA  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SA::RangeConfig::RangeConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RangeConfigReportType_g_tc_members[11]=
                {

                    {
                        (char *)"horizontalFOVStartAngle",/* Member name */
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
                        (char *)"horizontalFOVStopAngle",/* Member name */
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
                        (char *)"maxRange",/* Member name */
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
                        (char *)"minRange",/* Member name */
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
                        (char *)"rangeError",/* Member name */
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
                        (char *)"status",/* Member name */
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
                        (char *)"updateRate",/* Member name */
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
                        (char *)"verticalFOVStartAngle",/* Member name */
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
                        (char *)"verticalFOVStopAngle",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode RangeConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::RangeConfig::RangeConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        RangeConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RangeConfigReportType*/

                if (is_initialized) {
                    return &RangeConfigReportType_g_tc;
                }

                RangeConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RangeConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                RangeConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                RangeConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                RangeConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                RangeConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::SEM::SensorManagement::RangeErrorType>::get().native();
                RangeConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType>::get().native();
                RangeConfigReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Frequency_Hertz_AliasTag_t>::get().native();
                RangeConfigReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                RangeConfigReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                RangeConfigReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                RangeConfigReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                RangeConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                RangeConfigReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RangeConfigReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RangeConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                RangeConfigReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RangeConfigReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RangeConfigReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                RangeConfigReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                RangeConfigReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;

                RangeConfigReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                RangeConfigReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                RangeConfigReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 401056000ULL;

                RangeConfigReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                RangeConfigReportType_g_tc_members[5]._annotations._defaultValue._u.enumerated_value = 0;

                RangeConfigReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                RangeConfigReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[6]._annotations._minValue._u.double_value = 0.0;
                RangeConfigReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 10000000000ULL;

                RangeConfigReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                RangeConfigReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RangeConfigReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RangeConfigReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                RangeConfigReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RangeConfigReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeConfigReportType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                RangeConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                RangeConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RangeConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SA::RangeConfig::RangeConfigReportType *sample;

                static RTIXCdrMemberAccessInfo RangeConfigReportType_g_memberAccessInfos[11] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RangeConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RangeConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SA::RangeConfig::RangeConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                RangeConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->horizontalFOVStartAngle() - (char *)sample);

                RangeConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->horizontalFOVStopAngle() - (char *)sample);

                RangeConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxRange() - (char *)sample);

                RangeConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minRange() - (char *)sample);

                RangeConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rangeError() - (char *)sample);

                RangeConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->status() - (char *)sample);

                RangeConfigReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->updateRate() - (char *)sample);

                RangeConfigReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->verticalFOVStartAngle() - (char *)sample);

                RangeConfigReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->verticalFOVStopAngle() - (char *)sample);

                RangeConfigReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                RangeConfigReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                RangeConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                RangeConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SA::RangeConfig::RangeConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RangeConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RangeConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RangeConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RangeConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SA::RangeConfig::RangeConfigReportType >;

                RangeConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RangeConfigReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RangeConfigReportType_g_typePlugin = 
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
                    NULL
                };

                return &RangeConfigReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SA::RangeConfig::RangeConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SA::RangeConfig::RangeConfigReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SA::RangeConfig::RangeConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SA::RangeConfig::RangeConfigReportTypePlugin_new,
                UMAA::SA::RangeConfig::RangeConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SA::RangeConfig::RangeConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SA::RangeConfig::RangeConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RangeConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RangeConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SA::RangeConfig::RangeConfigReportType >::from_cdr_buffer(UMAA::SA::RangeConfig::RangeConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RangeConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SA::RangeConfig::RangeConfigReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SA::RangeConfig::RangeConfigReportType >::reset_sample(UMAA::SA::RangeConfig::RangeConfigReportType& sample) 
        {
            sample.horizontalFOVStartAngle(0.0);
            sample.horizontalFOVStopAngle(0.0);
            sample.maxRange(0.0);
            sample.minRange(0.0);
            ::rti::topic::reset_sample(sample.rangeError());
            sample.status(UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType::POWER_OFF);
            sample.updateRate(0.0);
            sample.verticalFOVStartAngle(0.0);
            sample.verticalFOVStopAngle(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SA::RangeConfig::RangeConfigReportType >::allocate_sample(UMAA::SA::RangeConfig::RangeConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.rangeError(),  -1, -1);
            ::rti::topic::allocate_sample(sample.status(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

