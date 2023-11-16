

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointType.idl
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
#include "WaypointTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WaypointType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- WaypointType: 

            WaypointType::WaypointType() :
                m_waypointType_(UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType::APPROACH_FINAL_POINT)  {

            }   

            WaypointType::WaypointType (const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >& altitude_,const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL_,const ::dds::core::optional< double >& altitudeASF_,const ::dds::core::optional< ::UMAA::Common::Measurement::Orientation3D >& attitude_,const ::dds::core::optional< double >& depth_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime_,const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& globalPosition_,const ::dds::core::optional< ::UMAA::Common::Measurement::Position3D_PlatformXYZ >& localPosition_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType >& mode_,const ::dds::core::optional< double >& pathTolerance_,const ::dds::core::optional< double >& speed_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& startTime_,const ::dds::core::optional< double >& waypointTolerance_,const ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType& waypointType_,const ::UMAA::Common::Measurement::NumericGUID& waypointID_):
                m_altitude_(altitude_), 
                m_altitudeAGL_(altitudeAGL_), 
                m_altitudeASF_(altitudeASF_), 
                m_attitude_(attitude_), 
                m_depth_(depth_), 
                m_endTime_(endTime_), 
                m_globalPosition_(globalPosition_), 
                m_localPosition_(localPosition_), 
                m_mode_(mode_), 
                m_pathTolerance_(pathTolerance_), 
                m_speed_(speed_), 
                m_startTime_(startTime_), 
                m_waypointTolerance_(waypointTolerance_), 
                m_waypointType_(waypointType_), 
                m_waypointID_(waypointID_) {
            }

            void WaypointType::swap(WaypointType& other_)  noexcept 
            {
                using std::swap;
                swap(m_altitude_, other_.m_altitude_);
                swap(m_altitudeAGL_, other_.m_altitudeAGL_);
                swap(m_altitudeASF_, other_.m_altitudeASF_);
                swap(m_attitude_, other_.m_attitude_);
                swap(m_depth_, other_.m_depth_);
                swap(m_endTime_, other_.m_endTime_);
                swap(m_globalPosition_, other_.m_globalPosition_);
                swap(m_localPosition_, other_.m_localPosition_);
                swap(m_mode_, other_.m_mode_);
                swap(m_pathTolerance_, other_.m_pathTolerance_);
                swap(m_speed_, other_.m_speed_);
                swap(m_startTime_, other_.m_startTime_);
                swap(m_waypointTolerance_, other_.m_waypointTolerance_);
                swap(m_waypointType_, other_.m_waypointType_);
                swap(m_waypointID_, other_.m_waypointID_);
            }  

            bool WaypointType::operator == (const WaypointType& other_) const {
                if (m_altitude_ != other_.m_altitude_) {
                    return false;
                }
                if (m_altitudeAGL_ != other_.m_altitudeAGL_) {
                    return false;
                }
                if (m_altitudeASF_.has_value() != other_.m_altitudeASF_.has_value()) {
                    return false;
                } else if (m_altitudeASF_.has_value()) {
                    if (std::fabs(*m_altitudeASF_ - *other_.m_altitudeASF_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeASF_ - *other_.m_altitudeASF_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_attitude_ != other_.m_attitude_) {
                    return false;
                }
                if (m_depth_.has_value() != other_.m_depth_.has_value()) {
                    return false;
                } else if (m_depth_.has_value()) {
                    if (std::fabs(*m_depth_ - *other_.m_depth_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_depth_ - *other_.m_depth_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                if (m_globalPosition_ != other_.m_globalPosition_) {
                    return false;
                }
                if (m_localPosition_ != other_.m_localPosition_) {
                    return false;
                }
                if (m_mode_ != other_.m_mode_) {
                    return false;
                }
                if (m_pathTolerance_.has_value() != other_.m_pathTolerance_.has_value()) {
                    return false;
                } else if (m_pathTolerance_.has_value()) {
                    if (std::fabs(*m_pathTolerance_ - *other_.m_pathTolerance_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_pathTolerance_ - *other_.m_pathTolerance_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_speed_.has_value() != other_.m_speed_.has_value()) {
                    return false;
                } else if (m_speed_.has_value()) {
                    if (std::fabs(*m_speed_ - *other_.m_speed_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_speed_ - *other_.m_speed_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_startTime_ != other_.m_startTime_) {
                    return false;
                }
                if (m_waypointTolerance_.has_value() != other_.m_waypointTolerance_.has_value()) {
                    return false;
                } else if (m_waypointTolerance_.has_value()) {
                    if (std::fabs(*m_waypointTolerance_ - *other_.m_waypointTolerance_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_waypointTolerance_ - *other_.m_waypointTolerance_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_waypointType_ != other_.m_waypointType_) {
                    return false;
                }
                if (m_waypointID_ != other_.m_waypointID_) {
                    return false;
                }
                return true;
            }

            bool WaypointType::operator != (const WaypointType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WaypointType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "altitude: " << sample.altitude ()<<", ";
                o << "altitudeAGL: " << sample.altitudeAGL ()<<", ";
                o << "altitudeASF: " << sample.altitudeASF ()<<", ";
                o << "attitude: " << sample.attitude ()<<", ";
                o << "depth: " << sample.depth ()<<", ";
                o << "endTime: " << sample.endTime ()<<", ";
                o << "globalPosition: " << sample.globalPosition ()<<", ";
                o << "localPosition: " << sample.localPosition ()<<", ";
                o << "mode: " << sample.mode ()<<", ";
                o << "pathTolerance: " << sample.pathTolerance ()<<", ";
                o << "speed: " << sample.speed ()<<", ";
                o << "startTime: " << sample.startTime ()<<", ";
                o << "waypointTolerance: " << sample.waypointTolerance ()<<", ";
                o << "waypointType: " << sample.waypointType ()<<", ";
                o << "waypointID: " << sample.waypointID ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

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
        struct native_type_code< ::UMAA::MM::BaseType::WaypointType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WaypointType_g_tc_members[15]=
                {

                    {
                        (char *)"altitude",/* Member name */
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
                        (char *)"altitudeAGL",/* Member name */
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
                        (char *)"altitudeASF",/* Member name */
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
                        (char *)"attitude",/* Member name */
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
                        (char *)"depth",/* Member name */
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
                        (char *)"globalPosition",/* Member name */
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
                        (char *)"localPosition",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"mode",/* Member name */
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
                        (char *)"pathTolerance",/* Member name */
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
                        (char *)"speed",/* Member name */
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
                        (char *)"startTime",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"waypointTolerance",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"waypointType",/* Member name */
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
                        (char *)"waypointID",/* Member name */
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
                    }
                };

                static DDS_TypeCode WaypointType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::WaypointType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        15, /* Number of members */
                        WaypointType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WaypointType*/

                if (is_initialized) {
                    return &WaypointType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WaypointType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WaypointType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Altitude_MSL>::get().native();
                WaypointType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Altitude_AGL>::get().native();
                WaypointType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_ASF_AliasTag_t>::get().native();
                WaypointType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Orientation3D>::get().native();
                WaypointType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_BSL_AliasTag_t>::get().native();
                WaypointType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                WaypointType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position2D>::get().native();
                WaypointType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position3D_PlatformXYZ>::get().native();
                WaypointType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType>::get().native();
                WaypointType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                WaypointType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_LocalWaterMass_AliasTag_t>::get().native();
                WaypointType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                WaypointType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                WaypointType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType>::get().native();
                WaypointType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                WaypointType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                WaypointType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
                WaypointType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                WaypointType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointType_g_tc_members[4]._annotations._maxValue._u.double_value = 10000ULL;
                WaypointType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
                WaypointType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointType_g_tc_members[9]._annotations._maxValue._u.double_value = 401056000ULL;
                WaypointType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointType_g_tc_members[10]._annotations._minValue._u.double_value = 0ULL;
                WaypointType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointType_g_tc_members[10]._annotations._maxValue._u.double_value = 299792458ULL;
                WaypointType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
                WaypointType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WaypointType_g_tc_members[12]._annotations._maxValue._u.double_value = 401056000ULL;
                WaypointType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WaypointType_g_tc_members[13]._annotations._defaultValue._u.enumerated_value = 0;

                WaypointType_g_tc._data._sampleAccessInfo = sample_access_info();
                WaypointType_g_tc._data._typePlugin = type_plugin_info();    

                return &WaypointType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::WaypointType *sample;

                static RTIXCdrMemberAccessInfo WaypointType_g_memberAccessInfos[15] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WaypointType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WaypointType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::WaypointType);
                if (sample == NULL) {
                    return NULL;
                }

                WaypointType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitude() - (char *)sample);

                WaypointType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL() - (char *)sample);

                WaypointType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF() - (char *)sample);

                WaypointType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->attitude() - (char *)sample);

                WaypointType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->depth() - (char *)sample);

                WaypointType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                WaypointType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->globalPosition() - (char *)sample);

                WaypointType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->localPosition() - (char *)sample);

                WaypointType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mode() - (char *)sample);

                WaypointType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pathTolerance() - (char *)sample);

                WaypointType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                WaypointType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTime() - (char *)sample);

                WaypointType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointTolerance() - (char *)sample);

                WaypointType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointType() - (char *)sample);

                WaypointType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->waypointID() - (char *)sample);

                WaypointType_g_sampleAccessInfo.memberAccessInfos = 
                WaypointType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::WaypointType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WaypointType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WaypointType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WaypointType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WaypointType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::WaypointType >;

                WaypointType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WaypointType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WaypointType_g_typePlugin = 
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

                return &WaypointType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::WaypointType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::WaypointType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::WaypointType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::WaypointTypePlugin_new,
                ::UMAA::MM::BaseType::WaypointTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::WaypointType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::WaypointType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WaypointTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WaypointTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::WaypointType >::from_cdr_buffer(::UMAA::MM::BaseType::WaypointType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WaypointTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::WaypointType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::WaypointType >::reset_sample(::UMAA::MM::BaseType::WaypointType& sample) 
        {
            ::rti::topic::reset_sample(sample.altitude());
            ::rti::topic::reset_sample(sample.altitudeAGL());
            ::rti::topic::reset_sample(sample.altitudeASF());
            ::rti::topic::reset_sample(sample.attitude());
            ::rti::topic::reset_sample(sample.depth());
            ::rti::topic::reset_sample(sample.endTime());
            ::rti::topic::reset_sample(sample.globalPosition());
            ::rti::topic::reset_sample(sample.localPosition());
            ::rti::topic::reset_sample(sample.mode());
            ::rti::topic::reset_sample(sample.pathTolerance());
            ::rti::topic::reset_sample(sample.speed());
            ::rti::topic::reset_sample(sample.startTime());
            ::rti::topic::reset_sample(sample.waypointTolerance());
            sample.waypointType(UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType::APPROACH_FINAL_POINT);
            ::rti::topic::reset_sample(sample.waypointID());
        }

        void topic_type_support< ::UMAA::MM::BaseType::WaypointType >::allocate_sample(::UMAA::MM::BaseType::WaypointType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.waypointType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.waypointID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
