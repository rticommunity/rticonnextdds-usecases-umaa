

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointType_2035351708_hpp
#define GlobalWaypointType_2035351708_hpp

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
#include "UMAA/Common/Orientation/Orientation3DNEDRequirement.hpp"
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
#include "UMAA/Common/Position/GeoPosition2DRequirement.hpp"
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
#include "UMAA/Common/Speed/VariableSpeedVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalWaypointControl {

            class NDDSUSERDllExport GlobalWaypointType {
              public:

                GlobalWaypointType();

                GlobalWaypointType(const ::dds::core::optional< ::UMAA::Common::Orientation::Orientation3DNEDRequirement >& attitude_,const ::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType >& elevation_,const ::dds::core::optional< std::string >& name_,const ::UMAA::Common::Position::GeoPosition2DRequirement& position_,const ::UMAA::Common::Speed::VariableSpeedVariantType& speed_,const ::dds::core::optional< ::UMAA::Common::Distance::DistanceRequirementType >& trackTolerance_,const ::UMAA::Common::Measurement::NumericGUID& waypointID_);

                ::dds::core::optional< ::UMAA::Common::Orientation::Orientation3DNEDRequirement >& attitude() noexcept {
                    return m_attitude_;
                }

                const ::dds::core::optional< ::UMAA::Common::Orientation::Orientation3DNEDRequirement >& attitude() const noexcept {
                    return m_attitude_;
                }

                void attitude(const ::dds::core::optional< ::UMAA::Common::Orientation::Orientation3DNEDRequirement >& value) {

                    m_attitude_ = value;
                }

                void attitude(::dds::core::optional< ::UMAA::Common::Orientation::Orientation3DNEDRequirement >&& value) {
                    m_attitude_ = std::move(value);
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
                ::dds::core::optional< std::string >& name() noexcept {
                    return m_name_;
                }

                const ::dds::core::optional< std::string >& name() const noexcept {
                    return m_name_;
                }

                void name(const ::dds::core::optional< std::string >& value) {

                    m_name_ = value;
                }

                void name(::dds::core::optional< std::string >&& value) {
                    m_name_ = std::move(value);
                }
                ::UMAA::Common::Position::GeoPosition2DRequirement& position() noexcept {
                    return m_position_;
                }

                const ::UMAA::Common::Position::GeoPosition2DRequirement& position() const noexcept {
                    return m_position_;
                }

                void position(const ::UMAA::Common::Position::GeoPosition2DRequirement& value) {

                    m_position_ = value;
                }

                void position(::UMAA::Common::Position::GeoPosition2DRequirement&& value) {
                    m_position_ = std::move(value);
                }
                ::UMAA::Common::Speed::VariableSpeedVariantType& speed() noexcept {
                    return m_speed_;
                }

                const ::UMAA::Common::Speed::VariableSpeedVariantType& speed() const noexcept {
                    return m_speed_;
                }

                void speed(const ::UMAA::Common::Speed::VariableSpeedVariantType& value) {

                    m_speed_ = value;
                }

                void speed(::UMAA::Common::Speed::VariableSpeedVariantType&& value) {
                    m_speed_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Distance::DistanceRequirementType >& trackTolerance() noexcept {
                    return m_trackTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Distance::DistanceRequirementType >& trackTolerance() const noexcept {
                    return m_trackTolerance_;
                }

                void trackTolerance(const ::dds::core::optional< ::UMAA::Common::Distance::DistanceRequirementType >& value) {

                    m_trackTolerance_ = value;
                }

                void trackTolerance(::dds::core::optional< ::UMAA::Common::Distance::DistanceRequirementType >&& value) {
                    m_trackTolerance_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& waypointID() noexcept {
                    return m_waypointID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& waypointID() const noexcept {
                    return m_waypointID_;
                }

                void waypointID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_waypointID_ = value;
                }

                void waypointID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_waypointID_ = std::move(value);
                }
                bool operator == (const GlobalWaypointType& other_) const;
                bool operator != (const GlobalWaypointType& other_) const;

                void swap(GlobalWaypointType& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::Common::Orientation::Orientation3DNEDRequirement > m_attitude_;
                ::dds::core::optional< ::UMAA::Common::Measurement::ElevationRequirementVariantType > m_elevation_;
                ::dds::core::optional< std::string > m_name_;
                ::UMAA::Common::Position::GeoPosition2DRequirement m_position_;
                ::UMAA::Common::Speed::VariableSpeedVariantType m_speed_;
                ::dds::core::optional< ::UMAA::Common::Distance::DistanceRequirementType > m_trackTolerance_;
                ::UMAA::Common::Measurement::NumericGUID m_waypointID_ {};

            };

            inline void swap(GlobalWaypointType& a, GlobalWaypointType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalWaypointType& sample);

        } // namespace GlobalWaypointControl  
    } // namespace MO  
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
        struct topic_type_name< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalWaypointControl::GlobalWaypointType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::GlobalWaypointControl::GlobalWaypointType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::GlobalWaypointControl::GlobalWaypointType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointType > {
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

#endif // GlobalWaypointType_2035351708_hpp

