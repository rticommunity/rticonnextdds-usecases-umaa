

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ContactType.hpp"
#include "ContactTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace ContactStatus {

            // ---- ContactType: 

            ContactType::ContactType() :
                m_contactName_ ("") ,
                m_course_ (0.0) ,
                m_diameter_ (0.0) ,
                m_heading_ (0.0) ,
                m_kind_(UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType::CONTACT) ,
                m_originator_ ("") ,
                m_SIDC_ ("") ,
                m_sourceIndicator_(UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType::ACTUAL) ,
                m_speedOverGround_ (0.0)  {
                    ::rti::core::fill_array( 
                        m_featureID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            ContactType::ContactType (const UMAA::Common::Measurement::Polygon& area,const ::dds::core::optional< std::string >& callSign,const std::string& contactName,double course,const ::dds::core::optional< UMAA::Common::Measurement::Position2D >& CPA,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& CPATime,double diameter,const UMAA::Common::Measurement::Altitude_MSL& elevation,const UMAA::Common::Measurement::RMSDistanceErrorType& elevationError,double heading,const ::dds::core::optional< double >& height,const UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType& kind,const ::dds::core::optional< double >& length,const ::dds::core::optional< std::string >& MMSINumber,const std::string& originator,const UMAA::Common::Measurement::Position2D& position,const UMAA::Common::Measurement::CovariancePositionPositionType& positionCovariance,const std::string& SIDC,const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& source,const UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType& sourceIndicator,double speedOverGround,const UMAA::Common::Measurement::DateTime& timeFirstAcquired,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeLost,const ::dds::core::optional< double >& width,const UMAA::Common::Measurement::NumericGUID& featureID):
                m_area_( area ),
                m_callSign_( callSign ),
                m_contactName_( contactName ),
                m_course_( course ),
                m_CPA_( CPA ),
                m_CPATime_( CPATime ),
                m_diameter_( diameter ),
                m_elevation_( elevation ),
                m_elevationError_( elevationError ),
                m_heading_( heading ),
                m_height_( height ),
                m_kind_( kind ),
                m_length_( length ),
                m_MMSINumber_( MMSINumber ),
                m_originator_( originator ),
                m_position_( position ),
                m_positionCovariance_( positionCovariance ),
                m_SIDC_( SIDC ),
                m_source_( source ),
                m_sourceIndicator_( sourceIndicator ),
                m_speedOverGround_( speedOverGround ),
                m_timeFirstAcquired_( timeFirstAcquired ),
                m_timeLost_( timeLost ),
                m_width_( width ),
                m_featureID_( featureID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ContactType::ContactType(ContactType&& other_) OMG_NOEXCEPT  :m_area_ (std::move(other_.m_area_))
            ,
            m_callSign_ (std::move(other_.m_callSign_))
            ,
            m_contactName_ (std::move(other_.m_contactName_))
            ,
            m_course_ (std::move(other_.m_course_))
            ,
            m_CPA_ (std::move(other_.m_CPA_))
            ,
            m_CPATime_ (std::move(other_.m_CPATime_))
            ,
            m_diameter_ (std::move(other_.m_diameter_))
            ,
            m_elevation_ (std::move(other_.m_elevation_))
            ,
            m_elevationError_ (std::move(other_.m_elevationError_))
            ,
            m_heading_ (std::move(other_.m_heading_))
            ,
            m_height_ (std::move(other_.m_height_))
            ,
            m_kind_ (std::move(other_.m_kind_))
            ,
            m_length_ (std::move(other_.m_length_))
            ,
            m_MMSINumber_ (std::move(other_.m_MMSINumber_))
            ,
            m_originator_ (std::move(other_.m_originator_))
            ,
            m_position_ (std::move(other_.m_position_))
            ,
            m_positionCovariance_ (std::move(other_.m_positionCovariance_))
            ,
            m_SIDC_ (std::move(other_.m_SIDC_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sourceIndicator_ (std::move(other_.m_sourceIndicator_))
            ,
            m_speedOverGround_ (std::move(other_.m_speedOverGround_))
            ,
            m_timeFirstAcquired_ (std::move(other_.m_timeFirstAcquired_))
            ,
            m_timeLost_ (std::move(other_.m_timeLost_))
            ,
            m_width_ (std::move(other_.m_width_))
            ,
            m_featureID_ (std::move(other_.m_featureID_))
            {
            } 

            ContactType& ContactType::operator=(ContactType&&  other_) OMG_NOEXCEPT {
                ContactType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ContactType::swap(ContactType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_area_, other_.m_area_);
                swap(m_callSign_, other_.m_callSign_);
                swap(m_contactName_, other_.m_contactName_);
                swap(m_course_, other_.m_course_);
                swap(m_CPA_, other_.m_CPA_);
                swap(m_CPATime_, other_.m_CPATime_);
                swap(m_diameter_, other_.m_diameter_);
                swap(m_elevation_, other_.m_elevation_);
                swap(m_elevationError_, other_.m_elevationError_);
                swap(m_heading_, other_.m_heading_);
                swap(m_height_, other_.m_height_);
                swap(m_kind_, other_.m_kind_);
                swap(m_length_, other_.m_length_);
                swap(m_MMSINumber_, other_.m_MMSINumber_);
                swap(m_originator_, other_.m_originator_);
                swap(m_position_, other_.m_position_);
                swap(m_positionCovariance_, other_.m_positionCovariance_);
                swap(m_SIDC_, other_.m_SIDC_);
                swap(m_source_, other_.m_source_);
                swap(m_sourceIndicator_, other_.m_sourceIndicator_);
                swap(m_speedOverGround_, other_.m_speedOverGround_);
                swap(m_timeFirstAcquired_, other_.m_timeFirstAcquired_);
                swap(m_timeLost_, other_.m_timeLost_);
                swap(m_width_, other_.m_width_);
                swap(m_featureID_, other_.m_featureID_);
            }  

            bool ContactType::operator == (const ContactType& other_) const {
                if (m_area_ != other_.m_area_) {
                    return false;
                }
                if (m_callSign_ != other_.m_callSign_) {
                    return false;
                }
                if (m_contactName_ != other_.m_contactName_) {
                    return false;
                }
                if (m_course_ != other_.m_course_) {
                    return false;
                }
                if (m_CPA_ != other_.m_CPA_) {
                    return false;
                }
                if (m_CPATime_ != other_.m_CPATime_) {
                    return false;
                }
                if (m_diameter_ != other_.m_diameter_) {
                    return false;
                }
                if (m_elevation_ != other_.m_elevation_) {
                    return false;
                }
                if (m_elevationError_ != other_.m_elevationError_) {
                    return false;
                }
                if (m_heading_ != other_.m_heading_) {
                    return false;
                }
                if (m_height_ != other_.m_height_) {
                    return false;
                }
                if (m_kind_ != other_.m_kind_) {
                    return false;
                }
                if (m_length_ != other_.m_length_) {
                    return false;
                }
                if (m_MMSINumber_ != other_.m_MMSINumber_) {
                    return false;
                }
                if (m_originator_ != other_.m_originator_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_positionCovariance_ != other_.m_positionCovariance_) {
                    return false;
                }
                if (m_SIDC_ != other_.m_SIDC_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sourceIndicator_ != other_.m_sourceIndicator_) {
                    return false;
                }
                if (m_speedOverGround_ != other_.m_speedOverGround_) {
                    return false;
                }
                if (m_timeFirstAcquired_ != other_.m_timeFirstAcquired_) {
                    return false;
                }
                if (m_timeLost_ != other_.m_timeLost_) {
                    return false;
                }
                if (m_width_ != other_.m_width_) {
                    return false;
                }
                if (m_featureID_ != other_.m_featureID_) {
                    return false;
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
                o << "area: " << sample.area()<<", ";
                o << "callSign: " << sample.callSign()<<", ";
                o << "contactName: " << sample.contactName()<<", ";
                o << "course: " << std::setprecision(15) <<sample.course()<<", ";
                o << "CPA: " << sample.CPA()<<", ";
                o << "CPATime: " << sample.CPATime()<<", ";
                o << "diameter: " << std::setprecision(15) <<sample.diameter()<<", ";
                o << "elevation: " << sample.elevation()<<", ";
                o << "elevationError: " << sample.elevationError()<<", ";
                o << "heading: " << std::setprecision(15) <<sample.heading()<<", ";
                o << "height: " << sample.height()<<", ";
                o << "kind: " << sample.kind()<<", ";
                o << "length: " << sample.length()<<", ";
                o << "MMSINumber: " << sample.MMSINumber()<<", ";
                o << "originator: " << sample.originator()<<", ";
                o << "position: " << sample.position()<<", ";
                o << "positionCovariance: " << sample.positionCovariance()<<", ";
                o << "SIDC: " << sample.SIDC()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sourceIndicator: " << sample.sourceIndicator()<<", ";
                o << "speedOverGround: " << std::setprecision(15) <<sample.speedOverGround()<<", ";
                o << "timeFirstAcquired: " << sample.timeFirstAcquired()<<", ";
                o << "timeLost: " << sample.timeLost()<<", ";
                o << "width: " << sample.width()<<", ";
                o << "featureID: " << sample.featureID() ;
                o <<"]";
                return o;
            }

        } // namespace ContactStatus  

    } // namespace SA  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SA::ContactStatus::ContactType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ContactType_g_tc_source_sequence;

                static DDS_TypeCode_Member ContactType_g_tc_members[25]=
                {

                    {
                        (char *)"area",/* Member name */
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
                        (char *)"callSign",/* Member name */
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
                        (char *)"contactName",/* Member name */
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
                        (char *)"course",/* Member name */
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
                        (char *)"CPA",/* Member name */
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
                        (char *)"CPATime",/* Member name */
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
                        (char *)"diameter",/* Member name */
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
                        (char *)"elevation",/* Member name */
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
                        (char *)"elevationError",/* Member name */
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
                        (char *)"heading",/* Member name */
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
                        (char *)"height",/* Member name */
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
                        (char *)"kind",/* Member name */
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
                        (char *)"originator",/* Member name */
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
                        (char *)"position",/* Member name */
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
                        (char *)"positionCovariance",/* Member name */
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
                        (char *)"SIDC",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        (char *)"sourceIndicator",/* Member name */
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
                        (char *)"speedOverGround",/* Member name */
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
                        (char *)"timeFirstAcquired",/* Member name */
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
                        (char *)"timeLost",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"width",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"featureID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
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
                        (char *)"UMAA::SA::ContactStatus::ContactType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        25, /* Number of members */
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

                ContactType_g_tc_source_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > >((100L));

                ContactType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContactType_g_tc_source_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ContactType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Polygon>::get().native();
                ContactType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ContactType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ContactType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Course_TrueNorth_AliasTag_t>::get().native();
                ContactType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Position2D>::get().native();
                ContactType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                ContactType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContactType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Altitude_MSL>::get().native();
                ContactType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::RMSDistanceErrorType>::get().native();
                ContactType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Heading_TrueNorth_Angle_AliasTag_t>::get().native();
                ContactType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContactType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType>::get().native();
                ContactType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContactType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::MMSI_AliasTag_t>::get().native();
                ContactType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ContactType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Position2D>::get().native();
                ContactType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::CovariancePositionPositionType>::get().native();
                ContactType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ContactType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)& ContactType_g_tc_source_sequence;
                ContactType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType>::get().native();
                ContactType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                ContactType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                ContactType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                ContactType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContactType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                ContactType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ContactType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ContactType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                ContactType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ContactType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ContactType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                ContactType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
                ContactType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[6]._annotations._maxValue._u.double_value = 401056000ULL;

                ContactType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                ContactType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[9]._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
                ContactType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[9]._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

                ContactType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[10]._annotations._minValue._u.double_value = 0ULL;
                ContactType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[10]._annotations._maxValue._u.double_value = 401056000ULL;

                ContactType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContactType_g_tc_members[11]._annotations._defaultValue._u.enumerated_value = 0;

                ContactType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
                ContactType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[12]._annotations._maxValue._u.double_value = 401056000ULL;

                ContactType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ContactType_g_tc_members[14]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ContactType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ContactType_g_tc_members[17]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ContactType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContactType_g_tc_members[19]._annotations._defaultValue._u.enumerated_value = 0;

                ContactType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[20]._annotations._defaultValue._u.double_value = 0.0;
                ContactType_g_tc_members[20]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[20]._annotations._minValue._u.double_value = 0ULL;
                ContactType_g_tc_members[20]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[20]._annotations._maxValue._u.double_value = 200ULL;

                ContactType_g_tc_members[23]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[23]._annotations._minValue._u.double_value = 0ULL;
                ContactType_g_tc_members[23]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContactType_g_tc_members[23]._annotations._maxValue._u.double_value = 401056000ULL;

                ContactType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ContactType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SA::ContactStatus::ContactType *sample;

                static RTIXCdrMemberAccessInfo ContactType_g_memberAccessInfos[25] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SA::ContactStatus::ContactType);
                if (sample == NULL) {
                    return NULL;
                }

                ContactType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->area() - (char *)sample);

                ContactType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->callSign() - (char *)sample);

                ContactType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->contactName() - (char *)sample);

                ContactType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->course() - (char *)sample);

                ContactType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CPA() - (char *)sample);

                ContactType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CPATime() - (char *)sample);

                ContactType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diameter() - (char *)sample);

                ContactType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevation() - (char *)sample);

                ContactType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationError() - (char *)sample);

                ContactType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->heading() - (char *)sample);

                ContactType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->height() - (char *)sample);

                ContactType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kind() - (char *)sample);

                ContactType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->length() - (char *)sample);

                ContactType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MMSINumber() - (char *)sample);

                ContactType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->originator() - (char *)sample);

                ContactType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                ContactType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->positionCovariance() - (char *)sample);

                ContactType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SIDC() - (char *)sample);

                ContactType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                ContactType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sourceIndicator() - (char *)sample);

                ContactType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedOverGround() - (char *)sample);

                ContactType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeFirstAcquired() - (char *)sample);

                ContactType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeLost() - (char *)sample);

                ContactType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->width() - (char *)sample);

                ContactType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->featureID() - (char *)sample);

                ContactType_g_sampleAccessInfo.memberAccessInfos = 
                ContactType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SA::ContactStatus::ContactType);

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
                interpreter::get_aggregation_value_pointer< UMAA::SA::ContactStatus::ContactType >;

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
                    NULL
                };

                return &ContactType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SA::ContactStatus::ContactType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SA::ContactStatus::ContactType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SA::ContactStatus::ContactType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SA::ContactStatus::ContactTypePlugin_new,
                UMAA::SA::ContactStatus::ContactTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SA::ContactStatus::ContactType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SA::ContactStatus::ContactType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ContactTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ContactTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SA::ContactStatus::ContactType >::from_cdr_buffer(UMAA::SA::ContactStatus::ContactType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ContactTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SA::ContactStatus::ContactType from cdr buffer");
        }

        void topic_type_support< UMAA::SA::ContactStatus::ContactType >::reset_sample(UMAA::SA::ContactStatus::ContactType& sample) 
        {
            ::rti::topic::reset_sample(sample.area());
            ::rti::topic::reset_sample(sample.callSign());
            sample.contactName("");
            sample.course(0.0);
            ::rti::topic::reset_sample(sample.CPA());
            ::rti::topic::reset_sample(sample.CPATime());
            sample.diameter(0.0);
            ::rti::topic::reset_sample(sample.elevation());
            ::rti::topic::reset_sample(sample.elevationError());
            sample.heading(0.0);
            ::rti::topic::reset_sample(sample.height());
            sample.kind(UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType::CONTACT);
            ::rti::topic::reset_sample(sample.length());
            ::rti::topic::reset_sample(sample.MMSINumber());
            sample.originator("");
            ::rti::topic::reset_sample(sample.position());
            ::rti::topic::reset_sample(sample.positionCovariance());
            sample.SIDC("");
            ::rti::topic::reset_sample(sample.source());
            sample.sourceIndicator(UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType::ACTUAL);
            sample.speedOverGround(0.0);
            ::rti::topic::reset_sample(sample.timeFirstAcquired());
            ::rti::topic::reset_sample(sample.timeLost());
            ::rti::topic::reset_sample(sample.width());
            ::rti::topic::reset_sample(sample.featureID());
        }

        void topic_type_support< UMAA::SA::ContactStatus::ContactType >::allocate_sample(UMAA::SA::ContactStatus::ContactType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.area(),  -1, -1);
            ::rti::topic::allocate_sample(sample.contactName(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.elevation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.elevationError(),  -1, -1);
            ::rti::topic::allocate_sample(sample.kind(),  -1, -1);
            ::rti::topic::allocate_sample(sample.originator(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
            ::rti::topic::allocate_sample(sample.positionCovariance(),  -1, -1);
            ::rti::topic::allocate_sample(sample.SIDC(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.source(),  100L, -1);
            ::rti::topic::allocate_sample(sample.sourceIndicator(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeFirstAcquired(),  -1, -1);
            ::rti::topic::allocate_sample(sample.featureID(),  -1, -1);
        }

    }
}  

