

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltSpecsReportType_180080577_hpp
#define PanTiltSpecsReportType_180080577_hpp

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
namespace UMAA {
    namespace SEM {
        namespace PanTiltSpecs {

            RTI_CONSTEXPR_OR_CONST_STRING std::string PanTiltSpecsReport_TOPIC = "UMAA::SEM::PanTiltSpecs::PanTiltSpecsReport";

            class NDDSUSERDllExport PanTiltSpecsReportType {
              public:

                PanTiltSpecsReportType();

                PanTiltSpecsReportType(const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& baseOffset_,const ::BasicTypes::Quaternion& baseOrientation_,double panMax_,double panMaxSpeed_,double panMin_,double tiltMax_,double tiltMaxSpeed_,double tiltMin_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                ::UMAA::Common::Measurement::Position3D_PlatformXYZ& baseOffset() noexcept {
                    return m_baseOffset_;
                }

                const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& baseOffset() const noexcept {
                    return m_baseOffset_;
                }

                void baseOffset(const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& value) {

                    m_baseOffset_ = value;
                }

                void baseOffset(::UMAA::Common::Measurement::Position3D_PlatformXYZ&& value) {
                    m_baseOffset_ = std::move(value);
                }
                ::BasicTypes::Quaternion& baseOrientation() noexcept {
                    return m_baseOrientation_;
                }

                const ::BasicTypes::Quaternion& baseOrientation() const noexcept {
                    return m_baseOrientation_;
                }

                void baseOrientation(const ::BasicTypes::Quaternion& value) {

                    m_baseOrientation_ = value;
                }

                void baseOrientation(::BasicTypes::Quaternion&& value) {
                    m_baseOrientation_ = std::move(value);
                }
                double& panMax() noexcept {
                    return m_panMax_;
                }

                const double& panMax() const noexcept {
                    return m_panMax_;
                }

                void panMax(double value) {

                    m_panMax_ = value;
                }

                double& panMaxSpeed() noexcept {
                    return m_panMaxSpeed_;
                }

                const double& panMaxSpeed() const noexcept {
                    return m_panMaxSpeed_;
                }

                void panMaxSpeed(double value) {

                    m_panMaxSpeed_ = value;
                }

                double& panMin() noexcept {
                    return m_panMin_;
                }

                const double& panMin() const noexcept {
                    return m_panMin_;
                }

                void panMin(double value) {

                    m_panMin_ = value;
                }

                double& tiltMax() noexcept {
                    return m_tiltMax_;
                }

                const double& tiltMax() const noexcept {
                    return m_tiltMax_;
                }

                void tiltMax(double value) {

                    m_tiltMax_ = value;
                }

                double& tiltMaxSpeed() noexcept {
                    return m_tiltMaxSpeed_;
                }

                const double& tiltMaxSpeed() const noexcept {
                    return m_tiltMaxSpeed_;
                }

                void tiltMaxSpeed(double value) {

                    m_tiltMaxSpeed_ = value;
                }

                double& tiltMin() noexcept {
                    return m_tiltMin_;
                }

                const double& tiltMin() const noexcept {
                    return m_tiltMin_;
                }

                void tiltMin(double value) {

                    m_tiltMin_ = value;
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
                bool operator == (const PanTiltSpecsReportType& other_) const;
                bool operator != (const PanTiltSpecsReportType& other_) const;

                void swap(PanTiltSpecsReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::Position3D_PlatformXYZ m_baseOffset_;
                ::BasicTypes::Quaternion m_baseOrientation_;
                double m_panMax_;
                double m_panMaxSpeed_;
                double m_panMin_;
                double m_tiltMax_;
                double m_tiltMaxSpeed_;
                double m_tiltMin_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(PanTiltSpecsReportType& a, PanTiltSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanTiltSpecsReportType& sample);

        } // namespace PanTiltSpecs  
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
        struct topic_type_name< ::UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::PanTiltSpecs::PanTiltSpecsReportType > {
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

#endif // PanTiltSpecsReportType_180080577_hpp

