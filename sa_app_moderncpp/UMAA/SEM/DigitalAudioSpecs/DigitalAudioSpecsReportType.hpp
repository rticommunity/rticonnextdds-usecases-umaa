

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalAudioSpecsReportType_34587062_hpp
#define DigitalAudioSpecsReportType_34587062_hpp

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
        namespace DigitalAudioSpecs {

            static const std::string DigitalAudioSpecsReport_TOPIC = "UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReport";

            class NDDSUSERDllExport DigitalAudioSpecsReportType {
              public:
                DigitalAudioSpecsReportType();

                DigitalAudioSpecsReportType(int32_t maxAllowedBitRate,int32_t maxChannels,int32_t maxSampleRate,int32_t minAllowedBitRate,int32_t minSampleRate,bool supported10bits,bool supported12bits,bool supported14bits,bool supported16bits,bool supported20bits,bool supported24bits,bool supported32bits,bool supported40bits,bool supported48bits,bool supported56bits,bool supported64bits,bool supported8bits,bool supportedAAC_MPEG2,bool supportedAAC_MPEG4,bool supportedAIFF,bool supportedALAC,bool supportedAverage,bool supportedBest,bool supportedBetter,bool supportedDolbyDigital,bool supportedDTS,bool supportedFLAC,bool supportedGood,bool supportedLess,bool supportedLPCM_PCM,bool supportedMP2,bool supportedMP3,bool supportedPoor,bool supportedRealAudio,bool supportedSpeex,bool supportedTrueAudio,bool supportedULAW,bool supportedVORBIS,bool supportedWAV,bool supportedWMA,bool supportedWMA9_Lossless,bool supportedWorst,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                DigitalAudioSpecsReportType (DigitalAudioSpecsReportType&&) = default;
                DigitalAudioSpecsReportType& operator=(DigitalAudioSpecsReportType&&) = default;
                DigitalAudioSpecsReportType& operator=(const DigitalAudioSpecsReportType&) = default;
                DigitalAudioSpecsReportType(const DigitalAudioSpecsReportType&) = default;
                #else
                DigitalAudioSpecsReportType(DigitalAudioSpecsReportType&& other_) OMG_NOEXCEPT;  
                DigitalAudioSpecsReportType& operator=(DigitalAudioSpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                int32_t& maxAllowedBitRate() OMG_NOEXCEPT {
                    return m_maxAllowedBitRate_;
                }

                const int32_t& maxAllowedBitRate() const OMG_NOEXCEPT {
                    return m_maxAllowedBitRate_;
                }

                void maxAllowedBitRate(int32_t value) {
                    m_maxAllowedBitRate_ = value;
                }

                int32_t& maxChannels() OMG_NOEXCEPT {
                    return m_maxChannels_;
                }

                const int32_t& maxChannels() const OMG_NOEXCEPT {
                    return m_maxChannels_;
                }

                void maxChannels(int32_t value) {
                    m_maxChannels_ = value;
                }

                int32_t& maxSampleRate() OMG_NOEXCEPT {
                    return m_maxSampleRate_;
                }

                const int32_t& maxSampleRate() const OMG_NOEXCEPT {
                    return m_maxSampleRate_;
                }

                void maxSampleRate(int32_t value) {
                    m_maxSampleRate_ = value;
                }

                int32_t& minAllowedBitRate() OMG_NOEXCEPT {
                    return m_minAllowedBitRate_;
                }

                const int32_t& minAllowedBitRate() const OMG_NOEXCEPT {
                    return m_minAllowedBitRate_;
                }

                void minAllowedBitRate(int32_t value) {
                    m_minAllowedBitRate_ = value;
                }

                int32_t& minSampleRate() OMG_NOEXCEPT {
                    return m_minSampleRate_;
                }

                const int32_t& minSampleRate() const OMG_NOEXCEPT {
                    return m_minSampleRate_;
                }

                void minSampleRate(int32_t value) {
                    m_minSampleRate_ = value;
                }

                bool& supported10bits() OMG_NOEXCEPT {
                    return m_supported10bits_;
                }

                const bool& supported10bits() const OMG_NOEXCEPT {
                    return m_supported10bits_;
                }

                void supported10bits(bool value) {
                    m_supported10bits_ = value;
                }

                bool& supported12bits() OMG_NOEXCEPT {
                    return m_supported12bits_;
                }

                const bool& supported12bits() const OMG_NOEXCEPT {
                    return m_supported12bits_;
                }

                void supported12bits(bool value) {
                    m_supported12bits_ = value;
                }

                bool& supported14bits() OMG_NOEXCEPT {
                    return m_supported14bits_;
                }

                const bool& supported14bits() const OMG_NOEXCEPT {
                    return m_supported14bits_;
                }

                void supported14bits(bool value) {
                    m_supported14bits_ = value;
                }

                bool& supported16bits() OMG_NOEXCEPT {
                    return m_supported16bits_;
                }

                const bool& supported16bits() const OMG_NOEXCEPT {
                    return m_supported16bits_;
                }

                void supported16bits(bool value) {
                    m_supported16bits_ = value;
                }

                bool& supported20bits() OMG_NOEXCEPT {
                    return m_supported20bits_;
                }

                const bool& supported20bits() const OMG_NOEXCEPT {
                    return m_supported20bits_;
                }

                void supported20bits(bool value) {
                    m_supported20bits_ = value;
                }

                bool& supported24bits() OMG_NOEXCEPT {
                    return m_supported24bits_;
                }

                const bool& supported24bits() const OMG_NOEXCEPT {
                    return m_supported24bits_;
                }

                void supported24bits(bool value) {
                    m_supported24bits_ = value;
                }

                bool& supported32bits() OMG_NOEXCEPT {
                    return m_supported32bits_;
                }

                const bool& supported32bits() const OMG_NOEXCEPT {
                    return m_supported32bits_;
                }

                void supported32bits(bool value) {
                    m_supported32bits_ = value;
                }

                bool& supported40bits() OMG_NOEXCEPT {
                    return m_supported40bits_;
                }

                const bool& supported40bits() const OMG_NOEXCEPT {
                    return m_supported40bits_;
                }

                void supported40bits(bool value) {
                    m_supported40bits_ = value;
                }

                bool& supported48bits() OMG_NOEXCEPT {
                    return m_supported48bits_;
                }

                const bool& supported48bits() const OMG_NOEXCEPT {
                    return m_supported48bits_;
                }

                void supported48bits(bool value) {
                    m_supported48bits_ = value;
                }

                bool& supported56bits() OMG_NOEXCEPT {
                    return m_supported56bits_;
                }

                const bool& supported56bits() const OMG_NOEXCEPT {
                    return m_supported56bits_;
                }

                void supported56bits(bool value) {
                    m_supported56bits_ = value;
                }

                bool& supported64bits() OMG_NOEXCEPT {
                    return m_supported64bits_;
                }

                const bool& supported64bits() const OMG_NOEXCEPT {
                    return m_supported64bits_;
                }

                void supported64bits(bool value) {
                    m_supported64bits_ = value;
                }

                bool& supported8bits() OMG_NOEXCEPT {
                    return m_supported8bits_;
                }

                const bool& supported8bits() const OMG_NOEXCEPT {
                    return m_supported8bits_;
                }

                void supported8bits(bool value) {
                    m_supported8bits_ = value;
                }

                bool& supportedAAC_MPEG2() OMG_NOEXCEPT {
                    return m_supportedAAC_MPEG2_;
                }

                const bool& supportedAAC_MPEG2() const OMG_NOEXCEPT {
                    return m_supportedAAC_MPEG2_;
                }

                void supportedAAC_MPEG2(bool value) {
                    m_supportedAAC_MPEG2_ = value;
                }

                bool& supportedAAC_MPEG4() OMG_NOEXCEPT {
                    return m_supportedAAC_MPEG4_;
                }

                const bool& supportedAAC_MPEG4() const OMG_NOEXCEPT {
                    return m_supportedAAC_MPEG4_;
                }

                void supportedAAC_MPEG4(bool value) {
                    m_supportedAAC_MPEG4_ = value;
                }

                bool& supportedAIFF() OMG_NOEXCEPT {
                    return m_supportedAIFF_;
                }

                const bool& supportedAIFF() const OMG_NOEXCEPT {
                    return m_supportedAIFF_;
                }

                void supportedAIFF(bool value) {
                    m_supportedAIFF_ = value;
                }

                bool& supportedALAC() OMG_NOEXCEPT {
                    return m_supportedALAC_;
                }

                const bool& supportedALAC() const OMG_NOEXCEPT {
                    return m_supportedALAC_;
                }

                void supportedALAC(bool value) {
                    m_supportedALAC_ = value;
                }

                bool& supportedAverage() OMG_NOEXCEPT {
                    return m_supportedAverage_;
                }

                const bool& supportedAverage() const OMG_NOEXCEPT {
                    return m_supportedAverage_;
                }

                void supportedAverage(bool value) {
                    m_supportedAverage_ = value;
                }

                bool& supportedBest() OMG_NOEXCEPT {
                    return m_supportedBest_;
                }

                const bool& supportedBest() const OMG_NOEXCEPT {
                    return m_supportedBest_;
                }

                void supportedBest(bool value) {
                    m_supportedBest_ = value;
                }

                bool& supportedBetter() OMG_NOEXCEPT {
                    return m_supportedBetter_;
                }

                const bool& supportedBetter() const OMG_NOEXCEPT {
                    return m_supportedBetter_;
                }

                void supportedBetter(bool value) {
                    m_supportedBetter_ = value;
                }

                bool& supportedDolbyDigital() OMG_NOEXCEPT {
                    return m_supportedDolbyDigital_;
                }

                const bool& supportedDolbyDigital() const OMG_NOEXCEPT {
                    return m_supportedDolbyDigital_;
                }

                void supportedDolbyDigital(bool value) {
                    m_supportedDolbyDigital_ = value;
                }

                bool& supportedDTS() OMG_NOEXCEPT {
                    return m_supportedDTS_;
                }

                const bool& supportedDTS() const OMG_NOEXCEPT {
                    return m_supportedDTS_;
                }

                void supportedDTS(bool value) {
                    m_supportedDTS_ = value;
                }

                bool& supportedFLAC() OMG_NOEXCEPT {
                    return m_supportedFLAC_;
                }

                const bool& supportedFLAC() const OMG_NOEXCEPT {
                    return m_supportedFLAC_;
                }

                void supportedFLAC(bool value) {
                    m_supportedFLAC_ = value;
                }

                bool& supportedGood() OMG_NOEXCEPT {
                    return m_supportedGood_;
                }

                const bool& supportedGood() const OMG_NOEXCEPT {
                    return m_supportedGood_;
                }

                void supportedGood(bool value) {
                    m_supportedGood_ = value;
                }

                bool& supportedLess() OMG_NOEXCEPT {
                    return m_supportedLess_;
                }

                const bool& supportedLess() const OMG_NOEXCEPT {
                    return m_supportedLess_;
                }

                void supportedLess(bool value) {
                    m_supportedLess_ = value;
                }

                bool& supportedLPCM_PCM() OMG_NOEXCEPT {
                    return m_supportedLPCM_PCM_;
                }

                const bool& supportedLPCM_PCM() const OMG_NOEXCEPT {
                    return m_supportedLPCM_PCM_;
                }

                void supportedLPCM_PCM(bool value) {
                    m_supportedLPCM_PCM_ = value;
                }

                bool& supportedMP2() OMG_NOEXCEPT {
                    return m_supportedMP2_;
                }

                const bool& supportedMP2() const OMG_NOEXCEPT {
                    return m_supportedMP2_;
                }

                void supportedMP2(bool value) {
                    m_supportedMP2_ = value;
                }

                bool& supportedMP3() OMG_NOEXCEPT {
                    return m_supportedMP3_;
                }

                const bool& supportedMP3() const OMG_NOEXCEPT {
                    return m_supportedMP3_;
                }

                void supportedMP3(bool value) {
                    m_supportedMP3_ = value;
                }

                bool& supportedPoor() OMG_NOEXCEPT {
                    return m_supportedPoor_;
                }

                const bool& supportedPoor() const OMG_NOEXCEPT {
                    return m_supportedPoor_;
                }

                void supportedPoor(bool value) {
                    m_supportedPoor_ = value;
                }

                bool& supportedRealAudio() OMG_NOEXCEPT {
                    return m_supportedRealAudio_;
                }

                const bool& supportedRealAudio() const OMG_NOEXCEPT {
                    return m_supportedRealAudio_;
                }

                void supportedRealAudio(bool value) {
                    m_supportedRealAudio_ = value;
                }

                bool& supportedSpeex() OMG_NOEXCEPT {
                    return m_supportedSpeex_;
                }

                const bool& supportedSpeex() const OMG_NOEXCEPT {
                    return m_supportedSpeex_;
                }

                void supportedSpeex(bool value) {
                    m_supportedSpeex_ = value;
                }

                bool& supportedTrueAudio() OMG_NOEXCEPT {
                    return m_supportedTrueAudio_;
                }

                const bool& supportedTrueAudio() const OMG_NOEXCEPT {
                    return m_supportedTrueAudio_;
                }

                void supportedTrueAudio(bool value) {
                    m_supportedTrueAudio_ = value;
                }

                bool& supportedULAW() OMG_NOEXCEPT {
                    return m_supportedULAW_;
                }

                const bool& supportedULAW() const OMG_NOEXCEPT {
                    return m_supportedULAW_;
                }

                void supportedULAW(bool value) {
                    m_supportedULAW_ = value;
                }

                bool& supportedVORBIS() OMG_NOEXCEPT {
                    return m_supportedVORBIS_;
                }

                const bool& supportedVORBIS() const OMG_NOEXCEPT {
                    return m_supportedVORBIS_;
                }

                void supportedVORBIS(bool value) {
                    m_supportedVORBIS_ = value;
                }

                bool& supportedWAV() OMG_NOEXCEPT {
                    return m_supportedWAV_;
                }

                const bool& supportedWAV() const OMG_NOEXCEPT {
                    return m_supportedWAV_;
                }

                void supportedWAV(bool value) {
                    m_supportedWAV_ = value;
                }

                bool& supportedWMA() OMG_NOEXCEPT {
                    return m_supportedWMA_;
                }

                const bool& supportedWMA() const OMG_NOEXCEPT {
                    return m_supportedWMA_;
                }

                void supportedWMA(bool value) {
                    m_supportedWMA_ = value;
                }

                bool& supportedWMA9_Lossless() OMG_NOEXCEPT {
                    return m_supportedWMA9_Lossless_;
                }

                const bool& supportedWMA9_Lossless() const OMG_NOEXCEPT {
                    return m_supportedWMA9_Lossless_;
                }

                void supportedWMA9_Lossless(bool value) {
                    m_supportedWMA9_Lossless_ = value;
                }

                bool& supportedWorst() OMG_NOEXCEPT {
                    return m_supportedWorst_;
                }

                const bool& supportedWorst() const OMG_NOEXCEPT {
                    return m_supportedWorst_;
                }

                void supportedWorst(bool value) {
                    m_supportedWorst_ = value;
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

                bool operator == (const DigitalAudioSpecsReportType& other_) const;
                bool operator != (const DigitalAudioSpecsReportType& other_) const;

                void swap(DigitalAudioSpecsReportType& other_) OMG_NOEXCEPT ;

              private:

                int32_t m_maxAllowedBitRate_;
                int32_t m_maxChannels_;
                int32_t m_maxSampleRate_;
                int32_t m_minAllowedBitRate_;
                int32_t m_minSampleRate_;
                bool m_supported10bits_;
                bool m_supported12bits_;
                bool m_supported14bits_;
                bool m_supported16bits_;
                bool m_supported20bits_;
                bool m_supported24bits_;
                bool m_supported32bits_;
                bool m_supported40bits_;
                bool m_supported48bits_;
                bool m_supported56bits_;
                bool m_supported64bits_;
                bool m_supported8bits_;
                bool m_supportedAAC_MPEG2_;
                bool m_supportedAAC_MPEG4_;
                bool m_supportedAIFF_;
                bool m_supportedALAC_;
                bool m_supportedAverage_;
                bool m_supportedBest_;
                bool m_supportedBetter_;
                bool m_supportedDolbyDigital_;
                bool m_supportedDTS_;
                bool m_supportedFLAC_;
                bool m_supportedGood_;
                bool m_supportedLess_;
                bool m_supportedLPCM_PCM_;
                bool m_supportedMP2_;
                bool m_supportedMP3_;
                bool m_supportedPoor_;
                bool m_supportedRealAudio_;
                bool m_supportedSpeex_;
                bool m_supportedTrueAudio_;
                bool m_supportedULAW_;
                bool m_supportedVORBIS_;
                bool m_supportedWAV_;
                bool m_supportedWMA_;
                bool m_supportedWMA9_Lossless_;
                bool m_supportedWorst_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(DigitalAudioSpecsReportType& a, DigitalAudioSpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DigitalAudioSpecsReportType& sample);

        } // namespace DigitalAudioSpecs  
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
        struct topic_type_name< UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType > {
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

#endif // DigitalAudioSpecsReportType_34587062_hpp

