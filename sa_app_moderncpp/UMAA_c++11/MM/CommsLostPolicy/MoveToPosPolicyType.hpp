

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MoveToPosPolicyType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MoveToPosPolicyType_1486451355_hpp
#define MoveToPosPolicyType_1486451355_hpp

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
#include "UMAA/MM/BaseType/WaypointType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace CommsLostPolicy {

            class NDDSUSERDllExport MoveToPosPolicyType {
              public:

                MoveToPosPolicyType();

                MoveToPosPolicyType(double distance_,const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType& mode_,const ::UMAA::MM::BaseType::WaypointType& position_,double speed_,const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType& speedReference_);

                double& distance() noexcept {
                    return m_distance_;
                }

                const double& distance() const noexcept {
                    return m_distance_;
                }

                void distance(double value) {

                    m_distance_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType& mode() noexcept {
                    return m_mode_;
                }

                const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType& mode() const noexcept {
                    return m_mode_;
                }

                void mode(const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType& value) {

                    m_mode_ = value;
                }

                void mode(::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType&& value) {
                    m_mode_ = std::move(value);
                }
                ::UMAA::MM::BaseType::WaypointType& position() noexcept {
                    return m_position_;
                }

                const ::UMAA::MM::BaseType::WaypointType& position() const noexcept {
                    return m_position_;
                }

                void position(const ::UMAA::MM::BaseType::WaypointType& value) {

                    m_position_ = value;
                }

                void position(::UMAA::MM::BaseType::WaypointType&& value) {
                    m_position_ = std::move(value);
                }
                double& speed() noexcept {
                    return m_speed_;
                }

                const double& speed() const noexcept {
                    return m_speed_;
                }

                void speed(double value) {

                    m_speed_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType& speedReference() noexcept {
                    return m_speedReference_;
                }

                const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType& speedReference() const noexcept {
                    return m_speedReference_;
                }

                void speedReference(const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType& value) {

                    m_speedReference_ = value;
                }

                void speedReference(::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType&& value) {
                    m_speedReference_ = std::move(value);
                }
                bool operator == (const MoveToPosPolicyType& other_) const;
                bool operator != (const MoveToPosPolicyType& other_) const;

                void swap(MoveToPosPolicyType& other_) noexcept ;

              private:

                double m_distance_;
                ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType m_mode_;
                ::UMAA::MM::BaseType::WaypointType m_position_;
                double m_speed_;
                ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType m_speedReference_;

            };

            inline void swap(MoveToPosPolicyType& a, MoveToPosPolicyType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MoveToPosPolicyType& sample);

        } // namespace CommsLostPolicy  
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
        struct topic_type_name< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::CommsLostPolicy::MoveToPosPolicyType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType > {
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

#endif // MoveToPosPolicyType_1486451355_hpp

