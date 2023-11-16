

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftCommandAckReportType.idl
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
#include "LocalDriftCommandAckReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "LocalDriftCommandAckReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalDriftControl {

            // ---- LocalDriftCommandAckReportType: 

            LocalDriftCommandAckReportType::LocalDriftCommandAckReportType() :
                m_driftTolerance_ (0.0) ,
                m_elevationTolerance_ (0.0) ,
                m_positionTolerance_ (0.0) ,
                m_speedTolerance_ (0.0) ,
                m_transitElevationTolerance_ (0.0) ,
                m_transitSpeedTolerance_ (0.0)  {

            }   

            LocalDriftCommandAckReportType::LocalDriftCommandAckReportType (double driftTolerance_,const ::UMAA::Common::Measurement::ElevationType& elevation_,double elevationTolerance_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime_,const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >& position_,double positionTolerance_,const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed_,double speedTolerance_,const ::UMAA::Common::Measurement::ElevationType& transitElevation_,double transitElevationTolerance_,const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed_,double transitSpeedTolerance_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_):
                m_driftTolerance_(driftTolerance_), 
                m_elevation_(elevation_), 
                m_elevationTolerance_(elevationTolerance_), 
                m_endTime_(endTime_), 
                m_position_(position_), 
                m_positionTolerance_(positionTolerance_), 
                m_speed_(speed_), 
                m_speedTolerance_(speedTolerance_), 
                m_transitElevation_(transitElevation_), 
                m_transitElevationTolerance_(transitElevationTolerance_), 
                m_transitSpeed_(transitSpeed_), 
                m_transitSpeedTolerance_(transitSpeedTolerance_), 
                m_source_(source_), 
                m_sessionID_(sessionID_) {
            }

            void LocalDriftCommandAckReportType::swap(LocalDriftCommandAckReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_driftTolerance_, other_.m_driftTolerance_);
                swap(m_elevation_, other_.m_elevation_);
                swap(m_elevationTolerance_, other_.m_elevationTolerance_);
                swap(m_endTime_, other_.m_endTime_);
                swap(m_position_, other_.m_position_);
                swap(m_positionTolerance_, other_.m_positionTolerance_);
                swap(m_speed_, other_.m_speed_);
                swap(m_speedTolerance_, other_.m_speedTolerance_);
                swap(m_transitElevation_, other_.m_transitElevation_);
                swap(m_transitElevationTolerance_, other_.m_transitElevationTolerance_);
                swap(m_transitSpeed_, other_.m_transitSpeed_);
                swap(m_transitSpeedTolerance_, other_.m_transitSpeedTolerance_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool LocalDriftCommandAckReportType::operator == (const LocalDriftCommandAckReportType& other_) const {
                if (std::fabs(m_driftTolerance_ - other_.m_driftTolerance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_driftTolerance_ - other_.m_driftTolerance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_elevation_ != other_.m_elevation_) {
                    return false;
                }
                if (std::fabs(m_elevationTolerance_ - other_.m_elevationTolerance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_elevationTolerance_ - other_.m_elevationTolerance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (std::fabs(m_positionTolerance_ - other_.m_positionTolerance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_positionTolerance_ - other_.m_positionTolerance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_speed_ != other_.m_speed_) {
                    return false;
                }
                if (std::fabs(m_speedTolerance_ - other_.m_speedTolerance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_speedTolerance_ - other_.m_speedTolerance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_transitElevation_ != other_.m_transitElevation_) {
                    return false;
                }
                if (std::fabs(m_transitElevationTolerance_ - other_.m_transitElevationTolerance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_transitElevationTolerance_ - other_.m_transitElevationTolerance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_transitSpeed_ != other_.m_transitSpeed_) {
                    return false;
                }
                if (std::fabs(m_transitSpeedTolerance_ - other_.m_transitSpeedTolerance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_transitSpeedTolerance_ - other_.m_transitSpeedTolerance_) < (std::numeric_limits< double>::min)())) {
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

            bool LocalDriftCommandAckReportType::operator != (const LocalDriftCommandAckReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalDriftCommandAckReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "driftTolerance: " << std::setprecision(15) << sample.driftTolerance ()<<", ";
                o << "elevation: " << sample.elevation ()<<", ";
                o << "elevationTolerance: " << std::setprecision(15) << sample.elevationTolerance ()<<", ";
                o << "endTime: " << sample.endTime ()<<", ";
                o << "position: " << sample.position ()<<", ";
                o << "positionTolerance: " << std::setprecision(15) << sample.positionTolerance ()<<", ";
                o << "speed: " << sample.speed ()<<", ";
                o << "speedTolerance: " << std::setprecision(15) << sample.speedTolerance ()<<", ";
                o << "transitElevation: " << sample.transitElevation ()<<", ";
                o << "transitElevationTolerance: " << std::setprecision(15) << sample.transitElevationTolerance ()<<", ";
                o << "transitSpeed: " << sample.transitSpeed ()<<", ";
                o << "transitSpeedTolerance: " << std::setprecision(15) << sample.transitSpeedTolerance ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ();
                o <<"]";
                return o;
            }

        } // namespace LocalDriftControl  

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
        struct native_type_code< ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalDriftCommandAckReportType_g_tc_members[14]=
                {

                    {
                        (char *)"driftTolerance",/* Member name */
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
                        (char *)"elevation",/* Member name */
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
                        (char *)"elevationTolerance",/* Member name */
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
                        (char *)"endTime",/* Member name */
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
                        (char *)"position",/* Member name */
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
                        (char *)"positionTolerance",/* Member name */
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
                        (char *)"speed",/* Member name */
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
                        (char *)"speedTolerance",/* Member name */
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
                        (char *)"transitElevation",/* Member name */
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
                        (char *)"transitElevationTolerance",/* Member name */
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
                        (char *)"transitSpeed",/* Member name */
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
                        (char *)"transitSpeedTolerance",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        (char *)"sessionID",/* Member name */
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

                static DDS_TypeCode LocalDriftCommandAckReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        LocalDriftCommandAckReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalDriftCommandAckReportType*/

                if (is_initialized) {
                    return &LocalDriftCommandAckReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalDriftCommandAckReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalDriftCommandAckReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationType>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position2D_PlatformXYZ>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ElevationType>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LocalDriftCommandAckReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                LocalDriftCommandAckReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                LocalDriftCommandAckReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                LocalDriftCommandAckReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;
                LocalDriftCommandAckReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                LocalDriftCommandAckReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                LocalDriftCommandAckReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
                LocalDriftCommandAckReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                LocalDriftCommandAckReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                LocalDriftCommandAckReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[5]._annotations._maxValue._u.double_value = 401056000ULL;
                LocalDriftCommandAckReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                LocalDriftCommandAckReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                LocalDriftCommandAckReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 200ULL;
                LocalDriftCommandAckReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                LocalDriftCommandAckReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
                LocalDriftCommandAckReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[9]._annotations._maxValue._u.double_value = 401056000ULL;
                LocalDriftCommandAckReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                LocalDriftCommandAckReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
                LocalDriftCommandAckReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftCommandAckReportType_g_tc_members[11]._annotations._maxValue._u.double_value = 200ULL;

                LocalDriftCommandAckReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalDriftCommandAckReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalDriftCommandAckReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType *sample;

                static RTIXCdrMemberAccessInfo LocalDriftCommandAckReportType_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalDriftCommandAckReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalDriftCommandAckReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalDriftCommandAckReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->driftTolerance() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevation() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationTolerance() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionTolerance() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedTolerance() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitElevation() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitElevationTolerance() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeed() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeedTolerance() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                LocalDriftCommandAckReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                LocalDriftCommandAckReportType_g_sampleAccessInfo.memberAccessInfos = 
                LocalDriftCommandAckReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalDriftCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalDriftCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalDriftCommandAckReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalDriftCommandAckReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType >;

                LocalDriftCommandAckReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalDriftCommandAckReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalDriftCommandAckReportType_g_typePlugin = 
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

                return &LocalDriftCommandAckReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportTypePlugin_new,
                ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalDriftCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalDriftCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType >::from_cdr_buffer(::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalDriftCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType >::reset_sample(::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType& sample) 
        {
            sample.driftTolerance(0.0);
            ::rti::topic::reset_sample(sample.elevation());
            sample.elevationTolerance(0.0);
            ::rti::topic::reset_sample(sample.endTime());
            ::rti::topic::reset_sample(sample.position());
            sample.positionTolerance(0.0);
            ::rti::topic::reset_sample(sample.speed());
            sample.speedTolerance(0.0);
            ::rti::topic::reset_sample(sample.transitElevation());
            sample.transitElevationTolerance(0.0);
            ::rti::topic::reset_sample(sample.transitSpeed());
            sample.transitSpeedTolerance(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< ::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType >::allocate_sample(::UMAA::MO::LocalDriftControl::LocalDriftCommandAckReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.elevation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.speed(),  -1, -1);
            ::rti::topic::allocate_sample(sample.transitElevation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.transitSpeed(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
