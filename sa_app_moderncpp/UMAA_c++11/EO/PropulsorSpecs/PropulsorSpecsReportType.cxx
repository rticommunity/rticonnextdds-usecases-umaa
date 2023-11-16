

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorSpecsReportType.idl
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
#include "PropulsorSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "PropulsorSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace PropulsorSpecs {

            // ---- PropulsorSpecsReportType: 

            PropulsorSpecsReportType::PropulsorSpecsReportType() :
                m_bearingMax_ (0.0) ,
                m_bearingMin_ (0.0) ,
                m_bearingOffset_ (0.0) ,
                m_maxReverseRPM_ (0.0) ,
                m_maxRPM_ (0.0) ,
                m_minReverseRPM_ (0.0) ,
                m_minRPM_ (0.0) ,
                m_mountType_(UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType::_FIXED) ,
                m_name_ ("") ,
                m_OnOffSwitchable_ (0) ,
                m_pitchMax_ (0.0) ,
                m_pitchMin_ (0.0) ,
                m_pitchOffset_ (0.0) ,
                m_reversible_ (0) ,
                m_thrustControl_ (0)  {

            }   

            PropulsorSpecsReportType::PropulsorSpecsReportType (double bearingMax_,double bearingMin_,double bearingOffset_,double maxReverseRPM_,double maxRPM_,double minReverseRPM_,double minRPM_,const ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType& mountType_,const std::string& name_,bool OnOffSwitchable_,double pitchMax_,double pitchMin_,double pitchOffset_,const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& positionOffset_,bool reversible_,bool thrustControl_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_bearingMax_(bearingMax_), 
                m_bearingMin_(bearingMin_), 
                m_bearingOffset_(bearingOffset_), 
                m_maxReverseRPM_(maxReverseRPM_), 
                m_maxRPM_(maxRPM_), 
                m_minReverseRPM_(minReverseRPM_), 
                m_minRPM_(minRPM_), 
                m_mountType_(mountType_), 
                m_name_(name_), 
                m_OnOffSwitchable_(OnOffSwitchable_), 
                m_pitchMax_(pitchMax_), 
                m_pitchMin_(pitchMin_), 
                m_pitchOffset_(pitchOffset_), 
                m_positionOffset_(positionOffset_), 
                m_reversible_(reversible_), 
                m_thrustControl_(thrustControl_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void PropulsorSpecsReportType::swap(PropulsorSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_bearingMax_, other_.m_bearingMax_);
                swap(m_bearingMin_, other_.m_bearingMin_);
                swap(m_bearingOffset_, other_.m_bearingOffset_);
                swap(m_maxReverseRPM_, other_.m_maxReverseRPM_);
                swap(m_maxRPM_, other_.m_maxRPM_);
                swap(m_minReverseRPM_, other_.m_minReverseRPM_);
                swap(m_minRPM_, other_.m_minRPM_);
                swap(m_mountType_, other_.m_mountType_);
                swap(m_name_, other_.m_name_);
                swap(m_OnOffSwitchable_, other_.m_OnOffSwitchable_);
                swap(m_pitchMax_, other_.m_pitchMax_);
                swap(m_pitchMin_, other_.m_pitchMin_);
                swap(m_pitchOffset_, other_.m_pitchOffset_);
                swap(m_positionOffset_, other_.m_positionOffset_);
                swap(m_reversible_, other_.m_reversible_);
                swap(m_thrustControl_, other_.m_thrustControl_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool PropulsorSpecsReportType::operator == (const PropulsorSpecsReportType& other_) const {
                if (std::fabs(m_bearingMax_ - other_.m_bearingMax_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearingMax_ - other_.m_bearingMax_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_bearingMin_ - other_.m_bearingMin_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearingMin_ - other_.m_bearingMin_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_bearingOffset_ - other_.m_bearingOffset_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearingOffset_ - other_.m_bearingOffset_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxReverseRPM_ - other_.m_maxReverseRPM_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxReverseRPM_ - other_.m_maxReverseRPM_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxRPM_ - other_.m_maxRPM_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxRPM_ - other_.m_maxRPM_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minReverseRPM_ - other_.m_minReverseRPM_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minReverseRPM_ - other_.m_minReverseRPM_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minRPM_ - other_.m_minRPM_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minRPM_ - other_.m_minRPM_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_mountType_ != other_.m_mountType_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_OnOffSwitchable_ != other_.m_OnOffSwitchable_) {
                    return false;
                }
                if (std::fabs(m_pitchMax_ - other_.m_pitchMax_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pitchMax_ - other_.m_pitchMax_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_pitchMin_ - other_.m_pitchMin_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pitchMin_ - other_.m_pitchMin_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_pitchOffset_ - other_.m_pitchOffset_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_pitchOffset_ - other_.m_pitchOffset_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_positionOffset_ != other_.m_positionOffset_) {
                    return false;
                }
                if (m_reversible_ != other_.m_reversible_) {
                    return false;
                }
                if (m_thrustControl_ != other_.m_thrustControl_) {
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

            bool PropulsorSpecsReportType::operator != (const PropulsorSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PropulsorSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bearingMax: " << std::setprecision(15) << sample.bearingMax ()<<", ";
                o << "bearingMin: " << std::setprecision(15) << sample.bearingMin ()<<", ";
                o << "bearingOffset: " << std::setprecision(15) << sample.bearingOffset ()<<", ";
                o << "maxReverseRPM: " << std::setprecision(15) << sample.maxReverseRPM ()<<", ";
                o << "maxRPM: " << std::setprecision(15) << sample.maxRPM ()<<", ";
                o << "minReverseRPM: " << std::setprecision(15) << sample.minReverseRPM ()<<", ";
                o << "minRPM: " << std::setprecision(15) << sample.minRPM ()<<", ";
                o << "mountType: " << sample.mountType ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "OnOffSwitchable: " << sample.OnOffSwitchable ()<<", ";
                o << "pitchMax: " << std::setprecision(15) << sample.pitchMax ()<<", ";
                o << "pitchMin: " << std::setprecision(15) << sample.pitchMin ()<<", ";
                o << "pitchOffset: " << std::setprecision(15) << sample.pitchOffset ()<<", ";
                o << "positionOffset: " << sample.positionOffset ()<<", ";
                o << "reversible: " << sample.reversible ()<<", ";
                o << "thrustControl: " << sample.thrustControl ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace PropulsorSpecs  

    } // namespace EO  

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
        struct native_type_code< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PropulsorSpecsReportType_g_tc_members[18]=
                {

                    {
                        (char *)"bearingMax",/* Member name */
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
                        (char *)"bearingMin",/* Member name */
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
                        (char *)"bearingOffset",/* Member name */
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
                        (char *)"maxReverseRPM",/* Member name */
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
                        (char *)"maxRPM",/* Member name */
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
                        (char *)"minReverseRPM",/* Member name */
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
                        (char *)"minRPM",/* Member name */
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
                        (char *)"mountType",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"OnOffSwitchable",/* Member name */
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
                        (char *)"pitchMax",/* Member name */
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
                        (char *)"pitchMin",/* Member name */
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
                        (char *)"pitchOffset",/* Member name */
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
                        (char *)"positionOffset",/* Member name */
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
                        (char *)"reversible",/* Member name */
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
                    }, 
                    {
                        (char *)"thrustControl",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
                        {
                            16,/* Representation ID */
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
                            17,/* Representation ID */
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

                static DDS_TypeCode PropulsorSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        18, /* Number of members */
                        PropulsorSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PropulsorSpecsReportType*/

                if (is_initialized) {
                    return &PropulsorSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PropulsorSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PropulsorSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType>::get().native();
                PropulsorSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                PropulsorSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position3D_PlatformXYZ>::get().native();
                PropulsorSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                PropulsorSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                PropulsorSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PropulsorSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                PropulsorSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                PropulsorSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropulsorSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PropulsorSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                PropulsorSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropulsorSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PropulsorSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                PropulsorSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropulsorSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PropulsorSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                PropulsorSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = -100000LL;
                PropulsorSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 100000ULL;
                PropulsorSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                PropulsorSpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[4]._annotations._minValue._u.double_value = -100000LL;
                PropulsorSpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[4]._annotations._maxValue._u.double_value = 100000ULL;
                PropulsorSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                PropulsorSpecsReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[5]._annotations._minValue._u.double_value = -100000LL;
                PropulsorSpecsReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[5]._annotations._maxValue._u.double_value = 100000ULL;
                PropulsorSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                PropulsorSpecsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[6]._annotations._minValue._u.double_value = -100000LL;
                PropulsorSpecsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 100000ULL;
                PropulsorSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PropulsorSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.enumerated_value = 0;
                PropulsorSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                PropulsorSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                PropulsorSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                PropulsorSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;
                PropulsorSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
                PropulsorSpecsReportType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropulsorSpecsReportType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PropulsorSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                PropulsorSpecsReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropulsorSpecsReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PropulsorSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
                PropulsorSpecsReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PropulsorSpecsReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PropulsorSpecsReportType_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                PropulsorSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                PropulsorSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
                PropulsorSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                PropulsorSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;

                PropulsorSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PropulsorSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &PropulsorSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo PropulsorSpecsReportType_g_memberAccessInfos[18] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PropulsorSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PropulsorSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PropulsorSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingMax() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingMin() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingOffset() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxReverseRPM() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxRPM() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minReverseRPM() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minRPM() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mountType() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->OnOffSwitchable() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchMax() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchMin() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchOffset() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionOffset() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->reversible() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->thrustControl() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PropulsorSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                PropulsorSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                PropulsorSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PropulsorSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PropulsorSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PropulsorSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PropulsorSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType >;

                PropulsorSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PropulsorSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PropulsorSpecsReportType_g_typePlugin = 
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

                return &PropulsorSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportTypePlugin_new,
                ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PropulsorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PropulsorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType >::from_cdr_buffer(::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PropulsorSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType >::reset_sample(::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType& sample) 
        {
            sample.bearingMax(0.0);
            sample.bearingMin(0.0);
            sample.bearingOffset(0.0);
            sample.maxReverseRPM(0.0);
            sample.maxRPM(0.0);
            sample.minReverseRPM(0.0);
            sample.minRPM(0.0);
            sample.mountType(UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType::_FIXED);
            sample.name("");
            sample.OnOffSwitchable(0);
            sample.pitchMax(0.0);
            sample.pitchMin(0.0);
            sample.pitchOffset(0.0);
            ::rti::topic::reset_sample(sample.positionOffset());
            sample.reversible(0);
            sample.thrustControl(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType >::allocate_sample(::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.mountType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.positionOffset(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
