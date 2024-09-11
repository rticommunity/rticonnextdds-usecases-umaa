

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BearingSectorMagneticNorthVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BearingSectorMagneticNorthVariantType_1570881047_hpp
#define BearingSectorMagneticNorthVariantType_1570881047_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {

            class NDDSUSERDllExport BearingSectorMagneticNorthVariantType {
              public:

                BearingSectorMagneticNorthVariantType();

                BearingSectorMagneticNorthVariantType(double endBearing_,double startBearing_);

                double& endBearing() noexcept {
                    return m_endBearing_;
                }

                const double& endBearing() const noexcept {
                    return m_endBearing_;
                }

                void endBearing(double value) {

                    m_endBearing_ = value;
                }

                double& startBearing() noexcept {
                    return m_startBearing_;
                }

                const double& startBearing() const noexcept {
                    return m_startBearing_;
                }

                void startBearing(double value) {

                    m_startBearing_ = value;
                }

                bool operator == (const BearingSectorMagneticNorthVariantType& other_) const;
                bool operator != (const BearingSectorMagneticNorthVariantType& other_) const;

                void swap(BearingSectorMagneticNorthVariantType& other_) noexcept ;

              private:

                double m_endBearing_;
                double m_startBearing_;

            };

            inline void swap(BearingSectorMagneticNorthVariantType& a, BearingSectorMagneticNorthVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BearingSectorMagneticNorthVariantType& sample);

        } // namespace Orientation  
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
        struct topic_type_name< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType > {
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

#endif // BearingSectorMagneticNorthVariantType_1570881047_hpp

