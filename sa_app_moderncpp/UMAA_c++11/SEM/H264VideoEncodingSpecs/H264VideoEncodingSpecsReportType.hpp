

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingSpecsReportType_1030733027_hpp
#define H264VideoEncodingSpecsReportType_1030733027_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace H264VideoEncodingSpecs {

            RTI_CONSTEXPR_OR_CONST_STRING std::string H264VideoEncodingSpecsReport_TOPIC = "UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReport";

            class NDDSUSERDllExport H264VideoEncodingSpecsReportType {
              public:

                H264VideoEncodingSpecsReportType();

                H264VideoEncodingSpecsReportType(bool supportedBaseline_,bool supportedBestQuality_,bool supportedCAVLC444_,bool supportedConstrainedBaseline_,bool supportedConstrainedHigh_,bool supportedDriveVision_,bool supportedExtended_,bool supportedGradualDecoderRefresh_,bool supportedGroupOfPictures_,bool supportedHigh_,bool supportedHigh10_,bool supportedHigh10Intra_,bool supportedHigh422_,bool supportedHigh422Intra_,bool supportedHigh444Intra_,bool supportedHigh444Predictive_,bool supportedLevel1_,bool supportedLevel11_,bool supportedLevel12_,bool supportedLevel13_,bool supportedLevel1B_,bool supportedLevel2_,bool supportedLevel21_,bool supportedLevel22_,bool supportedLevel3_,bool supportedLevel31_,bool supportedLevel32_,bool supportedLevel4_,bool supportedLevel41_,bool supportedLevel42_,bool supportedLevel5_,bool supportedLevel51_,bool supportedLevel52_,bool supportedLowLatency_,bool supportedMain_,bool supportedManipulation_,bool supportedMultiviewHigh_,bool supportedPersistentStare_,bool supportedProgramSpecific1_,bool supportedProgramSpecific2_,bool supportedProgramSpecific3_,bool supportedProgramSpecific4_,bool supportedProgressiveHigh_,bool supportedRegionOfInterest_,bool supportedScalableBaseline_,bool supportedScalableConstrainedBaseline_,bool supportedScalableConstrainedHigh_,bool supportedScalableHigh_,bool supportedScalableHighIntra_,bool supportedSlowComms_,bool supportedStereoHigh_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                bool& supportedBaseline() noexcept {
                    return m_supportedBaseline_;
                }

                const bool& supportedBaseline() const noexcept {
                    return m_supportedBaseline_;
                }

                void supportedBaseline(bool value) {

                    m_supportedBaseline_ = value;
                }

                bool& supportedBestQuality() noexcept {
                    return m_supportedBestQuality_;
                }

                const bool& supportedBestQuality() const noexcept {
                    return m_supportedBestQuality_;
                }

                void supportedBestQuality(bool value) {

                    m_supportedBestQuality_ = value;
                }

                bool& supportedCAVLC444() noexcept {
                    return m_supportedCAVLC444_;
                }

                const bool& supportedCAVLC444() const noexcept {
                    return m_supportedCAVLC444_;
                }

                void supportedCAVLC444(bool value) {

                    m_supportedCAVLC444_ = value;
                }

                bool& supportedConstrainedBaseline() noexcept {
                    return m_supportedConstrainedBaseline_;
                }

                const bool& supportedConstrainedBaseline() const noexcept {
                    return m_supportedConstrainedBaseline_;
                }

                void supportedConstrainedBaseline(bool value) {

                    m_supportedConstrainedBaseline_ = value;
                }

                bool& supportedConstrainedHigh() noexcept {
                    return m_supportedConstrainedHigh_;
                }

                const bool& supportedConstrainedHigh() const noexcept {
                    return m_supportedConstrainedHigh_;
                }

                void supportedConstrainedHigh(bool value) {

                    m_supportedConstrainedHigh_ = value;
                }

                bool& supportedDriveVision() noexcept {
                    return m_supportedDriveVision_;
                }

                const bool& supportedDriveVision() const noexcept {
                    return m_supportedDriveVision_;
                }

                void supportedDriveVision(bool value) {

                    m_supportedDriveVision_ = value;
                }

                bool& supportedExtended() noexcept {
                    return m_supportedExtended_;
                }

                const bool& supportedExtended() const noexcept {
                    return m_supportedExtended_;
                }

                void supportedExtended(bool value) {

                    m_supportedExtended_ = value;
                }

                bool& supportedGradualDecoderRefresh() noexcept {
                    return m_supportedGradualDecoderRefresh_;
                }

                const bool& supportedGradualDecoderRefresh() const noexcept {
                    return m_supportedGradualDecoderRefresh_;
                }

                void supportedGradualDecoderRefresh(bool value) {

                    m_supportedGradualDecoderRefresh_ = value;
                }

                bool& supportedGroupOfPictures() noexcept {
                    return m_supportedGroupOfPictures_;
                }

                const bool& supportedGroupOfPictures() const noexcept {
                    return m_supportedGroupOfPictures_;
                }

                void supportedGroupOfPictures(bool value) {

                    m_supportedGroupOfPictures_ = value;
                }

                bool& supportedHigh() noexcept {
                    return m_supportedHigh_;
                }

                const bool& supportedHigh() const noexcept {
                    return m_supportedHigh_;
                }

                void supportedHigh(bool value) {

                    m_supportedHigh_ = value;
                }

                bool& supportedHigh10() noexcept {
                    return m_supportedHigh10_;
                }

                const bool& supportedHigh10() const noexcept {
                    return m_supportedHigh10_;
                }

                void supportedHigh10(bool value) {

                    m_supportedHigh10_ = value;
                }

                bool& supportedHigh10Intra() noexcept {
                    return m_supportedHigh10Intra_;
                }

                const bool& supportedHigh10Intra() const noexcept {
                    return m_supportedHigh10Intra_;
                }

                void supportedHigh10Intra(bool value) {

                    m_supportedHigh10Intra_ = value;
                }

                bool& supportedHigh422() noexcept {
                    return m_supportedHigh422_;
                }

                const bool& supportedHigh422() const noexcept {
                    return m_supportedHigh422_;
                }

                void supportedHigh422(bool value) {

                    m_supportedHigh422_ = value;
                }

                bool& supportedHigh422Intra() noexcept {
                    return m_supportedHigh422Intra_;
                }

                const bool& supportedHigh422Intra() const noexcept {
                    return m_supportedHigh422Intra_;
                }

                void supportedHigh422Intra(bool value) {

                    m_supportedHigh422Intra_ = value;
                }

                bool& supportedHigh444Intra() noexcept {
                    return m_supportedHigh444Intra_;
                }

                const bool& supportedHigh444Intra() const noexcept {
                    return m_supportedHigh444Intra_;
                }

                void supportedHigh444Intra(bool value) {

                    m_supportedHigh444Intra_ = value;
                }

                bool& supportedHigh444Predictive() noexcept {
                    return m_supportedHigh444Predictive_;
                }

                const bool& supportedHigh444Predictive() const noexcept {
                    return m_supportedHigh444Predictive_;
                }

                void supportedHigh444Predictive(bool value) {

                    m_supportedHigh444Predictive_ = value;
                }

                bool& supportedLevel1() noexcept {
                    return m_supportedLevel1_;
                }

                const bool& supportedLevel1() const noexcept {
                    return m_supportedLevel1_;
                }

                void supportedLevel1(bool value) {

                    m_supportedLevel1_ = value;
                }

                bool& supportedLevel11() noexcept {
                    return m_supportedLevel11_;
                }

                const bool& supportedLevel11() const noexcept {
                    return m_supportedLevel11_;
                }

                void supportedLevel11(bool value) {

                    m_supportedLevel11_ = value;
                }

                bool& supportedLevel12() noexcept {
                    return m_supportedLevel12_;
                }

                const bool& supportedLevel12() const noexcept {
                    return m_supportedLevel12_;
                }

                void supportedLevel12(bool value) {

                    m_supportedLevel12_ = value;
                }

                bool& supportedLevel13() noexcept {
                    return m_supportedLevel13_;
                }

                const bool& supportedLevel13() const noexcept {
                    return m_supportedLevel13_;
                }

                void supportedLevel13(bool value) {

                    m_supportedLevel13_ = value;
                }

                bool& supportedLevel1B() noexcept {
                    return m_supportedLevel1B_;
                }

                const bool& supportedLevel1B() const noexcept {
                    return m_supportedLevel1B_;
                }

                void supportedLevel1B(bool value) {

                    m_supportedLevel1B_ = value;
                }

                bool& supportedLevel2() noexcept {
                    return m_supportedLevel2_;
                }

                const bool& supportedLevel2() const noexcept {
                    return m_supportedLevel2_;
                }

                void supportedLevel2(bool value) {

                    m_supportedLevel2_ = value;
                }

                bool& supportedLevel21() noexcept {
                    return m_supportedLevel21_;
                }

                const bool& supportedLevel21() const noexcept {
                    return m_supportedLevel21_;
                }

                void supportedLevel21(bool value) {

                    m_supportedLevel21_ = value;
                }

                bool& supportedLevel22() noexcept {
                    return m_supportedLevel22_;
                }

                const bool& supportedLevel22() const noexcept {
                    return m_supportedLevel22_;
                }

                void supportedLevel22(bool value) {

                    m_supportedLevel22_ = value;
                }

                bool& supportedLevel3() noexcept {
                    return m_supportedLevel3_;
                }

                const bool& supportedLevel3() const noexcept {
                    return m_supportedLevel3_;
                }

                void supportedLevel3(bool value) {

                    m_supportedLevel3_ = value;
                }

                bool& supportedLevel31() noexcept {
                    return m_supportedLevel31_;
                }

                const bool& supportedLevel31() const noexcept {
                    return m_supportedLevel31_;
                }

                void supportedLevel31(bool value) {

                    m_supportedLevel31_ = value;
                }

                bool& supportedLevel32() noexcept {
                    return m_supportedLevel32_;
                }

                const bool& supportedLevel32() const noexcept {
                    return m_supportedLevel32_;
                }

                void supportedLevel32(bool value) {

                    m_supportedLevel32_ = value;
                }

                bool& supportedLevel4() noexcept {
                    return m_supportedLevel4_;
                }

                const bool& supportedLevel4() const noexcept {
                    return m_supportedLevel4_;
                }

                void supportedLevel4(bool value) {

                    m_supportedLevel4_ = value;
                }

                bool& supportedLevel41() noexcept {
                    return m_supportedLevel41_;
                }

                const bool& supportedLevel41() const noexcept {
                    return m_supportedLevel41_;
                }

                void supportedLevel41(bool value) {

                    m_supportedLevel41_ = value;
                }

                bool& supportedLevel42() noexcept {
                    return m_supportedLevel42_;
                }

                const bool& supportedLevel42() const noexcept {
                    return m_supportedLevel42_;
                }

                void supportedLevel42(bool value) {

                    m_supportedLevel42_ = value;
                }

                bool& supportedLevel5() noexcept {
                    return m_supportedLevel5_;
                }

                const bool& supportedLevel5() const noexcept {
                    return m_supportedLevel5_;
                }

                void supportedLevel5(bool value) {

                    m_supportedLevel5_ = value;
                }

                bool& supportedLevel51() noexcept {
                    return m_supportedLevel51_;
                }

                const bool& supportedLevel51() const noexcept {
                    return m_supportedLevel51_;
                }

                void supportedLevel51(bool value) {

                    m_supportedLevel51_ = value;
                }

                bool& supportedLevel52() noexcept {
                    return m_supportedLevel52_;
                }

                const bool& supportedLevel52() const noexcept {
                    return m_supportedLevel52_;
                }

                void supportedLevel52(bool value) {

                    m_supportedLevel52_ = value;
                }

                bool& supportedLowLatency() noexcept {
                    return m_supportedLowLatency_;
                }

                const bool& supportedLowLatency() const noexcept {
                    return m_supportedLowLatency_;
                }

                void supportedLowLatency(bool value) {

                    m_supportedLowLatency_ = value;
                }

                bool& supportedMain() noexcept {
                    return m_supportedMain_;
                }

                const bool& supportedMain() const noexcept {
                    return m_supportedMain_;
                }

                void supportedMain(bool value) {

                    m_supportedMain_ = value;
                }

                bool& supportedManipulation() noexcept {
                    return m_supportedManipulation_;
                }

                const bool& supportedManipulation() const noexcept {
                    return m_supportedManipulation_;
                }

                void supportedManipulation(bool value) {

                    m_supportedManipulation_ = value;
                }

                bool& supportedMultiviewHigh() noexcept {
                    return m_supportedMultiviewHigh_;
                }

                const bool& supportedMultiviewHigh() const noexcept {
                    return m_supportedMultiviewHigh_;
                }

                void supportedMultiviewHigh(bool value) {

                    m_supportedMultiviewHigh_ = value;
                }

                bool& supportedPersistentStare() noexcept {
                    return m_supportedPersistentStare_;
                }

                const bool& supportedPersistentStare() const noexcept {
                    return m_supportedPersistentStare_;
                }

                void supportedPersistentStare(bool value) {

                    m_supportedPersistentStare_ = value;
                }

                bool& supportedProgramSpecific1() noexcept {
                    return m_supportedProgramSpecific1_;
                }

                const bool& supportedProgramSpecific1() const noexcept {
                    return m_supportedProgramSpecific1_;
                }

                void supportedProgramSpecific1(bool value) {

                    m_supportedProgramSpecific1_ = value;
                }

                bool& supportedProgramSpecific2() noexcept {
                    return m_supportedProgramSpecific2_;
                }

                const bool& supportedProgramSpecific2() const noexcept {
                    return m_supportedProgramSpecific2_;
                }

                void supportedProgramSpecific2(bool value) {

                    m_supportedProgramSpecific2_ = value;
                }

                bool& supportedProgramSpecific3() noexcept {
                    return m_supportedProgramSpecific3_;
                }

                const bool& supportedProgramSpecific3() const noexcept {
                    return m_supportedProgramSpecific3_;
                }

                void supportedProgramSpecific3(bool value) {

                    m_supportedProgramSpecific3_ = value;
                }

                bool& supportedProgramSpecific4() noexcept {
                    return m_supportedProgramSpecific4_;
                }

                const bool& supportedProgramSpecific4() const noexcept {
                    return m_supportedProgramSpecific4_;
                }

                void supportedProgramSpecific4(bool value) {

                    m_supportedProgramSpecific4_ = value;
                }

                bool& supportedProgressiveHigh() noexcept {
                    return m_supportedProgressiveHigh_;
                }

                const bool& supportedProgressiveHigh() const noexcept {
                    return m_supportedProgressiveHigh_;
                }

                void supportedProgressiveHigh(bool value) {

                    m_supportedProgressiveHigh_ = value;
                }

                bool& supportedRegionOfInterest() noexcept {
                    return m_supportedRegionOfInterest_;
                }

                const bool& supportedRegionOfInterest() const noexcept {
                    return m_supportedRegionOfInterest_;
                }

                void supportedRegionOfInterest(bool value) {

                    m_supportedRegionOfInterest_ = value;
                }

                bool& supportedScalableBaseline() noexcept {
                    return m_supportedScalableBaseline_;
                }

                const bool& supportedScalableBaseline() const noexcept {
                    return m_supportedScalableBaseline_;
                }

                void supportedScalableBaseline(bool value) {

                    m_supportedScalableBaseline_ = value;
                }

                bool& supportedScalableConstrainedBaseline() noexcept {
                    return m_supportedScalableConstrainedBaseline_;
                }

                const bool& supportedScalableConstrainedBaseline() const noexcept {
                    return m_supportedScalableConstrainedBaseline_;
                }

                void supportedScalableConstrainedBaseline(bool value) {

                    m_supportedScalableConstrainedBaseline_ = value;
                }

                bool& supportedScalableConstrainedHigh() noexcept {
                    return m_supportedScalableConstrainedHigh_;
                }

                const bool& supportedScalableConstrainedHigh() const noexcept {
                    return m_supportedScalableConstrainedHigh_;
                }

                void supportedScalableConstrainedHigh(bool value) {

                    m_supportedScalableConstrainedHigh_ = value;
                }

                bool& supportedScalableHigh() noexcept {
                    return m_supportedScalableHigh_;
                }

                const bool& supportedScalableHigh() const noexcept {
                    return m_supportedScalableHigh_;
                }

                void supportedScalableHigh(bool value) {

                    m_supportedScalableHigh_ = value;
                }

                bool& supportedScalableHighIntra() noexcept {
                    return m_supportedScalableHighIntra_;
                }

                const bool& supportedScalableHighIntra() const noexcept {
                    return m_supportedScalableHighIntra_;
                }

                void supportedScalableHighIntra(bool value) {

                    m_supportedScalableHighIntra_ = value;
                }

                bool& supportedSlowComms() noexcept {
                    return m_supportedSlowComms_;
                }

                const bool& supportedSlowComms() const noexcept {
                    return m_supportedSlowComms_;
                }

                void supportedSlowComms(bool value) {

                    m_supportedSlowComms_ = value;
                }

                bool& supportedStereoHigh() noexcept {
                    return m_supportedStereoHigh_;
                }

                const bool& supportedStereoHigh() const noexcept {
                    return m_supportedStereoHigh_;
                }

                void supportedStereoHigh(bool value) {

                    m_supportedStereoHigh_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& timeStamp() noexcept {
                    return m_timeStamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeStamp() const noexcept {
                    return m_timeStamp_;
                }

                void timeStamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeStamp_ = value;
                }

                void timeStamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }
                bool operator == (const H264VideoEncodingSpecsReportType& other_) const;
                bool operator != (const H264VideoEncodingSpecsReportType& other_) const;

                void swap(H264VideoEncodingSpecsReportType& other_) noexcept ;

              private:

                bool m_supportedBaseline_;
                bool m_supportedBestQuality_;
                bool m_supportedCAVLC444_;
                bool m_supportedConstrainedBaseline_;
                bool m_supportedConstrainedHigh_;
                bool m_supportedDriveVision_;
                bool m_supportedExtended_;
                bool m_supportedGradualDecoderRefresh_;
                bool m_supportedGroupOfPictures_;
                bool m_supportedHigh_;
                bool m_supportedHigh10_;
                bool m_supportedHigh10Intra_;
                bool m_supportedHigh422_;
                bool m_supportedHigh422Intra_;
                bool m_supportedHigh444Intra_;
                bool m_supportedHigh444Predictive_;
                bool m_supportedLevel1_;
                bool m_supportedLevel11_;
                bool m_supportedLevel12_;
                bool m_supportedLevel13_;
                bool m_supportedLevel1B_;
                bool m_supportedLevel2_;
                bool m_supportedLevel21_;
                bool m_supportedLevel22_;
                bool m_supportedLevel3_;
                bool m_supportedLevel31_;
                bool m_supportedLevel32_;
                bool m_supportedLevel4_;
                bool m_supportedLevel41_;
                bool m_supportedLevel42_;
                bool m_supportedLevel5_;
                bool m_supportedLevel51_;
                bool m_supportedLevel52_;
                bool m_supportedLowLatency_;
                bool m_supportedMain_;
                bool m_supportedManipulation_;
                bool m_supportedMultiviewHigh_;
                bool m_supportedPersistentStare_;
                bool m_supportedProgramSpecific1_;
                bool m_supportedProgramSpecific2_;
                bool m_supportedProgramSpecific3_;
                bool m_supportedProgramSpecific4_;
                bool m_supportedProgressiveHigh_;
                bool m_supportedRegionOfInterest_;
                bool m_supportedScalableBaseline_;
                bool m_supportedScalableConstrainedBaseline_;
                bool m_supportedScalableConstrainedHigh_;
                bool m_supportedScalableHigh_;
                bool m_supportedScalableHighIntra_;
                bool m_supportedSlowComms_;
                bool m_supportedStereoHigh_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(H264VideoEncodingSpecsReportType& a, H264VideoEncodingSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const H264VideoEncodingSpecsReportType& sample);

        } // namespace H264VideoEncodingSpecs  
    } // namespace SEM  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // H264VideoEncodingSpecsReportType_1030733027_hpp

