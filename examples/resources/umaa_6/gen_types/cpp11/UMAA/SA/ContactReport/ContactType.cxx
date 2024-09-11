

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactType.idl
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
#include "ContactTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ContactType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace ContactReport {

            // ---- ContactType: 

            ContactType::ContactType() :
                m_contactName_ ("") ,
                m_sourceIndicator_(UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType::ACTUAL) ,
                m_specialManeuverIndicator_(UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType::ENGAGED) ,
                m_speedOverGround_ (0.0)  {

            }   

            ContactType::ContactType (const ::dds::core::optional< double >& altitudeAGL_,const ::dds::core::optional< double >& altitudeASF_,const ::dds::core::optional< double >& altitudeGeodetic_,const ::dds::core::optional< double >& altitudeMSL_,const ::dds::core::optional< std::string >& callSign_,const ::dds::core::optional< double >& confidence_,const ::UMAA::Common::Measurement::NumericGUID& contactID_,const std::string& contactName_,const ::dds::core::optional< double >& course_,const ::dds::core::optional< double >& depth_,const ::dds::core::optional< double >& heading_,const ::dds::core::optional< double >& height_,const ::dds::core::optional< double >& length_,const ::dds::core::optional< std::string >& MMSINumber_,const ::UMAA::Common::Measurement::GeoPosition2D& position_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >& positionCovariance_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionVelocityNEDType >& positionVelocityCovariance_,const ::dds::core::optional< double >& quality_,const ::dds::core::optional< std::string >& SIDC_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 32L >& sourceContactID_,const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType& sourceIndicator_,const ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType& specialManeuverIndicator_,double speedOverGround_,const ::UMAA::Common::Measurement::DateTime& timeFirstAcquired_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeLost_,const ::dds::core::optional< ::UMAA::Common::Measurement::Velocity3DPlatformNEDType >& velocity_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >& velocityCovariance_,const ::dds::core::optional< double >& width_):
                m_altitudeAGL_(altitudeAGL_), 
                m_altitudeASF_(altitudeASF_), 
                m_altitudeGeodetic_(altitudeGeodetic_), 
                m_altitudeMSL_(altitudeMSL_), 
                m_callSign_(callSign_), 
                m_confidence_(confidence_), 
                m_contactID_(contactID_), 
                m_contactName_(contactName_), 
                m_course_(course_), 
                m_depth_(depth_), 
                m_heading_(heading_), 
                m_height_(height_), 
                m_length_(length_), 
                m_MMSINumber_(MMSINumber_), 
                m_position_(position_), 
                m_positionCovariance_(positionCovariance_), 
                m_positionVelocityCovariance_(positionVelocityCovariance_), 
                m_quality_(quality_), 
                m_SIDC_(SIDC_), 
                m_sourceContactID_(sourceContactID_), 
                m_sourceIndicator_(sourceIndicator_), 
                m_specialManeuverIndicator_(specialManeuverIndicator_), 
                m_speedOverGround_(speedOverGround_), 
                m_timeFirstAcquired_(timeFirstAcquired_), 
                m_timeLost_(timeLost_), 
                m_velocity_(velocity_), 
                m_velocityCovariance_(velocityCovariance_), 
                m_width_(width_) {
            }

            void ContactType::swap(ContactType& other_)  noexcept 
            {
                using std::swap;
                swap(m_altitudeAGL_, other_.m_altitudeAGL_);
                swap(m_altitudeASF_, other_.m_altitudeASF_);
                swap(m_altitudeGeodetic_, other_.m_altitudeGeodetic_);
                swap(m_altitudeMSL_, other_.m_altitudeMSL_);
                swap(m_callSign_, other_.m_callSign_);
                swap(m_confidence_, other_.m_confidence_);
                swap(m_contactID_, other_.m_contactID_);
                swap(m_contactName_, other_.m_contactName_);
                swap(m_course_, other_.m_course_);
                swap(m_depth_, other_.m_depth_);
                swap(m_heading_, other_.m_heading_);
                swap(m_height_, other_.m_height_);
                swap(m_length_, other_.m_length_);
                swap(m_MMSINumber_, other_.m_MMSINumber_);
                swap(m_position_, other_.m_position_);
                swap(m_positionCovariance_, other_.m_positionCovariance_);
                swap(m_positionVelocityCovariance_, other_.m_positionVelocityCovariance_);
                swap(m_quality_, other_.m_quality_);
                swap(m_SIDC_, other_.m_SIDC_);
                swap(m_sourceContactID_, other_.m_sourceContactID_);
                swap(m_sourceIndicator_, other_.m_sourceIndicator_);
                swap(m_specialManeuverIndicator_, other_.m_specialManeuverIndicator_);
                swap(m_speedOverGround_, other_.m_speedOverGround_);
                swap(m_timeFirstAcquired_, other_.m_timeFirstAcquired_);
                swap(m_timeLost_, other_.m_timeLost_);
                swap(m_velocity_, other_.m_velocity_);
                swap(m_velocityCovariance_, other_.m_velocityCovariance_);
                swap(m_width_, other_.m_width_);
            }  

            bool ContactType::operator == (const ContactType& other_) const {
                if (m_altitudeAGL_.has_value() != other_.m_altitudeAGL_.has_value()) {
                    return false;
                } else if (m_altitudeAGL_.has_value()) {
                    if (std::fabs(*m_altitudeAGL_ - *other_.m_altitudeAGL_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeAGL_ - *other_.m_altitudeAGL_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_altitudeASF_.has_value() != other_.m_altitudeASF_.has_value()) {
                    return false;
                } else if (m_altitudeASF_.has_value()) {
                    if (std::fabs(*m_altitudeASF_ - *other_.m_altitudeASF_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeASF_ - *other_.m_altitudeASF_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_altitudeGeodetic_.has_value() != other_.m_altitudeGeodetic_.has_value()) {
                    return false;
                } else if (m_altitudeGeodetic_.has_value()) {
                    if (std::fabs(*m_altitudeGeodetic_ - *other_.m_altitudeGeodetic_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeGeodetic_ - *other_.m_altitudeGeodetic_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_altitudeMSL_.has_value() != other_.m_altitudeMSL_.has_value()) {
                    return false;
                } else if (m_altitudeMSL_.has_value()) {
                    if (std::fabs(*m_altitudeMSL_ - *other_.m_altitudeMSL_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_altitudeMSL_ - *other_.m_altitudeMSL_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_callSign_ != other_.m_callSign_) {
                    return false;
                }
                if (m_confidence_.has_value() != other_.m_confidence_.has_value()) {
                    return false;
                } else if (m_confidence_.has_value()) {
                    if (std::fabs(*m_confidence_ - *other_.m_confidence_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_confidence_ - *other_.m_confidence_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_contactID_ != other_.m_contactID_) {
                    return false;
                }
                if (m_contactName_ != other_.m_contactName_) {
                    return false;
                }
                if (m_course_.has_value() != other_.m_course_.has_value()) {
                    return false;
                } else if (m_course_.has_value()) {
                    if (std::fabs(*m_course_ - *other_.m_course_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_course_ - *other_.m_course_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_depth_.has_value() != other_.m_depth_.has_value()) {
                    return false;
                } else if (m_depth_.has_value()) {
                    if (std::fabs(*m_depth_ - *other_.m_depth_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_depth_ - *other_.m_depth_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_heading_.has_value() != other_.m_heading_.has_value()) {
                    return false;
                } else if (m_heading_.has_value()) {
                    if (std::fabs(*m_heading_ - *other_.m_heading_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_heading_ - *other_.m_heading_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_height_.has_value() != other_.m_height_.has_value()) {
                    return false;
                } else if (m_height_.has_value()) {
                    if (std::fabs(*m_height_ - *other_.m_height_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_height_ - *other_.m_height_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_length_.has_value() != other_.m_length_.has_value()) {
                    return false;
                } else if (m_length_.has_value()) {
                    if (std::fabs(*m_length_ - *other_.m_length_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_length_ - *other_.m_length_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_MMSINumber_ != other_.m_MMSINumber_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_positionCovariance_ != other_.m_positionCovariance_) {
                    return false;
                }
                if (m_positionVelocityCovariance_ != other_.m_positionVelocityCovariance_) {
                    return false;
                }
                if (m_quality_.has_value() != other_.m_quality_.has_value()) {
                    return false;
                } else if (m_quality_.has_value()) {
                    if (std::fabs(*m_quality_ - *other_.m_quality_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_quality_ - *other_.m_quality_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_SIDC_ != other_.m_SIDC_) {
                    return false;
                }
                if (m_sourceContactID_ != other_.m_sourceContactID_) {
                    return false;
                }
                if (m_sourceIndicator_ != other_.m_sourceIndicator_) {
                    return false;
                }
                if (m_specialManeuverIndicator_ != other_.m_specialManeuverIndicator_) {
                    return false;
                }
                if (std::fabs(m_speedOverGround_ - other_.m_speedOverGround_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_speedOverGround_ - other_.m_speedOverGround_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_timeFirstAcquired_ != other_.m_timeFirstAcquired_) {
                    return false;
                }
                if (m_timeLost_ != other_.m_timeLost_) {
                    return false;
                }
                if (m_velocity_ != other_.m_velocity_) {
                    return false;
                }
                if (m_velocityCovariance_ != other_.m_velocityCovariance_) {
                    return false;
                }
                if (m_width_.has_value() != other_.m_width_.has_value()) {
                    return false;
                } else if (m_width_.has_value()) {
                    if (std::fabs(*m_width_ - *other_.m_width_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_width_ - *other_.m_width_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                return true;
            }

            bool ContactType::operator != (const ContactType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ContactType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "altitudeAGL: " << sample.altitudeAGL ()<<", ";
                o << "altitudeASF: " << sample.altitudeASF ()<<", ";
                o << "altitudeGeodetic: " << sample.altitudeGeodetic ()<<", ";
                o << "altitudeMSL: " << sample.altitudeMSL ()<<", ";
                o << "callSign: " << sample.callSign ()<<", ";
                o << "confidence: " << sample.confidence ()<<", ";
                o << "contactID: " << sample.contactID ()<<", ";
                o << "contactName: " << sample.contactName ()<<", ";
                o << "course: " << sample.course ()<<", ";
                o << "depth: " << sample.depth ()<<", ";
                o << "heading: " << sample.heading ()<<", ";
                o << "height: " << sample.height ()<<", ";
                o << "length: " << sample.length ()<<", ";
                o << "MMSINumber: " << sample.MMSINumber ()<<", ";
                o << "position: " << sample.position ()<<", ";
                o << "positionCovariance: " << sample.positionCovariance ()<<", ";
                o << "positionVelocityCovariance: " << sample.positionVelocityCovariance ()<<", ";
                o << "quality: " << sample.quality ()<<", ";
                o << "SIDC: " << sample.SIDC ()<<", ";
                o << "sourceContactID: " << sample.sourceContactID ()<<", ";
                o << "sourceIndicator: " << sample.sourceIndicator ()<<", ";
                o << "specialManeuverIndicator: " << sample.specialManeuverIndicator ()<<", ";
                o << "speedOverGround: " << std::setprecision(15) << sample.speedOverGround ()<<", ";
                o << "timeFirstAcquired: " << sample.timeFirstAcquired ()<<", ";
                o << "timeLost: " << sample.timeLost ()<<", ";
                o << "velocity: " << sample.velocity ()<<", ";
                o << "velocityCovariance: " << sample.velocityCovariance ()<<", ";
                o << "width: " << sample.width ();
                o <<"]";
                return o;
            }

        } // namespace ContactReport  

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
        struct native_type_code< ::UMAA::SA::ContactReport::ContactType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ContactType_g_tc_sourceContactID_sequence;

                static DDS_TypeCode_Member ContactType_g_tc_members[28]=
                {

                    {
                        (char *)"altitudeAGL",/* Member name */
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
                        (char *)"altitudeASF",/* Member name */
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
                        (char *)"altitudeGeodetic",/* Member name */
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
                        (char *)"altitudeMSL",/* Member name */
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
                        (char *)"callSign",/* Member name */
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
                        (char *)"confidence",/* Member name */
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
                        (char *)"contactID",/* Member name */
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
                        (char *)"contactName",/* Member name */
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
                        (char *)"course",/* Member name */
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
                        (char *)"depth",/* Member name */
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
                        (char *)"heading",/* Member name */
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
                        (char *)"height",/* Member name */
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
                        (char *)"length",/* Member name */
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
                        (char *)"MMSINumber",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"position",/* Member name */
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
                        (char *)"positionCovariance",/* Member name */
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
                        (char *)"positionVelocityCovariance",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"quality",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SIDC",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sourceContactID",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sourceIndicator",/* Member name */
                        {
                            20,/* Representation ID */
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
                        (char *)"specialManeuverIndicator",/* Member name */
                        {
                            21,/* Representation ID */
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
                        (char *)"speedOverGround",/* Member name */
                        {
                            22,/* Representation ID */
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
                        (char *)"timeFirstAcquired",/* Member name */
                        {
                            23,/* Representation ID */
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
                        (char *)"timeLost",/* Member name */
                        {
                            24,/* Representation ID */
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
                        (char *)"velocity",/* Member name */
                        {
                            25,/* Representation ID */
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
                        (char *)"velocityCovariance",/* Member name */
                        {
                            26,/* Representation ID */
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
                        (char *)"width",/* Member name */
                        {
                            27,/* Representation ID */
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
                    }
                };

                static DDS_TypeCode ContactType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::ContactReport::ContactType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        28, /* Number of members */
                        ContactType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContactType*/

                if (is_initialized) {
                    return &ContactType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContactType_g_tc_sourceContactID_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 32L > >((32L));

                ContactType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContactType_g_tc_sourceContactID_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ContactType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceAGL_AliasTag_t>::get().native();
                ContactType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceASF_AliasTag_t>::get().native();
                ContactType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::GeodeticAltitude_AliasTag_t>::get().native();
                ContactType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MSLAltitude_AliasTag_t>::get().native();
                ContactType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ContactType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t>::get().native();
                ContactType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ContactType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ContactType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CourseTrueNorth_AliasTag_t>::get().native();
                ContactType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t>::get().native();
                ContactType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::HeadingTrueNorthAngle_AliasTag_t>::get().native();
                ContactType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContactType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContactType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::MMSI_AliasTag_t>::get().native();
                ContactType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GeoPosition2D>::get().native();
                ContactType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovariancePositionNEDType>::get().native();
                ContactType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovariancePositionVelocityNEDType>::get().native();
                ContactType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t>::get().native();
                ContactType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ContactType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)& ContactType_g_tc_sourceContactID_sequence;
                ContactType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType>::get().native();
                ContactType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType>::get().native();
                ContactType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                ContactType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ContactType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                ContactType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Velocity3DPlatformNEDType>::get().native();
                ContactType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovarianceVelocityNEDType>::get().native();
                ContactType_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ContactType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ContactType_g_tc_members[7]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                ContactType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[17]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[17]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContactType_g_tc_members[20]._annotations._defaultValue._u.enumerated_value = 0;
                ContactType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContactType_g_tc_members[21]._annotations._defaultValue._u.enumerated_value = 0;
                ContactType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[22]._annotations._defaultValue._u.double_value = 0.0;
                ContactType_g_tc_members[22]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[22]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[22]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[22]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                ContactType_g_tc_members[27]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[27]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[27]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[27]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ContactType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContactType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::ContactReport::ContactType *sample;

                static RTIXCdrMemberAccessInfo ContactType_g_memberAccessInfos[28] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::ContactReport::ContactType);
                if (sample == NULL) {
                    return NULL;
                }

                ContactType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL() - (char *)sample);

                ContactType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF() - (char *)sample);

                ContactType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeGeodetic() - (char *)sample);

                ContactType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeMSL() - (char *)sample);

                ContactType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->callSign() - (char *)sample);

                ContactType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->confidence() - (char *)sample);

                ContactType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactID() - (char *)sample);

                ContactType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactName() - (char *)sample);

                ContactType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->course() - (char *)sample);

                ContactType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->depth() - (char *)sample);

                ContactType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->heading() - (char *)sample);

                ContactType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->height() - (char *)sample);

                ContactType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->length() - (char *)sample);

                ContactType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MMSINumber() - (char *)sample);

                ContactType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                ContactType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionCovariance() - (char *)sample);

                ContactType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionVelocityCovariance() - (char *)sample);

                ContactType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->quality() - (char *)sample);

                ContactType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SIDC() - (char *)sample);

                ContactType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sourceContactID() - (char *)sample);

                ContactType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sourceIndicator() - (char *)sample);

                ContactType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specialManeuverIndicator() - (char *)sample);

                ContactType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedOverGround() - (char *)sample);

                ContactType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeFirstAcquired() - (char *)sample);

                ContactType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeLost() - (char *)sample);

                ContactType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->velocity() - (char *)sample);

                ContactType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->velocityCovariance() - (char *)sample);

                ContactType_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->width() - (char *)sample);

                ContactType_g_sampleAccessInfo.memberAccessInfos = 
                ContactType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::ContactReport::ContactType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContactType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContactType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContactType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContactType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::ContactReport::ContactType >;

                ContactType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContactType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContactType_g_typePlugin = 
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

                return &ContactType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::ContactReport::ContactType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::ContactReport::ContactType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::SA::ContactReport::ContactType >::reset_sample(::UMAA::SA::ContactReport::ContactType& sample) 
        {
            ::rti::topic::reset_sample(sample.altitudeAGL());
            ::rti::topic::reset_sample(sample.altitudeASF());
            ::rti::topic::reset_sample(sample.altitudeGeodetic());
            ::rti::topic::reset_sample(sample.altitudeMSL());
            ::rti::topic::reset_sample(sample.callSign());
            ::rti::topic::reset_sample(sample.confidence());
            ::rti::topic::reset_sample(sample.contactID());
            sample.contactName("");
            ::rti::topic::reset_sample(sample.course());
            ::rti::topic::reset_sample(sample.depth());
            ::rti::topic::reset_sample(sample.heading());
            ::rti::topic::reset_sample(sample.height());
            ::rti::topic::reset_sample(sample.length());
            ::rti::topic::reset_sample(sample.MMSINumber());
            ::rti::topic::reset_sample(sample.position());
            ::rti::topic::reset_sample(sample.positionCovariance());
            ::rti::topic::reset_sample(sample.positionVelocityCovariance());
            ::rti::topic::reset_sample(sample.quality());
            ::rti::topic::reset_sample(sample.SIDC());
            ::rti::topic::reset_sample(sample.sourceContactID());
            sample.sourceIndicator(UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType::ACTUAL);
            sample.specialManeuverIndicator(UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType::ENGAGED);
            sample.speedOverGround(0.0);
            ::rti::topic::reset_sample(sample.timeFirstAcquired());
            ::rti::topic::reset_sample(sample.timeLost());
            ::rti::topic::reset_sample(sample.velocity());
            ::rti::topic::reset_sample(sample.velocityCovariance());
            ::rti::topic::reset_sample(sample.width());
        }

        void topic_type_support< ::UMAA::SA::ContactReport::ContactType >::allocate_sample(::UMAA::SA::ContactReport::ContactType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.contactID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactName(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sourceContactID(),  32L, -1);
            ::rti::topic::allocate_sample(sample.sourceIndicator(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specialManeuverIndicator(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeFirstAcquired(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
