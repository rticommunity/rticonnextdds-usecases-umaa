

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPosition2DRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeoPosition2DRequirement_896948912_hpp
#define GeoPosition2DRequirement_896948912_hpp

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
#include "UMAA/Common/Position/GeoPosition2DTolerance.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Position {

            class NDDSUSERDllExport GeoPosition2DRequirement {
              public:

                GeoPosition2DRequirement();

                GeoPosition2DRequirement(const ::dds::core::optional< ::UMAA::Common::Position::GeoPosition2DTolerance >& tolerance_,const ::UMAA::Common::Measurement::GeoPosition2D& value_);

                ::dds::core::optional< ::UMAA::Common::Position::GeoPosition2DTolerance >& tolerance() noexcept {
                    return m_tolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Position::GeoPosition2DTolerance >& tolerance() const noexcept {
                    return m_tolerance_;
                }

                void tolerance(const ::dds::core::optional< ::UMAA::Common::Position::GeoPosition2DTolerance >& value) {

                    m_tolerance_ = value;
                }

                void tolerance(::dds::core::optional< ::UMAA::Common::Position::GeoPosition2DTolerance >&& value) {
                    m_tolerance_ = std::move(value);
                }
                ::UMAA::Common::Measurement::GeoPosition2D& value() noexcept {
                    return m_value_;
                }

                const ::UMAA::Common::Measurement::GeoPosition2D& value() const noexcept {
                    return m_value_;
                }

                void value(const ::UMAA::Common::Measurement::GeoPosition2D& value) {

                    m_value_ = value;
                }

                void value(::UMAA::Common::Measurement::GeoPosition2D&& value) {
                    m_value_ = std::move(value);
                }
                bool operator == (const GeoPosition2DRequirement& other_) const;
                bool operator != (const GeoPosition2DRequirement& other_) const;

                void swap(GeoPosition2DRequirement& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::Common::Position::GeoPosition2DTolerance > m_tolerance_;
                ::UMAA::Common::Measurement::GeoPosition2D m_value_;

            };

            inline void swap(GeoPosition2DRequirement& a, GeoPosition2DRequirement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GeoPosition2DRequirement& sample);

        } // namespace Position  
    } // namespace Common  
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
        struct topic_type_name< ::UMAA::Common::Position::GeoPosition2DRequirement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Position::GeoPosition2DRequirement";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Position::GeoPosition2DRequirement > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Position::GeoPosition2DRequirement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Position::GeoPosition2DRequirement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Position::GeoPosition2DRequirement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Position::GeoPosition2DRequirement > {
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

#endif // GeoPosition2DRequirement_896948912_hpp

