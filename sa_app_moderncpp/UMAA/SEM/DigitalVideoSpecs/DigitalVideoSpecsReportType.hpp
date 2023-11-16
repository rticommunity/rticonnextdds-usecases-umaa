

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalVideoSpecsReportType_24736465_hpp
#define DigitalVideoSpecsReportType_24736465_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

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
        namespace DigitalVideoSpecs {

            static const std::string DigitalVideoSpecsReport_TOPIC = "UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReport";

            class NDDSUSERDllExport DigitalVideoSpecsReportType {
              public:
                DigitalVideoSpecsReportType();

                DigitalVideoSpecsReportType(double maxBitRate,double maxFrameRate,double minBitRate,double minFrameRate,bool supportedAVI,bool supportedCGA_320x200,bool supportedCIF_1408x1152,bool supportedCIF_352x288,bool supportedCIF_704x576,bool supportedEGA_640x350,bool supportedH262,bool supportedH263,bool supportedH263PLUS,bool supportedH264,bool supportedHD1080_1920x1080,bool supportedHD480_852x480,bool supportedHD720_1280x720,bool supportedHSXGA_5120x4096,bool supportedMJPEG,bool supportedMPEG4,bool supportedQCIF_176x144,bool supportedQQVGA_160x120,bool supportedQSXGA_2560x2048,bool supportedQVGA_320x240,bool supportedQXGA_2048x1536,bool supportedSQCIF_128x96,bool supportedSVGA_800x600,bool supportedSXGA_1280x1024,bool supportedUXGA_1600x1200,bool supportedVGA_640x480,bool supportedWHSXGA_6400x4096,bool supportedWHUXGA_7680x4800,bool supportedWOXGA_2560x1600,bool supportedWQSXGA_3200x2048,bool supportedWQUXGA_3840x2400,bool supportedWSXGA_1600x1024,bool supportedWUXGA_1920x1200,bool supportedWVGA_852x480,bool supportedWXGA_1366x768,bool supportedXGA_1024x768,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                DigitalVideoSpecsReportType (DigitalVideoSpecsReportType&&) = default;
                DigitalVideoSpecsReportType& operator=(DigitalVideoSpecsReportType&&) = default;
                DigitalVideoSpecsReportType& operator=(const DigitalVideoSpecsReportType&) = default;
                DigitalVideoSpecsReportType(const DigitalVideoSpecsReportType&) = default;
                #else
                DigitalVideoSpecsReportType(DigitalVideoSpecsReportType&& other_) OMG_NOEXCEPT;  
                DigitalVideoSpecsReportType& operator=(DigitalVideoSpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& maxBitRate() OMG_NOEXCEPT {
                    return m_maxBitRate_;
                }

                const double& maxBitRate() const OMG_NOEXCEPT {
                    return m_maxBitRate_;
                }

                void maxBitRate(double value) {
                    m_maxBitRate_ = value;
                }

                double& maxFrameRate() OMG_NOEXCEPT {
                    return m_maxFrameRate_;
                }

                const double& maxFrameRate() const OMG_NOEXCEPT {
                    return m_maxFrameRate_;
                }

                void maxFrameRate(double value) {
                    m_maxFrameRate_ = value;
                }

                double& minBitRate() OMG_NOEXCEPT {
                    return m_minBitRate_;
                }

                const double& minBitRate() const OMG_NOEXCEPT {
                    return m_minBitRate_;
                }

                void minBitRate(double value) {
                    m_minBitRate_ = value;
                }

                double& minFrameRate() OMG_NOEXCEPT {
                    return m_minFrameRate_;
                }

                const double& minFrameRate() const OMG_NOEXCEPT {
                    return m_minFrameRate_;
                }

                void minFrameRate(double value) {
                    m_minFrameRate_ = value;
                }

                bool& supportedAVI() OMG_NOEXCEPT {
                    return m_supportedAVI_;
                }

                const bool& supportedAVI() const OMG_NOEXCEPT {
                    return m_supportedAVI_;
                }

                void supportedAVI(bool value) {
                    m_supportedAVI_ = value;
                }

                bool& supportedCGA_320x200() OMG_NOEXCEPT {
                    return m_supportedCGA_320x200_;
                }

                const bool& supportedCGA_320x200() const OMG_NOEXCEPT {
                    return m_supportedCGA_320x200_;
                }

                void supportedCGA_320x200(bool value) {
                    m_supportedCGA_320x200_ = value;
                }

                bool& supportedCIF_1408x1152() OMG_NOEXCEPT {
                    return m_supportedCIF_1408x1152_;
                }

                const bool& supportedCIF_1408x1152() const OMG_NOEXCEPT {
                    return m_supportedCIF_1408x1152_;
                }

                void supportedCIF_1408x1152(bool value) {
                    m_supportedCIF_1408x1152_ = value;
                }

                bool& supportedCIF_352x288() OMG_NOEXCEPT {
                    return m_supportedCIF_352x288_;
                }

                const bool& supportedCIF_352x288() const OMG_NOEXCEPT {
                    return m_supportedCIF_352x288_;
                }

                void supportedCIF_352x288(bool value) {
                    m_supportedCIF_352x288_ = value;
                }

                bool& supportedCIF_704x576() OMG_NOEXCEPT {
                    return m_supportedCIF_704x576_;
                }

                const bool& supportedCIF_704x576() const OMG_NOEXCEPT {
                    return m_supportedCIF_704x576_;
                }

                void supportedCIF_704x576(bool value) {
                    m_supportedCIF_704x576_ = value;
                }

                bool& supportedEGA_640x350() OMG_NOEXCEPT {
                    return m_supportedEGA_640x350_;
                }

                const bool& supportedEGA_640x350() const OMG_NOEXCEPT {
                    return m_supportedEGA_640x350_;
                }

                void supportedEGA_640x350(bool value) {
                    m_supportedEGA_640x350_ = value;
                }

                bool& supportedH262() OMG_NOEXCEPT {
                    return m_supportedH262_;
                }

                const bool& supportedH262() const OMG_NOEXCEPT {
                    return m_supportedH262_;
                }

                void supportedH262(bool value) {
                    m_supportedH262_ = value;
                }

                bool& supportedH263() OMG_NOEXCEPT {
                    return m_supportedH263_;
                }

                const bool& supportedH263() const OMG_NOEXCEPT {
                    return m_supportedH263_;
                }

                void supportedH263(bool value) {
                    m_supportedH263_ = value;
                }

                bool& supportedH263PLUS() OMG_NOEXCEPT {
                    return m_supportedH263PLUS_;
                }

                const bool& supportedH263PLUS() const OMG_NOEXCEPT {
                    return m_supportedH263PLUS_;
                }

                void supportedH263PLUS(bool value) {
                    m_supportedH263PLUS_ = value;
                }

                bool& supportedH264() OMG_NOEXCEPT {
                    return m_supportedH264_;
                }

                const bool& supportedH264() const OMG_NOEXCEPT {
                    return m_supportedH264_;
                }

                void supportedH264(bool value) {
                    m_supportedH264_ = value;
                }

                bool& supportedHD1080_1920x1080() OMG_NOEXCEPT {
                    return m_supportedHD1080_1920x1080_;
                }

                const bool& supportedHD1080_1920x1080() const OMG_NOEXCEPT {
                    return m_supportedHD1080_1920x1080_;
                }

                void supportedHD1080_1920x1080(bool value) {
                    m_supportedHD1080_1920x1080_ = value;
                }

                bool& supportedHD480_852x480() OMG_NOEXCEPT {
                    return m_supportedHD480_852x480_;
                }

                const bool& supportedHD480_852x480() const OMG_NOEXCEPT {
                    return m_supportedHD480_852x480_;
                }

                void supportedHD480_852x480(bool value) {
                    m_supportedHD480_852x480_ = value;
                }

                bool& supportedHD720_1280x720() OMG_NOEXCEPT {
                    return m_supportedHD720_1280x720_;
                }

                const bool& supportedHD720_1280x720() const OMG_NOEXCEPT {
                    return m_supportedHD720_1280x720_;
                }

                void supportedHD720_1280x720(bool value) {
                    m_supportedHD720_1280x720_ = value;
                }

                bool& supportedHSXGA_5120x4096() OMG_NOEXCEPT {
                    return m_supportedHSXGA_5120x4096_;
                }

                const bool& supportedHSXGA_5120x4096() const OMG_NOEXCEPT {
                    return m_supportedHSXGA_5120x4096_;
                }

                void supportedHSXGA_5120x4096(bool value) {
                    m_supportedHSXGA_5120x4096_ = value;
                }

                bool& supportedMJPEG() OMG_NOEXCEPT {
                    return m_supportedMJPEG_;
                }

                const bool& supportedMJPEG() const OMG_NOEXCEPT {
                    return m_supportedMJPEG_;
                }

                void supportedMJPEG(bool value) {
                    m_supportedMJPEG_ = value;
                }

                bool& supportedMPEG4() OMG_NOEXCEPT {
                    return m_supportedMPEG4_;
                }

                const bool& supportedMPEG4() const OMG_NOEXCEPT {
                    return m_supportedMPEG4_;
                }

                void supportedMPEG4(bool value) {
                    m_supportedMPEG4_ = value;
                }

                bool& supportedQCIF_176x144() OMG_NOEXCEPT {
                    return m_supportedQCIF_176x144_;
                }

                const bool& supportedQCIF_176x144() const OMG_NOEXCEPT {
                    return m_supportedQCIF_176x144_;
                }

                void supportedQCIF_176x144(bool value) {
                    m_supportedQCIF_176x144_ = value;
                }

                bool& supportedQQVGA_160x120() OMG_NOEXCEPT {
                    return m_supportedQQVGA_160x120_;
                }

                const bool& supportedQQVGA_160x120() const OMG_NOEXCEPT {
                    return m_supportedQQVGA_160x120_;
                }

                void supportedQQVGA_160x120(bool value) {
                    m_supportedQQVGA_160x120_ = value;
                }

                bool& supportedQSXGA_2560x2048() OMG_NOEXCEPT {
                    return m_supportedQSXGA_2560x2048_;
                }

                const bool& supportedQSXGA_2560x2048() const OMG_NOEXCEPT {
                    return m_supportedQSXGA_2560x2048_;
                }

                void supportedQSXGA_2560x2048(bool value) {
                    m_supportedQSXGA_2560x2048_ = value;
                }

                bool& supportedQVGA_320x240() OMG_NOEXCEPT {
                    return m_supportedQVGA_320x240_;
                }

                const bool& supportedQVGA_320x240() const OMG_NOEXCEPT {
                    return m_supportedQVGA_320x240_;
                }

                void supportedQVGA_320x240(bool value) {
                    m_supportedQVGA_320x240_ = value;
                }

                bool& supportedQXGA_2048x1536() OMG_NOEXCEPT {
                    return m_supportedQXGA_2048x1536_;
                }

                const bool& supportedQXGA_2048x1536() const OMG_NOEXCEPT {
                    return m_supportedQXGA_2048x1536_;
                }

                void supportedQXGA_2048x1536(bool value) {
                    m_supportedQXGA_2048x1536_ = value;
                }

                bool& supportedSQCIF_128x96() OMG_NOEXCEPT {
                    return m_supportedSQCIF_128x96_;
                }

                const bool& supportedSQCIF_128x96() const OMG_NOEXCEPT {
                    return m_supportedSQCIF_128x96_;
                }

                void supportedSQCIF_128x96(bool value) {
                    m_supportedSQCIF_128x96_ = value;
                }

                bool& supportedSVGA_800x600() OMG_NOEXCEPT {
                    return m_supportedSVGA_800x600_;
                }

                const bool& supportedSVGA_800x600() const OMG_NOEXCEPT {
                    return m_supportedSVGA_800x600_;
                }

                void supportedSVGA_800x600(bool value) {
                    m_supportedSVGA_800x600_ = value;
                }

                bool& supportedSXGA_1280x1024() OMG_NOEXCEPT {
                    return m_supportedSXGA_1280x1024_;
                }

                const bool& supportedSXGA_1280x1024() const OMG_NOEXCEPT {
                    return m_supportedSXGA_1280x1024_;
                }

                void supportedSXGA_1280x1024(bool value) {
                    m_supportedSXGA_1280x1024_ = value;
                }

                bool& supportedUXGA_1600x1200() OMG_NOEXCEPT {
                    return m_supportedUXGA_1600x1200_;
                }

                const bool& supportedUXGA_1600x1200() const OMG_NOEXCEPT {
                    return m_supportedUXGA_1600x1200_;
                }

                void supportedUXGA_1600x1200(bool value) {
                    m_supportedUXGA_1600x1200_ = value;
                }

                bool& supportedVGA_640x480() OMG_NOEXCEPT {
                    return m_supportedVGA_640x480_;
                }

                const bool& supportedVGA_640x480() const OMG_NOEXCEPT {
                    return m_supportedVGA_640x480_;
                }

                void supportedVGA_640x480(bool value) {
                    m_supportedVGA_640x480_ = value;
                }

                bool& supportedWHSXGA_6400x4096() OMG_NOEXCEPT {
                    return m_supportedWHSXGA_6400x4096_;
                }

                const bool& supportedWHSXGA_6400x4096() const OMG_NOEXCEPT {
                    return m_supportedWHSXGA_6400x4096_;
                }

                void supportedWHSXGA_6400x4096(bool value) {
                    m_supportedWHSXGA_6400x4096_ = value;
                }

                bool& supportedWHUXGA_7680x4800() OMG_NOEXCEPT {
                    return m_supportedWHUXGA_7680x4800_;
                }

                const bool& supportedWHUXGA_7680x4800() const OMG_NOEXCEPT {
                    return m_supportedWHUXGA_7680x4800_;
                }

                void supportedWHUXGA_7680x4800(bool value) {
                    m_supportedWHUXGA_7680x4800_ = value;
                }

                bool& supportedWOXGA_2560x1600() OMG_NOEXCEPT {
                    return m_supportedWOXGA_2560x1600_;
                }

                const bool& supportedWOXGA_2560x1600() const OMG_NOEXCEPT {
                    return m_supportedWOXGA_2560x1600_;
                }

                void supportedWOXGA_2560x1600(bool value) {
                    m_supportedWOXGA_2560x1600_ = value;
                }

                bool& supportedWQSXGA_3200x2048() OMG_NOEXCEPT {
                    return m_supportedWQSXGA_3200x2048_;
                }

                const bool& supportedWQSXGA_3200x2048() const OMG_NOEXCEPT {
                    return m_supportedWQSXGA_3200x2048_;
                }

                void supportedWQSXGA_3200x2048(bool value) {
                    m_supportedWQSXGA_3200x2048_ = value;
                }

                bool& supportedWQUXGA_3840x2400() OMG_NOEXCEPT {
                    return m_supportedWQUXGA_3840x2400_;
                }

                const bool& supportedWQUXGA_3840x2400() const OMG_NOEXCEPT {
                    return m_supportedWQUXGA_3840x2400_;
                }

                void supportedWQUXGA_3840x2400(bool value) {
                    m_supportedWQUXGA_3840x2400_ = value;
                }

                bool& supportedWSXGA_1600x1024() OMG_NOEXCEPT {
                    return m_supportedWSXGA_1600x1024_;
                }

                const bool& supportedWSXGA_1600x1024() const OMG_NOEXCEPT {
                    return m_supportedWSXGA_1600x1024_;
                }

                void supportedWSXGA_1600x1024(bool value) {
                    m_supportedWSXGA_1600x1024_ = value;
                }

                bool& supportedWUXGA_1920x1200() OMG_NOEXCEPT {
                    return m_supportedWUXGA_1920x1200_;
                }

                const bool& supportedWUXGA_1920x1200() const OMG_NOEXCEPT {
                    return m_supportedWUXGA_1920x1200_;
                }

                void supportedWUXGA_1920x1200(bool value) {
                    m_supportedWUXGA_1920x1200_ = value;
                }

                bool& supportedWVGA_852x480() OMG_NOEXCEPT {
                    return m_supportedWVGA_852x480_;
                }

                const bool& supportedWVGA_852x480() const OMG_NOEXCEPT {
                    return m_supportedWVGA_852x480_;
                }

                void supportedWVGA_852x480(bool value) {
                    m_supportedWVGA_852x480_ = value;
                }

                bool& supportedWXGA_1366x768() OMG_NOEXCEPT {
                    return m_supportedWXGA_1366x768_;
                }

                const bool& supportedWXGA_1366x768() const OMG_NOEXCEPT {
                    return m_supportedWXGA_1366x768_;
                }

                void supportedWXGA_1366x768(bool value) {
                    m_supportedWXGA_1366x768_ = value;
                }

                bool& supportedXGA_1024x768() OMG_NOEXCEPT {
                    return m_supportedXGA_1024x768_;
                }

                const bool& supportedXGA_1024x768() const OMG_NOEXCEPT {
                    return m_supportedXGA_1024x768_;
                }

                void supportedXGA_1024x768(bool value) {
                    m_supportedXGA_1024x768_ = value;
                }

                UMAA::Common::Measurement::NumericGUID& source() OMG_NOEXCEPT {
                    return m_source_;
                }

                const UMAA::Common::Measurement::NumericGUID& source() const OMG_NOEXCEPT {
                    return m_source_;
                }

                void source(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_source_ = value;
                }

                void source(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeStamp() OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                const UMAA::Common::Measurement::DateTime& timeStamp() const OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                void timeStamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeStamp_ = value;
                }

                void timeStamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }

                bool operator == (const DigitalVideoSpecsReportType& other_) const;
                bool operator != (const DigitalVideoSpecsReportType& other_) const;

                void swap(DigitalVideoSpecsReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_maxBitRate_;
                double m_maxFrameRate_;
                double m_minBitRate_;
                double m_minFrameRate_;
                bool m_supportedAVI_;
                bool m_supportedCGA_320x200_;
                bool m_supportedCIF_1408x1152_;
                bool m_supportedCIF_352x288_;
                bool m_supportedCIF_704x576_;
                bool m_supportedEGA_640x350_;
                bool m_supportedH262_;
                bool m_supportedH263_;
                bool m_supportedH263PLUS_;
                bool m_supportedH264_;
                bool m_supportedHD1080_1920x1080_;
                bool m_supportedHD480_852x480_;
                bool m_supportedHD720_1280x720_;
                bool m_supportedHSXGA_5120x4096_;
                bool m_supportedMJPEG_;
                bool m_supportedMPEG4_;
                bool m_supportedQCIF_176x144_;
                bool m_supportedQQVGA_160x120_;
                bool m_supportedQSXGA_2560x2048_;
                bool m_supportedQVGA_320x240_;
                bool m_supportedQXGA_2048x1536_;
                bool m_supportedSQCIF_128x96_;
                bool m_supportedSVGA_800x600_;
                bool m_supportedSXGA_1280x1024_;
                bool m_supportedUXGA_1600x1200_;
                bool m_supportedVGA_640x480_;
                bool m_supportedWHSXGA_6400x4096_;
                bool m_supportedWHUXGA_7680x4800_;
                bool m_supportedWOXGA_2560x1600_;
                bool m_supportedWQSXGA_3200x2048_;
                bool m_supportedWQUXGA_3840x2400_;
                bool m_supportedWSXGA_1600x1024_;
                bool m_supportedWUXGA_1920x1200_;
                bool m_supportedWVGA_852x480_;
                bool m_supportedWXGA_1366x768_;
                bool m_supportedXGA_1024x768_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(DigitalVideoSpecsReportType& a, DigitalVideoSpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DigitalVideoSpecsReportType& sample);

        } // namespace DigitalVideoSpecs  
    } // namespace SEM  
} // namespace UMAA  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // DigitalVideoSpecsReportType_24736465_hpp

