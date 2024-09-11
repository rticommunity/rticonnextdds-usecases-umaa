

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformSpecsReportType_40299323_hpp
#define UVPlatformSpecsReportType_40299323_hpp

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
#include "UMAA/Common/IdentifierType.hpp"
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
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSets.hpp"
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
#include "UMAA/Common/Measurement/Position3DBodyXYZ.hpp"
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

            static const std::string UVPlatformSpecsReportTypeTopic = "UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType";

            class NDDSUSERDllExport UVPlatformSpecsReportType {
              public:

                UVPlatformSpecsReportType();

                UVPlatformSpecsReportType(double aftDistance_,double beamAtWaterline_,double bottomDistance_,const ::UMAA::Common::Measurement::Position3DBodyXYZ& centerOfBuoyancy_,const ::UMAA::Common::Measurement::Position3DBodyXYZ& centerOfGravity_,const ::dds::core::optional< double >& diameter_,double displacement_,double draft_,double forwardDistance_,double lengthAtWaterline_,const std::string& name_,double portDistance_,const ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType& referenceFrameOrigin_,double starboardDistance_,double topDistance_,const ::dds::core::optional< double >& weightInWater_,double weightLight_,double weightLoaded_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                double& aftDistance() noexcept {
                    return m_aftDistance_;
                }

                const double& aftDistance() const noexcept {
                    return m_aftDistance_;
                }

                void aftDistance(double value) {

                    m_aftDistance_ = value;
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

                double& bottomDistance() noexcept {
                    return m_bottomDistance_;
                }

                const double& bottomDistance() const noexcept {
                    return m_bottomDistance_;
                }

                void bottomDistance(double value) {

                    m_bottomDistance_ = value;
                }

                ::UMAA::Common::Measurement::Position3DBodyXYZ& centerOfBuoyancy() noexcept {
                    return m_centerOfBuoyancy_;
                }

                const ::UMAA::Common::Measurement::Position3DBodyXYZ& centerOfBuoyancy() const noexcept {
                    return m_centerOfBuoyancy_;
                }

                void centerOfBuoyancy(const ::UMAA::Common::Measurement::Position3DBodyXYZ& value) {

                    m_centerOfBuoyancy_ = value;
                }

                void centerOfBuoyancy(::UMAA::Common::Measurement::Position3DBodyXYZ&& value) {
                    m_centerOfBuoyancy_ = std::move(value);
                }
                ::UMAA::Common::Measurement::Position3DBodyXYZ& centerOfGravity() noexcept {
                    return m_centerOfGravity_;
                }

                const ::UMAA::Common::Measurement::Position3DBodyXYZ& centerOfGravity() const noexcept {
                    return m_centerOfGravity_;
                }

                void centerOfGravity(const ::UMAA::Common::Measurement::Position3DBodyXYZ& value) {

                    m_centerOfGravity_ = value;
                }

                void centerOfGravity(::UMAA::Common::Measurement::Position3DBodyXYZ&& value) {
                    m_centerOfGravity_ = std::move(value);
                }
                ::dds::core::optional< double >& diameter() noexcept {
                    return m_diameter_;
                }

                const ::dds::core::optional< double >& diameter() const noexcept {
                    return m_diameter_;
                }

                void diameter(const ::dds::core::optional< double >& value) {

                    m_diameter_ = value;
                }

                void diameter(::dds::core::optional< double >&& value) {
                    m_diameter_ = std::move(value);
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

                double& forwardDistance() noexcept {
                    return m_forwardDistance_;
                }

                const double& forwardDistance() const noexcept {
                    return m_forwardDistance_;
                }

                void forwardDistance(double value) {

                    m_forwardDistance_ = value;
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
                double& portDistance() noexcept {
                    return m_portDistance_;
                }

                const double& portDistance() const noexcept {
                    return m_portDistance_;
                }

                void portDistance(double value) {

                    m_portDistance_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType& referenceFrameOrigin() noexcept {
                    return m_referenceFrameOrigin_;
                }

                const ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType& referenceFrameOrigin() const noexcept {
                    return m_referenceFrameOrigin_;
                }

                void referenceFrameOrigin(const ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType& value) {

                    m_referenceFrameOrigin_ = value;
                }

                void referenceFrameOrigin(::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType&& value) {
                    m_referenceFrameOrigin_ = std::move(value);
                }
                double& starboardDistance() noexcept {
                    return m_starboardDistance_;
                }

                const double& starboardDistance() const noexcept {
                    return m_starboardDistance_;
                }

                void starboardDistance(double value) {

                    m_starboardDistance_ = value;
                }

                double& topDistance() noexcept {
                    return m_topDistance_;
                }

                const double& topDistance() const noexcept {
                    return m_topDistance_;
                }

                void topDistance(double value) {

                    m_topDistance_ = value;
                }

                ::dds::core::optional< double >& weightInWater() noexcept {
                    return m_weightInWater_;
                }

                const ::dds::core::optional< double >& weightInWater() const noexcept {
                    return m_weightInWater_;
                }

                void weightInWater(const ::dds::core::optional< double >& value) {

                    m_weightInWater_ = value;
                }

                void weightInWater(::dds::core::optional< double >&& value) {
                    m_weightInWater_ = std::move(value);
                }
                double& weightLight() noexcept {
                    return m_weightLight_;
                }

                const double& weightLight() const noexcept {
                    return m_weightLight_;
                }

                void weightLight(double value) {

                    m_weightLight_ = value;
                }

                double& weightLoaded() noexcept {
                    return m_weightLoaded_;
                }

                const double& weightLoaded() const noexcept {
                    return m_weightLoaded_;
                }

                void weightLoaded(double value) {

                    m_weightLoaded_ = value;
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
                ::UMAA::Common::IdentifierType& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::IdentifierType& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::IdentifierType& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::IdentifierType&& value) {
                    m_source_ = std::move(value);
                }
                bool operator == (const UVPlatformSpecsReportType& other_) const;
                bool operator != (const UVPlatformSpecsReportType& other_) const;

                void swap(UVPlatformSpecsReportType& other_) noexcept ;

              private:

                double m_aftDistance_;
                double m_beamAtWaterline_;
                double m_bottomDistance_;
                ::UMAA::Common::Measurement::Position3DBodyXYZ m_centerOfBuoyancy_;
                ::UMAA::Common::Measurement::Position3DBodyXYZ m_centerOfGravity_;
                ::dds::core::optional< double > m_diameter_;
                double m_displacement_;
                double m_draft_;
                double m_forwardDistance_;
                double m_lengthAtWaterline_;
                std::string m_name_;
                double m_portDistance_;
                ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType m_referenceFrameOrigin_;
                double m_starboardDistance_;
                double m_topDistance_;
                ::dds::core::optional< double > m_weightInWater_;
                double m_weightLight_;
                double m_weightLoaded_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

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

#endif // UVPlatformSpecsReportType_40299323_hpp

