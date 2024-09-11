

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EllipseVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EllipseVariantType_1880119326_hpp
#define EllipseVariantType_1880119326_hpp

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

            class NDDSUSERDllExport EllipseVariantType {
              public:

                EllipseVariantType();

                EllipseVariantType(const ::UMAA::Common::Measurement::GeoPosition2D& centerPosition_,double direction_,double semiMajorRadius_,double semiMinorRadius_);

                ::UMAA::Common::Measurement::GeoPosition2D& centerPosition() noexcept {
                    return m_centerPosition_;
                }

                const ::UMAA::Common::Measurement::GeoPosition2D& centerPosition() const noexcept {
                    return m_centerPosition_;
                }

                void centerPosition(const ::UMAA::Common::Measurement::GeoPosition2D& value) {

                    m_centerPosition_ = value;
                }

                void centerPosition(::UMAA::Common::Measurement::GeoPosition2D&& value) {
                    m_centerPosition_ = std::move(value);
                }
                double& direction() noexcept {
                    return m_direction_;
                }

                const double& direction() const noexcept {
                    return m_direction_;
                }

                void direction(double value) {

                    m_direction_ = value;
                }

                double& semiMajorRadius() noexcept {
                    return m_semiMajorRadius_;
                }

                const double& semiMajorRadius() const noexcept {
                    return m_semiMajorRadius_;
                }

                void semiMajorRadius(double value) {

                    m_semiMajorRadius_ = value;
                }

                double& semiMinorRadius() noexcept {
                    return m_semiMinorRadius_;
                }

                const double& semiMinorRadius() const noexcept {
                    return m_semiMinorRadius_;
                }

                void semiMinorRadius(double value) {

                    m_semiMinorRadius_ = value;
                }

                bool operator == (const EllipseVariantType& other_) const;
                bool operator != (const EllipseVariantType& other_) const;

                void swap(EllipseVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::GeoPosition2D m_centerPosition_;
                double m_direction_;
                double m_semiMajorRadius_;
                double m_semiMinorRadius_;

            };

            inline void swap(EllipseVariantType& a, EllipseVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const EllipseVariantType& sample);

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
        struct topic_type_name< ::UMAA::MM::BaseType::EllipseVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::EllipseVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::EllipseVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::EllipseVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::EllipseVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::EllipseVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::EllipseVariantType > {
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

#endif // EllipseVariantType_1880119326_hpp

