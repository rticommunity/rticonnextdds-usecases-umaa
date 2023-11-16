

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformSpecsReportType_40298357_hpp
#define UVPlatformSpecsReportType_40298357_hpp

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
        namespace UVPlatformSpecs {

            RTI_CONSTEXPR_OR_CONST_STRING std::string UVPlatformSpecsReport_TOPIC = "UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReport";

            class NDDSUSERDllExport UVPlatformSpecsReportType {
              public:

                UVPlatformSpecsReportType();

                UVPlatformSpecsReportType(double back_,double baselineBuoyancy_,double beamAtWaterline_,double bottom_,const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& centerOfBuoyancy_,const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& centerOfGravity_,double displacement_,double draft_,double front_,double heightOverall_,double hullDepth_,double left_,double lengthAtWaterline_,double lengthOverall_,double massOnLand_,const std::string& name_,double outerWidth_,double right_,double top_,double widthOverall_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                double& back() noexcept {
                    return m_back_;
                }

                const double& back() const noexcept {
                    return m_back_;
                }

                void back(double value) {

                    m_back_ = value;
                }

                double& baselineBuoyancy() noexcept {
                    return m_baselineBuoyancy_;
                }

                const double& baselineBuoyancy() const noexcept {
                    return m_baselineBuoyancy_;
                }

                void baselineBuoyancy(double value) {

                    m_baselineBuoyancy_ = value;
                }

                double& beamAtWaterline() noexcept {
                    return m_beamAtWaterline_;
                }

                const double& beamAtWaterline() const noexcept {
                    return m_beamAtWaterline_;
                }

                void beamAtWaterline(double value) {

                    m_beamAtWaterline_ = value;
                }

                double& bottom() noexcept {
                    return m_bottom_;
                }

                const double& bottom() const noexcept {
                    return m_bottom_;
                }

                void bottom(double value) {

                    m_bottom_ = value;
                }

                ::UMAA::Common::Measurement::Position3D_PlatformXYZ& centerOfBuoyancy() noexcept {
                    return m_centerOfBuoyancy_;
                }

                const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& centerOfBuoyancy() const noexcept {
                    return m_centerOfBuoyancy_;
                }

                void centerOfBuoyancy(const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& value) {

                    m_centerOfBuoyancy_ = value;
                }

                void centerOfBuoyancy(::UMAA::Common::Measurement::Position3D_PlatformXYZ&& value) {
                    m_centerOfBuoyancy_ = std::move(value);
                }
                ::UMAA::Common::Measurement::Position3D_PlatformXYZ& centerOfGravity() noexcept {
                    return m_centerOfGravity_;
                }

                const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& centerOfGravity() const noexcept {
                    return m_centerOfGravity_;
                }

                void centerOfGravity(const ::UMAA::Common::Measurement::Position3D_PlatformXYZ& value) {

                    m_centerOfGravity_ = value;
                }

                void centerOfGravity(::UMAA::Common::Measurement::Position3D_PlatformXYZ&& value) {
                    m_centerOfGravity_ = std::move(value);
                }
                double& displacement() noexcept {
                    return m_displacement_;
                }

                const double& displacement() const noexcept {
                    return m_displacement_;
                }

                void displacement(double value) {

                    m_displacement_ = value;
                }

                double& draft() noexcept {
                    return m_draft_;
                }

                const double& draft() const noexcept {
                    return m_draft_;
                }

                void draft(double value) {

                    m_draft_ = value;
                }

                double& front() noexcept {
                    return m_front_;
                }

                const double& front() const noexcept {
                    return m_front_;
                }

                void front(double value) {

                    m_front_ = value;
                }

                double& heightOverall() noexcept {
                    return m_heightOverall_;
                }

                const double& heightOverall() const noexcept {
                    return m_heightOverall_;
                }

                void heightOverall(double value) {

                    m_heightOverall_ = value;
                }

                double& hullDepth() noexcept {
                    return m_hullDepth_;
                }

                const double& hullDepth() const noexcept {
                    return m_hullDepth_;
                }

                void hullDepth(double value) {

                    m_hullDepth_ = value;
                }

                double& left() noexcept {
                    return m_left_;
                }

                const double& left() const noexcept {
                    return m_left_;
                }

                void left(double value) {

                    m_left_ = value;
                }

                double& lengthAtWaterline() noexcept {
                    return m_lengthAtWaterline_;
                }

                const double& lengthAtWaterline() const noexcept {
                    return m_lengthAtWaterline_;
                }

                void lengthAtWaterline(double value) {

                    m_lengthAtWaterline_ = value;
                }

                double& lengthOverall() noexcept {
                    return m_lengthOverall_;
                }

                const double& lengthOverall() const noexcept {
                    return m_lengthOverall_;
                }

                void lengthOverall(double value) {

                    m_lengthOverall_ = value;
                }

                double& massOnLand() noexcept {
                    return m_massOnLand_;
                }

                const double& massOnLand() const noexcept {
                    return m_massOnLand_;
                }

                void massOnLand(double value) {

                    m_massOnLand_ = value;
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
                double& outerWidth() noexcept {
                    return m_outerWidth_;
                }

                const double& outerWidth() const noexcept {
                    return m_outerWidth_;
                }

                void outerWidth(double value) {

                    m_outerWidth_ = value;
                }

                double& right() noexcept {
                    return m_right_;
                }

                const double& right() const noexcept {
                    return m_right_;
                }

                void right(double value) {

                    m_right_ = value;
                }

                double& top() noexcept {
                    return m_top_;
                }

                const double& top() const noexcept {
                    return m_top_;
                }

                void top(double value) {

                    m_top_ = value;
                }

                double& widthOverall() noexcept {
                    return m_widthOverall_;
                }

                const double& widthOverall() const noexcept {
                    return m_widthOverall_;
                }

                void widthOverall(double value) {

                    m_widthOverall_ = value;
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
                bool operator == (const UVPlatformSpecsReportType& other_) const;
                bool operator != (const UVPlatformSpecsReportType& other_) const;

                void swap(UVPlatformSpecsReportType& other_) noexcept ;

              private:

                double m_back_;
                double m_baselineBuoyancy_;
                double m_beamAtWaterline_;
                double m_bottom_;
                ::UMAA::Common::Measurement::Position3D_PlatformXYZ m_centerOfBuoyancy_;
                ::UMAA::Common::Measurement::Position3D_PlatformXYZ m_centerOfGravity_;
                double m_displacement_;
                double m_draft_;
                double m_front_;
                double m_heightOverall_;
                double m_hullDepth_;
                double m_left_;
                double m_lengthAtWaterline_;
                double m_lengthOverall_;
                double m_massOnLand_;
                std::string m_name_;
                double m_outerWidth_;
                double m_right_;
                double m_top_;
                double m_widthOverall_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(UVPlatformSpecsReportType& a, UVPlatformSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const UVPlatformSpecsReportType& sample);

        } // namespace UVPlatformSpecs  
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
        struct topic_type_name< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType > {
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

#endif // UVPlatformSpecsReportType_40298357_hpp

