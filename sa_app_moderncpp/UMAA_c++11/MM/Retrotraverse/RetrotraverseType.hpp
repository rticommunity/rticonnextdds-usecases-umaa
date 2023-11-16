

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RetrotraverseType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RetrotraverseType_1296792066_hpp
#define RetrotraverseType_1296792066_hpp

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
namespace UMAA {
    namespace MM {
        namespace Retrotraverse {

            class NDDSUSERDllExport RetrotraverseType {
              public:

                RetrotraverseType();

                RetrotraverseType(double distance_,double maxSpeed_,const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType& mode_,const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType& speedReference_,double standoffDistance_,bool travelDirection_,bool travelMethod_);

                double& distance() noexcept {
                    return m_distance_;
                }

                const double& distance() const noexcept {
                    return m_distance_;
                }

                void distance(double value) {

                    m_distance_ = value;
                }

                double& maxSpeed() noexcept {
                    return m_maxSpeed_;
                }

                const double& maxSpeed() const noexcept {
                    return m_maxSpeed_;
                }

                void maxSpeed(double value) {

                    m_maxSpeed_ = value;
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
                double& standoffDistance() noexcept {
                    return m_standoffDistance_;
                }

                const double& standoffDistance() const noexcept {
                    return m_standoffDistance_;
                }

                void standoffDistance(double value) {

                    m_standoffDistance_ = value;
                }

                bool& travelDirection() noexcept {
                    return m_travelDirection_;
                }

                const bool& travelDirection() const noexcept {
                    return m_travelDirection_;
                }

                void travelDirection(bool value) {

                    m_travelDirection_ = value;
                }

                bool& travelMethod() noexcept {
                    return m_travelMethod_;
                }

                const bool& travelMethod() const noexcept {
                    return m_travelMethod_;
                }

                void travelMethod(bool value) {

                    m_travelMethod_ = value;
                }

                bool operator == (const RetrotraverseType& other_) const;
                bool operator != (const RetrotraverseType& other_) const;

                void swap(RetrotraverseType& other_) noexcept ;

              private:

                double m_distance_;
                double m_maxSpeed_;
                ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType m_mode_;
                ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType m_speedReference_;
                double m_standoffDistance_;
                bool m_travelDirection_;
                bool m_travelMethod_;

            };

            inline void swap(RetrotraverseType& a, RetrotraverseType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RetrotraverseType& sample);

        } // namespace Retrotraverse  
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
        struct topic_type_name< ::UMAA::MM::Retrotraverse::RetrotraverseType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::Retrotraverse::RetrotraverseType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::Retrotraverse::RetrotraverseType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::Retrotraverse::RetrotraverseType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::Retrotraverse::RetrotraverseType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::Retrotraverse::RetrotraverseType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::Retrotraverse::RetrotraverseType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::Retrotraverse::RetrotraverseType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::Retrotraverse::RetrotraverseType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::Retrotraverse::RetrotraverseType > {
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

#endif // RetrotraverseType_1296792066_hpp

