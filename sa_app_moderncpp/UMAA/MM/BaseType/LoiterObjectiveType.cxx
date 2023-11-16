

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoiterObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LoiterObjectiveType.hpp"
#include "LoiterObjectiveTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- LoiterObjectiveType: 

            LoiterObjectiveType::LoiterObjectiveType() :
                m_duration_ (0.0) ,
                m_speed_ (0.0) ,
                m_type_(UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType::CIRCLE) ,
                m_width_ (0.0)  {
            }   

            LoiterObjectiveType::LoiterObjectiveType (const ::dds::core::optional< UMAA::Common::Measurement::Altitude_MSL >& altitude,const ::dds::core::optional< UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL,const ::dds::core::optional< double >& altitudeASF,const ::dds::core::optional< bool >& autoHeading,const ::dds::core::optional< double >& bearing,const ::dds::core::optional< double >& depth,const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType >& direction,double duration,const ::dds::core::optional< double >& heading,const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType >& hoverKind,const ::dds::core::optional< double >& length,const UMAA::Common::Measurement::Position3D_WGS84& position,double speed,const UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType& type,double width):
                m_altitude_( altitude ),
                m_altitudeAGL_( altitudeAGL ),
                m_altitudeASF_( altitudeASF ),
                m_autoHeading_( autoHeading ),
                m_bearing_( bearing ),
                m_depth_( depth ),
                m_direction_( direction ),
                m_duration_( duration ),
                m_heading_( heading ),
                m_hoverKind_( hoverKind ),
                m_length_( length ),
                m_position_( position ),
                m_speed_( speed ),
                m_type_( type ),
                m_width_( width ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LoiterObjectiveType::LoiterObjectiveType(LoiterObjectiveType&& other_) OMG_NOEXCEPT  :m_altitude_ (std::move(other_.m_altitude_))
            ,
            m_altitudeAGL_ (std::move(other_.m_altitudeAGL_))
            ,
            m_altitudeASF_ (std::move(other_.m_altitudeASF_))
            ,
            m_autoHeading_ (std::move(other_.m_autoHeading_))
            ,
            m_bearing_ (std::move(other_.m_bearing_))
            ,
            m_depth_ (std::move(other_.m_depth_))
            ,
            m_direction_ (std::move(other_.m_direction_))
            ,
            m_duration_ (std::move(other_.m_duration_))
            ,
            m_heading_ (std::move(other_.m_heading_))
            ,
            m_hoverKind_ (std::move(other_.m_hoverKind_))
            ,
            m_length_ (std::move(other_.m_length_))
            ,
            m_position_ (std::move(other_.m_position_))
            ,
            m_speed_ (std::move(other_.m_speed_))
            ,
            m_type_ (std::move(other_.m_type_))
            ,
            m_width_ (std::move(other_.m_width_))
            {
            } 

            LoiterObjectiveType& LoiterObjectiveType::operator=(LoiterObjectiveType&&  other_) OMG_NOEXCEPT {
                LoiterObjectiveType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LoiterObjectiveType::swap(LoiterObjectiveType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_altitude_, other_.m_altitude_);
                swap(m_altitudeAGL_, other_.m_altitudeAGL_);
                swap(m_altitudeASF_, other_.m_altitudeASF_);
                swap(m_autoHeading_, other_.m_autoHeading_);
                swap(m_bearing_, other_.m_bearing_);
                swap(m_depth_, other_.m_depth_);
                swap(m_direction_, other_.m_direction_);
                swap(m_duration_, other_.m_duration_);
                swap(m_heading_, other_.m_heading_);
                swap(m_hoverKind_, other_.m_hoverKind_);
                swap(m_length_, other_.m_length_);
                swap(m_position_, other_.m_position_);
                swap(m_speed_, other_.m_speed_);
                swap(m_type_, other_.m_type_);
                swap(m_width_, other_.m_width_);
            }  

            bool LoiterObjectiveType::operator == (const LoiterObjectiveType& other_) const {
                if (m_altitude_ != other_.m_altitude_) {
                    return false;
                }
                if (m_altitudeAGL_ != other_.m_altitudeAGL_) {
                    return false;
                }
                if (m_altitudeASF_ != other_.m_altitudeASF_) {
                    return false;
                }
                if (m_autoHeading_ != other_.m_autoHeading_) {
                    return false;
                }
                if (m_bearing_ != other_.m_bearing_) {
                    return false;
                }
                if (m_depth_ != other_.m_depth_) {
                    return false;
                }
                if (m_direction_ != other_.m_direction_) {
                    return false;
                }
                if (m_duration_ != other_.m_duration_) {
                    return false;
                }
                if (m_heading_ != other_.m_heading_) {
                    return false;
                }
                if (m_hoverKind_ != other_.m_hoverKind_) {
                    return false;
                }
                if (m_length_ != other_.m_length_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_speed_ != other_.m_speed_) {
                    return false;
                }
                if (m_type_ != other_.m_type_) {
                    return false;
                }
                if (m_width_ != other_.m_width_) {
                    return false;
                }
                return true;
            }
            bool LoiterObjectiveType::operator != (const LoiterObjectiveType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LoiterObjectiveType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "altitude: " << sample.altitude()<<", ";
                o << "altitudeAGL: " << sample.altitudeAGL()<<", ";
                o << "altitudeASF: " << sample.altitudeASF()<<", ";
                o << "autoHeading: " << sample.autoHeading()<<", ";
                o << "bearing: " << sample.bearing()<<", ";
                o << "depth: " << sample.depth()<<", ";
                o << "direction: " << sample.direction()<<", ";
                o << "duration: " << std::setprecision(15) <<sample.duration()<<", ";
                o << "heading: " << sample.heading()<<", ";
                o << "hoverKind: " << sample.hoverKind()<<", ";
                o << "length: " << sample.length()<<", ";
                o << "position: " << sample.position()<<", ";
                o << "speed: " << std::setprecision(15) <<sample.speed()<<", ";
                o << "type: " << sample.type()<<", ";
                o << "width: " << std::setprecision(15) <<sample.width() ;
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::BaseType::LoiterObjectiveType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LoiterObjectiveType_g_tc_members[15]=
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
                        (char *)"autoHeading",/* Member name */
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
                        (char *)"bearing",/* Member name */
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
                        (char *)"depth",/* Member name */
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
                        (char *)"direction",/* Member name */
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
                        (char *)"duration",/* Member name */
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
                        (char *)"heading",/* Member name */
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
                        (char *)"hoverKind",/* Member name */
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
                        (char *)"length",/* Member name */
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
                        (char *)"position",/* Member name */
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
                        (char *)"speed",/* Member name */
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
                        (char *)"type",/* Member name */
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
                        (char *)"width",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LoiterObjectiveType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::LoiterObjectiveType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        15, /* Number of members */
                        LoiterObjectiveType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LoiterObjectiveType*/

                if (is_initialized) {
                    return &LoiterObjectiveType_g_tc;
                }

                LoiterObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LoiterObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Altitude_MSL>::get().native();
                LoiterObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Altitude_AGL>::get().native();
                LoiterObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_ASF_AliasTag_t>::get().native();
                LoiterObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LoiterObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Heading_TrueNorth_Angle_AliasTag_t>::get().native();
                LoiterObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_BSL_AliasTag_t>::get().native();
                LoiterObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType>::get().native();
                LoiterObjectiveType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Duration_Hours_AliasTag_t>::get().native();
                LoiterObjectiveType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Heading_TrueNorth_Angle_AliasTag_t>::get().native();
                LoiterObjectiveType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType>::get().native();
                LoiterObjectiveType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LoiterObjectiveType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Position3D_WGS84>::get().native();
                LoiterObjectiveType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                LoiterObjectiveType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType>::get().native();
                LoiterObjectiveType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                LoiterObjectiveType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                LoiterObjectiveType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;

                LoiterObjectiveType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[4]._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
                LoiterObjectiveType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[4]._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

                LoiterObjectiveType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                LoiterObjectiveType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[5]._annotations._maxValue._u.double_value = 10000ULL;

                LoiterObjectiveType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                LoiterObjectiveType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                LoiterObjectiveType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[7]._annotations._maxValue._u.double_value = 10505ULL;

                LoiterObjectiveType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[8]._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
                LoiterObjectiveType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[8]._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

                LoiterObjectiveType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[10]._annotations._minValue._u.double_value = 0ULL;
                LoiterObjectiveType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[10]._annotations._maxValue._u.double_value = 401056000ULL;

                LoiterObjectiveType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
                LoiterObjectiveType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
                LoiterObjectiveType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[12]._annotations._maxValue._u.double_value = 299792458ULL;

                LoiterObjectiveType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                LoiterObjectiveType_g_tc_members[13]._annotations._defaultValue._u.enumerated_value = 0;

                LoiterObjectiveType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
                LoiterObjectiveType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[14]._annotations._minValue._u.double_value = 0ULL;
                LoiterObjectiveType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LoiterObjectiveType_g_tc_members[14]._annotations._maxValue._u.double_value = 401056000ULL;

                LoiterObjectiveType_g_tc._data._sampleAccessInfo = sample_access_info();
                LoiterObjectiveType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LoiterObjectiveType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::BaseType::LoiterObjectiveType *sample;

                static RTIXCdrMemberAccessInfo LoiterObjectiveType_g_memberAccessInfos[15] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LoiterObjectiveType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LoiterObjectiveType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::BaseType::LoiterObjectiveType);
                if (sample == NULL) {
                    return NULL;
                }

                LoiterObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitude() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->autoHeading() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearing() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->depth() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->direction() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->duration() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->heading() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->hoverKind() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->length() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->type() - (char *)sample);

                LoiterObjectiveType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->width() - (char *)sample);

                LoiterObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
                LoiterObjectiveType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::BaseType::LoiterObjectiveType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LoiterObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LoiterObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LoiterObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LoiterObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::BaseType::LoiterObjectiveType >;

                LoiterObjectiveType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LoiterObjectiveType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LoiterObjectiveType_g_typePlugin = 
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

                return &LoiterObjectiveType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::BaseType::LoiterObjectiveType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::BaseType::LoiterObjectiveType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::BaseType::LoiterObjectiveType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::BaseType::LoiterObjectiveTypePlugin_new,
                UMAA::MM::BaseType::LoiterObjectiveTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::BaseType::LoiterObjectiveType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::BaseType::LoiterObjectiveType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LoiterObjectiveTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LoiterObjectiveTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::BaseType::LoiterObjectiveType >::from_cdr_buffer(UMAA::MM::BaseType::LoiterObjectiveType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LoiterObjectiveTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::BaseType::LoiterObjectiveType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::BaseType::LoiterObjectiveType >::reset_sample(UMAA::MM::BaseType::LoiterObjectiveType& sample) 
        {
            ::rti::topic::reset_sample(sample.altitude());
            ::rti::topic::reset_sample(sample.altitudeAGL());
            ::rti::topic::reset_sample(sample.altitudeASF());
            ::rti::topic::reset_sample(sample.autoHeading());
            ::rti::topic::reset_sample(sample.bearing());
            ::rti::topic::reset_sample(sample.depth());
            ::rti::topic::reset_sample(sample.direction());
            sample.duration(0.0);
            ::rti::topic::reset_sample(sample.heading());
            ::rti::topic::reset_sample(sample.hoverKind());
            ::rti::topic::reset_sample(sample.length());
            ::rti::topic::reset_sample(sample.position());
            sample.speed(0.0);
            sample.type(UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType::CIRCLE);
            sample.width(0.0);
        }

        void topic_type_support< UMAA::MM::BaseType::LoiterObjectiveType >::allocate_sample(UMAA::MM::BaseType::LoiterObjectiveType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
            ::rti::topic::allocate_sample(sample.type(),  -1, -1);
        }

    }
}  

