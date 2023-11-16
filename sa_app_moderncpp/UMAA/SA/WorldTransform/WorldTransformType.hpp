

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WorldTransformType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
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

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

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

                WorldTransformType(double pixelSize_x,double pixelSize_y,double rotation_x,double rotation_y,double upperLeftCoordinate_x,double upperLeftCoordinate_y);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                WorldTransformType (WorldTransformType&&) = default;
                WorldTransformType& operator=(WorldTransformType&&) = default;
                WorldTransformType& operator=(const WorldTransformType&) = default;
                WorldTransformType(const WorldTransformType&) = default;
                #else
                WorldTransformType(WorldTransformType&& other_) OMG_NOEXCEPT;  
                WorldTransformType& operator=(WorldTransformType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& pixelSize_x() OMG_NOEXCEPT {
                    return m_pixelSize_x_;
                }

                const double& pixelSize_x() const OMG_NOEXCEPT {
                    return m_pixelSize_x_;
                }

                void pixelSize_x(double value) {
                    m_pixelSize_x_ = value;
                }

                double& pixelSize_y() OMG_NOEXCEPT {
                    return m_pixelSize_y_;
                }

                const double& pixelSize_y() const OMG_NOEXCEPT {
                    return m_pixelSize_y_;
                }

                void pixelSize_y(double value) {
                    m_pixelSize_y_ = value;
                }

                double& rotation_x() OMG_NOEXCEPT {
                    return m_rotation_x_;
                }

                const double& rotation_x() const OMG_NOEXCEPT {
                    return m_rotation_x_;
                }

                void rotation_x(double value) {
                    m_rotation_x_ = value;
                }

                double& rotation_y() OMG_NOEXCEPT {
                    return m_rotation_y_;
                }

                const double& rotation_y() const OMG_NOEXCEPT {
                    return m_rotation_y_;
                }

                void rotation_y(double value) {
                    m_rotation_y_ = value;
                }

                double& upperLeftCoordinate_x() OMG_NOEXCEPT {
                    return m_upperLeftCoordinate_x_;
                }

                const double& upperLeftCoordinate_x() const OMG_NOEXCEPT {
                    return m_upperLeftCoordinate_x_;
                }

                void upperLeftCoordinate_x(double value) {
                    m_upperLeftCoordinate_x_ = value;
                }

                double& upperLeftCoordinate_y() OMG_NOEXCEPT {
                    return m_upperLeftCoordinate_y_;
                }

                const double& upperLeftCoordinate_y() const OMG_NOEXCEPT {
                    return m_upperLeftCoordinate_y_;
                }

                void upperLeftCoordinate_y(double value) {
                    m_upperLeftCoordinate_y_ = value;
                }

                bool operator == (const WorldTransformType& other_) const;
                bool operator != (const WorldTransformType& other_) const;

                void swap(WorldTransformType& other_) OMG_NOEXCEPT ;

              private:

                double m_pixelSize_x_;
                double m_pixelSize_y_;
                double m_rotation_x_;
                double m_rotation_y_;
                double m_upperLeftCoordinate_x_;
                double m_upperLeftCoordinate_y_;

            };

            inline void swap(WorldTransformType& a, WorldTransformType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WorldTransformType& sample);

        } // namespace WorldTransform  
    } // namespace SA  
} // namespace UMAA  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< UMAA::SA::WorldTransform::WorldTransformType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::WorldTransform::WorldTransformType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::WorldTransform::WorldTransformType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::WorldTransform::WorldTransformType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::WorldTransform::WorldTransformType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::WorldTransform::WorldTransformType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::WorldTransform::WorldTransformType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::WorldTransform::WorldTransformType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::WorldTransform::WorldTransformType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::WorldTransform::WorldTransformType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // WorldTransformType_1861464670_hpp

