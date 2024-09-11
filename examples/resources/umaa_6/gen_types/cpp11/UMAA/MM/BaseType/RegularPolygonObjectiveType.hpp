

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RegularPolygonObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RegularPolygonObjectiveType_699710667_hpp
#define RegularPolygonObjectiveType_699710667_hpp

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
#include "UMAA/Common/Distance/DistanceRequirementType.hpp"
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
#include "UMAA/Common/Measurement/GeoPosition2D.hpp"
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
#include "UMAA/Common/Orientation/DirectionVariantType.hpp"
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
#include "UMAA/Common/Speed/SpeedRequirementVariantType.hpp"
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

            static const std::string RegularPolygonObjectiveTypeTopic = "UMAA::MM::BaseType::RegularPolygonObjectiveType";

            class NDDSUSERDllExport RegularPolygonObjectiveType {
              public:

                RegularPolygonObjectiveType();

                RegularPolygonObjectiveType(double diameter_,const ::dds::core::optional< double >& duration_,const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType >& elevation_,const ::dds::core::optional< double >& loops_,int32_t numberSides_,const ::UMAA::Common::Orientation::DirectionVariantType& orientation_,const ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition2D >& position_,const ::UMAA::Common::Speed::SpeedRequirementVariantType& speed_,const ::UMAA::Common::Distance::DistanceRequirementType& trackTolerance_,const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationVariantType >& transitElevation_,const ::UMAA::Common::Speed::SpeedVariantType& transitSpeed_,const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType& turnDirection_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_);

                double& diameter() noexcept {
                    return m_diameter_;
                }

                const double& diameter() const noexcept {
                    return m_diameter_;
                }

                void diameter(double value) {

                    m_diameter_ = value;
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
                ::dds::core::optional< double >& loops() noexcept {
                    return m_loops_;
                }

                const ::dds::core::optional< double >& loops() const noexcept {
                    return m_loops_;
                }

                void loops(const ::dds::core::optional< double >& value) {

                    m_loops_ = value;
                }

                void loops(::dds::core::optional< double >&& value) {
                    m_loops_ = std::move(value);
                }
                int32_t& numberSides() noexcept {
                    return m_numberSides_;
                }

                const int32_t& numberSides() const noexcept {
                    return m_numberSides_;
                }

                void numberSides(int32_t value) {

                    m_numberSides_ = value;
                }

                ::UMAA::Common::Orientation::DirectionVariantType& orientation() noexcept {
                    return m_orientation_;
                }

                const ::UMAA::Common::Orientation::DirectionVariantType& orientation() const noexcept {
                    return m_orientation_;
                }

                void orientation(const ::UMAA::Common::Orientation::DirectionVariantType& value) {

                    m_orientation_ = value;
                }

                void orientation(::UMAA::Common::Orientation::DirectionVariantType&& value) {
                    m_orientation_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition2D >& position() noexcept {
                    return m_position_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition2D >& position() const noexcept {
                    return m_position_;
                }

                void position(const ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition2D >& value) {

                    m_position_ = value;
                }

                void position(::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition2D >&& value) {
                    m_position_ = std::move(value);
                }
                ::UMAA::Common::Speed::SpeedRequirementVariantType& speed() noexcept {
                    return m_speed_;
                }

                const ::UMAA::Common::Speed::SpeedRequirementVariantType& speed() const noexcept {
                    return m_speed_;
                }

                void speed(const ::UMAA::Common::Speed::SpeedRequirementVariantType& value) {

                    m_speed_ = value;
                }

                void speed(::UMAA::Common::Speed::SpeedRequirementVariantType&& value) {
                    m_speed_ = std::move(value);
                }
                ::UMAA::Common::Distance::DistanceRequirementType& trackTolerance() noexcept {
                    return m_trackTolerance_;
                }

                const ::UMAA::Common::Distance::DistanceRequirementType& trackTolerance() const noexcept {
                    return m_trackTolerance_;
                }

                void trackTolerance(const ::UMAA::Common::Distance::DistanceRequirementType& value) {

                    m_trackTolerance_ = value;
                }

                void trackTolerance(::UMAA::Common::Distance::DistanceRequirementType&& value) {
                    m_trackTolerance_ = std::move(value);
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
                ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType& turnDirection() noexcept {
                    return m_turnDirection_;
                }

                const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType& turnDirection() const noexcept {
                    return m_turnDirection_;
                }

                void turnDirection(const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType& value) {

                    m_turnDirection_ = value;
                }

                void turnDirection(::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType&& value) {
                    m_turnDirection_ = std::move(value);
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
                bool operator == (const RegularPolygonObjectiveType& other_) const;
                bool operator != (const RegularPolygonObjectiveType& other_) const;

                void swap(RegularPolygonObjectiveType& other_) noexcept ;

              private:

                double m_diameter_;
                ::dds::core::optional< double > m_duration_;
                ::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType > m_elevation_;
                ::dds::core::optional< double > m_loops_;
                int32_t m_numberSides_;
                ::UMAA::Common::Orientation::DirectionVariantType m_orientation_;
                ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition2D > m_position_;
                ::UMAA::Common::Speed::SpeedRequirementVariantType m_speed_;
                ::UMAA::Common::Distance::DistanceRequirementType m_trackTolerance_;
                ::dds::core::optional< ::UMAA::Common::Measurement::ElevationVariantType > m_transitElevation_;
                ::UMAA::Common::Speed::SpeedVariantType m_transitSpeed_;
                ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType m_turnDirection_;
                ::UMAA::Common::Measurement::DateTime m_specializationReferenceTimestamp_;
                ::UMAA::Common::Measurement::NumericGUID m_specializationReferenceID_ {};

            };

            inline void swap(RegularPolygonObjectiveType& a, RegularPolygonObjectiveType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RegularPolygonObjectiveType& sample);

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
        struct topic_type_name< ::UMAA::MM::BaseType::RegularPolygonObjectiveType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::RegularPolygonObjectiveType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::RegularPolygonObjectiveType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::RegularPolygonObjectiveType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::RegularPolygonObjectiveType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::RegularPolygonObjectiveType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::RegularPolygonObjectiveType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::RegularPolygonObjectiveType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::RegularPolygonObjectiveType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::RegularPolygonObjectiveType > {
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

#endif // RegularPolygonObjectiveType_699710667_hpp

