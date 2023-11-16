

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LocalWaypointExecutionStatusReportType.hpp"
#include "LocalWaypointExecutionStatusReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalWaypointControl {

            // ---- LocalWaypointExecutionStatusReportType: 

            LocalWaypointExecutionStatusReportType::LocalWaypointExecutionStatusReportType() :
                m_crossTrackError_ (0.0) ,
                m_cumulativeDistance_ (0.0) ,
                m_distanceRemaining_ (0.0) ,
                m_distanceToWaypoint_ (0.0) ,
                m_elevationAchieved_ (0) ,
                m_maintainTrack_ (0) ,
                m_speedAchieved_ (0) ,
                m_trackLineAchieved_ (0) ,
                m_waypointsRemaining_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_waypointID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            LocalWaypointExecutionStatusReportType::LocalWaypointExecutionStatusReportType (const UMAA::Common::Measurement::DateTime& arrivalTime,double crossTrackError,double cumulativeDistance,double distanceRemaining,double distanceToWaypoint,bool elevationAchieved,bool maintainTrack,bool speedAchieved,const UMAA::Common::Measurement::DateTime& timeToWaypoint,bool trackLineAchieved,int32_t waypointsRemaining,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::NumericGUID& waypointID):
                m_arrivalTime_( arrivalTime ),
                m_crossTrackError_( crossTrackError ),
                m_cumulativeDistance_( cumulativeDistance ),
                m_distanceRemaining_( distanceRemaining ),
                m_distanceToWaypoint_( distanceToWaypoint ),
                m_elevationAchieved_( elevationAchieved ),
                m_maintainTrack_( maintainTrack ),
                m_speedAchieved_( speedAchieved ),
                m_timeToWaypoint_( timeToWaypoint ),
                m_trackLineAchieved_( trackLineAchieved ),
                m_waypointsRemaining_( waypointsRemaining ),
                m_source_( source ),
                m_sessionID_( sessionID ),
                m_waypointID_( waypointID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LocalWaypointExecutionStatusReportType::LocalWaypointExecutionStatusReportType(LocalWaypointExecutionStatusReportType&& other_) OMG_NOEXCEPT  :m_arrivalTime_ (std::move(other_.m_arrivalTime_))
            ,
            m_crossTrackError_ (std::move(other_.m_crossTrackError_))
            ,
            m_cumulativeDistance_ (std::move(other_.m_cumulativeDistance_))
            ,
            m_distanceRemaining_ (std::move(other_.m_distanceRemaining_))
            ,
            m_distanceToWaypoint_ (std::move(other_.m_distanceToWaypoint_))
            ,
            m_elevationAchieved_ (std::move(other_.m_elevationAchieved_))
            ,
            m_maintainTrack_ (std::move(other_.m_maintainTrack_))
            ,
            m_speedAchieved_ (std::move(other_.m_speedAchieved_))
            ,
            m_timeToWaypoint_ (std::move(other_.m_timeToWaypoint_))
            ,
            m_trackLineAchieved_ (std::move(other_.m_trackLineAchieved_))
            ,
            m_waypointsRemaining_ (std::move(other_.m_waypointsRemaining_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            ,
            m_waypointID_ (std::move(other_.m_waypointID_))
            {
            } 

            LocalWaypointExecutionStatusReportType& LocalWaypointExecutionStatusReportType::operator=(LocalWaypointExecutionStatusReportType&&  other_) OMG_NOEXCEPT {
                LocalWaypointExecutionStatusReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LocalWaypointExecutionStatusReportType::swap(LocalWaypointExecutionStatusReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_arrivalTime_, other_.m_arrivalTime_);
                swap(m_crossTrackError_, other_.m_crossTrackError_);
                swap(m_cumulativeDistance_, other_.m_cumulativeDistance_);
                swap(m_distanceRemaining_, other_.m_distanceRemaining_);
                swap(m_distanceToWaypoint_, other_.m_distanceToWaypoint_);
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_maintainTrack_, other_.m_maintainTrack_);
                swap(m_speedAchieved_, other_.m_speedAchieved_);
                swap(m_timeToWaypoint_, other_.m_timeToWaypoint_);
                swap(m_trackLineAchieved_, other_.m_trackLineAchieved_);
                swap(m_waypointsRemaining_, other_.m_waypointsRemaining_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_waypointID_, other_.m_waypointID_);
            }  

            bool LocalWaypointExecutionStatusReportType::operator == (const LocalWaypointExecutionStatusReportType& other_) const {
                if (m_arrivalTime_ != other_.m_arrivalTime_) {
                    return false;
                }
                if (m_crossTrackError_ != other_.m_crossTrackError_) {
                    return false;
                }
                if (m_cumulativeDistance_ != other_.m_cumulativeDistance_) {
                    return false;
                }
                if (m_distanceRemaining_ != other_.m_distanceRemaining_) {
                    return false;
                }
                if (m_distanceToWaypoint_ != other_.m_distanceToWaypoint_) {
                    return false;
                }
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                if (m_maintainTrack_ != other_.m_maintainTrack_) {
                    return false;
                }
                if (m_speedAchieved_ != other_.m_speedAchieved_) {
                    return false;
                }
                if (m_timeToWaypoint_ != other_.m_timeToWaypoint_) {
                    return false;
                }
                if (m_trackLineAchieved_ != other_.m_trackLineAchieved_) {
                    return false;
                }
                if (m_waypointsRemaining_ != other_.m_waypointsRemaining_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_waypointID_ != other_.m_waypointID_) {
                    return false;
                }
                return true;
            }
            bool LocalWaypointExecutionStatusReportType::operator != (const LocalWaypointExecutionStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalWaypointExecutionStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "arrivalTime: " << sample.arrivalTime()<<", ";
                o << "crossTrackError: " << std::setprecision(15) <<sample.crossTrackError()<<", ";
                o << "cumulativeDistance: " << std::setprecision(15) <<sample.cumulativeDistance()<<", ";
                o << "distanceRemaining: " << std::setprecision(15) <<sample.distanceRemaining()<<", ";
                o << "distanceToWaypoint: " << std::setprecision(15) <<sample.distanceToWaypoint()<<", ";
                o << "elevationAchieved: " << sample.elevationAchieved()<<", ";
                o << "maintainTrack: " << sample.maintainTrack()<<", ";
                o << "speedAchieved: " << sample.speedAchieved()<<", ";
                o << "timeToWaypoint: " << sample.timeToWaypoint()<<", ";
                o << "trackLineAchieved: " << sample.trackLineAchieved()<<", ";
                o << "waypointsRemaining: " << sample.waypointsRemaining()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sessionID: " << sample.sessionID()<<", ";
                o << "waypointID: " << sample.waypointID() ;
                o <<"]";
                return o;
            }

        } // namespace LocalWaypointControl  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalWaypointExecutionStatusReportType_g_tc_members[14]=
                {

                    {
                        (char *)"arrivalTime",/* Member name */
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
                        (char *)"crossTrackError",/* Member name */
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
                        (char *)"cumulativeDistance",/* Member name */
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
                        (char *)"distanceRemaining",/* Member name */
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
                        (char *)"distanceToWaypoint",/* Member name */
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
                        (char *)"elevationAchieved",/* Member name */
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
                        (char *)"maintainTrack",/* Member name */
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
                        (char *)"speedAchieved",/* Member name */
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
                        (char *)"timeToWaypoint",/* Member name */
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
                        (char *)"trackLineAchieved",/* Member name */
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
                        (char *)"waypointsRemaining",/* Member name */
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
                    }, 
                    {
                        (char *)"waypointID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LocalWaypointExecutionStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        LocalWaypointExecutionStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalWaypointExecutionStatusReportType*/

                if (is_initialized) {
                    return &LocalWaypointExecutionStatusReportType_g_tc;
                }

                LocalWaypointExecutionStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalWaypointExecutionStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                LocalWaypointExecutionStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalWaypointExecutionStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalWaypointExecutionStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalWaypointExecutionStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalWaypointExecutionStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalWaypointExecutionStatusReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalWaypointExecutionStatusReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalWaypointExecutionStatusReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                LocalWaypointExecutionStatusReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LocalWaypointExecutionStatusReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                LocalWaypointExecutionStatusReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LocalWaypointExecutionStatusReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LocalWaypointExecutionStatusReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                LocalWaypointExecutionStatusReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                LocalWaypointExecutionStatusReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                LocalWaypointExecutionStatusReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalWaypointExecutionStatusReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                LocalWaypointExecutionStatusReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                LocalWaypointExecutionStatusReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                LocalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                LocalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                LocalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                LocalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalWaypointExecutionStatusReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalWaypointExecutionStatusReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;

                LocalWaypointExecutionStatusReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalWaypointExecutionStatusReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;

                LocalWaypointExecutionStatusReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalWaypointExecutionStatusReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;

                LocalWaypointExecutionStatusReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LocalWaypointExecutionStatusReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;

                LocalWaypointExecutionStatusReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                LocalWaypointExecutionStatusReportType_g_tc_members[10]._annotations._defaultValue._u.long_value = 0;
                LocalWaypointExecutionStatusReportType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                LocalWaypointExecutionStatusReportType_g_tc_members[10]._annotations._minValue._u.long_value = -2147483648L;
                LocalWaypointExecutionStatusReportType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                LocalWaypointExecutionStatusReportType_g_tc_members[10]._annotations._maxValue._u.long_value = 2147483647L;

                LocalWaypointExecutionStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalWaypointExecutionStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalWaypointExecutionStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType *sample;

                static RTIXCdrMemberAccessInfo LocalWaypointExecutionStatusReportType_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalWaypointExecutionStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalWaypointExecutionStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->arrivalTime() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->crossTrackError() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cumulativeDistance() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distanceRemaining() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distanceToWaypoint() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maintainTrack() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedAchieved() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeToWaypoint() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trackLineAchieved() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointsRemaining() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointID() - (char *)sample);

                LocalWaypointExecutionStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                LocalWaypointExecutionStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalWaypointExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalWaypointExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalWaypointExecutionStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalWaypointExecutionStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType >;

                LocalWaypointExecutionStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalWaypointExecutionStatusReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalWaypointExecutionStatusReportType_g_typePlugin = 
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

                return &LocalWaypointExecutionStatusReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportTypePlugin_new,
                UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalWaypointExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalWaypointExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType >::from_cdr_buffer(UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalWaypointExecutionStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType >::reset_sample(UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.arrivalTime());
            sample.crossTrackError(0.0);
            sample.cumulativeDistance(0.0);
            sample.distanceRemaining(0.0);
            sample.distanceToWaypoint(0.0);
            sample.elevationAchieved(0);
            sample.maintainTrack(0);
            sample.speedAchieved(0);
            ::rti::topic::reset_sample(sample.timeToWaypoint());
            sample.trackLineAchieved(0);
            sample.waypointsRemaining(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.waypointID());
        }

        void topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType >::allocate_sample(UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.arrivalTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeToWaypoint(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.waypointID(),  -1, -1);
        }

    }
}  

