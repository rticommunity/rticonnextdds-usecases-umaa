

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SituationalSignalSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "SituationalSignalSpecsReportType.hpp"
#include "SituationalSignalSpecsReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace SituationalSignalSpecs {

            // ---- SituationalSignalSpecsReportType: 

            SituationalSignalSpecsReportType::SituationalSignalSpecsReportType() :
                m_agreeToBeOvertaken_ (0) ,
                m_alteringCourseToPort_ (0) ,
                m_alteringCourseToStarboard_ (0) ,
                m_engagedInMineClearanceOperations_ (0) ,
                m_inDistressNeedAssistance_ (0) ,
                m_inSightCollisionWarning_ (0) ,
                m_maneuverabilityRestricted_ (0) ,
                m_operatingAsternPropulsion_ (0) ,
                m_outOfSightCollisionWarning_ (0) ,
                m_toOvertakeOnPortSide_ (0) ,
                m_toOvertakeOnstarboardSide_ (0) ,
                m_towingAndPushingAlongsideOrAhead_ (0) ,
                m_towingAndPushingBehind_ (0) ,
                m_vesselAground_ (0) ,
                m_vesselAnchored_ (0) ,
                m_vesselBeingPushed_ (0) ,
                m_vesselBeingTowedAlongside_ (0) ,
                m_vesselBeingTowedBehind_ (0) ,
                m_vesselConstrainedByHerDraft_ (0) ,
                m_vesselLeavingDock_ (0) ,
                m_vesselNotUnderControl_ (0) ,
                m_vesselStopped_ (0) ,
                m_vesselUnderWay_ (0) ,
                m_visibilityRestricted_ (0) ,
                m_visibilityRestrictedStopped_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            SituationalSignalSpecsReportType::SituationalSignalSpecsReportType (bool agreeToBeOvertaken,bool alteringCourseToPort,bool alteringCourseToStarboard,bool engagedInMineClearanceOperations,bool inDistressNeedAssistance,bool inSightCollisionWarning,bool maneuverabilityRestricted,bool operatingAsternPropulsion,bool outOfSightCollisionWarning,bool toOvertakeOnPortSide,bool toOvertakeOnstarboardSide,bool towingAndPushingAlongsideOrAhead,bool towingAndPushingBehind,bool vesselAground,bool vesselAnchored,bool vesselBeingPushed,bool vesselBeingTowedAlongside,bool vesselBeingTowedBehind,bool vesselConstrainedByHerDraft,bool vesselLeavingDock,bool vesselNotUnderControl,bool vesselStopped,bool vesselUnderWay,bool visibilityRestricted,bool visibilityRestrictedStopped,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_agreeToBeOvertaken_( agreeToBeOvertaken ),
                m_alteringCourseToPort_( alteringCourseToPort ),
                m_alteringCourseToStarboard_( alteringCourseToStarboard ),
                m_engagedInMineClearanceOperations_( engagedInMineClearanceOperations ),
                m_inDistressNeedAssistance_( inDistressNeedAssistance ),
                m_inSightCollisionWarning_( inSightCollisionWarning ),
                m_maneuverabilityRestricted_( maneuverabilityRestricted ),
                m_operatingAsternPropulsion_( operatingAsternPropulsion ),
                m_outOfSightCollisionWarning_( outOfSightCollisionWarning ),
                m_toOvertakeOnPortSide_( toOvertakeOnPortSide ),
                m_toOvertakeOnstarboardSide_( toOvertakeOnstarboardSide ),
                m_towingAndPushingAlongsideOrAhead_( towingAndPushingAlongsideOrAhead ),
                m_towingAndPushingBehind_( towingAndPushingBehind ),
                m_vesselAground_( vesselAground ),
                m_vesselAnchored_( vesselAnchored ),
                m_vesselBeingPushed_( vesselBeingPushed ),
                m_vesselBeingTowedAlongside_( vesselBeingTowedAlongside ),
                m_vesselBeingTowedBehind_( vesselBeingTowedBehind ),
                m_vesselConstrainedByHerDraft_( vesselConstrainedByHerDraft ),
                m_vesselLeavingDock_( vesselLeavingDock ),
                m_vesselNotUnderControl_( vesselNotUnderControl ),
                m_vesselStopped_( vesselStopped ),
                m_vesselUnderWay_( vesselUnderWay ),
                m_visibilityRestricted_( visibilityRestricted ),
                m_visibilityRestrictedStopped_( visibilityRestrictedStopped ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            SituationalSignalSpecsReportType::SituationalSignalSpecsReportType(SituationalSignalSpecsReportType&& other_) OMG_NOEXCEPT  :m_agreeToBeOvertaken_ (std::move(other_.m_agreeToBeOvertaken_))
            ,
            m_alteringCourseToPort_ (std::move(other_.m_alteringCourseToPort_))
            ,
            m_alteringCourseToStarboard_ (std::move(other_.m_alteringCourseToStarboard_))
            ,
            m_engagedInMineClearanceOperations_ (std::move(other_.m_engagedInMineClearanceOperations_))
            ,
            m_inDistressNeedAssistance_ (std::move(other_.m_inDistressNeedAssistance_))
            ,
            m_inSightCollisionWarning_ (std::move(other_.m_inSightCollisionWarning_))
            ,
            m_maneuverabilityRestricted_ (std::move(other_.m_maneuverabilityRestricted_))
            ,
            m_operatingAsternPropulsion_ (std::move(other_.m_operatingAsternPropulsion_))
            ,
            m_outOfSightCollisionWarning_ (std::move(other_.m_outOfSightCollisionWarning_))
            ,
            m_toOvertakeOnPortSide_ (std::move(other_.m_toOvertakeOnPortSide_))
            ,
            m_toOvertakeOnstarboardSide_ (std::move(other_.m_toOvertakeOnstarboardSide_))
            ,
            m_towingAndPushingAlongsideOrAhead_ (std::move(other_.m_towingAndPushingAlongsideOrAhead_))
            ,
            m_towingAndPushingBehind_ (std::move(other_.m_towingAndPushingBehind_))
            ,
            m_vesselAground_ (std::move(other_.m_vesselAground_))
            ,
            m_vesselAnchored_ (std::move(other_.m_vesselAnchored_))
            ,
            m_vesselBeingPushed_ (std::move(other_.m_vesselBeingPushed_))
            ,
            m_vesselBeingTowedAlongside_ (std::move(other_.m_vesselBeingTowedAlongside_))
            ,
            m_vesselBeingTowedBehind_ (std::move(other_.m_vesselBeingTowedBehind_))
            ,
            m_vesselConstrainedByHerDraft_ (std::move(other_.m_vesselConstrainedByHerDraft_))
            ,
            m_vesselLeavingDock_ (std::move(other_.m_vesselLeavingDock_))
            ,
            m_vesselNotUnderControl_ (std::move(other_.m_vesselNotUnderControl_))
            ,
            m_vesselStopped_ (std::move(other_.m_vesselStopped_))
            ,
            m_vesselUnderWay_ (std::move(other_.m_vesselUnderWay_))
            ,
            m_visibilityRestricted_ (std::move(other_.m_visibilityRestricted_))
            ,
            m_visibilityRestrictedStopped_ (std::move(other_.m_visibilityRestrictedStopped_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            SituationalSignalSpecsReportType& SituationalSignalSpecsReportType::operator=(SituationalSignalSpecsReportType&&  other_) OMG_NOEXCEPT {
                SituationalSignalSpecsReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void SituationalSignalSpecsReportType::swap(SituationalSignalSpecsReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_agreeToBeOvertaken_, other_.m_agreeToBeOvertaken_);
                swap(m_alteringCourseToPort_, other_.m_alteringCourseToPort_);
                swap(m_alteringCourseToStarboard_, other_.m_alteringCourseToStarboard_);
                swap(m_engagedInMineClearanceOperations_, other_.m_engagedInMineClearanceOperations_);
                swap(m_inDistressNeedAssistance_, other_.m_inDistressNeedAssistance_);
                swap(m_inSightCollisionWarning_, other_.m_inSightCollisionWarning_);
                swap(m_maneuverabilityRestricted_, other_.m_maneuverabilityRestricted_);
                swap(m_operatingAsternPropulsion_, other_.m_operatingAsternPropulsion_);
                swap(m_outOfSightCollisionWarning_, other_.m_outOfSightCollisionWarning_);
                swap(m_toOvertakeOnPortSide_, other_.m_toOvertakeOnPortSide_);
                swap(m_toOvertakeOnstarboardSide_, other_.m_toOvertakeOnstarboardSide_);
                swap(m_towingAndPushingAlongsideOrAhead_, other_.m_towingAndPushingAlongsideOrAhead_);
                swap(m_towingAndPushingBehind_, other_.m_towingAndPushingBehind_);
                swap(m_vesselAground_, other_.m_vesselAground_);
                swap(m_vesselAnchored_, other_.m_vesselAnchored_);
                swap(m_vesselBeingPushed_, other_.m_vesselBeingPushed_);
                swap(m_vesselBeingTowedAlongside_, other_.m_vesselBeingTowedAlongside_);
                swap(m_vesselBeingTowedBehind_, other_.m_vesselBeingTowedBehind_);
                swap(m_vesselConstrainedByHerDraft_, other_.m_vesselConstrainedByHerDraft_);
                swap(m_vesselLeavingDock_, other_.m_vesselLeavingDock_);
                swap(m_vesselNotUnderControl_, other_.m_vesselNotUnderControl_);
                swap(m_vesselStopped_, other_.m_vesselStopped_);
                swap(m_vesselUnderWay_, other_.m_vesselUnderWay_);
                swap(m_visibilityRestricted_, other_.m_visibilityRestricted_);
                swap(m_visibilityRestrictedStopped_, other_.m_visibilityRestrictedStopped_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool SituationalSignalSpecsReportType::operator == (const SituationalSignalSpecsReportType& other_) const {
                if (m_agreeToBeOvertaken_ != other_.m_agreeToBeOvertaken_) {
                    return false;
                }
                if (m_alteringCourseToPort_ != other_.m_alteringCourseToPort_) {
                    return false;
                }
                if (m_alteringCourseToStarboard_ != other_.m_alteringCourseToStarboard_) {
                    return false;
                }
                if (m_engagedInMineClearanceOperations_ != other_.m_engagedInMineClearanceOperations_) {
                    return false;
                }
                if (m_inDistressNeedAssistance_ != other_.m_inDistressNeedAssistance_) {
                    return false;
                }
                if (m_inSightCollisionWarning_ != other_.m_inSightCollisionWarning_) {
                    return false;
                }
                if (m_maneuverabilityRestricted_ != other_.m_maneuverabilityRestricted_) {
                    return false;
                }
                if (m_operatingAsternPropulsion_ != other_.m_operatingAsternPropulsion_) {
                    return false;
                }
                if (m_outOfSightCollisionWarning_ != other_.m_outOfSightCollisionWarning_) {
                    return false;
                }
                if (m_toOvertakeOnPortSide_ != other_.m_toOvertakeOnPortSide_) {
                    return false;
                }
                if (m_toOvertakeOnstarboardSide_ != other_.m_toOvertakeOnstarboardSide_) {
                    return false;
                }
                if (m_towingAndPushingAlongsideOrAhead_ != other_.m_towingAndPushingAlongsideOrAhead_) {
                    return false;
                }
                if (m_towingAndPushingBehind_ != other_.m_towingAndPushingBehind_) {
                    return false;
                }
                if (m_vesselAground_ != other_.m_vesselAground_) {
                    return false;
                }
                if (m_vesselAnchored_ != other_.m_vesselAnchored_) {
                    return false;
                }
                if (m_vesselBeingPushed_ != other_.m_vesselBeingPushed_) {
                    return false;
                }
                if (m_vesselBeingTowedAlongside_ != other_.m_vesselBeingTowedAlongside_) {
                    return false;
                }
                if (m_vesselBeingTowedBehind_ != other_.m_vesselBeingTowedBehind_) {
                    return false;
                }
                if (m_vesselConstrainedByHerDraft_ != other_.m_vesselConstrainedByHerDraft_) {
                    return false;
                }
                if (m_vesselLeavingDock_ != other_.m_vesselLeavingDock_) {
                    return false;
                }
                if (m_vesselNotUnderControl_ != other_.m_vesselNotUnderControl_) {
                    return false;
                }
                if (m_vesselStopped_ != other_.m_vesselStopped_) {
                    return false;
                }
                if (m_vesselUnderWay_ != other_.m_vesselUnderWay_) {
                    return false;
                }
                if (m_visibilityRestricted_ != other_.m_visibilityRestricted_) {
                    return false;
                }
                if (m_visibilityRestrictedStopped_ != other_.m_visibilityRestrictedStopped_) {
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
            bool SituationalSignalSpecsReportType::operator != (const SituationalSignalSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SituationalSignalSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "agreeToBeOvertaken: " << sample.agreeToBeOvertaken()<<", ";
                o << "alteringCourseToPort: " << sample.alteringCourseToPort()<<", ";
                o << "alteringCourseToStarboard: " << sample.alteringCourseToStarboard()<<", ";
                o << "engagedInMineClearanceOperations: " << sample.engagedInMineClearanceOperations()<<", ";
                o << "inDistressNeedAssistance: " << sample.inDistressNeedAssistance()<<", ";
                o << "inSightCollisionWarning: " << sample.inSightCollisionWarning()<<", ";
                o << "maneuverabilityRestricted: " << sample.maneuverabilityRestricted()<<", ";
                o << "operatingAsternPropulsion: " << sample.operatingAsternPropulsion()<<", ";
                o << "outOfSightCollisionWarning: " << sample.outOfSightCollisionWarning()<<", ";
                o << "toOvertakeOnPortSide: " << sample.toOvertakeOnPortSide()<<", ";
                o << "toOvertakeOnstarboardSide: " << sample.toOvertakeOnstarboardSide()<<", ";
                o << "towingAndPushingAlongsideOrAhead: " << sample.towingAndPushingAlongsideOrAhead()<<", ";
                o << "towingAndPushingBehind: " << sample.towingAndPushingBehind()<<", ";
                o << "vesselAground: " << sample.vesselAground()<<", ";
                o << "vesselAnchored: " << sample.vesselAnchored()<<", ";
                o << "vesselBeingPushed: " << sample.vesselBeingPushed()<<", ";
                o << "vesselBeingTowedAlongside: " << sample.vesselBeingTowedAlongside()<<", ";
                o << "vesselBeingTowedBehind: " << sample.vesselBeingTowedBehind()<<", ";
                o << "vesselConstrainedByHerDraft: " << sample.vesselConstrainedByHerDraft()<<", ";
                o << "vesselLeavingDock: " << sample.vesselLeavingDock()<<", ";
                o << "vesselNotUnderControl: " << sample.vesselNotUnderControl()<<", ";
                o << "vesselStopped: " << sample.vesselStopped()<<", ";
                o << "vesselUnderWay: " << sample.vesselUnderWay()<<", ";
                o << "visibilityRestricted: " << sample.visibilityRestricted()<<", ";
                o << "visibilityRestrictedStopped: " << sample.visibilityRestrictedStopped()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace SituationalSignalSpecs  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SituationalSignalSpecsReportType_g_tc_members[27]=
                {

                    {
                        (char *)"agreeToBeOvertaken",/* Member name */
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
                        (char *)"alteringCourseToPort",/* Member name */
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
                        (char *)"alteringCourseToStarboard",/* Member name */
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
                        (char *)"engagedInMineClearanceOperations",/* Member name */
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
                        (char *)"inDistressNeedAssistance",/* Member name */
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
                        (char *)"inSightCollisionWarning",/* Member name */
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
                        (char *)"maneuverabilityRestricted",/* Member name */
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
                        (char *)"operatingAsternPropulsion",/* Member name */
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
                        (char *)"outOfSightCollisionWarning",/* Member name */
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
                        (char *)"toOvertakeOnPortSide",/* Member name */
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
                        (char *)"toOvertakeOnstarboardSide",/* Member name */
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
                        (char *)"towingAndPushingAlongsideOrAhead",/* Member name */
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
                        (char *)"towingAndPushingBehind",/* Member name */
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
                        (char *)"vesselAground",/* Member name */
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
                        (char *)"vesselAnchored",/* Member name */
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
                        (char *)"vesselBeingPushed",/* Member name */
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
                        (char *)"vesselBeingTowedAlongside",/* Member name */
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
                        (char *)"vesselBeingTowedBehind",/* Member name */
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
                        (char *)"vesselConstrainedByHerDraft",/* Member name */
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
                        (char *)"vesselLeavingDock",/* Member name */
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
                        (char *)"vesselNotUnderControl",/* Member name */
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
                        (char *)"vesselStopped",/* Member name */
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
                        (char *)"vesselUnderWay",/* Member name */
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
                        (char *)"visibilityRestricted",/* Member name */
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
                        (char *)"visibilityRestrictedStopped",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SituationalSignalSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        27, /* Number of members */
                        SituationalSignalSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SituationalSignalSpecsReportType*/

                if (is_initialized) {
                    return &SituationalSignalSpecsReportType_g_tc;
                }

                SituationalSignalSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SituationalSignalSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalSpecsReportType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SituationalSignalSpecsReportType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                SituationalSignalSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalSpecsReportType_g_tc_members[24]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                SituationalSignalSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &SituationalSignalSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo SituationalSignalSpecsReportType_g_memberAccessInfos[27] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SituationalSignalSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SituationalSignalSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                SituationalSignalSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->agreeToBeOvertaken() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->alteringCourseToPort() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->alteringCourseToStarboard() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->engagedInMineClearanceOperations() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->inDistressNeedAssistance() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->inSightCollisionWarning() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maneuverabilityRestricted() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->operatingAsternPropulsion() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->outOfSightCollisionWarning() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->toOvertakeOnPortSide() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->toOvertakeOnstarboardSide() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->towingAndPushingAlongsideOrAhead() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->towingAndPushingBehind() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselAground() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselAnchored() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselBeingPushed() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselBeingTowedAlongside() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselBeingTowedBehind() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselConstrainedByHerDraft() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselLeavingDock() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselNotUnderControl() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselStopped() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselUnderWay() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->visibilityRestricted() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->visibilityRestrictedStopped() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                SituationalSignalSpecsReportType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                SituationalSignalSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                SituationalSignalSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SituationalSignalSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SituationalSignalSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SituationalSignalSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SituationalSignalSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType >;

                SituationalSignalSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SituationalSignalSpecsReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SituationalSignalSpecsReportType_g_typePlugin = 
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

                return &SituationalSignalSpecsReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportTypePlugin_new,
                UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SituationalSignalSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SituationalSignalSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType >::from_cdr_buffer(UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SituationalSignalSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType >::reset_sample(UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType& sample) 
        {
            sample.agreeToBeOvertaken(0);
            sample.alteringCourseToPort(0);
            sample.alteringCourseToStarboard(0);
            sample.engagedInMineClearanceOperations(0);
            sample.inDistressNeedAssistance(0);
            sample.inSightCollisionWarning(0);
            sample.maneuverabilityRestricted(0);
            sample.operatingAsternPropulsion(0);
            sample.outOfSightCollisionWarning(0);
            sample.toOvertakeOnPortSide(0);
            sample.toOvertakeOnstarboardSide(0);
            sample.towingAndPushingAlongsideOrAhead(0);
            sample.towingAndPushingBehind(0);
            sample.vesselAground(0);
            sample.vesselAnchored(0);
            sample.vesselBeingPushed(0);
            sample.vesselBeingTowedAlongside(0);
            sample.vesselBeingTowedBehind(0);
            sample.vesselConstrainedByHerDraft(0);
            sample.vesselLeavingDock(0);
            sample.vesselNotUnderControl(0);
            sample.vesselStopped(0);
            sample.vesselUnderWay(0);
            sample.visibilityRestricted(0);
            sample.visibilityRestrictedStopped(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType >::allocate_sample(UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

