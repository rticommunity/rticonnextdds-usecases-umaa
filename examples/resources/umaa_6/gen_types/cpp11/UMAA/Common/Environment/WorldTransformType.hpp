

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WorldTransformType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WorldTransformType_1861464933_hpp
#define WorldTransformType_1861464933_hpp

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
        namespace Environment {

            class NDDSUSERDllExport WorldTransformType {
              public:

                WorldTransformType();

                WorldTransformType(double pixelSizex_,double pixelSizey_,double rotationx_,double rotationy_,double upperLeftCoordinatex_,double upperLeftCoordinatey_);

                double& pixelSizex() noexcept {
                    return m_pixelSizex_;
                }

                const double& pixelSizex() const noexcept {
                    return m_pixelSizex_;
                }

                void pixelSizex(double value) {

                    m_pixelSizex_ = value;
                }

                double& pixelSizey() noexcept {
                    return m_pixelSizey_;
                }

                const double& pixelSizey() const noexcept {
                    return m_pixelSizey_;
                }

                void pixelSizey(double value) {

                    m_pixelSizey_ = value;
                }

                double& rotationx() noexcept {
                    return m_rotationx_;
                }

                const double& rotationx() const noexcept {
                    return m_rotationx_;
                }

                void rotationx(double value) {

                    m_rotationx_ = value;
                }

                double& rotationy() noexcept {
                    return m_rotationy_;
                }

                const double& rotationy() const noexcept {
                    return m_rotationy_;
                }

                void rotationy(double value) {

                    m_rotationy_ = value;
                }

                double& upperLeftCoordinatex() noexcept {
                    return m_upperLeftCoordinatex_;
                }

                const double& upperLeftCoordinatex() const noexcept {
                    return m_upperLeftCoordinatex_;
                }

                void upperLeftCoordinatex(double value) {

                    m_upperLeftCoordinatex_ = value;
                }

                double& upperLeftCoordinatey() noexcept {
                    return m_upperLeftCoordinatey_;
                }

                const double& upperLeftCoordinatey() const noexcept {
                    return m_upperLeftCoordinatey_;
                }

                void upperLeftCoordinatey(double value) {

                    m_upperLeftCoordinatey_ = value;
                }

                bool operator == (const WorldTransformType& other_) const;
                bool operator != (const WorldTransformType& other_) const;

                void swap(WorldTransformType& other_) noexcept ;

              private:

                double m_pixelSizex_;
                double m_pixelSizey_;
                double m_rotationx_;
                double m_rotationy_;
                double m_upperLeftCoordinatex_;
                double m_upperLeftCoordinatey_;

            };

            inline void swap(WorldTransformType& a, WorldTransformType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WorldTransformType& sample);

        } // namespace Environment  
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
        struct topic_type_name< ::UMAA::Common::Environment::WorldTransformType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Environment::WorldTransformType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Environment::WorldTransformType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Environment::WorldTransformType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Environment::WorldTransformType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Environment::WorldTransformType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Environment::WorldTransformType > {
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

#endif // WorldTransformType_1861464933_hpp

