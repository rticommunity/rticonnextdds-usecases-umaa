

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContingencyObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContingencyObjectiveType_813957033_hpp
#define ContingencyObjectiveType_813957033_hpp

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
#include "UMAA/Common/Measurement/DateTime_Tolerance.hpp"
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

            class NDDSUSERDllExport ContingencyObjectiveType {
              public:
                ContingencyObjectiveType();

                ContingencyObjectiveType(const UMAA::Common::Measurement::Altitude_MSL& altitude,const UMAA::Common::Measurement::Altitude_AGL& altitudeAGL,double altitudeASF,const UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType& behavior,double depth,double DTEDAltitude,const std::string& mode,const UMAA::Common::Measurement::Position2D& position,double radius,double safeAltitude,double safeAltitudeOffset,double speed,double vehicleRunTime);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ContingencyObjectiveType (ContingencyObjectiveType&&) = default;
                ContingencyObjectiveType& operator=(ContingencyObjectiveType&&) = default;
                ContingencyObjectiveType& operator=(const ContingencyObjectiveType&) = default;
                ContingencyObjectiveType(const ContingencyObjectiveType&) = default;
                #else
                ContingencyObjectiveType(ContingencyObjectiveType&& other_) OMG_NOEXCEPT;  
                ContingencyObjectiveType& operator=(ContingencyObjectiveType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::Altitude_MSL& altitude() OMG_NOEXCEPT {
                    return m_altitude_;
                }

                const UMAA::Common::Measurement::Altitude_MSL& altitude() const OMG_NOEXCEPT {
                    return m_altitude_;
                }

                void altitude(const UMAA::Common::Measurement::Altitude_MSL& value) {
                    m_altitude_ = value;
                }

                void altitude(UMAA::Common::Measurement::Altitude_MSL&& value) {
                    m_altitude_ = std::move(value);
                }
                UMAA::Common::Measurement::Altitude_AGL& altitudeAGL() OMG_NOEXCEPT {
                    return m_altitudeAGL_;
                }

                const UMAA::Common::Measurement::Altitude_AGL& altitudeAGL() const OMG_NOEXCEPT {
                    return m_altitudeAGL_;
                }

                void altitudeAGL(const UMAA::Common::Measurement::Altitude_AGL& value) {
                    m_altitudeAGL_ = value;
                }

                void altitudeAGL(UMAA::Common::Measurement::Altitude_AGL&& value) {
                    m_altitudeAGL_ = std::move(value);
                }
                double& altitudeASF() OMG_NOEXCEPT {
                    return m_altitudeASF_;
                }

                const double& altitudeASF() const OMG_NOEXCEPT {
                    return m_altitudeASF_;
                }

                void altitudeASF(double value) {
                    m_altitudeASF_ = value;
                }

                UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType& behavior() OMG_NOEXCEPT {
                    return m_behavior_;
                }

                const UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType& behavior() const OMG_NOEXCEPT {
                    return m_behavior_;
                }

                void behavior(const UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType& value) {
                    m_behavior_ = value;
                }

                void behavior(UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType&& value) {
                    m_behavior_ = std::move(value);
                }
                double& depth() OMG_NOEXCEPT {
                    return m_depth_;
                }

                const double& depth() const OMG_NOEXCEPT {
                    return m_depth_;
                }

                void depth(double value) {
                    m_depth_ = value;
                }

                double& DTEDAltitude() OMG_NOEXCEPT {
                    return m_DTEDAltitude_;
                }

                const double& DTEDAltitude() const OMG_NOEXCEPT {
                    return m_DTEDAltitude_;
                }

                void DTEDAltitude(double value) {
                    m_DTEDAltitude_ = value;
                }

                std::string& mode() OMG_NOEXCEPT {
                    return m_mode_;
                }

                const std::string& mode() const OMG_NOEXCEPT {
                    return m_mode_;
                }

                void mode(const std::string& value) {
                    m_mode_ = value;
                }

                void mode(std::string&& value) {
                    m_mode_ = std::move(value);
                }
                UMAA::Common::Measurement::Position2D& position() OMG_NOEXCEPT {
                    return m_position_;
                }

                const UMAA::Common::Measurement::Position2D& position() const OMG_NOEXCEPT {
                    return m_position_;
                }

                void position(const UMAA::Common::Measurement::Position2D& value) {
                    m_position_ = value;
                }

                void position(UMAA::Common::Measurement::Position2D&& value) {
                    m_position_ = std::move(value);
                }
                double& radius() OMG_NOEXCEPT {
                    return m_radius_;
                }

                const double& radius() const OMG_NOEXCEPT {
                    return m_radius_;
                }

                void radius(double value) {
                    m_radius_ = value;
                }

                double& safeAltitude() OMG_NOEXCEPT {
                    return m_safeAltitude_;
                }

                const double& safeAltitude() const OMG_NOEXCEPT {
                    return m_safeAltitude_;
                }

                void safeAltitude(double value) {
                    m_safeAltitude_ = value;
                }

                double& safeAltitudeOffset() OMG_NOEXCEPT {
                    return m_safeAltitudeOffset_;
                }

                const double& safeAltitudeOffset() const OMG_NOEXCEPT {
                    return m_safeAltitudeOffset_;
                }

                void safeAltitudeOffset(double value) {
                    m_safeAltitudeOffset_ = value;
                }

                double& speed() OMG_NOEXCEPT {
                    return m_speed_;
                }

                const double& speed() const OMG_NOEXCEPT {
                    return m_speed_;
                }

                void speed(double value) {
                    m_speed_ = value;
                }

                double& vehicleRunTime() OMG_NOEXCEPT {
                    return m_vehicleRunTime_;
                }

                const double& vehicleRunTime() const OMG_NOEXCEPT {
                    return m_vehicleRunTime_;
                }

                void vehicleRunTime(double value) {
                    m_vehicleRunTime_ = value;
                }

                bool operator == (const ContingencyObjectiveType& other_) const;
                bool operator != (const ContingencyObjectiveType& other_) const;

                void swap(ContingencyObjectiveType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::Altitude_MSL m_altitude_;
                UMAA::Common::Measurement::Altitude_AGL m_altitudeAGL_;
                double m_altitudeASF_;
                UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType m_behavior_;
                double m_depth_;
                double m_DTEDAltitude_;
                std::string m_mode_;
                UMAA::Common::Measurement::Position2D m_position_;
                double m_radius_;
                double m_safeAltitude_;
                double m_safeAltitudeOffset_;
                double m_speed_;
                double m_vehicleRunTime_;

            };

            inline void swap(ContingencyObjectiveType& a, ContingencyObjectiveType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContingencyObjectiveType& sample);

        } // namespace BaseType  
    } // namespace MM  
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
        struct topic_type_name< UMAA::MM::BaseType::ContingencyObjectiveType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ContingencyObjectiveType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::BaseType::ContingencyObjectiveType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::BaseType::ContingencyObjectiveType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::BaseType::ContingencyObjectiveType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::BaseType::ContingencyObjectiveType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::BaseType::ContingencyObjectiveType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::BaseType::ContingencyObjectiveType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::BaseType::ContingencyObjectiveType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::BaseType::ContingencyObjectiveType > {
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

#endif // ContingencyObjectiveType_813957033_hpp

