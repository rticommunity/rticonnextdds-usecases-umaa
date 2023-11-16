

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SituationalSignalCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "SituationalSignalCommandTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SituationalSignalCommandType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace SituationalSignalControl {

            // ---- SituationalSignalCommandType: 

            SituationalSignalCommandType::SituationalSignalCommandType() :
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

            }   

            SituationalSignalCommandType::SituationalSignalCommandType (bool agreeToBeOvertaken_,bool alteringCourseToPort_,bool alteringCourseToStarboard_,bool engagedInMineClearanceOperations_,bool inDistressNeedAssistance_,bool inSightCollisionWarning_,bool maneuverabilityRestricted_,bool operatingAsternPropulsion_,bool outOfSightCollisionWarning_,bool toOvertakeOnPortSide_,bool toOvertakeOnstarboardSide_,bool towingAndPushingAlongsideOrAhead_,bool towingAndPushingBehind_,bool vesselAground_,bool vesselAnchored_,bool vesselBeingPushed_,bool vesselBeingTowedAlongside_,bool vesselBeingTowedBehind_,bool vesselConstrainedByHerDraft_,bool vesselLeavingDock_,bool vesselNotUnderControl_,bool vesselStopped_,bool vesselUnderWay_,bool visibilityRestricted_,bool visibilityRestrictedStopped_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& destination_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_agreeToBeOvertaken_(agreeToBeOvertaken_), 
                m_alteringCourseToPort_(alteringCourseToPort_), 
                m_alteringCourseToStarboard_(alteringCourseToStarboard_), 
                m_engagedInMineClearanceOperations_(engagedInMineClearanceOperations_), 
                m_inDistressNeedAssistance_(inDistressNeedAssistance_), 
                m_inSightCollisionWarning_(inSightCollisionWarning_), 
                m_maneuverabilityRestricted_(maneuverabilityRestricted_), 
                m_operatingAsternPropulsion_(operatingAsternPropulsion_), 
                m_outOfSightCollisionWarning_(outOfSightCollisionWarning_), 
                m_toOvertakeOnPortSide_(toOvertakeOnPortSide_), 
                m_toOvertakeOnstarboardSide_(toOvertakeOnstarboardSide_), 
                m_towingAndPushingAlongsideOrAhead_(towingAndPushingAlongsideOrAhead_), 
                m_towingAndPushingBehind_(towingAndPushingBehind_), 
                m_vesselAground_(vesselAground_), 
                m_vesselAnchored_(vesselAnchored_), 
                m_vesselBeingPushed_(vesselBeingPushed_), 
                m_vesselBeingTowedAlongside_(vesselBeingTowedAlongside_), 
                m_vesselBeingTowedBehind_(vesselBeingTowedBehind_), 
                m_vesselConstrainedByHerDraft_(vesselConstrainedByHerDraft_), 
                m_vesselLeavingDock_(vesselLeavingDock_), 
                m_vesselNotUnderControl_(vesselNotUnderControl_), 
                m_vesselStopped_(vesselStopped_), 
                m_vesselUnderWay_(vesselUnderWay_), 
                m_visibilityRestricted_(visibilityRestricted_), 
                m_visibilityRestrictedStopped_(visibilityRestrictedStopped_), 
                m_source_(source_), 
                m_destination_(destination_), 
                m_sessionID_(sessionID_), 
                m_timeStamp_(timeStamp_) {
            }

            void SituationalSignalCommandType::swap(SituationalSignalCommandType& other_)  noexcept 
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
                swap(m_destination_, other_.m_destination_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool SituationalSignalCommandType::operator == (const SituationalSignalCommandType& other_) const {
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

            bool SituationalSignalCommandType::operator != (const SituationalSignalCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SituationalSignalCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "agreeToBeOvertaken: " << sample.agreeToBeOvertaken ()<<", ";
                o << "alteringCourseToPort: " << sample.alteringCourseToPort ()<<", ";
                o << "alteringCourseToStarboard: " << sample.alteringCourseToStarboard ()<<", ";
                o << "engagedInMineClearanceOperations: " << sample.engagedInMineClearanceOperations ()<<", ";
                o << "inDistressNeedAssistance: " << sample.inDistressNeedAssistance ()<<", ";
                o << "inSightCollisionWarning: " << sample.inSightCollisionWarning ()<<", ";
                o << "maneuverabilityRestricted: " << sample.maneuverabilityRestricted ()<<", ";
                o << "operatingAsternPropulsion: " << sample.operatingAsternPropulsion ()<<", ";
                o << "outOfSightCollisionWarning: " << sample.outOfSightCollisionWarning ()<<", ";
                o << "toOvertakeOnPortSide: " << sample.toOvertakeOnPortSide ()<<", ";
                o << "toOvertakeOnstarboardSide: " << sample.toOvertakeOnstarboardSide ()<<", ";
                o << "towingAndPushingAlongsideOrAhead: " << sample.towingAndPushingAlongsideOrAhead ()<<", ";
                o << "towingAndPushingBehind: " << sample.towingAndPushingBehind ()<<", ";
                o << "vesselAground: " << sample.vesselAground ()<<", ";
                o << "vesselAnchored: " << sample.vesselAnchored ()<<", ";
                o << "vesselBeingPushed: " << sample.vesselBeingPushed ()<<", ";
                o << "vesselBeingTowedAlongside: " << sample.vesselBeingTowedAlongside ()<<", ";
                o << "vesselBeingTowedBehind: " << sample.vesselBeingTowedBehind ()<<", ";
                o << "vesselConstrainedByHerDraft: " << sample.vesselConstrainedByHerDraft ()<<", ";
                o << "vesselLeavingDock: " << sample.vesselLeavingDock ()<<", ";
                o << "vesselNotUnderControl: " << sample.vesselNotUnderControl ()<<", ";
                o << "vesselStopped: " << sample.vesselStopped ()<<", ";
                o << "vesselUnderWay: " << sample.vesselUnderWay ()<<", ";
                o << "visibilityRestricted: " << sample.visibilityRestricted ()<<", ";
                o << "visibilityRestrictedStopped: " << sample.visibilityRestrictedStopped ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "destination: " << sample.destination ()<<", ";
                o << "sessionID: " << sample.sessionID ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace SituationalSignalControl  

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
        struct native_type_code< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SituationalSignalCommandType_g_tc_members[29]=
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
                        (char *)"destination",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sessionID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            28,/* Representation ID */
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

                static DDS_TypeCode SituationalSignalCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::SituationalSignalControl::SituationalSignalCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        29, /* Number of members */
                        SituationalSignalCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SituationalSignalCommandType*/

                if (is_initialized) {
                    return &SituationalSignalCommandType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SituationalSignalCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SituationalSignalCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                SituationalSignalCommandType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SituationalSignalCommandType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SituationalSignalCommandType_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SituationalSignalCommandType_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                SituationalSignalCommandType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[18]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[19]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[20]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;
                SituationalSignalCommandType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SituationalSignalCommandType_g_tc_members[24]._annotations._defaultValue._u.boolean_value = 0;

                SituationalSignalCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                SituationalSignalCommandType_g_tc._data._typePlugin = type_plugin_info();    

                return &SituationalSignalCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType *sample;

                static RTIXCdrMemberAccessInfo SituationalSignalCommandType_g_memberAccessInfos[29] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SituationalSignalCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SituationalSignalCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                SituationalSignalCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->agreeToBeOvertaken() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->alteringCourseToPort() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->alteringCourseToStarboard() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->engagedInMineClearanceOperations() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->inDistressNeedAssistance() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->inSightCollisionWarning() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maneuverabilityRestricted() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->operatingAsternPropulsion() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->outOfSightCollisionWarning() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->toOvertakeOnPortSide() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->toOvertakeOnstarboardSide() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->towingAndPushingAlongsideOrAhead() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->towingAndPushingBehind() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselAground() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselAnchored() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselBeingPushed() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselBeingTowedAlongside() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselBeingTowedBehind() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselConstrainedByHerDraft() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselLeavingDock() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselNotUnderControl() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselStopped() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vesselUnderWay() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->visibilityRestricted() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->visibilityRestrictedStopped() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                SituationalSignalCommandType_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                SituationalSignalCommandType_g_sampleAccessInfo.memberAccessInfos = 
                SituationalSignalCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SituationalSignalCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SituationalSignalCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SituationalSignalCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SituationalSignalCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType >;

                SituationalSignalCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SituationalSignalCommandType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SituationalSignalCommandType_g_typePlugin = 
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

                return &SituationalSignalCommandType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandTypePlugin_new,
                ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SituationalSignalCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SituationalSignalCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType >::from_cdr_buffer(::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SituationalSignalCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType >::reset_sample(::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType& sample) 
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
            ::rti::topic::reset_sample(sample.destination());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType >::allocate_sample(::UMAA::EO::SituationalSignalControl::SituationalSignalCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
