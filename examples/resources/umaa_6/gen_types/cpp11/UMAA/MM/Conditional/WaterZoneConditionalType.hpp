

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterZoneConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterZoneConditionalType_528298905_hpp
#define WaterZoneConditionalType_528298905_hpp

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
#include "UMAA/MM/BaseType/ShapeVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace Conditional {

            static const std::string WaterZoneConditionalTypeTopic = "UMAA::MM::Conditional::WaterZoneConditionalType";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::MM::BaseType::ShapeVariantType >;
            template class NDDSUSERDllExport std::vector< ::UMAA::MM::BaseType::ShapeVariantType >;
            #endif
            class NDDSUSERDllExport WaterZoneConditionalType {
              public:

                WaterZoneConditionalType();

                WaterZoneConditionalType(const ::UMAA::Common::Measurement::ElevationVariantType& ceiling_,const ::UMAA::Common::Measurement::ElevationVariantType& floor_,const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ShapeVariantType, 16L >& zone_,const ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType& zoneKind_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_);

                ::UMAA::Common::Measurement::ElevationVariantType& ceiling() noexcept {
                    return m_ceiling_;
                }

                const ::UMAA::Common::Measurement::ElevationVariantType& ceiling() const noexcept {
                    return m_ceiling_;
                }

                void ceiling(const ::UMAA::Common::Measurement::ElevationVariantType& value) {

                    m_ceiling_ = value;
                }

                void ceiling(::UMAA::Common::Measurement::ElevationVariantType&& value) {
                    m_ceiling_ = std::move(value);
                }
                ::UMAA::Common::Measurement::ElevationVariantType& floor() noexcept {
                    return m_floor_;
                }

                const ::UMAA::Common::Measurement::ElevationVariantType& floor() const noexcept {
                    return m_floor_;
                }

                void floor(const ::UMAA::Common::Measurement::ElevationVariantType& value) {

                    m_floor_ = value;
                }

                void floor(::UMAA::Common::Measurement::ElevationVariantType&& value) {
                    m_floor_ = std::move(value);
                }
                ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ShapeVariantType, 16L >& zone() noexcept {
                    return m_zone_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ShapeVariantType, 16L >& zone() const noexcept {
                    return m_zone_;
                }

                void zone(const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ShapeVariantType, 16L >& value) {

                    m_zone_ = value;
                }

                void zone(::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ShapeVariantType, 16L >&& value) {
                    m_zone_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType& zoneKind() noexcept {
                    return m_zoneKind_;
                }

                const ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType& zoneKind() const noexcept {
                    return m_zoneKind_;
                }

                void zoneKind(const ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType& value) {

                    m_zoneKind_ = value;
                }

                void zoneKind(::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType&& value) {
                    m_zoneKind_ = std::move(value);
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
                bool operator == (const WaterZoneConditionalType& other_) const;
                bool operator != (const WaterZoneConditionalType& other_) const;

                void swap(WaterZoneConditionalType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::ElevationVariantType m_ceiling_;
                ::UMAA::Common::Measurement::ElevationVariantType m_floor_;
                ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ShapeVariantType, 16L > m_zone_;
                ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType m_zoneKind_;
                ::UMAA::Common::Measurement::DateTime m_specializationReferenceTimestamp_;
                ::UMAA::Common::Measurement::NumericGUID m_specializationReferenceID_ {};

            };

            inline void swap(WaterZoneConditionalType& a, WaterZoneConditionalType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WaterZoneConditionalType& sample);

        } // namespace Conditional  
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
        struct topic_type_name< ::UMAA::MM::Conditional::WaterZoneConditionalType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::Conditional::WaterZoneConditionalType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::Conditional::WaterZoneConditionalType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::Conditional::WaterZoneConditionalType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::Conditional::WaterZoneConditionalType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::Conditional::WaterZoneConditionalType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::Conditional::WaterZoneConditionalType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::Conditional::WaterZoneConditionalType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::Conditional::WaterZoneConditionalType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::Conditional::WaterZoneConditionalType > {
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

#endif // WaterZoneConditionalType_528298905_hpp

