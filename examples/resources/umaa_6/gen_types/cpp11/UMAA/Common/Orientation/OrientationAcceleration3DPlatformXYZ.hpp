

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationAcceleration3DPlatformXYZ.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrientationAcceleration3DPlatformXYZ_1739835589_hpp
#define OrientationAcceleration3DPlatformXYZ_1739835589_hpp

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {

            class NDDSUSERDllExport OrientationAcceleration3DPlatformXYZ {
              public:

                OrientationAcceleration3DPlatformXYZ();

                OrientationAcceleration3DPlatformXYZ(double xAccel_,double yAccel_,double zAccel_);

                double& xAccel() noexcept {
                    return m_xAccel_;
                }

                const double& xAccel() const noexcept {
                    return m_xAccel_;
                }

                void xAccel(double value) {

                    m_xAccel_ = value;
                }

                double& yAccel() noexcept {
                    return m_yAccel_;
                }

                const double& yAccel() const noexcept {
                    return m_yAccel_;
                }

                void yAccel(double value) {

                    m_yAccel_ = value;
                }

                double& zAccel() noexcept {
                    return m_zAccel_;
                }

                const double& zAccel() const noexcept {
                    return m_zAccel_;
                }

                void zAccel(double value) {

                    m_zAccel_ = value;
                }

                bool operator == (const OrientationAcceleration3DPlatformXYZ& other_) const;
                bool operator != (const OrientationAcceleration3DPlatformXYZ& other_) const;

                void swap(OrientationAcceleration3DPlatformXYZ& other_) noexcept ;

              private:

                double m_xAccel_;
                double m_yAccel_;
                double m_zAccel_;

            };

            inline void swap(OrientationAcceleration3DPlatformXYZ& a, OrientationAcceleration3DPlatformXYZ& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const OrientationAcceleration3DPlatformXYZ& sample);

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
        struct topic_type_name< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ > {
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

#endif // OrientationAcceleration3DPlatformXYZ_1739835589_hpp

