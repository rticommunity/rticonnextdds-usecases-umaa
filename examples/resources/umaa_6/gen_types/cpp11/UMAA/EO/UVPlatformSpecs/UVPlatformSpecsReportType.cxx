

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformSpecsReportType.idl
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
#include "UVPlatformSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "UVPlatformSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace UVPlatformSpecs {

            // ---- UVPlatformSpecsReportType: 

            UVPlatformSpecsReportType::UVPlatformSpecsReportType() :
                m_aftDistance_ (0.0) ,
                m_beamAtWaterline_ (0.0) ,
                m_bottomDistance_ (0.0) ,
                m_displacement_ (0.0) ,
                m_draft_ (0.0) ,
                m_forwardDistance_ (0.0) ,
                m_lengthAtWaterline_ (0.0) ,
                m_name_ ("") ,
                m_portDistance_ (0.0) ,
                m_referenceFrameOrigin_(UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType::BOW_WATERLINE_INTERSECTION) ,
                m_starboardDistance_ (0.0) ,
                m_topDistance_ (0.0) ,
                m_weightLight_ (0.0) ,
                m_weightLoaded_ (0.0)  {

            }   

            UVPlatformSpecsReportType::UVPlatformSpecsReportType (double aftDistance_,double beamAtWaterline_,double bottomDistance_,const ::UMAA::Common::Measurement::Position3DBodyXYZ& centerOfBuoyancy_,const ::UMAA::Common::Measurement::Position3DBodyXYZ& centerOfGravity_,const ::dds::core::optional< double >& diameter_,double displacement_,double draft_,double forwardDistance_,double lengthAtWaterline_,const std::string& name_,double portDistance_,const ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType& referenceFrameOrigin_,double starboardDistance_,double topDistance_,const ::dds::core::optional< double >& weightInWater_,double weightLight_,double weightLoaded_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_aftDistance_(aftDistance_), 
                m_beamAtWaterline_(beamAtWaterline_), 
                m_bottomDistance_(bottomDistance_), 
                m_centerOfBuoyancy_(centerOfBuoyancy_), 
                m_centerOfGravity_(centerOfGravity_), 
                m_diameter_(diameter_), 
                m_displacement_(displacement_), 
                m_draft_(draft_), 
                m_forwardDistance_(forwardDistance_), 
                m_lengthAtWaterline_(lengthAtWaterline_), 
                m_name_(name_), 
                m_portDistance_(portDistance_), 
                m_referenceFrameOrigin_(referenceFrameOrigin_), 
                m_starboardDistance_(starboardDistance_), 
                m_topDistance_(topDistance_), 
                m_weightInWater_(weightInWater_), 
                m_weightLight_(weightLight_), 
                m_weightLoaded_(weightLoaded_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void UVPlatformSpecsReportType::swap(UVPlatformSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_aftDistance_, other_.m_aftDistance_);
                swap(m_beamAtWaterline_, other_.m_beamAtWaterline_);
                swap(m_bottomDistance_, other_.m_bottomDistance_);
                swap(m_centerOfBuoyancy_, other_.m_centerOfBuoyancy_);
                swap(m_centerOfGravity_, other_.m_centerOfGravity_);
                swap(m_diameter_, other_.m_diameter_);
                swap(m_displacement_, other_.m_displacement_);
                swap(m_draft_, other_.m_draft_);
                swap(m_forwardDistance_, other_.m_forwardDistance_);
                swap(m_lengthAtWaterline_, other_.m_lengthAtWaterline_);
                swap(m_name_, other_.m_name_);
                swap(m_portDistance_, other_.m_portDistance_);
                swap(m_referenceFrameOrigin_, other_.m_referenceFrameOrigin_);
                swap(m_starboardDistance_, other_.m_starboardDistance_);
                swap(m_topDistance_, other_.m_topDistance_);
                swap(m_weightInWater_, other_.m_weightInWater_);
                swap(m_weightLight_, other_.m_weightLight_);
                swap(m_weightLoaded_, other_.m_weightLoaded_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool UVPlatformSpecsReportType::operator == (const UVPlatformSpecsReportType& other_) const {
                if (std::fabs(m_aftDistance_ - other_.m_aftDistance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_aftDistance_ - other_.m_aftDistance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_beamAtWaterline_ - other_.m_beamAtWaterline_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_beamAtWaterline_ - other_.m_beamAtWaterline_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_bottomDistance_ - other_.m_bottomDistance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bottomDistance_ - other_.m_bottomDistance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_centerOfBuoyancy_ != other_.m_centerOfBuoyancy_) {
                    return false;
                }
                if (m_centerOfGravity_ != other_.m_centerOfGravity_) {
                    return false;
                }
                if (m_diameter_.has_value() != other_.m_diameter_.has_value()) {
                    return false;
                } else if (m_diameter_.has_value()) {
                    if (std::fabs(*m_diameter_ - *other_.m_diameter_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_diameter_ - *other_.m_diameter_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_displacement_ - other_.m_displacement_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_displacement_ - other_.m_displacement_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_draft_ - other_.m_draft_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_draft_ - other_.m_draft_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_forwardDistance_ - other_.m_forwardDistance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_forwardDistance_ - other_.m_forwardDistance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_lengthAtWaterline_ - other_.m_lengthAtWaterline_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_lengthAtWaterline_ - other_.m_lengthAtWaterline_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (std::fabs(m_portDistance_ - other_.m_portDistance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_portDistance_ - other_.m_portDistance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_referenceFrameOrigin_ != other_.m_referenceFrameOrigin_) {
                    return false;
                }
                if (std::fabs(m_starboardDistance_ - other_.m_starboardDistance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_starboardDistance_ - other_.m_starboardDistance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_topDistance_ - other_.m_topDistance_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_topDistance_ - other_.m_topDistance_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_weightInWater_.has_value() != other_.m_weightInWater_.has_value()) {
                    return false;
                } else if (m_weightInWater_.has_value()) {
                    if (std::fabs(*m_weightInWater_ - *other_.m_weightInWater_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_weightInWater_ - *other_.m_weightInWater_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (std::fabs(m_weightLight_ - other_.m_weightLight_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_weightLight_ - other_.m_weightLight_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_weightLoaded_ - other_.m_weightLoaded_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_weightLoaded_ - other_.m_weightLoaded_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool UVPlatformSpecsReportType::operator != (const UVPlatformSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const UVPlatformSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "aftDistance: " << std::setprecision(15) << sample.aftDistance ()<<", ";
                o << "beamAtWaterline: " << std::setprecision(15) << sample.beamAtWaterline ()<<", ";
                o << "bottomDistance: " << std::setprecision(15) << sample.bottomDistance ()<<", ";
                o << "centerOfBuoyancy: " << sample.centerOfBuoyancy ()<<", ";
                o << "centerOfGravity: " << sample.centerOfGravity ()<<", ";
                o << "diameter: " << sample.diameter ()<<", ";
                o << "displacement: " << std::setprecision(15) << sample.displacement ()<<", ";
                o << "draft: " << std::setprecision(15) << sample.draft ()<<", ";
                o << "forwardDistance: " << std::setprecision(15) << sample.forwardDistance ()<<", ";
                o << "lengthAtWaterline: " << std::setprecision(15) << sample.lengthAtWaterline ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "portDistance: " << std::setprecision(15) << sample.portDistance ()<<", ";
                o << "referenceFrameOrigin: " << sample.referenceFrameOrigin ()<<", ";
                o << "starboardDistance: " << std::setprecision(15) << sample.starboardDistance ()<<", ";
                o << "topDistance: " << std::setprecision(15) << sample.topDistance ()<<", ";
                o << "weightInWater: " << sample.weightInWater ()<<", ";
                o << "weightLight: " << std::setprecision(15) << sample.weightLight ()<<", ";
                o << "weightLoaded: " << std::setprecision(15) << sample.weightLoaded ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace UVPlatformSpecs  

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
        struct native_type_code< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member UVPlatformSpecsReportType_g_tc_members[20]=
                {

                    {
                        (char *)"aftDistance",/* Member name */
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
                        (char *)"beamAtWaterline",/* Member name */
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
                        (char *)"bottomDistance",/* Member name */
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
                        (char *)"centerOfBuoyancy",/* Member name */
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
                        (char *)"centerOfGravity",/* Member name */
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
                        (char *)"diameter",/* Member name */
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
                        (char *)"displacement",/* Member name */
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
                        (char *)"draft",/* Member name */
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
                        (char *)"forwardDistance",/* Member name */
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
                        (char *)"lengthAtWaterline",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"portDistance",/* Member name */
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
                        (char *)"referenceFrameOrigin",/* Member name */
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
                        (char *)"starboardDistance",/* Member name */
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
                        (char *)"topDistance",/* Member name */
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
                        (char *)"weightInWater",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"weightLight",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"weightLoaded",/* Member name */
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
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            18,/* Representation ID */
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
                            19,/* Representation ID */
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

                static DDS_TypeCode UVPlatformSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        20, /* Number of members */
                        UVPlatformSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for UVPlatformSpecsReportType*/

                if (is_initialized) {
                    return &UVPlatformSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                UVPlatformSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                UVPlatformSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position3DBodyXYZ>::get().native();
                UVPlatformSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position3DBodyXYZ>::get().native();
                UVPlatformSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MassMetricTon_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType>::get().native();
                UVPlatformSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MassMetricTon_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MassMetricTon_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MassMetricTon_AliasTag_t>::get().native();
                UVPlatformSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                UVPlatformSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                UVPlatformSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                UVPlatformSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                UVPlatformSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                UVPlatformSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.enumerated_value = 0;
                UVPlatformSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[15]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[15]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformSpecsReportType_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[17]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformSpecsReportType_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformSpecsReportType_g_tc_members[17]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                UVPlatformSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                UVPlatformSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &UVPlatformSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo UVPlatformSpecsReportType_g_memberAccessInfos[20] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo UVPlatformSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &UVPlatformSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                UVPlatformSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->aftDistance() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->beamAtWaterline() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bottomDistance() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->centerOfBuoyancy() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->centerOfGravity() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diameter() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->displacement() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->draft() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->forwardDistance() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lengthAtWaterline() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->portDistance() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->referenceFrameOrigin() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->starboardDistance() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->topDistance() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->weightInWater() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->weightLight() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->weightLoaded() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                UVPlatformSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                UVPlatformSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                UVPlatformSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        UVPlatformSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        UVPlatformSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                UVPlatformSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                UVPlatformSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType >;

                UVPlatformSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &UVPlatformSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin UVPlatformSpecsReportType_g_typePlugin = 
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

                return &UVPlatformSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportTypePlugin_new,
                ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = UVPlatformSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = UVPlatformSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType >::from_cdr_buffer(::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = UVPlatformSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType >::reset_sample(::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType& sample) 
        {
            sample.aftDistance(0.0);
            sample.beamAtWaterline(0.0);
            sample.bottomDistance(0.0);
            ::rti::topic::reset_sample(sample.centerOfBuoyancy());
            ::rti::topic::reset_sample(sample.centerOfGravity());
            ::rti::topic::reset_sample(sample.diameter());
            sample.displacement(0.0);
            sample.draft(0.0);
            sample.forwardDistance(0.0);
            sample.lengthAtWaterline(0.0);
            sample.name("");
            sample.portDistance(0.0);
            sample.referenceFrameOrigin(UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType::BOW_WATERLINE_INTERSECTION);
            sample.starboardDistance(0.0);
            sample.topDistance(0.0);
            ::rti::topic::reset_sample(sample.weightInWater());
            sample.weightLight(0.0);
            sample.weightLoaded(0.0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType >::allocate_sample(::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.centerOfBuoyancy(),  -1, -1);
            ::rti::topic::allocate_sample(sample.centerOfGravity(),  -1, -1);
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.referenceFrameOrigin(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
