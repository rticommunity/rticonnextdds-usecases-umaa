

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointExecutionStatusReportType.idl
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
#include "GlobalWaypointExecutionStatusReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GlobalWaypointExecutionStatusReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalWaypointControl {

            // ---- GlobalWaypointExecutionStatusReportType: 

            GlobalWaypointExecutionStatusReportType::GlobalWaypointExecutionStatusReportType() :
                m_cumulativeDistance_ (0.0) ,
                m_distanceRemaining_ (0.0) ,
                m_distanceToWaypoint_ (0.0) ,
                m_elevationAchieved_ (0) ,
                m_positionAchieved_ (0) ,
                m_speedAchieved_ (0) ,
                m_trackLineAchieved_ (0) ,
                m_waypointsRemaining_ (0)  {

            }   

            GlobalWaypointExecutionStatusReportType::GlobalWaypointExecutionStatusReportType (const ::UMAA::Common::Measurement::DateTime& arrivalTime_,const ::dds::core::optional< bool >& attitudeAchieved_,const ::dds::core::optional< double >& crossTrackError_,double cumulativeDistance_,double distanceRemaining_,double distanceToWaypoint_,bool elevationAchieved_,bool positionAchieved_,bool speedAchieved_,const ::UMAA::Common::Measurement::DateTime& timeToWaypoint_,bool trackLineAchieved_,const ::UMAA::Common::Measurement::NumericGUID& waypointID_,int32_t waypointsRemaining_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_):
                m_arrivalTime_(arrivalTime_), 
                m_attitudeAchieved_(attitudeAchieved_), 
                m_crossTrackError_(crossTrackError_), 
                m_cumulativeDistance_(cumulativeDistance_), 
                m_distanceRemaining_(distanceRemaining_), 
                m_distanceToWaypoint_(distanceToWaypoint_), 
                m_elevationAchieved_(elevationAchieved_), 
                m_positionAchieved_(positionAchieved_), 
                m_speedAchieved_(speedAchieved_), 
                m_timeToWaypoint_(timeToWaypoint_), 
                m_trackLineAchieved_(trackLineAchieved_), 
                m_waypointID_(waypointID_), 
                m_waypointsRemaining_(waypointsRemaining_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_sessionID_(sessionID_) {
            }

            void GlobalWaypointExecutionStatusReportType::swap(GlobalWaypointExecutionStatusReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_arrivalTime_, other_.m_arrivalTime_);
                swap(m_attitudeAchieved_, other_.m_attitudeAchieved_);
                swap(m_crossTrackError_, other_.m_crossTrackError_);
                swap(m_cumulativeDistance_, other_.m_cumulativeDistance_);
                swap(m_distanceRemaining_, other_.m_distanceRemaining_);
                swap(m_distanceToWaypoint_, other_.m_distanceToWaypoint_);
                swap(m_elevationAchieved_, other_.m_elevationAchieved_);
                swap(m_positionAchieved_, other_.m_positionAchieved_);
                swap(m_speedAchieved_, other_.m_speedAchieved_);
                swap(m_timeToWaypoint_, other_.m_timeToWaypoint_);
                swap(m_trackLineAchieved_, other_.m_trackLineAchieved_);
                swap(m_waypointID_, other_.m_waypointID_);
                swap(m_waypointsRemaining_, other_.m_waypointsRemaining_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool GlobalWaypointExecutionStatusReportType::operator == (const GlobalWaypointExecutionStatusReportType& other_) const {
                if (m_arrivalTime_ != other_.m_arrivalTime_) {
                    return false;
                }
                if (m_attitudeAchieved_ != other_.m_attitudeAchieved_) {
                    return false;
                }
                if (m_crossTrackError_.has_value() != other_.m_crossTrackError_.has_value()) {
                    return false;
                } else if (m_crossTrackError_.has_value()) {
                    if (std::fabs(*m_crossTrackError_ - *other_.m_crossTrackError_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_crossTrackError_ - *other_.m_crossTrackError_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_cumulativeDistance_ - other_.m_cumulativeDistance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_cumulativeDistance_ - other_.m_cumulativeDistance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_distanceRemaining_ - other_.m_distanceRemaining_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_distanceRemaining_ - other_.m_distanceRemaining_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_distanceToWaypoint_ - other_.m_distanceToWaypoint_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_distanceToWaypoint_ - other_.m_distanceToWaypoint_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_elevationAchieved_ != other_.m_elevationAchieved_) {
                    return false;
                }
                if (m_positionAchieved_ != other_.m_positionAchieved_) {
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
                if (m_waypointID_ != other_.m_waypointID_) {
                    return false;
                }
                if (m_waypointsRemaining_ != other_.m_waypointsRemaining_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
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

            bool GlobalWaypointExecutionStatusReportType::operator != (const GlobalWaypointExecutionStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalWaypointExecutionStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "arrivalTime: " << sample.arrivalTime ()<<", ";
                o << "attitudeAchieved: " << sample.attitudeAchieved ()<<", ";
                o << "crossTrackError: " << sample.crossTrackError ()<<", ";
                o << "cumulativeDistance: " << std::setprecision(15) << sample.cumulativeDistance ()<<", ";
                o << "distanceRemaining: " << std::setprecision(15) << sample.distanceRemaining ()<<", ";
                o << "distanceToWaypoint: " << std::setprecision(15) << sample.distanceToWaypoint ()<<", ";
                o << "elevationAchieved: " << sample.elevationAchieved ()<<", ";
                o << "positionAchieved: " << sample.positionAchieved ()<<", ";
                o << "speedAchieved: " << sample.speedAchieved ()<<", ";
                o << "timeToWaypoint: " << sample.timeToWaypoint ()<<", ";
                o << "trackLineAchieved: " << sample.trackLineAchieved ()<<", ";
                o << "waypointID: " << sample.waypointID ()<<", ";
                o << "waypointsRemaining: " << sample.waypointsRemaining ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ();
                o <<"]";
                return o;
            }

        } // namespace GlobalWaypointControl  

    } // namespace MO  

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
        struct native_type_code< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalWaypointExecutionStatusReportType_g_tc_members[16]=
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
                        (char *)"attitudeAchieved",/* Member name */
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
                        (char *)"crossTrackError",/* Member name */
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
                        (char *)"cumulativeDistance",/* Member name */
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
                        (char *)"distanceRemaining",/* Member name */
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
                        (char *)"distanceToWaypoint",/* Member name */
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
                        (char *)"elevationAchieved",/* Member name */
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
                        (char *)"positionAchieved",/* Member name */
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
                        (char *)"speedAchieved",/* Member name */
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
                        (char *)"timeToWaypoint",/* Member name */
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
                        (char *)"trackLineAchieved",/* Member name */
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
                        (char *)"waypointID",/* Member name */
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
                        (char *)"waypointsRemaining",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sessionID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GlobalWaypointExecutionStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        16, /* Number of members */
                        GlobalWaypointExecutionStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalWaypointExecutionStatusReportType*/

                if (is_initialized) {
                    return &GlobalWaypointExecutionStatusReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalWaypointExecutionStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalWaypointExecutionStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                GlobalWaypointExecutionStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalWaypointExecutionStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                GlobalWaypointExecutionStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                GlobalWaypointExecutionStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                GlobalWaypointExecutionStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                GlobalWaypointExecutionStatusReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalWaypointExecutionStatusReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalWaypointExecutionStatusReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalWaypointExecutionStatusReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                GlobalWaypointExecutionStatusReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                GlobalWaypointExecutionStatusReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                GlobalWaypointExecutionStatusReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                GlobalWaypointExecutionStatusReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                GlobalWaypointExecutionStatusReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                GlobalWaypointExecutionStatusReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                GlobalWaypointExecutionStatusReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GlobalWaypointExecutionStatusReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GlobalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                GlobalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GlobalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GlobalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                GlobalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GlobalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GlobalWaypointExecutionStatusReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                GlobalWaypointExecutionStatusReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GlobalWaypointExecutionStatusReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GlobalWaypointExecutionStatusReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                GlobalWaypointExecutionStatusReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalWaypointExecutionStatusReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
                GlobalWaypointExecutionStatusReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalWaypointExecutionStatusReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
                GlobalWaypointExecutionStatusReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalWaypointExecutionStatusReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
                GlobalWaypointExecutionStatusReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                GlobalWaypointExecutionStatusReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
                GlobalWaypointExecutionStatusReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                GlobalWaypointExecutionStatusReportType_g_tc_members[12]._annotations._defaultValue._u.long_value = 0;
                GlobalWaypointExecutionStatusReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GlobalWaypointExecutionStatusReportType_g_tc_members[12]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GlobalWaypointExecutionStatusReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GlobalWaypointExecutionStatusReportType_g_tc_members[12]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GlobalWaypointExecutionStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalWaypointExecutionStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalWaypointExecutionStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType *sample;

                static RTIXCdrMemberAccessInfo GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[16] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalWaypointExecutionStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalWaypointExecutionStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->arrivalTime() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->attitudeAchieved() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->crossTrackError() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cumulativeDistance() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distanceRemaining() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distanceToWaypoint() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationAchieved() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionAchieved() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedAchieved() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeToWaypoint() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trackLineAchieved() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointID() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointsRemaining() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                GlobalWaypointExecutionStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalWaypointExecutionStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalWaypointExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalWaypointExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalWaypointExecutionStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalWaypointExecutionStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType >;

                GlobalWaypointExecutionStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalWaypointExecutionStatusReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalWaypointExecutionStatusReportType_g_typePlugin = 
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

                return &GlobalWaypointExecutionStatusReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportTypePlugin_new,
                ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalWaypointExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalWaypointExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType >::from_cdr_buffer(::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalWaypointExecutionStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType >::reset_sample(::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.arrivalTime());
            ::rti::topic::reset_sample(sample.attitudeAchieved());
            ::rti::topic::reset_sample(sample.crossTrackError());
            sample.cumulativeDistance(0.0);
            sample.distanceRemaining(0.0);
            sample.distanceToWaypoint(0.0);
            sample.elevationAchieved(0);
            sample.positionAchieved(0);
            sample.speedAchieved(0);
            ::rti::topic::reset_sample(sample.timeToWaypoint());
            sample.trackLineAchieved(0);
            ::rti::topic::reset_sample(sample.waypointID());
            sample.waypointsRemaining(0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType >::allocate_sample(::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.arrivalTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeToWaypoint(),  -1, -1);
            ::rti::topic::allocate_sample(sample.waypointID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
