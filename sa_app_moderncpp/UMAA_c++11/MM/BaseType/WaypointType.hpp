

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaypointType_968560137_hpp
#define WaypointType_968560137_hpp

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
#include "UMAA/Common/Measurement/Altitude_AGL.hpp"
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
#include "UMAA/Common/Measurement/Altitude_MSL.hpp"
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
#include "UMAA/Common/Measurement/Orientation3D.hpp"
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
#include "UMAA/Common/Measurement/Position2D.hpp"
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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {

            class NDDSUSERDllExport WaypointType {
              public:

                WaypointType();

                WaypointType(const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >& altitude_,const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL_,const ::dds::core::optional< double >& altitudeASF_,const ::dds::core::optional< ::UMAA::Common::Measurement::Orientation3D >& attitude_,const ::dds::core::optional< double >& depth_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime_,const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& globalPosition_,const ::dds::core::optional< ::UMAA::Common::Measurement::Position3D_PlatformXYZ >& localPosition_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType >& mode_,const ::dds::core::optional< double >& pathTolerance_,const ::dds::core::optional< double >& speed_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& startTime_,const ::dds::core::optional< double >& waypointTolerance_,const ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType& waypointType_,const ::UMAA::Common::Measurement::NumericGUID& waypointID_);

                ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >& altitude() noexcept {
                    return m_altitude_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >& altitude() const noexcept {
                    return m_altitude_;
                }

                void altitude(const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >& value) {

                    m_altitude_ = value;
                }

                void altitude(::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL >&& value) {
                    m_altitude_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL() noexcept {
                    return m_altitudeAGL_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL() const noexcept {
                    return m_altitudeAGL_;
                }

                void altitudeAGL(const ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >& value) {

                    m_altitudeAGL_ = value;
                }

                void altitudeAGL(::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL >&& value) {
                    m_altitudeAGL_ = std::move(value);
                }
                ::dds::core::optional< double >& altitudeASF() noexcept {
                    return m_altitudeASF_;
                }

                const ::dds::core::optional< double >& altitudeASF() const noexcept {
                    return m_altitudeASF_;
                }

                void altitudeASF(const ::dds::core::optional< double >& value) {

                    m_altitudeASF_ = value;
                }

                void altitudeASF(::dds::core::optional< double >&& value) {
                    m_altitudeASF_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::Orientation3D >& attitude() noexcept {
                    return m_attitude_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Orientation3D >& attitude() const noexcept {
                    return m_attitude_;
                }

                void attitude(const ::dds::core::optional< ::UMAA::Common::Measurement::Orientation3D >& value) {

                    m_attitude_ = value;
                }

                void attitude(::dds::core::optional< ::UMAA::Common::Measurement::Orientation3D >&& value) {
                    m_attitude_ = std::move(value);
                }
                ::dds::core::optional< double >& depth() noexcept {
                    return m_depth_;
                }

                const ::dds::core::optional< double >& depth() const noexcept {
                    return m_depth_;
                }

                void depth(const ::dds::core::optional< double >& value) {

                    m_depth_ = value;
                }

                void depth(::dds::core::optional< double >&& value) {
                    m_depth_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime() noexcept {
                    return m_endTime_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime() const noexcept {
                    return m_endTime_;
                }

                void endTime(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                    m_endTime_ = value;
                }

                void endTime(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                    m_endTime_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& globalPosition() noexcept {
                    return m_globalPosition_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& globalPosition() const noexcept {
                    return m_globalPosition_;
                }

                void globalPosition(const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& value) {

                    m_globalPosition_ = value;
                }

                void globalPosition(::dds::core::optional< ::UMAA::Common::Measurement::Position2D >&& value) {
                    m_globalPosition_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::Position3D_PlatformXYZ >& localPosition() noexcept {
                    return m_localPosition_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Position3D_PlatformXYZ >& localPosition() const noexcept {
                    return m_localPosition_;
                }

                void localPosition(const ::dds::core::optional< ::UMAA::Common::Measurement::Position3D_PlatformXYZ >& value) {

                    m_localPosition_ = value;
                }

                void localPosition(::dds::core::optional< ::UMAA::Common::Measurement::Position3D_PlatformXYZ >&& value) {
                    m_localPosition_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType >& mode() noexcept {
                    return m_mode_;
                }

                const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType >& mode() const noexcept {
                    return m_mode_;
                }

                void mode(const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType >& value) {

                    m_mode_ = value;
                }

                void mode(::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType >&& value) {
                    m_mode_ = std::move(value);
                }
                ::dds::core::optional< double >& pathTolerance() noexcept {
                    return m_pathTolerance_;
                }

                const ::dds::core::optional< double >& pathTolerance() const noexcept {
                    return m_pathTolerance_;
                }

                void pathTolerance(const ::dds::core::optional< double >& value) {

                    m_pathTolerance_ = value;
                }

                void pathTolerance(::dds::core::optional< double >&& value) {
                    m_pathTolerance_ = std::move(value);
                }
                ::dds::core::optional< double >& speed() noexcept {
                    return m_speed_;
                }

                const ::dds::core::optional< double >& speed() const noexcept {
                    return m_speed_;
                }

                void speed(const ::dds::core::optional< double >& value) {

                    m_speed_ = value;
                }

                void speed(::dds::core::optional< double >&& value) {
                    m_speed_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& startTime() noexcept {
                    return m_startTime_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& startTime() const noexcept {
                    return m_startTime_;
                }

                void startTime(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                    m_startTime_ = value;
                }

                void startTime(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                    m_startTime_ = std::move(value);
                }
                ::dds::core::optional< double >& waypointTolerance() noexcept {
                    return m_waypointTolerance_;
                }

                const ::dds::core::optional< double >& waypointTolerance() const noexcept {
                    return m_waypointTolerance_;
                }

                void waypointTolerance(const ::dds::core::optional< double >& value) {

                    m_waypointTolerance_ = value;
                }

                void waypointTolerance(::dds::core::optional< double >&& value) {
                    m_waypointTolerance_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType& waypointType() noexcept {
                    return m_waypointType_;
                }

                const ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType& waypointType() const noexcept {
                    return m_waypointType_;
                }

                void waypointType(const ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType& value) {

                    m_waypointType_ = value;
                }

                void waypointType(::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType&& value) {
                    m_waypointType_ = std::move(value);
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
                bool operator == (const WaypointType& other_) const;
                bool operator != (const WaypointType& other_) const;

                void swap(WaypointType& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_MSL > m_altitude_;
                ::dds::core::optional< ::UMAA::Common::Measurement::Altitude_AGL > m_altitudeAGL_;
                ::dds::core::optional< double > m_altitudeASF_;
                ::dds::core::optional< ::UMAA::Common::Measurement::Orientation3D > m_attitude_;
                ::dds::core::optional< double > m_depth_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_endTime_;
                ::dds::core::optional< ::UMAA::Common::Measurement::Position2D > m_globalPosition_;
                ::dds::core::optional< ::UMAA::Common::Measurement::Position3D_PlatformXYZ > m_localPosition_;
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType > m_mode_;
                ::dds::core::optional< double > m_pathTolerance_;
                ::dds::core::optional< double > m_speed_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_startTime_;
                ::dds::core::optional< double > m_waypointTolerance_;
                ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType m_waypointType_;
                ::UMAA::Common::Measurement::NumericGUID m_waypointID_ {};

            };

            inline void swap(WaypointType& a, WaypointType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WaypointType& sample);

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
        struct topic_type_name< ::UMAA::MM::BaseType::WaypointType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::WaypointType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::WaypointType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::WaypointType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::WaypointType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::WaypointType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::WaypointType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::WaypointType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::WaypointType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::WaypointType > {
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

#endif // WaypointType_968560137_hpp

