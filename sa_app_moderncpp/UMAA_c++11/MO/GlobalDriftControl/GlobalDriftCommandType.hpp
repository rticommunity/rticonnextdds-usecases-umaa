

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftCommandType_1016333982_hpp
#define GlobalDriftCommandType_1016333982_hpp

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
#include "UMAA/Common/Measurement/ElevationType.hpp"
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
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalDriftControl {

            RTI_CONSTEXPR_OR_CONST_STRING std::string GlobalDriftCommand_TOPIC = "UMAA::MO::GlobalDriftControl::GlobalDriftCommand";

            class NDDSUSERDllExport GlobalDriftCommandType {
              public:

                GlobalDriftCommandType();

                GlobalDriftCommandType(double driftTolerance_,const ::UMAA::Common::Measurement::ElevationType& elevation_,double elevationTolerance_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime_,const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& position_,double positionTolerance_,const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed_,double speedTolerance_,const ::UMAA::Common::Measurement::ElevationType& transitElevation_,double transitElevationTolerance_,const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed_,double transitSpeedTolerance_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& destination_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                double& driftTolerance() noexcept {
                    return m_driftTolerance_;
                }

                const double& driftTolerance() const noexcept {
                    return m_driftTolerance_;
                }

                void driftTolerance(double value) {

                    m_driftTolerance_ = value;
                }

                ::UMAA::Common::Measurement::ElevationType& elevation() noexcept {
                    return m_elevation_;
                }

                const ::UMAA::Common::Measurement::ElevationType& elevation() const noexcept {
                    return m_elevation_;
                }

                void elevation(const ::UMAA::Common::Measurement::ElevationType& value) {

                    m_elevation_ = value;
                }

                void elevation(::UMAA::Common::Measurement::ElevationType&& value) {
                    m_elevation_ = std::move(value);
                }
                double& elevationTolerance() noexcept {
                    return m_elevationTolerance_;
                }

                const double& elevationTolerance() const noexcept {
                    return m_elevationTolerance_;
                }

                void elevationTolerance(double value) {

                    m_elevationTolerance_ = value;
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
                ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& position() noexcept {
                    return m_position_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& position() const noexcept {
                    return m_position_;
                }

                void position(const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& value) {

                    m_position_ = value;
                }

                void position(::dds::core::optional< ::UMAA::Common::Measurement::Position2D >&& value) {
                    m_position_ = std::move(value);
                }
                double& positionTolerance() noexcept {
                    return m_positionTolerance_;
                }

                const double& positionTolerance() const noexcept {
                    return m_positionTolerance_;
                }

                void positionTolerance(double value) {

                    m_positionTolerance_ = value;
                }

                ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed() noexcept {
                    return m_speed_;
                }

                const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed() const noexcept {
                    return m_speed_;
                }

                void speed(const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& value) {

                    m_speed_ = value;
                }

                void speed(::UMAA::Common::VariableSpeedControl::VariableSpeedControlType&& value) {
                    m_speed_ = std::move(value);
                }
                double& speedTolerance() noexcept {
                    return m_speedTolerance_;
                }

                const double& speedTolerance() const noexcept {
                    return m_speedTolerance_;
                }

                void speedTolerance(double value) {

                    m_speedTolerance_ = value;
                }

                ::UMAA::Common::Measurement::ElevationType& transitElevation() noexcept {
                    return m_transitElevation_;
                }

                const ::UMAA::Common::Measurement::ElevationType& transitElevation() const noexcept {
                    return m_transitElevation_;
                }

                void transitElevation(const ::UMAA::Common::Measurement::ElevationType& value) {

                    m_transitElevation_ = value;
                }

                void transitElevation(::UMAA::Common::Measurement::ElevationType&& value) {
                    m_transitElevation_ = std::move(value);
                }
                double& transitElevationTolerance() noexcept {
                    return m_transitElevationTolerance_;
                }

                const double& transitElevationTolerance() const noexcept {
                    return m_transitElevationTolerance_;
                }

                void transitElevationTolerance(double value) {

                    m_transitElevationTolerance_ = value;
                }

                ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed() noexcept {
                    return m_transitSpeed_;
                }

                const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed() const noexcept {
                    return m_transitSpeed_;
                }

                void transitSpeed(const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& value) {

                    m_transitSpeed_ = value;
                }

                void transitSpeed(::UMAA::Common::VariableSpeedControl::VariableSpeedControlType&& value) {
                    m_transitSpeed_ = std::move(value);
                }
                double& transitSpeedTolerance() noexcept {
                    return m_transitSpeedTolerance_;
                }

                const double& transitSpeedTolerance() const noexcept {
                    return m_transitSpeedTolerance_;
                }

                void transitSpeedTolerance(double value) {

                    m_transitSpeedTolerance_ = value;
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
                ::UMAA::Common::Measurement::NumericGUID& destination() noexcept {
                    return m_destination_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& destination() const noexcept {
                    return m_destination_;
                }

                void destination(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_destination_ = value;
                }

                void destination(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_destination_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& sessionID() noexcept {
                    return m_sessionID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& sessionID() const noexcept {
                    return m_sessionID_;
                }

                void sessionID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_sessionID_ = value;
                }

                void sessionID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
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
                bool operator == (const GlobalDriftCommandType& other_) const;
                bool operator != (const GlobalDriftCommandType& other_) const;

                void swap(GlobalDriftCommandType& other_) noexcept ;

              private:

                double m_driftTolerance_;
                ::UMAA::Common::Measurement::ElevationType m_elevation_;
                double m_elevationTolerance_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_endTime_;
                ::dds::core::optional< ::UMAA::Common::Measurement::Position2D > m_position_;
                double m_positionTolerance_;
                ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType m_speed_;
                double m_speedTolerance_;
                ::UMAA::Common::Measurement::ElevationType m_transitElevation_;
                double m_transitElevationTolerance_;
                ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType m_transitSpeed_;
                double m_transitSpeedTolerance_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::NumericGUID m_destination_ {};
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(GlobalDriftCommandType& a, GlobalDriftCommandType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalDriftCommandType& sample);

        } // namespace GlobalDriftControl  
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
        struct topic_type_name< ::UMAA::MO::GlobalDriftControl::GlobalDriftCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalDriftControl::GlobalDriftCommandType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::GlobalDriftControl::GlobalDriftCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::GlobalDriftControl::GlobalDriftCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::GlobalDriftControl::GlobalDriftCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::GlobalDriftControl::GlobalDriftCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::GlobalDriftControl::GlobalDriftCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::GlobalDriftControl::GlobalDriftCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::GlobalDriftControl::GlobalDriftCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::GlobalDriftControl::GlobalDriftCommandType > {
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

#endif // GlobalDriftCommandType_1016333982_hpp

