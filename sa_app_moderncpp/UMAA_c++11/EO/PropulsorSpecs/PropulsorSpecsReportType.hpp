

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorSpecsReportType_985591458_hpp
#define PropulsorSpecsReportType_985591458_hpp

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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/Position3D_PlatformXYZ.hpp"
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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace PropulsorSpecs {

            RTI_CONSTEXPR_OR_CONST_STRING std::string PropulsorSpecsReport_TOPIC = "UMAA::EO::PropulsorSpecs::PropulsorSpecsReport";

            class NDDSUSERDllExport PropulsorSpecsReportType {
              public:

                PropulsorSpecsReportType();

                PropulsorSpecsReportType(double bearingMax_,double bearingMin_,double bearingOffset_,double maxReverseRPM_,double maxRPM_,double minReverseRPM_,double minRPM_,const ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType& mountType_,const std::string& name_,bool OnOffSwitchable_,double pitchMax_,double pitchMin_,double pitchOffset_,const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& positionOffset_,bool reversible_,bool thrustControl_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                double& bearingMax() noexcept {
                    return m_bearingMax_;
                }

                const double& bearingMax() const noexcept {
                    return m_bearingMax_;
                }

                void bearingMax(double value) {

                    m_bearingMax_ = value;
                }

                double& bearingMin() noexcept {
                    return m_bearingMin_;
                }

                const double& bearingMin() const noexcept {
                    return m_bearingMin_;
                }

                void bearingMin(double value) {

                    m_bearingMin_ = value;
                }

                double& bearingOffset() noexcept {
                    return m_bearingOffset_;
                }

                const double& bearingOffset() const noexcept {
                    return m_bearingOffset_;
                }

                void bearingOffset(double value) {

                    m_bearingOffset_ = value;
                }

                double& maxReverseRPM() noexcept {
                    return m_maxReverseRPM_;
                }

                const double& maxReverseRPM() const noexcept {
                    return m_maxReverseRPM_;
                }

                void maxReverseRPM(double value) {

                    m_maxReverseRPM_ = value;
                }

                double& maxRPM() noexcept {
                    return m_maxRPM_;
                }

                const double& maxRPM() const noexcept {
                    return m_maxRPM_;
                }

                void maxRPM(double value) {

                    m_maxRPM_ = value;
                }

                double& minReverseRPM() noexcept {
                    return m_minReverseRPM_;
                }

                const double& minReverseRPM() const noexcept {
                    return m_minReverseRPM_;
                }

                void minReverseRPM(double value) {

                    m_minReverseRPM_ = value;
                }

                double& minRPM() noexcept {
                    return m_minRPM_;
                }

                const double& minRPM() const noexcept {
                    return m_minRPM_;
                }

                void minRPM(double value) {

                    m_minRPM_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType& mountType() noexcept {
                    return m_mountType_;
                }

                const ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType& mountType() const noexcept {
                    return m_mountType_;
                }

                void mountType(const ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType& value) {

                    m_mountType_ = value;
                }

                void mountType(::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType&& value) {
                    m_mountType_ = std::move(value);
                }
                std::string& name() noexcept {
                    return m_name_;
                }

                const std::string& name() const noexcept {
                    return m_name_;
                }

                void name(const std::string& value) {

                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                bool& OnOffSwitchable() noexcept {
                    return m_OnOffSwitchable_;
                }

                const bool& OnOffSwitchable() const noexcept {
                    return m_OnOffSwitchable_;
                }

                void OnOffSwitchable(bool value) {

                    m_OnOffSwitchable_ = value;
                }

                double& pitchMax() noexcept {
                    return m_pitchMax_;
                }

                const double& pitchMax() const noexcept {
                    return m_pitchMax_;
                }

                void pitchMax(double value) {

                    m_pitchMax_ = value;
                }

                double& pitchMin() noexcept {
                    return m_pitchMin_;
                }

                const double& pitchMin() const noexcept {
                    return m_pitchMin_;
                }

                void pitchMin(double value) {

                    m_pitchMin_ = value;
                }

                double& pitchOffset() noexcept {
                    return m_pitchOffset_;
                }

                const double& pitchOffset() const noexcept {
                    return m_pitchOffset_;
                }

                void pitchOffset(double value) {

                    m_pitchOffset_ = value;
                }

                ::UMAA::Common::Measurement::Position3D_PlatformXYZ& positionOffset() noexcept {
                    return m_positionOffset_;
                }

                const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& positionOffset() const noexcept {
                    return m_positionOffset_;
                }

                void positionOffset(const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& value) {

                    m_positionOffset_ = value;
                }

                void positionOffset(::UMAA::Common::Measurement::Position3D_PlatformXYZ&& value) {
                    m_positionOffset_ = std::move(value);
                }
                bool& reversible() noexcept {
                    return m_reversible_;
                }

                const bool& reversible() const noexcept {
                    return m_reversible_;
                }

                void reversible(bool value) {

                    m_reversible_ = value;
                }

                bool& thrustControl() noexcept {
                    return m_thrustControl_;
                }

                const bool& thrustControl() const noexcept {
                    return m_thrustControl_;
                }

                void thrustControl(bool value) {

                    m_thrustControl_ = value;
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
                bool operator == (const PropulsorSpecsReportType& other_) const;
                bool operator != (const PropulsorSpecsReportType& other_) const;

                void swap(PropulsorSpecsReportType& other_) noexcept ;

              private:

                double m_bearingMax_;
                double m_bearingMin_;
                double m_bearingOffset_;
                double m_maxReverseRPM_;
                double m_maxRPM_;
                double m_minReverseRPM_;
                double m_minRPM_;
                ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType m_mountType_;
                std::string m_name_;
                bool m_OnOffSwitchable_;
                double m_pitchMax_;
                double m_pitchMin_;
                double m_pitchOffset_;
                ::UMAA::Common::Measurement::Position3D_PlatformXYZ m_positionOffset_;
                bool m_reversible_;
                bool m_thrustControl_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(PropulsorSpecsReportType& a, PropulsorSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropulsorSpecsReportType& sample);

        } // namespace PropulsorSpecs  
    } // namespace EO  
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
        struct topic_type_name< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::PropulsorSpecs::PropulsorSpecsReportType > {
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

#endif // PropulsorSpecsReportType_985591458_hpp

