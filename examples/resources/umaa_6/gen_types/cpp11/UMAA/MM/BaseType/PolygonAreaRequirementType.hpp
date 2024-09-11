

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PolygonAreaRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PolygonAreaRequirementType_1394216045_hpp
#define PolygonAreaRequirementType_1394216045_hpp

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
#include "UMAA/Common/Measurement/Polygon.hpp"
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
#include "UMAA/MM/BaseType/PolygonAreaToleranceType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {

            class NDDSUSERDllExport PolygonAreaRequirementType {
              public:

                PolygonAreaRequirementType();

                PolygonAreaRequirementType(const ::UMAA::Common::Measurement::Polygon& area_,const ::dds::core::optional< ::UMAA::MM::BaseType::PolygonAreaToleranceType >& areaTolerance_);

                ::UMAA::Common::Measurement::Polygon& area() noexcept {
                    return m_area_;
                }

                const ::UMAA::Common::Measurement::Polygon& area() const noexcept {
                    return m_area_;
                }

                void area(const ::UMAA::Common::Measurement::Polygon& value) {

                    m_area_ = value;
                }

                void area(::UMAA::Common::Measurement::Polygon&& value) {
                    m_area_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::MM::BaseType::PolygonAreaToleranceType >& areaTolerance() noexcept {
                    return m_areaTolerance_;
                }

                const ::dds::core::optional< ::UMAA::MM::BaseType::PolygonAreaToleranceType >& areaTolerance() const noexcept {
                    return m_areaTolerance_;
                }

                void areaTolerance(const ::dds::core::optional< ::UMAA::MM::BaseType::PolygonAreaToleranceType >& value) {

                    m_areaTolerance_ = value;
                }

                void areaTolerance(::dds::core::optional< ::UMAA::MM::BaseType::PolygonAreaToleranceType >&& value) {
                    m_areaTolerance_ = std::move(value);
                }
                bool operator == (const PolygonAreaRequirementType& other_) const;
                bool operator != (const PolygonAreaRequirementType& other_) const;

                void swap(PolygonAreaRequirementType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::Polygon m_area_;
                ::dds::core::optional< ::UMAA::MM::BaseType::PolygonAreaToleranceType > m_areaTolerance_;

            };

            inline void swap(PolygonAreaRequirementType& a, PolygonAreaRequirementType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PolygonAreaRequirementType& sample);

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
        struct topic_type_name< ::UMAA::MM::BaseType::PolygonAreaRequirementType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::PolygonAreaRequirementType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::PolygonAreaRequirementType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::PolygonAreaRequirementType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::PolygonAreaRequirementType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::PolygonAreaRequirementType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::PolygonAreaRequirementType > {
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

#endif // PolygonAreaRequirementType_1394216045_hpp

