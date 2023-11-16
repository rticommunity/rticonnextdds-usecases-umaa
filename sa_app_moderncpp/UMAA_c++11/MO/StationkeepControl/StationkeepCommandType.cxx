

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepCommandType.idl
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
#include "StationkeepCommandTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "StationkeepCommandType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace StationkeepControl {

            // ---- StationkeepCommandType: 

            StationkeepCommandType::StationkeepCommandType() :
                m_angleType_(UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType::OWNSHIP) ,
                m_bearing_ (0.0) ,
                m_bearingTolerance_ (0.0) ,
                m_closingSpeed_ (0.0) ,
                m_range_ (0.0) ,
                m_rangeTolerance_ (0.0) ,
                m_transitSpeedTolerance_ (0.0)  {

            }   

            StationkeepCommandType::StationkeepCommandType (const ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& angleType_,double bearing_,double bearingTolerance_,double closingSpeed_,const ::UMAA::Common::Measurement::NumericGUID& contactTrackID_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime_,double range_,double rangeTolerance_,const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed_,double transitSpeedTolerance_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& destination_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_angleType_(angleType_), 
                m_bearing_(bearing_), 
                m_bearingTolerance_(bearingTolerance_), 
                m_closingSpeed_(closingSpeed_), 
                m_contactTrackID_(contactTrackID_), 
                m_endTime_(endTime_), 
                m_range_(range_), 
                m_rangeTolerance_(rangeTolerance_), 
                m_transitSpeed_(transitSpeed_), 
                m_transitSpeedTolerance_(transitSpeedTolerance_), 
                m_source_(source_), 
                m_destination_(destination_), 
                m_sessionID_(sessionID_), 
                m_timeStamp_(timeStamp_) {
            }

            void StationkeepCommandType::swap(StationkeepCommandType& other_)  noexcept 
            {
                using std::swap;
                swap(m_angleType_, other_.m_angleType_);
                swap(m_bearing_, other_.m_bearing_);
                swap(m_bearingTolerance_, other_.m_bearingTolerance_);
                swap(m_closingSpeed_, other_.m_closingSpeed_);
                swap(m_contactTrackID_, other_.m_contactTrackID_);
                swap(m_endTime_, other_.m_endTime_);
                swap(m_range_, other_.m_range_);
                swap(m_rangeTolerance_, other_.m_rangeTolerance_);
                swap(m_transitSpeed_, other_.m_transitSpeed_);
                swap(m_transitSpeedTolerance_, other_.m_transitSpeedTolerance_);
                swap(m_source_, other_.m_source_);
                swap(m_destination_, other_.m_destination_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool StationkeepCommandType::operator == (const StationkeepCommandType& other_) const {
                if (m_angleType_ != other_.m_angleType_) {
                    return false;
                }
                if (std::fabs(m_bearing_ - other_.m_bearing_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearing_ - other_.m_bearing_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_bearingTolerance_ - other_.m_bearingTolerance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearingTolerance_ - other_.m_bearingTolerance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_closingSpeed_ - other_.m_closingSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_closingSpeed_ - other_.m_closingSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_contactTrackID_ != other_.m_contactTrackID_) {
                    return false;
                }
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                if (std::fabs(m_range_ - other_.m_range_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_range_ - other_.m_range_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rangeTolerance_ - other_.m_rangeTolerance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rangeTolerance_ - other_.m_rangeTolerance_) < (std::numeric_limits< double>::min)())) {
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
                if (m_destination_ != other_.m_destination_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }

            bool StationkeepCommandType::operator != (const StationkeepCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const StationkeepCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "angleType: " << sample.angleType ()<<", ";
                o << "bearing: " << std::setprecision(15) << sample.bearing ()<<", ";
                o << "bearingTolerance: " << std::setprecision(15) << sample.bearingTolerance ()<<", ";
                o << "closingSpeed: " << std::setprecision(15) << sample.closingSpeed ()<<", ";
                o << "contactTrackID: " << sample.contactTrackID ()<<", ";
                o << "endTime: " << sample.endTime ()<<", ";
                o << "range: " << std::setprecision(15) << sample.range ()<<", ";
                o << "rangeTolerance: " << std::setprecision(15) << sample.rangeTolerance ()<<", ";
                o << "transitSpeed: " << sample.transitSpeed ()<<", ";
                o << "transitSpeedTolerance: " << std::setprecision(15) << sample.transitSpeedTolerance ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "destination: " << sample.destination ()<<", ";
                o << "sessionID: " << sample.sessionID ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace StationkeepControl  

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
        struct native_type_code< ::UMAA::MO::StationkeepControl::StationkeepCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StationkeepCommandType_g_tc_members[14]=
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
                        (char *)"contactTrackID",/* Member name */
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
                        (char *)"endTime",/* Member name */
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
                        (char *)"transitSpeed",/* Member name */
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
                        (char *)"transitSpeedTolerance",/* Member name */
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
                    }, 
                    {
                        (char *)"destination",/* Member name */
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
                    }
                };

                static DDS_TypeCode StationkeepCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::StationkeepControl::StationkeepCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        StationkeepCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for StationkeepCommandType*/

                if (is_initialized) {
                    return &StationkeepCommandType_g_tc;
                }

                is_initialized = RTI_TRUE;

                StationkeepCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                StationkeepCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType>::get().native();
                StationkeepCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                StationkeepCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                StationkeepCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                StationkeepCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                StationkeepCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                StationkeepCommandType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                StationkeepCommandType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                StationkeepCommandType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType>::get().native();
                StationkeepCommandType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                StationkeepCommandType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                StationkeepCommandType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                StationkeepCommandType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                StationkeepCommandType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                StationkeepCommandType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                StationkeepCommandType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;
                StationkeepCommandType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepCommandType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StationkeepCommandType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StationkeepCommandType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepCommandType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                StationkeepCommandType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                StationkeepCommandType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepCommandType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                StationkeepCommandType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[3]._annotations._maxValue._u.double_value = 200ULL;
                StationkeepCommandType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepCommandType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
                StationkeepCommandType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[6]._annotations._maxValue._u.double_value = 401056000ULL;
                StationkeepCommandType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepCommandType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                StationkeepCommandType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[7]._annotations._maxValue._u.double_value = 401056000ULL;
                StationkeepCommandType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                StationkeepCommandType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
                StationkeepCommandType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                StationkeepCommandType_g_tc_members[9]._annotations._maxValue._u.double_value = 200ULL;

                StationkeepCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                StationkeepCommandType_g_tc._data._typePlugin = type_plugin_info();    

                return &StationkeepCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::StationkeepControl::StationkeepCommandType *sample;

                static RTIXCdrMemberAccessInfo StationkeepCommandType_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo StationkeepCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &StationkeepCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::StationkeepControl::StationkeepCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                StationkeepCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->angleType() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearing() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingTolerance() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->closingSpeed() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactTrackID() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->range() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rangeTolerance() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeed() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeedTolerance() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                StationkeepCommandType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                StationkeepCommandType_g_sampleAccessInfo.memberAccessInfos = 
                StationkeepCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::StationkeepControl::StationkeepCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        StationkeepCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        StationkeepCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                StationkeepCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                StationkeepCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::StationkeepControl::StationkeepCommandType >;

                StationkeepCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &StationkeepCommandType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin StationkeepCommandType_g_typePlugin = 
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

                return &StationkeepCommandType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::StationkeepControl::StationkeepCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::StationkeepControl::StationkeepCommandType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::StationkeepControl::StationkeepCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::StationkeepControl::StationkeepCommandTypePlugin_new,
                ::UMAA::MO::StationkeepControl::StationkeepCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::StationkeepControl::StationkeepCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::StationkeepControl::StationkeepCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = StationkeepCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = StationkeepCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::StationkeepControl::StationkeepCommandType >::from_cdr_buffer(::UMAA::MO::StationkeepControl::StationkeepCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = StationkeepCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::StationkeepControl::StationkeepCommandType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::StationkeepControl::StationkeepCommandType >::reset_sample(::UMAA::MO::StationkeepControl::StationkeepCommandType& sample) 
        {
            sample.angleType(UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType::OWNSHIP);
            sample.bearing(0.0);
            sample.bearingTolerance(0.0);
            sample.closingSpeed(0.0);
            ::rti::topic::reset_sample(sample.contactTrackID());
            ::rti::topic::reset_sample(sample.endTime());
            sample.range(0.0);
            sample.rangeTolerance(0.0);
            ::rti::topic::reset_sample(sample.transitSpeed());
            sample.transitSpeedTolerance(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.destination());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::MO::StationkeepControl::StationkeepCommandType >::allocate_sample(::UMAA::MO::StationkeepControl::StationkeepCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.angleType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactTrackID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.transitSpeed(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
