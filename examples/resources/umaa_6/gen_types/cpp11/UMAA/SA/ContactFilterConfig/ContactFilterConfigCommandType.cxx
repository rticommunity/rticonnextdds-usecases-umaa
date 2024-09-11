

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactFilterConfigCommandType.idl
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
#include "ContactFilterConfigCommandTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ContactFilterConfigCommandType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace ContactFilterConfig {

            // ---- ContactFilterConfigCommandType: 

            ContactFilterConfigCommandType::ContactFilterConfigCommandType() :
                m_bearingChangeLimit_ (0.0) ,
                m_headingChangeLimit_ (0.0) ,
                m_noChangeTimerUpdate_ (0.0) ,
                m_positionChangeLimit_ (0.0) ,
                m_rangeChangeLimit_ (0.0) ,
                m_speedChangeLimit_ (0.0) ,
                m_withinRangeofOwnship_ (0.0)  {

            }   

            ContactFilterConfigCommandType::ContactFilterConfigCommandType (double bearingChangeLimit_,double headingChangeLimit_,const ::UMAA::Common::Measurement::NumericGUID& messageFilterID_,double noChangeTimerUpdate_,double positionChangeLimit_,double rangeChangeLimit_,double speedChangeLimit_,double withinRangeofOwnship_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::IdentifierType& destination_):
                m_bearingChangeLimit_(bearingChangeLimit_), 
                m_headingChangeLimit_(headingChangeLimit_), 
                m_messageFilterID_(messageFilterID_), 
                m_noChangeTimerUpdate_(noChangeTimerUpdate_), 
                m_positionChangeLimit_(positionChangeLimit_), 
                m_rangeChangeLimit_(rangeChangeLimit_), 
                m_speedChangeLimit_(speedChangeLimit_), 
                m_withinRangeofOwnship_(withinRangeofOwnship_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_sessionID_(sessionID_), 
                m_destination_(destination_) {
            }

            void ContactFilterConfigCommandType::swap(ContactFilterConfigCommandType& other_)  noexcept 
            {
                using std::swap;
                swap(m_bearingChangeLimit_, other_.m_bearingChangeLimit_);
                swap(m_headingChangeLimit_, other_.m_headingChangeLimit_);
                swap(m_messageFilterID_, other_.m_messageFilterID_);
                swap(m_noChangeTimerUpdate_, other_.m_noChangeTimerUpdate_);
                swap(m_positionChangeLimit_, other_.m_positionChangeLimit_);
                swap(m_rangeChangeLimit_, other_.m_rangeChangeLimit_);
                swap(m_speedChangeLimit_, other_.m_speedChangeLimit_);
                swap(m_withinRangeofOwnship_, other_.m_withinRangeofOwnship_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_destination_, other_.m_destination_);
            }  

            bool ContactFilterConfigCommandType::operator == (const ContactFilterConfigCommandType& other_) const {
                if (std::fabs(m_bearingChangeLimit_ - other_.m_bearingChangeLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearingChangeLimit_ - other_.m_bearingChangeLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_headingChangeLimit_ - other_.m_headingChangeLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_headingChangeLimit_ - other_.m_headingChangeLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_messageFilterID_ != other_.m_messageFilterID_) {
                    return false;
                }
                if (std::fabs(m_noChangeTimerUpdate_ - other_.m_noChangeTimerUpdate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_noChangeTimerUpdate_ - other_.m_noChangeTimerUpdate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_positionChangeLimit_ - other_.m_positionChangeLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_positionChangeLimit_ - other_.m_positionChangeLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_rangeChangeLimit_ - other_.m_rangeChangeLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_rangeChangeLimit_ - other_.m_rangeChangeLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_speedChangeLimit_ - other_.m_speedChangeLimit_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_speedChangeLimit_ - other_.m_speedChangeLimit_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_withinRangeofOwnship_ - other_.m_withinRangeofOwnship_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_withinRangeofOwnship_ - other_.m_withinRangeofOwnship_) < (std::numeric_limits< double>::min)())) {
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
                if (m_destination_ != other_.m_destination_) {
                    return false;
                }
                return true;
            }

            bool ContactFilterConfigCommandType::operator != (const ContactFilterConfigCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ContactFilterConfigCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bearingChangeLimit: " << std::setprecision(15) << sample.bearingChangeLimit ()<<", ";
                o << "headingChangeLimit: " << std::setprecision(15) << sample.headingChangeLimit ()<<", ";
                o << "messageFilterID: " << sample.messageFilterID ()<<", ";
                o << "noChangeTimerUpdate: " << std::setprecision(15) << sample.noChangeTimerUpdate ()<<", ";
                o << "positionChangeLimit: " << std::setprecision(15) << sample.positionChangeLimit ()<<", ";
                o << "rangeChangeLimit: " << std::setprecision(15) << sample.rangeChangeLimit ()<<", ";
                o << "speedChangeLimit: " << std::setprecision(15) << sample.speedChangeLimit ()<<", ";
                o << "withinRangeofOwnship: " << std::setprecision(15) << sample.withinRangeofOwnship ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ()<<", ";
                o << "destination: " << sample.destination ();
                o <<"]";
                return o;
            }

        } // namespace ContactFilterConfig  

    } // namespace SA  

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
        struct native_type_code< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContactFilterConfigCommandType_g_tc_members[12]=
                {

                    {
                        (char *)"bearingChangeLimit",/* Member name */
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
                        (char *)"headingChangeLimit",/* Member name */
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
                        (char *)"messageFilterID",/* Member name */
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
                        (char *)"noChangeTimerUpdate",/* Member name */
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
                        (char *)"positionChangeLimit",/* Member name */
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
                        (char *)"rangeChangeLimit",/* Member name */
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
                        (char *)"speedChangeLimit",/* Member name */
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
                        (char *)"withinRangeofOwnship",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"sessionID",/* Member name */
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
                    }
                };

                static DDS_TypeCode ContactFilterConfigCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        ContactFilterConfigCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContactFilterConfigCommandType*/

                if (is_initialized) {
                    return &ContactFilterConfigCommandType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContactFilterConfigCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContactFilterConfigCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                ContactFilterConfigCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                ContactFilterConfigCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ContactFilterConfigCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t>::get().native();
                ContactFilterConfigCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContactFilterConfigCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContactFilterConfigCommandType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                ContactFilterConfigCommandType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContactFilterConfigCommandType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ContactFilterConfigCommandType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                ContactFilterConfigCommandType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ContactFilterConfigCommandType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                ContactFilterConfigCommandType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                ContactFilterConfigCommandType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactFilterConfigCommandType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactFilterConfigCommandType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                ContactFilterConfigCommandType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactFilterConfigCommandType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactFilterConfigCommandType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                ContactFilterConfigCommandType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactFilterConfigCommandType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactFilterConfigCommandType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                ContactFilterConfigCommandType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactFilterConfigCommandType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactFilterConfigCommandType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                ContactFilterConfigCommandType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactFilterConfigCommandType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactFilterConfigCommandType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                ContactFilterConfigCommandType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactFilterConfigCommandType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactFilterConfigCommandType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                ContactFilterConfigCommandType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactFilterConfigCommandType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactFilterConfigCommandType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ContactFilterConfigCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactFilterConfigCommandType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContactFilterConfigCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType *sample;

                static RTIXCdrMemberAccessInfo ContactFilterConfigCommandType_g_memberAccessInfos[12] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactFilterConfigCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactFilterConfigCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                ContactFilterConfigCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingChangeLimit() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->headingChangeLimit() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageFilterID() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->noChangeTimerUpdate() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionChangeLimit() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rangeChangeLimit() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedChangeLimit() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->withinRangeofOwnship() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                ContactFilterConfigCommandType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                ContactFilterConfigCommandType_g_sampleAccessInfo.memberAccessInfos = 
                ContactFilterConfigCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContactFilterConfigCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContactFilterConfigCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContactFilterConfigCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContactFilterConfigCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType >;

                ContactFilterConfigCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContactFilterConfigCommandType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContactFilterConfigCommandType_g_typePlugin = 
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

                return &ContactFilterConfigCommandType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandTypePlugin_new,
                ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ContactFilterConfigCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ContactFilterConfigCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType >::from_cdr_buffer(::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ContactFilterConfigCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType >::reset_sample(::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType& sample) 
        {
            sample.bearingChangeLimit(0.0);
            sample.headingChangeLimit(0.0);
            ::rti::topic::reset_sample(sample.messageFilterID());
            sample.noChangeTimerUpdate(0.0);
            sample.positionChangeLimit(0.0);
            sample.rangeChangeLimit(0.0);
            sample.speedChangeLimit(0.0);
            sample.withinRangeofOwnship(0.0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.destination());
        }

        void topic_type_support< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType >::allocate_sample(::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.messageFilterID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
