

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "StationkeepExecutionStatusReportType.hpp"
#include "StationkeepExecutionStatusReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace StationkeepControl {

            // ---- StationkeepExecutionStatusReportType: 

            StationkeepExecutionStatusReportType::StationkeepExecutionStatusReportType() :
                m_angleType_(UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType::OWNSHIP) ,
                m_bearing_ (0.0) ,
                m_bearingTolerance_ (0.0) ,
                m_closingSpeed_ (0.0) ,
                m_contactLost_ (0) ,
                m_range_ (0.0) ,
                m_rangeTolerance_ (0.0)  {
                    ::rti::core::fill_array( 
                        m_contactTrackID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            StationkeepExecutionStatusReportType::StationkeepExecutionStatusReportType (const UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& angleType,double bearing,double bearingTolerance,double closingSpeed,bool contactLost,const UMAA::Common::Measurement::NumericGUID& contactTrackID,double range,double rangeTolerance,const UMAA::MO::StationkeepState::StationkeepStateType& stationkeepState,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeStationkeepCompleted,const UMAA::Common::Measurement::DateTime& timeStationskeepAchieved,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID):
                m_angleType_( angleType ),
                m_bearing_( bearing ),
                m_bearingTolerance_( bearingTolerance ),
                m_closingSpeed_( closingSpeed ),
                m_contactLost_( contactLost ),
                m_contactTrackID_( contactTrackID ),
                m_range_( range ),
                m_rangeTolerance_( rangeTolerance ),
                m_stationkeepState_( stationkeepState ),
                m_timeStationkeepCompleted_( timeStationkeepCompleted ),
                m_timeStationskeepAchieved_( timeStationskeepAchieved ),
                m_source_( source ),
                m_sessionID_( sessionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            StationkeepExecutionStatusReportType::StationkeepExecutionStatusReportType(StationkeepExecutionStatusReportType&& other_) OMG_NOEXCEPT  :m_angleType_ (std::move(other_.m_angleType_))
            ,
            m_bearing_ (std::move(other_.m_bearing_))
            ,
            m_bearingTolerance_ (std::move(other_.m_bearingTolerance_))
            ,
            m_closingSpeed_ (std::move(other_.m_closingSpeed_))
            ,
            m_contactLost_ (std::move(other_.m_contactLost_))
            ,
            m_contactTrackID_ (std::move(other_.m_contactTrackID_))
            ,
            m_range_ (std::move(other_.m_range_))
            ,
            m_rangeTolerance_ (std::move(other_.m_rangeTolerance_))
            ,
            m_stationkeepState_ (std::move(other_.m_stationkeepState_))
            ,
            m_timeStationkeepCompleted_ (std::move(other_.m_timeStationkeepCompleted_))
            ,
            m_timeStationskeepAchieved_ (std::move(other_.m_timeStationskeepAchieved_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            {
            } 

            StationkeepExecutionStatusReportType& StationkeepExecutionStatusReportType::operator=(StationkeepExecutionStatusReportType&&  other_) OMG_NOEXCEPT {
                StationkeepExecutionStatusReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void StationkeepExecutionStatusReportType::swap(StationkeepExecutionStatusReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_angleType_, other_.m_angleType_);
                swap(m_bearing_, other_.m_bearing_);
                swap(m_bearingTolerance_, other_.m_bearingTolerance_);
                swap(m_closingSpeed_, other_.m_closingSpeed_);
                swap(m_contactLost_, other_.m_contactLost_);
                swap(m_contactTrackID_, other_.m_contactTrackID_);
                swap(m_range_, other_.m_range_);
                swap(m_rangeTolerance_, other_.m_rangeTolerance_);
                swap(m_stationkeepState_, other_.m_stationkeepState_);
                swap(m_timeStationkeepCompleted_, other_.m_timeStationkeepCompleted_);
                swap(m_timeStationskeepAchieved_, other_.m_timeStationskeepAchieved_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool StationkeepExecutionStatusReportType::operator == (const StationkeepExecutionStatusReportType& other_) const {
                if (m_angleType_ != other_.m_angleType_) {
                    return false;
                }
                if (m_bearing_ != other_.m_bearing_) {
                    return false;
                }
                if (m_bearingTolerance_ != other_.m_bearingTolerance_) {
                    return false;
                }
                if (m_closingSpeed_ != other_.m_closingSpeed_) {
                    return false;
                }
                if (m_contactLost_ != other_.m_contactLost_) {
                    return false;
                }
                if (m_contactTrackID_ != other_.m_contactTrackID_) {
                    return false;
                }
                if (m_range_ != other_.m_range_) {
                    return false;
                }
                if (m_rangeTolerance_ != other_.m_rangeTolerance_) {
                    return false;
                }
                if (m_stationkeepState_ != other_.m_stationkeepState_) {
                    return false;
                }
                if (m_timeStationkeepCompleted_ != other_.m_timeStationkeepCompleted_) {
                    return false;
                }
                if (m_timeStationskeepAchieved_ != other_.m_timeStationskeepAchieved_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                return true;
            }
            bool StationkeepExecutionStatusReportType::operator != (const StationkeepExecutionStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const StationkeepExecutionStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "angleType: " << sample.angleType()<<", ";
                o << "bearing: " << std::setprecision(15) <<sample.bearing()<<", ";
                o << "bearingTolerance: " << std::setprecision(15) <<sample.bearingTolerance()<<", ";
                o << "closingSpeed: " << std::setprecision(15) <<sample.closingSpeed()<<", ";
                o << "contactLost: " << sample.contactLost()<<", ";
                o << "contactTrackID: " << sample.contactTrackID()<<", ";
                o << "range: " << std::setprecision(15) <<sample.range()<<", ";
                o << "rangeTolerance: " << std::setprecision(15) <<sample.rangeTolerance()<<", ";
                o << "stationkeepState: " << sample.stationkeepState()<<", ";
                o << "timeStationkeepCompleted: " << sample.timeStationkeepCompleted()<<", ";
                o << "timeStationskeepAchieved: " << sample.timeStationskeepAchieved()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sessionID: " << sample.sessionID() ;
                o <<"]";
                return o;
            }

        } // namespace StationkeepControl  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StationkeepExecutionStatusReportType_g_tc_members[13]=
                {

                    {
                        (char *)"angleType",/* Member name */
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
                        (char *)"bearing",/* Member name */
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
                        (char *)"bearingTolerance",/* Member name */
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
                        (char *)"closingSpeed",/* Member name */
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
                        (char *)"contactLost",/* Member name */
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
                        (char *)"contactTrackID",/* Member name */
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
                        (char *)"range",/* Member name */
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
                        (char *)"rangeTolerance",/* Member name */
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
                        (char *)"stationkeepState",/* Member name */
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
                        (char *)"timeStationkeepCompleted",/* Member name */
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
                        (char *)"timeStationskeepAchieved",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sessionID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode StationkeepExecutionStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        13, /* Number of members */
                        StationkeepExecutionStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for StationkeepExecutionStatusReportType*/

                if (is_initialized) {
                    return &StationkeepExecutionStatusReportType_g_tc;
                }

                StationkeepExecutionStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StationkeepExecutionStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                StationkeepExecutionStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MO::StationkeepState::StationkeepStateType>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                StationkeepExecutionStatusReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                StationkeepExecutionStatusReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                StationkeepExecutionStatusReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                StationkeepExecutionStatusReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepExecutionStatusReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StationkeepExecutionStatusReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                StationkeepExecutionStatusReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepExecutionStatusReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StationkeepExecutionStatusReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                StationkeepExecutionStatusReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepExecutionStatusReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                StationkeepExecutionStatusReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 200ULL;

                StationkeepExecutionStatusReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                StationkeepExecutionStatusReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                StationkeepExecutionStatusReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepExecutionStatusReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
                StationkeepExecutionStatusReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 401056000ULL;

                StationkeepExecutionStatusReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepExecutionStatusReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                StationkeepExecutionStatusReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepExecutionStatusReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 401056000ULL;

                StationkeepExecutionStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                StationkeepExecutionStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &StationkeepExecutionStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType *sample;

                static RTIXCdrMemberAccessInfo StationkeepExecutionStatusReportType_g_memberAccessInfos[13] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StationkeepExecutionStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StationkeepExecutionStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                StationkeepExecutionStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->angleType() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearing() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingTolerance() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->closingSpeed() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactLost() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactTrackID() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->range() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rangeTolerance() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stationkeepState() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStationkeepCompleted() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStationskeepAchieved() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                StationkeepExecutionStatusReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                StationkeepExecutionStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                StationkeepExecutionStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StationkeepExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StationkeepExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StationkeepExecutionStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StationkeepExecutionStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType >;

                StationkeepExecutionStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StationkeepExecutionStatusReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StationkeepExecutionStatusReportType_g_typePlugin = 
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

                return &StationkeepExecutionStatusReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportTypePlugin_new,
                UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = StationkeepExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = StationkeepExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType >::from_cdr_buffer(UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = StationkeepExecutionStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType >::reset_sample(UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType& sample) 
        {
            sample.angleType(UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType::OWNSHIP);
            sample.bearing(0.0);
            sample.bearingTolerance(0.0);
            sample.closingSpeed(0.0);
            sample.contactLost(0);
            ::rti::topic::reset_sample(sample.contactTrackID());
            sample.range(0.0);
            sample.rangeTolerance(0.0);
            ::rti::topic::reset_sample(sample.stationkeepState());
            ::rti::topic::reset_sample(sample.timeStationkeepCompleted());
            ::rti::topic::reset_sample(sample.timeStationskeepAchieved());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType >::allocate_sample(UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.angleType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactTrackID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.stationkeepState(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStationskeepAchieved(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }

    }
}  

