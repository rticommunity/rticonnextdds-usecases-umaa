

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WorldTransformType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WorldTransformType_1861464670_hpp
#define WorldTransformType_1861464670_hpp

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
    namespace SA {
        namespace WorldTransform {

            class NDDSUSERDllExport WorldTransformType {
              public:

                WorldTransformType();

                WorldTransformType(double pixelSize_x_,double pixelSize_y_,double rotation_x_,double rotation_y_,double upperLeftCoordinate_x_,double upperLeftCoordinate_y_);

                double& pixelSize_x() noexcept {
                    return m_pixelSize_x_;
                }

                const double& pixelSize_x() const noexcept {
                    return m_pixelSize_x_;
                }

                void pixelSize_x(double value) {

                    m_pixelSize_x_ = value;
                }

                double& pixelSize_y() noexcept {
                    return m_pixelSize_y_;
                }

                const double& pixelSize_y() const noexcept {
                    return m_pixelSize_y_;
                }

                void pixelSize_y(double value) {

                    m_pixelSize_y_ = value;
                }

                double& rotation_x() noexcept {
                    return m_rotation_x_;
                }

                const double& rotation_x() const noexcept {
                    return m_rotation_x_;
                }

                void rotation_x(double value) {

                    m_rotation_x_ = value;
                }

                double& rotation_y() noexcept {
                    return m_rotation_y_;
                }

                const double& rotation_y() const noexcept {
                    return m_rotation_y_;
                }

                void rotation_y(double value) {

                    m_rotation_y_ = value;
                }

                double& upperLeftCoordinate_x() noexcept {
                    return m_upperLeftCoordinate_x_;
                }

                const double& upperLeftCoordinate_x() const noexcept {
                    return m_upperLeftCoordinate_x_;
                }

                void upperLeftCoordinate_x(double value) {

                    m_upperLeftCoordinate_x_ = value;
                }

                double& upperLeftCoordinate_y() noexcept {
                    return m_upperLeftCoordinate_y_;
                }

                const double& upperLeftCoordinate_y() const noexcept {
                    return m_upperLeftCoordinate_y_;
                }

                void upperLeftCoordinate_y(double value) {

                    m_upperLeftCoordinate_y_ = value;
                }

                bool operator == (const WorldTransformType& other_) const;
                bool operator != (const WorldTransformType& other_) const;

                void swap(WorldTransformType& other_) noexcept ;

              private:

                double m_pixelSize_x_;
                double m_pixelSize_y_;
                double m_rotation_x_;
                double m_rotation_y_;
                double m_upperLeftCoordinate_x_;
                double m_upperLeftCoordinate_y_;

            };

            inline void swap(WorldTransformType& a, WorldTransformType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WorldTransformType& sample);

        } // namespace WorldTransform  
    } // namespace SA  
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
        struct topic_type_name< ::UMAA::SA::WorldTransform::WorldTransformType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::WorldTransform::WorldTransformType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::WorldTransform::WorldTransformType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::WorldTransform::WorldTransformType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::WorldTransform::WorldTransformType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::WorldTransform::WorldTransformType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::WorldTransform::WorldTransformType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::WorldTransform::WorldTransformType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::WorldTransform::WorldTransformType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::WorldTransform::WorldTransformType > {
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

#endif // WorldTransformType_1861464670_hpp

