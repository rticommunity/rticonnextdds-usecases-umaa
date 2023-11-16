

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "H264VideoEncodingSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "H264VideoEncodingSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace H264VideoEncodingSpecs {

            // ---- H264VideoEncodingSpecsReportType: 

            H264VideoEncodingSpecsReportType::H264VideoEncodingSpecsReportType() :
                m_supportedBaseline_ (0) ,
                m_supportedBestQuality_ (0) ,
                m_supportedCAVLC444_ (0) ,
                m_supportedConstrainedBaseline_ (0) ,
                m_supportedConstrainedHigh_ (0) ,
                m_supportedDriveVision_ (0) ,
                m_supportedExtended_ (0) ,
                m_supportedGradualDecoderRefresh_ (0) ,
                m_supportedGroupOfPictures_ (0) ,
                m_supportedHigh_ (0) ,
                m_supportedHigh10_ (0) ,
                m_supportedHigh10Intra_ (0) ,
                m_supportedHigh422_ (0) ,
                m_supportedHigh422Intra_ (0) ,
                m_supportedHigh444Intra_ (0) ,
                m_supportedHigh444Predictive_ (0) ,
                m_supportedLevel1_ (0) ,
                m_supportedLevel11_ (0) ,
                m_supportedLevel12_ (0) ,
                m_supportedLevel13_ (0) ,
                m_supportedLevel1B_ (0) ,
                m_supportedLevel2_ (0) ,
                m_supportedLevel21_ (0) ,
                m_supportedLevel22_ (0) ,
                m_supportedLevel3_ (0) ,
                m_supportedLevel31_ (0) ,
                m_supportedLevel32_ (0) ,
                m_supportedLevel4_ (0) ,
                m_supportedLevel41_ (0) ,
                m_supportedLevel42_ (0) ,
                m_supportedLevel5_ (0) ,
                m_supportedLevel51_ (0) ,
                m_supportedLevel52_ (0) ,
                m_supportedLowLatency_ (0) ,
                m_supportedMain_ (0) ,
                m_supportedManipulation_ (0) ,
                m_supportedMultiviewHigh_ (0) ,
                m_supportedPersistentStare_ (0) ,
                m_supportedProgramSpecific1_ (0) ,
                m_supportedProgramSpecific2_ (0) ,
                m_supportedProgramSpecific3_ (0) ,
                m_supportedProgramSpecific4_ (0) ,
                m_supportedProgressiveHigh_ (0) ,
                m_supportedRegionOfInterest_ (0) ,
                m_supportedScalableBaseline_ (0) ,
                m_supportedScalableConstrainedBaseline_ (0) ,
                m_supportedScalableConstrainedHigh_ (0) ,
                m_supportedScalableHigh_ (0) ,
                m_supportedScalableHighIntra_ (0) ,
                m_supportedSlowComms_ (0) ,
                m_supportedStereoHigh_ (0)  {

            }   

            H264VideoEncodingSpecsReportType::H264VideoEncodingSpecsReportType (bool supportedBaseline_,bool supportedBestQuality_,bool supportedCAVLC444_,bool supportedConstrainedBaseline_,bool supportedConstrainedHigh_,bool supportedDriveVision_,bool supportedExtended_,bool supportedGradualDecoderRefresh_,bool supportedGroupOfPictures_,bool supportedHigh_,bool supportedHigh10_,bool supportedHigh10Intra_,bool supportedHigh422_,bool supportedHigh422Intra_,bool supportedHigh444Intra_,bool supportedHigh444Predictive_,bool supportedLevel1_,bool supportedLevel11_,bool supportedLevel12_,bool supportedLevel13_,bool supportedLevel1B_,bool supportedLevel2_,bool supportedLevel21_,bool supportedLevel22_,bool supportedLevel3_,bool supportedLevel31_,bool supportedLevel32_,bool supportedLevel4_,bool supportedLevel41_,bool supportedLevel42_,bool supportedLevel5_,bool supportedLevel51_,bool supportedLevel52_,bool supportedLowLatency_,bool supportedMain_,bool supportedManipulation_,bool supportedMultiviewHigh_,bool supportedPersistentStare_,bool supportedProgramSpecific1_,bool supportedProgramSpecific2_,bool supportedProgramSpecific3_,bool supportedProgramSpecific4_,bool supportedProgressiveHigh_,bool supportedRegionOfInterest_,bool supportedScalableBaseline_,bool supportedScalableConstrainedBaseline_,bool supportedScalableConstrainedHigh_,bool supportedScalableHigh_,bool supportedScalableHighIntra_,bool supportedSlowComms_,bool supportedStereoHigh_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_supportedBaseline_(supportedBaseline_), 
                m_supportedBestQuality_(supportedBestQuality_), 
                m_supportedCAVLC444_(supportedCAVLC444_), 
                m_supportedConstrainedBaseline_(supportedConstrainedBaseline_), 
                m_supportedConstrainedHigh_(supportedConstrainedHigh_), 
                m_supportedDriveVision_(supportedDriveVision_), 
                m_supportedExtended_(supportedExtended_), 
                m_supportedGradualDecoderRefresh_(supportedGradualDecoderRefresh_), 
                m_supportedGroupOfPictures_(supportedGroupOfPictures_), 
                m_supportedHigh_(supportedHigh_), 
                m_supportedHigh10_(supportedHigh10_), 
                m_supportedHigh10Intra_(supportedHigh10Intra_), 
                m_supportedHigh422_(supportedHigh422_), 
                m_supportedHigh422Intra_(supportedHigh422Intra_), 
                m_supportedHigh444Intra_(supportedHigh444Intra_), 
                m_supportedHigh444Predictive_(supportedHigh444Predictive_), 
                m_supportedLevel1_(supportedLevel1_), 
                m_supportedLevel11_(supportedLevel11_), 
                m_supportedLevel12_(supportedLevel12_), 
                m_supportedLevel13_(supportedLevel13_), 
                m_supportedLevel1B_(supportedLevel1B_), 
                m_supportedLevel2_(supportedLevel2_), 
                m_supportedLevel21_(supportedLevel21_), 
                m_supportedLevel22_(supportedLevel22_), 
                m_supportedLevel3_(supportedLevel3_), 
                m_supportedLevel31_(supportedLevel31_), 
                m_supportedLevel32_(supportedLevel32_), 
                m_supportedLevel4_(supportedLevel4_), 
                m_supportedLevel41_(supportedLevel41_), 
                m_supportedLevel42_(supportedLevel42_), 
                m_supportedLevel5_(supportedLevel5_), 
                m_supportedLevel51_(supportedLevel51_), 
                m_supportedLevel52_(supportedLevel52_), 
                m_supportedLowLatency_(supportedLowLatency_), 
                m_supportedMain_(supportedMain_), 
                m_supportedManipulation_(supportedManipulation_), 
                m_supportedMultiviewHigh_(supportedMultiviewHigh_), 
                m_supportedPersistentStare_(supportedPersistentStare_), 
                m_supportedProgramSpecific1_(supportedProgramSpecific1_), 
                m_supportedProgramSpecific2_(supportedProgramSpecific2_), 
                m_supportedProgramSpecific3_(supportedProgramSpecific3_), 
                m_supportedProgramSpecific4_(supportedProgramSpecific4_), 
                m_supportedProgressiveHigh_(supportedProgressiveHigh_), 
                m_supportedRegionOfInterest_(supportedRegionOfInterest_), 
                m_supportedScalableBaseline_(supportedScalableBaseline_), 
                m_supportedScalableConstrainedBaseline_(supportedScalableConstrainedBaseline_), 
                m_supportedScalableConstrainedHigh_(supportedScalableConstrainedHigh_), 
                m_supportedScalableHigh_(supportedScalableHigh_), 
                m_supportedScalableHighIntra_(supportedScalableHighIntra_), 
                m_supportedSlowComms_(supportedSlowComms_), 
                m_supportedStereoHigh_(supportedStereoHigh_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void H264VideoEncodingSpecsReportType::swap(H264VideoEncodingSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_supportedBaseline_, other_.m_supportedBaseline_);
                swap(m_supportedBestQuality_, other_.m_supportedBestQuality_);
                swap(m_supportedCAVLC444_, other_.m_supportedCAVLC444_);
                swap(m_supportedConstrainedBaseline_, other_.m_supportedConstrainedBaseline_);
                swap(m_supportedConstrainedHigh_, other_.m_supportedConstrainedHigh_);
                swap(m_supportedDriveVision_, other_.m_supportedDriveVision_);
                swap(m_supportedExtended_, other_.m_supportedExtended_);
                swap(m_supportedGradualDecoderRefresh_, other_.m_supportedGradualDecoderRefresh_);
                swap(m_supportedGroupOfPictures_, other_.m_supportedGroupOfPictures_);
                swap(m_supportedHigh_, other_.m_supportedHigh_);
                swap(m_supportedHigh10_, other_.m_supportedHigh10_);
                swap(m_supportedHigh10Intra_, other_.m_supportedHigh10Intra_);
                swap(m_supportedHigh422_, other_.m_supportedHigh422_);
                swap(m_supportedHigh422Intra_, other_.m_supportedHigh422Intra_);
                swap(m_supportedHigh444Intra_, other_.m_supportedHigh444Intra_);
                swap(m_supportedHigh444Predictive_, other_.m_supportedHigh444Predictive_);
                swap(m_supportedLevel1_, other_.m_supportedLevel1_);
                swap(m_supportedLevel11_, other_.m_supportedLevel11_);
                swap(m_supportedLevel12_, other_.m_supportedLevel12_);
                swap(m_supportedLevel13_, other_.m_supportedLevel13_);
                swap(m_supportedLevel1B_, other_.m_supportedLevel1B_);
                swap(m_supportedLevel2_, other_.m_supportedLevel2_);
                swap(m_supportedLevel21_, other_.m_supportedLevel21_);
                swap(m_supportedLevel22_, other_.m_supportedLevel22_);
                swap(m_supportedLevel3_, other_.m_supportedLevel3_);
                swap(m_supportedLevel31_, other_.m_supportedLevel31_);
                swap(m_supportedLevel32_, other_.m_supportedLevel32_);
                swap(m_supportedLevel4_, other_.m_supportedLevel4_);
                swap(m_supportedLevel41_, other_.m_supportedLevel41_);
                swap(m_supportedLevel42_, other_.m_supportedLevel42_);
                swap(m_supportedLevel5_, other_.m_supportedLevel5_);
                swap(m_supportedLevel51_, other_.m_supportedLevel51_);
                swap(m_supportedLevel52_, other_.m_supportedLevel52_);
                swap(m_supportedLowLatency_, other_.m_supportedLowLatency_);
                swap(m_supportedMain_, other_.m_supportedMain_);
                swap(m_supportedManipulation_, other_.m_supportedManipulation_);
                swap(m_supportedMultiviewHigh_, other_.m_supportedMultiviewHigh_);
                swap(m_supportedPersistentStare_, other_.m_supportedPersistentStare_);
                swap(m_supportedProgramSpecific1_, other_.m_supportedProgramSpecific1_);
                swap(m_supportedProgramSpecific2_, other_.m_supportedProgramSpecific2_);
                swap(m_supportedProgramSpecific3_, other_.m_supportedProgramSpecific3_);
                swap(m_supportedProgramSpecific4_, other_.m_supportedProgramSpecific4_);
                swap(m_supportedProgressiveHigh_, other_.m_supportedProgressiveHigh_);
                swap(m_supportedRegionOfInterest_, other_.m_supportedRegionOfInterest_);
                swap(m_supportedScalableBaseline_, other_.m_supportedScalableBaseline_);
                swap(m_supportedScalableConstrainedBaseline_, other_.m_supportedScalableConstrainedBaseline_);
                swap(m_supportedScalableConstrainedHigh_, other_.m_supportedScalableConstrainedHigh_);
                swap(m_supportedScalableHigh_, other_.m_supportedScalableHigh_);
                swap(m_supportedScalableHighIntra_, other_.m_supportedScalableHighIntra_);
                swap(m_supportedSlowComms_, other_.m_supportedSlowComms_);
                swap(m_supportedStereoHigh_, other_.m_supportedStereoHigh_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool H264VideoEncodingSpecsReportType::operator == (const H264VideoEncodingSpecsReportType& other_) const {
                if (m_supportedBaseline_ != other_.m_supportedBaseline_) {
                    return false;
                }
                if (m_supportedBestQuality_ != other_.m_supportedBestQuality_) {
                    return false;
                }
                if (m_supportedCAVLC444_ != other_.m_supportedCAVLC444_) {
                    return false;
                }
                if (m_supportedConstrainedBaseline_ != other_.m_supportedConstrainedBaseline_) {
                    return false;
                }
                if (m_supportedConstrainedHigh_ != other_.m_supportedConstrainedHigh_) {
                    return false;
                }
                if (m_supportedDriveVision_ != other_.m_supportedDriveVision_) {
                    return false;
                }
                if (m_supportedExtended_ != other_.m_supportedExtended_) {
                    return false;
                }
                if (m_supportedGradualDecoderRefresh_ != other_.m_supportedGradualDecoderRefresh_) {
                    return false;
                }
                if (m_supportedGroupOfPictures_ != other_.m_supportedGroupOfPictures_) {
                    return false;
                }
                if (m_supportedHigh_ != other_.m_supportedHigh_) {
                    return false;
                }
                if (m_supportedHigh10_ != other_.m_supportedHigh10_) {
                    return false;
                }
                if (m_supportedHigh10Intra_ != other_.m_supportedHigh10Intra_) {
                    return false;
                }
                if (m_supportedHigh422_ != other_.m_supportedHigh422_) {
                    return false;
                }
                if (m_supportedHigh422Intra_ != other_.m_supportedHigh422Intra_) {
                    return false;
                }
                if (m_supportedHigh444Intra_ != other_.m_supportedHigh444Intra_) {
                    return false;
                }
                if (m_supportedHigh444Predictive_ != other_.m_supportedHigh444Predictive_) {
                    return false;
                }
                if (m_supportedLevel1_ != other_.m_supportedLevel1_) {
                    return false;
                }
                if (m_supportedLevel11_ != other_.m_supportedLevel11_) {
                    return false;
                }
                if (m_supportedLevel12_ != other_.m_supportedLevel12_) {
                    return false;
                }
                if (m_supportedLevel13_ != other_.m_supportedLevel13_) {
                    return false;
                }
                if (m_supportedLevel1B_ != other_.m_supportedLevel1B_) {
                    return false;
                }
                if (m_supportedLevel2_ != other_.m_supportedLevel2_) {
                    return false;
                }
                if (m_supportedLevel21_ != other_.m_supportedLevel21_) {
                    return false;
                }
                if (m_supportedLevel22_ != other_.m_supportedLevel22_) {
                    return false;
                }
                if (m_supportedLevel3_ != other_.m_supportedLevel3_) {
                    return false;
                }
                if (m_supportedLevel31_ != other_.m_supportedLevel31_) {
                    return false;
                }
                if (m_supportedLevel32_ != other_.m_supportedLevel32_) {
                    return false;
                }
                if (m_supportedLevel4_ != other_.m_supportedLevel4_) {
                    return false;
                }
                if (m_supportedLevel41_ != other_.m_supportedLevel41_) {
                    return false;
                }
                if (m_supportedLevel42_ != other_.m_supportedLevel42_) {
                    return false;
                }
                if (m_supportedLevel5_ != other_.m_supportedLevel5_) {
                    return false;
                }
                if (m_supportedLevel51_ != other_.m_supportedLevel51_) {
                    return false;
                }
                if (m_supportedLevel52_ != other_.m_supportedLevel52_) {
                    return false;
                }
                if (m_supportedLowLatency_ != other_.m_supportedLowLatency_) {
                    return false;
                }
                if (m_supportedMain_ != other_.m_supportedMain_) {
                    return false;
                }
                if (m_supportedManipulation_ != other_.m_supportedManipulation_) {
                    return false;
                }
                if (m_supportedMultiviewHigh_ != other_.m_supportedMultiviewHigh_) {
                    return false;
                }
                if (m_supportedPersistentStare_ != other_.m_supportedPersistentStare_) {
                    return false;
                }
                if (m_supportedProgramSpecific1_ != other_.m_supportedProgramSpecific1_) {
                    return false;
                }
                if (m_supportedProgramSpecific2_ != other_.m_supportedProgramSpecific2_) {
                    return false;
                }
                if (m_supportedProgramSpecific3_ != other_.m_supportedProgramSpecific3_) {
                    return false;
                }
                if (m_supportedProgramSpecific4_ != other_.m_supportedProgramSpecific4_) {
                    return false;
                }
                if (m_supportedProgressiveHigh_ != other_.m_supportedProgressiveHigh_) {
                    return false;
                }
                if (m_supportedRegionOfInterest_ != other_.m_supportedRegionOfInterest_) {
                    return false;
                }
                if (m_supportedScalableBaseline_ != other_.m_supportedScalableBaseline_) {
                    return false;
                }
                if (m_supportedScalableConstrainedBaseline_ != other_.m_supportedScalableConstrainedBaseline_) {
                    return false;
                }
                if (m_supportedScalableConstrainedHigh_ != other_.m_supportedScalableConstrainedHigh_) {
                    return false;
                }
                if (m_supportedScalableHigh_ != other_.m_supportedScalableHigh_) {
                    return false;
                }
                if (m_supportedScalableHighIntra_ != other_.m_supportedScalableHighIntra_) {
                    return false;
                }
                if (m_supportedSlowComms_ != other_.m_supportedSlowComms_) {
                    return false;
                }
                if (m_supportedStereoHigh_ != other_.m_supportedStereoHigh_) {
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

            bool H264VideoEncodingSpecsReportType::operator != (const H264VideoEncodingSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const H264VideoEncodingSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "supportedBaseline: " << sample.supportedBaseline ()<<", ";
                o << "supportedBestQuality: " << sample.supportedBestQuality ()<<", ";
                o << "supportedCAVLC444: " << sample.supportedCAVLC444 ()<<", ";
                o << "supportedConstrainedBaseline: " << sample.supportedConstrainedBaseline ()<<", ";
                o << "supportedConstrainedHigh: " << sample.supportedConstrainedHigh ()<<", ";
                o << "supportedDriveVision: " << sample.supportedDriveVision ()<<", ";
                o << "supportedExtended: " << sample.supportedExtended ()<<", ";
                o << "supportedGradualDecoderRefresh: " << sample.supportedGradualDecoderRefresh ()<<", ";
                o << "supportedGroupOfPictures: " << sample.supportedGroupOfPictures ()<<", ";
                o << "supportedHigh: " << sample.supportedHigh ()<<", ";
                o << "supportedHigh10: " << sample.supportedHigh10 ()<<", ";
                o << "supportedHigh10Intra: " << sample.supportedHigh10Intra ()<<", ";
                o << "supportedHigh422: " << sample.supportedHigh422 ()<<", ";
                o << "supportedHigh422Intra: " << sample.supportedHigh422Intra ()<<", ";
                o << "supportedHigh444Intra: " << sample.supportedHigh444Intra ()<<", ";
                o << "supportedHigh444Predictive: " << sample.supportedHigh444Predictive ()<<", ";
                o << "supportedLevel1: " << sample.supportedLevel1 ()<<", ";
                o << "supportedLevel11: " << sample.supportedLevel11 ()<<", ";
                o << "supportedLevel12: " << sample.supportedLevel12 ()<<", ";
                o << "supportedLevel13: " << sample.supportedLevel13 ()<<", ";
                o << "supportedLevel1B: " << sample.supportedLevel1B ()<<", ";
                o << "supportedLevel2: " << sample.supportedLevel2 ()<<", ";
                o << "supportedLevel21: " << sample.supportedLevel21 ()<<", ";
                o << "supportedLevel22: " << sample.supportedLevel22 ()<<", ";
                o << "supportedLevel3: " << sample.supportedLevel3 ()<<", ";
                o << "supportedLevel31: " << sample.supportedLevel31 ()<<", ";
                o << "supportedLevel32: " << sample.supportedLevel32 ()<<", ";
                o << "supportedLevel4: " << sample.supportedLevel4 ()<<", ";
                o << "supportedLevel41: " << sample.supportedLevel41 ()<<", ";
                o << "supportedLevel42: " << sample.supportedLevel42 ()<<", ";
                o << "supportedLevel5: " << sample.supportedLevel5 ()<<", ";
                o << "supportedLevel51: " << sample.supportedLevel51 ()<<", ";
                o << "supportedLevel52: " << sample.supportedLevel52 ()<<", ";
                o << "supportedLowLatency: " << sample.supportedLowLatency ()<<", ";
                o << "supportedMain: " << sample.supportedMain ()<<", ";
                o << "supportedManipulation: " << sample.supportedManipulation ()<<", ";
                o << "supportedMultiviewHigh: " << sample.supportedMultiviewHigh ()<<", ";
                o << "supportedPersistentStare: " << sample.supportedPersistentStare ()<<", ";
                o << "supportedProgramSpecific1: " << sample.supportedProgramSpecific1 ()<<", ";
                o << "supportedProgramSpecific2: " << sample.supportedProgramSpecific2 ()<<", ";
                o << "supportedProgramSpecific3: " << sample.supportedProgramSpecific3 ()<<", ";
                o << "supportedProgramSpecific4: " << sample.supportedProgramSpecific4 ()<<", ";
                o << "supportedProgressiveHigh: " << sample.supportedProgressiveHigh ()<<", ";
                o << "supportedRegionOfInterest: " << sample.supportedRegionOfInterest ()<<", ";
                o << "supportedScalableBaseline: " << sample.supportedScalableBaseline ()<<", ";
                o << "supportedScalableConstrainedBaseline: " << sample.supportedScalableConstrainedBaseline ()<<", ";
                o << "supportedScalableConstrainedHigh: " << sample.supportedScalableConstrainedHigh ()<<", ";
                o << "supportedScalableHigh: " << sample.supportedScalableHigh ()<<", ";
                o << "supportedScalableHighIntra: " << sample.supportedScalableHighIntra ()<<", ";
                o << "supportedSlowComms: " << sample.supportedSlowComms ()<<", ";
                o << "supportedStereoHigh: " << sample.supportedStereoHigh ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace H264VideoEncodingSpecs  

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
        struct native_type_code< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member H264VideoEncodingSpecsReportType_g_tc_members[53]=
                {

                    {
                        (char *)"supportedBaseline",/* Member name */
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
                        (char *)"supportedBestQuality",/* Member name */
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
                        (char *)"supportedCAVLC444",/* Member name */
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
                        (char *)"supportedConstrainedBaseline",/* Member name */
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
                        (char *)"supportedConstrainedHigh",/* Member name */
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
                        (char *)"supportedDriveVision",/* Member name */
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
                        (char *)"supportedExtended",/* Member name */
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
                        (char *)"supportedGradualDecoderRefresh",/* Member name */
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
                        (char *)"supportedGroupOfPictures",/* Member name */
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
                        (char *)"supportedHigh",/* Member name */
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
                        (char *)"supportedHigh10",/* Member name */
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
                        (char *)"supportedHigh10Intra",/* Member name */
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
                        (char *)"supportedHigh422",/* Member name */
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
                        (char *)"supportedHigh422Intra",/* Member name */
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
                        (char *)"supportedHigh444Intra",/* Member name */
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
                        (char *)"supportedHigh444Predictive",/* Member name */
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
                        (char *)"supportedLevel1",/* Member name */
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
                        (char *)"supportedLevel11",/* Member name */
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
                        (char *)"supportedLevel12",/* Member name */
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
                        (char *)"supportedLevel13",/* Member name */
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
                        (char *)"supportedLevel1B",/* Member name */
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
                        (char *)"supportedLevel2",/* Member name */
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
                        (char *)"supportedLevel21",/* Member name */
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
                        (char *)"supportedLevel22",/* Member name */
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
                        (char *)"supportedLevel3",/* Member name */
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
                        (char *)"supportedLevel31",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"supportedLevel32",/* Member name */
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
                    }, 
                    {
                        (char *)"supportedLevel4",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"supportedLevel41",/* Member name */
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
                    }, 
                    {
                        (char *)"supportedLevel42",/* Member name */
                        {
                            29,/* Representation ID */
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
                        (char *)"supportedLevel5",/* Member name */
                        {
                            30,/* Representation ID */
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
                        (char *)"supportedLevel51",/* Member name */
                        {
                            31,/* Representation ID */
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
                        (char *)"supportedLevel52",/* Member name */
                        {
                            32,/* Representation ID */
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
                        (char *)"supportedLowLatency",/* Member name */
                        {
                            33,/* Representation ID */
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
                        (char *)"supportedMain",/* Member name */
                        {
                            34,/* Representation ID */
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
                        (char *)"supportedManipulation",/* Member name */
                        {
                            35,/* Representation ID */
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
                        (char *)"supportedMultiviewHigh",/* Member name */
                        {
                            36,/* Representation ID */
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
                        (char *)"supportedPersistentStare",/* Member name */
                        {
                            37,/* Representation ID */
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
                        (char *)"supportedProgramSpecific1",/* Member name */
                        {
                            38,/* Representation ID */
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
                        (char *)"supportedProgramSpecific2",/* Member name */
                        {
                            39,/* Representation ID */
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
                        (char *)"supportedProgramSpecific3",/* Member name */
                        {
                            40,/* Representation ID */
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
                        (char *)"supportedProgramSpecific4",/* Member name */
                        {
                            41,/* Representation ID */
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
                        (char *)"supportedProgressiveHigh",/* Member name */
                        {
                            42,/* Representation ID */
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
                        (char *)"supportedRegionOfInterest",/* Member name */
                        {
                            43,/* Representation ID */
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
                        (char *)"supportedScalableBaseline",/* Member name */
                        {
                            44,/* Representation ID */
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
                        (char *)"supportedScalableConstrainedBaseline",/* Member name */
                        {
                            45,/* Representation ID */
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
                        (char *)"supportedScalableConstrainedHigh",/* Member name */
                        {
                            46,/* Representation ID */
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
                        (char *)"supportedScalableHigh",/* Member name */
                        {
                            47,/* Representation ID */
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
                        (char *)"supportedScalableHighIntra",/* Member name */
                        {
                            48,/* Representation ID */
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
                        (char *)"supportedSlowComms",/* Member name */
                        {
                            49,/* Representation ID */
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
                        (char *)"supportedStereoHigh",/* Member name */
                        {
                            50,/* Representation ID */
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
                            51,/* Representation ID */
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
                            52,/* Representation ID */
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

                static DDS_TypeCode H264VideoEncodingSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        53, /* Number of members */
                        H264VideoEncodingSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for H264VideoEncodingSpecsReportType*/

                if (is_initialized) {
                    return &H264VideoEncodingSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                H264VideoEncodingSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                H264VideoEncodingSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[42]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[43]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[44]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[45]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[46]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[47]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[48]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[49]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[50]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                H264VideoEncodingSpecsReportType_g_tc_members[51]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                H264VideoEncodingSpecsReportType_g_tc_members[52]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                H264VideoEncodingSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[24]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[25]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[25]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[26]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[26]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[27]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[27]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[28]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[28]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[29]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[29]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[30]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[30]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[31]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[31]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[32]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[32]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[33]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[33]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[34]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[34]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[35]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[35]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[36]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[36]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[37]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[37]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[38]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[38]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[39]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[39]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[40]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[40]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[41]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[41]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[42]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[42]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[43]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[43]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[44]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[44]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[45]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[45]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[46]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[46]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[47]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[47]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[48]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[48]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[49]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[49]._annotations._defaultValue._u.boolean_value = 0;
                H264VideoEncodingSpecsReportType_g_tc_members[50]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                H264VideoEncodingSpecsReportType_g_tc_members[50]._annotations._defaultValue._u.boolean_value = 0;

                H264VideoEncodingSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                H264VideoEncodingSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &H264VideoEncodingSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo H264VideoEncodingSpecsReportType_g_memberAccessInfos[53] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo H264VideoEncodingSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &H264VideoEncodingSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedBaseline() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedBestQuality() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedCAVLC444() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedConstrainedBaseline() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedConstrainedHigh() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedDriveVision() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedExtended() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedGradualDecoderRefresh() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedGroupOfPictures() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh10() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh10Intra() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh422() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh422Intra() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh444Intra() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh444Predictive() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel1() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel11() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel12() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel13() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel1B() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel2() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel21() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel22() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel3() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel31() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel32() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel4() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel41() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[29].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel42() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[30].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel5() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[31].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel51() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[32].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel52() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[33].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedLowLatency() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[34].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedMain() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[35].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedManipulation() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[36].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedMultiviewHigh() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[37].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedPersistentStare() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[38].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedProgramSpecific1() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[39].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedProgramSpecific2() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[40].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedProgramSpecific3() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[41].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedProgramSpecific4() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[42].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedProgressiveHigh() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[43].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedRegionOfInterest() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[44].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedScalableBaseline() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[45].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedScalableConstrainedBaseline() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[46].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedScalableConstrainedHigh() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[47].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedScalableHigh() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[48].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedScalableHighIntra() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[49].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedSlowComms() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[50].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->supportedStereoHigh() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[51].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_memberAccessInfos[52].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                H264VideoEncodingSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                H264VideoEncodingSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        H264VideoEncodingSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        H264VideoEncodingSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                H264VideoEncodingSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                H264VideoEncodingSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType >;

                H264VideoEncodingSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &H264VideoEncodingSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin H264VideoEncodingSpecsReportType_g_typePlugin = 
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

                return &H264VideoEncodingSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportTypePlugin_new,
                ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = H264VideoEncodingSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = H264VideoEncodingSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType >::from_cdr_buffer(::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = H264VideoEncodingSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType >::reset_sample(::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType& sample) 
        {
            sample.supportedBaseline(0);
            sample.supportedBestQuality(0);
            sample.supportedCAVLC444(0);
            sample.supportedConstrainedBaseline(0);
            sample.supportedConstrainedHigh(0);
            sample.supportedDriveVision(0);
            sample.supportedExtended(0);
            sample.supportedGradualDecoderRefresh(0);
            sample.supportedGroupOfPictures(0);
            sample.supportedHigh(0);
            sample.supportedHigh10(0);
            sample.supportedHigh10Intra(0);
            sample.supportedHigh422(0);
            sample.supportedHigh422Intra(0);
            sample.supportedHigh444Intra(0);
            sample.supportedHigh444Predictive(0);
            sample.supportedLevel1(0);
            sample.supportedLevel11(0);
            sample.supportedLevel12(0);
            sample.supportedLevel13(0);
            sample.supportedLevel1B(0);
            sample.supportedLevel2(0);
            sample.supportedLevel21(0);
            sample.supportedLevel22(0);
            sample.supportedLevel3(0);
            sample.supportedLevel31(0);
            sample.supportedLevel32(0);
            sample.supportedLevel4(0);
            sample.supportedLevel41(0);
            sample.supportedLevel42(0);
            sample.supportedLevel5(0);
            sample.supportedLevel51(0);
            sample.supportedLevel52(0);
            sample.supportedLowLatency(0);
            sample.supportedMain(0);
            sample.supportedManipulation(0);
            sample.supportedMultiviewHigh(0);
            sample.supportedPersistentStare(0);
            sample.supportedProgramSpecific1(0);
            sample.supportedProgramSpecific2(0);
            sample.supportedProgramSpecific3(0);
            sample.supportedProgramSpecific4(0);
            sample.supportedProgressiveHigh(0);
            sample.supportedRegionOfInterest(0);
            sample.supportedScalableBaseline(0);
            sample.supportedScalableConstrainedBaseline(0);
            sample.supportedScalableConstrainedHigh(0);
            sample.supportedScalableHigh(0);
            sample.supportedScalableHighIntra(0);
            sample.supportedSlowComms(0);
            sample.supportedStereoHigh(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType >::allocate_sample(::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
