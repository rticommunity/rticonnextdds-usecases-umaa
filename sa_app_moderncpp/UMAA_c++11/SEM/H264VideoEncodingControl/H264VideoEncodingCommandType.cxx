

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingCommandType.idl
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
#include "H264VideoEncodingCommandTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "H264VideoEncodingCommandType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace H264VideoEncodingControl {

            // ---- H264VideoEncodingCommandType: 

            H264VideoEncodingCommandType::H264VideoEncodingCommandType() :
                m_gradualDecoderRefresh_ (0) ,
                m_groupOfPictures_ (0) ,
                m_preset_(UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType::BEST_QUALITY) ,
                m_profile_(UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType::BASELINE) ,
                m_regionOfInterest_ (0) ,
                m_ROI_height_ (0) ,
                m_ROI_highBitRate_ (0.0) ,
                m_ROI_lowBitRate_ (0.0) ,
                m_ROI_width_ (0) ,
                m_ROI_x_ (0) ,
                m_ROI_y_ (0)  {

            }   

            H264VideoEncodingCommandType::H264VideoEncodingCommandType (bool gradualDecoderRefresh_,int32_t groupOfPictures_,const ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType& preset_,const ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType& profile_,bool regionOfInterest_,int32_t ROI_height_,double ROI_highBitRate_,double ROI_lowBitRate_,int32_t ROI_width_,int32_t ROI_x_,int32_t ROI_y_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& destination_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_gradualDecoderRefresh_(gradualDecoderRefresh_), 
                m_groupOfPictures_(groupOfPictures_), 
                m_preset_(preset_), 
                m_profile_(profile_), 
                m_regionOfInterest_(regionOfInterest_), 
                m_ROI_height_(ROI_height_), 
                m_ROI_highBitRate_(ROI_highBitRate_), 
                m_ROI_lowBitRate_(ROI_lowBitRate_), 
                m_ROI_width_(ROI_width_), 
                m_ROI_x_(ROI_x_), 
                m_ROI_y_(ROI_y_), 
                m_source_(source_), 
                m_destination_(destination_), 
                m_sessionID_(sessionID_), 
                m_timeStamp_(timeStamp_) {
            }

            void H264VideoEncodingCommandType::swap(H264VideoEncodingCommandType& other_)  noexcept 
            {
                using std::swap;
                swap(m_gradualDecoderRefresh_, other_.m_gradualDecoderRefresh_);
                swap(m_groupOfPictures_, other_.m_groupOfPictures_);
                swap(m_preset_, other_.m_preset_);
                swap(m_profile_, other_.m_profile_);
                swap(m_regionOfInterest_, other_.m_regionOfInterest_);
                swap(m_ROI_height_, other_.m_ROI_height_);
                swap(m_ROI_highBitRate_, other_.m_ROI_highBitRate_);
                swap(m_ROI_lowBitRate_, other_.m_ROI_lowBitRate_);
                swap(m_ROI_width_, other_.m_ROI_width_);
                swap(m_ROI_x_, other_.m_ROI_x_);
                swap(m_ROI_y_, other_.m_ROI_y_);
                swap(m_source_, other_.m_source_);
                swap(m_destination_, other_.m_destination_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool H264VideoEncodingCommandType::operator == (const H264VideoEncodingCommandType& other_) const {
                if (m_gradualDecoderRefresh_ != other_.m_gradualDecoderRefresh_) {
                    return false;
                }
                if (m_groupOfPictures_ != other_.m_groupOfPictures_) {
                    return false;
                }
                if (m_preset_ != other_.m_preset_) {
                    return false;
                }
                if (m_profile_ != other_.m_profile_) {
                    return false;
                }
                if (m_regionOfInterest_ != other_.m_regionOfInterest_) {
                    return false;
                }
                if (m_ROI_height_ != other_.m_ROI_height_) {
                    return false;
                }
                if (std::fabs(m_ROI_highBitRate_ - other_.m_ROI_highBitRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_ROI_highBitRate_ - other_.m_ROI_highBitRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_ROI_lowBitRate_ - other_.m_ROI_lowBitRate_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_ROI_lowBitRate_ - other_.m_ROI_lowBitRate_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_ROI_width_ != other_.m_ROI_width_) {
                    return false;
                }
                if (m_ROI_x_ != other_.m_ROI_x_) {
                    return false;
                }
                if (m_ROI_y_ != other_.m_ROI_y_) {
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

            bool H264VideoEncodingCommandType::operator != (const H264VideoEncodingCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const H264VideoEncodingCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "gradualDecoderRefresh: " << sample.gradualDecoderRefresh ()<<", ";
                o << "groupOfPictures: " << sample.groupOfPictures ()<<", ";
                o << "preset: " << sample.preset ()<<", ";
                o << "profile: " << sample.profile ()<<", ";
                o << "regionOfInterest: " << sample.regionOfInterest ()<<", ";
                o << "ROI_height: " << sample.ROI_height ()<<", ";
                o << "ROI_highBitRate: " << std::setprecision(15) << sample.ROI_highBitRate ()<<", ";
                o << "ROI_lowBitRate: " << std::setprecision(15) << sample.ROI_lowBitRate ()<<", ";
                o << "ROI_width: " << sample.ROI_width ()<<", ";
                o << "ROI_x: " << sample.ROI_x ()<<", ";
                o << "ROI_y: " << sample.ROI_y ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "destination: " << sample.destination ()<<", ";
                o << "sessionID: " << sample.sessionID ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace H264VideoEncodingControl  

    } // namespace SEM  

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
        struct native_type_code< ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member H264VideoEncodingCommandType_g_tc_members[15]=
                {

                    {
                        (char *)"gradualDecoderRefresh",/* Member name */
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
                        (char *)"groupOfPictures",/* Member name */
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
                        (char *)"preset",/* Member name */
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
                        (char *)"profile",/* Member name */
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
                        (char *)"regionOfInterest",/* Member name */
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
                        (char *)"ROI_height",/* Member name */
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
                        (char *)"ROI_highBitRate",/* Member name */
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
                        (char *)"ROI_lowBitRate",/* Member name */
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
                        (char *)"ROI_width",/* Member name */
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
                        (char *)"ROI_x",/* Member name */
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
                        (char *)"ROI_y",/* Member name */
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
                        (char *)"destination",/* Member name */
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
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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

                static DDS_TypeCode H264VideoEncodingCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        15, /* Number of members */
                        H264VideoEncodingCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for H264VideoEncodingCommandType*/

                if (is_initialized) {
                    return &H264VideoEncodingCommandType_g_tc;
                }

                is_initialized = RTI_TRUE;

                H264VideoEncodingCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                H264VideoEncodingCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                H264VideoEncodingCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType>::get().native();
                H264VideoEncodingCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType>::get().native();
                H264VideoEncodingCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                H264VideoEncodingCommandType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CommsRate_MegabitsPerSecond_AliasTag_t>::get().native();
                H264VideoEncodingCommandType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CommsRate_MegabitsPerSecond_AliasTag_t>::get().native();
                H264VideoEncodingCommandType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                H264VideoEncodingCommandType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                H264VideoEncodingCommandType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                H264VideoEncodingCommandType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                H264VideoEncodingCommandType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                H264VideoEncodingCommandType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                H264VideoEncodingCommandType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                H264VideoEncodingCommandType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingCommandType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingCommandType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                H264VideoEncodingCommandType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[1]._annotations._minValue._u.long_value = -2147483648L;
                H264VideoEncodingCommandType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[1]._annotations._maxValue._u.long_value = 2147483647L;
                H264VideoEncodingCommandType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                H264VideoEncodingCommandType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;
                H264VideoEncodingCommandType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                H264VideoEncodingCommandType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
                H264VideoEncodingCommandType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingCommandType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingCommandType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[5]._annotations._defaultValue._u.long_value = 0;
                H264VideoEncodingCommandType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[5]._annotations._minValue._u.long_value = -2147483648L;
                H264VideoEncodingCommandType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[5]._annotations._maxValue._u.long_value = 2147483647L;
                H264VideoEncodingCommandType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                H264VideoEncodingCommandType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                H264VideoEncodingCommandType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                H264VideoEncodingCommandType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
                H264VideoEncodingCommandType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                H264VideoEncodingCommandType_g_tc_members[6]._annotations._maxValue._u.double_value = 1125000ULL;
                H264VideoEncodingCommandType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                H264VideoEncodingCommandType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                H264VideoEncodingCommandType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                H264VideoEncodingCommandType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                H264VideoEncodingCommandType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                H264VideoEncodingCommandType_g_tc_members[7]._annotations._maxValue._u.double_value = 1125000ULL;
                H264VideoEncodingCommandType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[8]._annotations._defaultValue._u.long_value = 0;
                H264VideoEncodingCommandType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[8]._annotations._minValue._u.long_value = -2147483648L;
                H264VideoEncodingCommandType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[8]._annotations._maxValue._u.long_value = 2147483647L;
                H264VideoEncodingCommandType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[9]._annotations._defaultValue._u.long_value = 0;
                H264VideoEncodingCommandType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[9]._annotations._minValue._u.long_value = -2147483648L;
                H264VideoEncodingCommandType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[9]._annotations._maxValue._u.long_value = 2147483647L;
                H264VideoEncodingCommandType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[10]._annotations._defaultValue._u.long_value = 0;
                H264VideoEncodingCommandType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[10]._annotations._minValue._u.long_value = -2147483648L;
                H264VideoEncodingCommandType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                H264VideoEncodingCommandType_g_tc_members[10]._annotations._maxValue._u.long_value = 2147483647L;

                H264VideoEncodingCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                H264VideoEncodingCommandType_g_tc._data._typePlugin = type_plugin_info();    

                return &H264VideoEncodingCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType *sample;

                static RTIXCdrMemberAccessInfo H264VideoEncodingCommandType_g_memberAccessInfos[15] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo H264VideoEncodingCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &H264VideoEncodingCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                H264VideoEncodingCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->gradualDecoderRefresh() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->groupOfPictures() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->preset() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->profile() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->regionOfInterest() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ROI_height() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ROI_highBitRate() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ROI_lowBitRate() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ROI_width() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ROI_x() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ROI_y() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                H264VideoEncodingCommandType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                H264VideoEncodingCommandType_g_sampleAccessInfo.memberAccessInfos = 
                H264VideoEncodingCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        H264VideoEncodingCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        H264VideoEncodingCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                H264VideoEncodingCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                H264VideoEncodingCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType >;

                H264VideoEncodingCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &H264VideoEncodingCommandType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin H264VideoEncodingCommandType_g_typePlugin = 
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

                return &H264VideoEncodingCommandType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandTypePlugin_new,
                ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = H264VideoEncodingCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = H264VideoEncodingCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType >::from_cdr_buffer(::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = H264VideoEncodingCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType >::reset_sample(::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType& sample) 
        {
            sample.gradualDecoderRefresh(0);
            sample.groupOfPictures(0);
            sample.preset(UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType::BEST_QUALITY);
            sample.profile(UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType::BASELINE);
            sample.regionOfInterest(0);
            sample.ROI_height(0);
            sample.ROI_highBitRate(0.0);
            sample.ROI_lowBitRate(0.0);
            sample.ROI_width(0);
            sample.ROI_x(0);
            sample.ROI_y(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.destination());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType >::allocate_sample(::UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.preset(),  -1, -1);
            ::rti::topic::allocate_sample(sample.profile(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
