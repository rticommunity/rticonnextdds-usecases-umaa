

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AreaRandomWalkObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AreaRandomWalkObjectiveType_786912595_hpp
#define AreaRandomWalkObjectiveType_786912595_hpp

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
#include "UMAA/Common/Measurement/ElevationRequirementVariantType.hpp"
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
#include "UMAA/Common/Measurement/ElevationVariantType.hpp"
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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
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
#include "UMAA/Common/Speed/SpeedVariantType.hpp"
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
#include "UMAA/Common/Time/DateTimeRequirementType.hpp"
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
#include "UMAA/MM/BaseType/PolygonAreaRequirementType.hpp"
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
#include "UMAA/MM/BaseType/StateTriggerType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {

            static const std::string AreaRandomWalkObjectiveTypeTopic = "UMAA::MM::BaseType::AreaRandomWalkObjectiveType";

            class NDDSUSERDllExport AreaRandomWalkObjectiveType {
              public:

                AreaRandomWalkObjectiveType();

                AreaRandomWalkObjectiveType(const ::UMAA::MM::BaseType::PolygonAreaRequirementType& area_,const ::dds::core::optional< double >& duration_,const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType >& elevation_,const ::UMAA::Common::Speed::SpeedVariantType& maxSpeed_,double maxTimeOnCourse_,const ::UMAA::Common::Speed::SpeedVariantType& minSpeed_,double minTimeOnCourse_,const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationVariantType >& transitElevation_,const ::UMAA::Common::Speed::SpeedVariantType& transitSpeed_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_);

                ::UMAA::MM::BaseType::PolygonAreaRequirementType& area() noexcept {
                    return m_area_;
                }

                const ::UMAA::MM::BaseType::PolygonAreaRequirementType& area() const noexcept {
                    return m_area_;
                }

                void area(const ::UMAA::MM::BaseType::PolygonAreaRequirementType& value) {

                    m_area_ = value;
                }

                void area(::UMAA::MM::BaseType::PolygonAreaRequirementType&& value) {
                    m_area_ = std::move(value);
                }
                ::dds::core::optional< double >& duration() noexcept {
                    return m_duration_;
                }

                const ::dds::core::optional< double >& duration() const noexcept {
                    return m_duration_;
                }

                void duration(const ::dds::core::optional< double >& value) {

                    m_duration_ = value;
                }

                void duration(::dds::core::optional< double >&& value) {
                    m_duration_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType >& elevation() noexcept {
                    return m_elevation_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType >& elevation() const noexcept {
                    return m_elevation_;
                }

                void elevation(const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType >& value) {

                    m_elevation_ = value;
                }

                void elevation(::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType >&& value) {
                    m_elevation_ = std::move(value);
                }
                ::UMAA::Common::Speed::SpeedVariantType& maxSpeed() noexcept {
                    return m_maxSpeed_;
                }

                const ::UMAA::Common::Speed::SpeedVariantType& maxSpeed() const noexcept {
                    return m_maxSpeed_;
                }

                void maxSpeed(const ::UMAA::Common::Speed::SpeedVariantType& value) {

                    m_maxSpeed_ = value;
                }

                void maxSpeed(::UMAA::Common::Speed::SpeedVariantType&& value) {
                    m_maxSpeed_ = std::move(value);
                }
                double& maxTimeOnCourse() noexcept {
                    return m_maxTimeOnCourse_;
                }

                const double& maxTimeOnCourse() const noexcept {
                    return m_maxTimeOnCourse_;
                }

                void maxTimeOnCourse(double value) {

                    m_maxTimeOnCourse_ = value;
                }

                ::UMAA::Common::Speed::SpeedVariantType& minSpeed() noexcept {
                    return m_minSpeed_;
                }

                const ::UMAA::Common::Speed::SpeedVariantType& minSpeed() const noexcept {
                    return m_minSpeed_;
                }

                void minSpeed(const ::UMAA::Common::Speed::SpeedVariantType& value) {

                    m_minSpeed_ = value;
                }

                void minSpeed(::UMAA::Common::Speed::SpeedVariantType&& value) {
                    m_minSpeed_ = std::move(value);
                }
                double& minTimeOnCourse() noexcept {
                    return m_minTimeOnCourse_;
                }

                const double& minTimeOnCourse() const noexcept {
                    return m_minTimeOnCourse_;
                }

                void minTimeOnCourse(double value) {

                    m_minTimeOnCourse_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Measurement::ElevationVariantType >& transitElevation() noexcept {
                    return m_transitElevation_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationVariantType >& transitElevation() const noexcept {
                    return m_transitElevation_;
                }

                void transitElevation(const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationVariantType >& value) {

                    m_transitElevation_ = value;
                }

                void transitElevation(::dds::core::optional< ::UMAA::Common::Measurement::ElevationVariantType >&& value) {
                    m_transitElevation_ = std::move(value);
                }
                ::UMAA::Common::Speed::SpeedVariantType& transitSpeed() noexcept {
                    return m_transitSpeed_;
                }

                const ::UMAA::Common::Speed::SpeedVariantType& transitSpeed() const noexcept {
                    return m_transitSpeed_;
                }

                void transitSpeed(const ::UMAA::Common::Speed::SpeedVariantType& value) {

                    m_transitSpeed_ = value;
                }

                void transitSpeed(::UMAA::Common::Speed::SpeedVariantType&& value) {
                    m_transitSpeed_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp() noexcept {
                    return m_specializationReferenceTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp() const noexcept {
                    return m_specializationReferenceTimestamp_;
                }

                void specializationReferenceTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_specializationReferenceTimestamp_ = value;
                }

                void specializationReferenceTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_specializationReferenceTimestamp_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID() noexcept {
                    return m_specializationReferenceID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID() const noexcept {
                    return m_specializationReferenceID_;
                }

                void specializationReferenceID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_specializationReferenceID_ = value;
                }

                void specializationReferenceID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_specializationReferenceID_ = std::move(value);
                }
                bool operator == (const AreaRandomWalkObjectiveType& other_) const;
                bool operator != (const AreaRandomWalkObjectiveType& other_) const;

                void swap(AreaRandomWalkObjectiveType& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::PolygonAreaRequirementType m_area_;
                ::dds::core::optional< double > m_duration_;
                ::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType > m_elevation_;
                ::UMAA::Common::Speed::SpeedVariantType m_maxSpeed_;
                double m_maxTimeOnCourse_;
                ::UMAA::Common::Speed::SpeedVariantType m_minSpeed_;
                double m_minTimeOnCourse_;
                ::dds::core::optional< ::UMAA::Common::Measurement::ElevationVariantType > m_transitElevation_;
                ::UMAA::Common::Speed::SpeedVariantType m_transitSpeed_;
                ::UMAA::Common::Measurement::DateTime m_specializationReferenceTimestamp_;
                ::UMAA::Common::Measurement::NumericGUID m_specializationReferenceID_ {};

            };

            inline void swap(AreaRandomWalkObjectiveType& a, AreaRandomWalkObjectiveType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const AreaRandomWalkObjectiveType& sample);

        } // namespace BaseType  
    } // namespace MM  
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
        struct topic_type_name< ::UMAA::MM::BaseType::AreaRandomWalkObjectiveType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::AreaRandomWalkObjectiveType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::AreaRandomWalkObjectiveType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::AreaRandomWalkObjectiveType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::AreaRandomWalkObjectiveType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::AreaRandomWalkObjectiveType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::AreaRandomWalkObjectiveType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::AreaRandomWalkObjectiveType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::AreaRandomWalkObjectiveType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::AreaRandomWalkObjectiveType > {
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

#endif // AreaRandomWalkObjectiveType_786912595_hpp

